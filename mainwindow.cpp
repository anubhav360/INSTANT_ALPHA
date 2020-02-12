#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QTabWidget>
#include<QPixmap>
#include<QDate>
#include<QWidget>
#include<QMessageBox>
#include<QDialogButtonBox>
#include<QMainWindow>
#include<QDir>
#include<QFile>
#include<QTextStream>
#include<QCryptographicHash>
#include<dos.h>
#include<QTemporaryFile>
class blockchain;
bool in_cons=false;
class block
{
    QString sen;
    QString rec;
    long int amount;
     QByteArray prev_hash ;
     QByteArray hash;
         block *prev;
public:
     block()
     {

     }
     block (QString s,QString r, long int a)
     {
         sen=s;
         rec=r;
         amount=a;
         prev=NULL;
     }
     friend void hash(blockchain  &p, block *n);
     friend class blockchain;
     friend void chainwriter(blockchain e);
     friend void MainWindow::consensus(int r);
     bool operator ==(block q)
     {
         return (q.sen==sen && q.rec== rec && q.amount==amount && q.prev_hash ==prev_hash);
     }
     friend void transaction_writer();
};
class blockchain
{
block *head;
public:

    blockchain()
    {
        head=new block;
        head->sen="HEAD";
        head->rec="HEAD";
        head->amount=1;
       head->prev_hash="INST";
        head->hash="INST";
        head->prev=NULL;
    }
    friend void hash(blockchain &p, block *n);
    friend void chainwriter(blockchain r);
       friend void MainWindow::consensus(int r);
       friend void transaction_writer();
}master,alt;
void set_in_cons(bool f)
{
    QFile r(QDir::currentPath()+"/assets/docs/consmade.txt");
           r.open(QIODevice::WriteOnly);
            if (f)
                r.write("0");
            else {
                r.write("1");
            }
            r.close();
}
void transaction_writer()
{
    block *e=master.head;
    QFile v("E:/INSTANT_ALPHA/assets/docs/transac.txt");
    QTextStream r(&v);
    while (e->hash!="INSTA")
    {
        r<<e->sen+"\r\n";
        r<<e->rec+"\r\n";
        r<<QString::number(e->amount)+"\r\n";
        e=e->prev;
    }
}
void hash(blockchain &p, block *n)
{

    n->prev_hash=p.head->hash;
    QString f=n->sen+n->rec+QString::number(n->amount)+n->prev_hash;
   QByteArray w=(QCryptographicHash::hash(QByteArray(f.toStdString().c_str()),QCryptographicHash::Sha256)).toHex();
   n->hash=w;
 n->prev=p.head;
 p.head=n;
}
void chainwriter(blockchain r)
{
    for (int f=1;f<6;f++)
    {
    QFile w("E:/INSTANT_ALPHA/assets/chain/"+QString::number(f)+".txt" );
    w.open(QIODevice::WriteOnly);
     QTextStream E(&w);
    block *c=r.head;
    int i=0;
    while (c->hash!="INST")
    {
        QString line=c->sen+" "+c->rec+" "+QString::number(c->amount)+" <br>"+c->prev_hash+"<br> "+c->hash+"<br><br><br>";
        E<<line<< endl;
        c=c->prev;
    }
    w.close();
    }
}
void implement (QString sender, QString receiver,long int amount)
{
QFile e("E:/INSTANT_ALPHA/assets/acc/" + sender+".html");
e.open(QIODevice::ReadWrite);
QFile r("E:/INSTANT_ALPHA/assets/acc/temper.html");
r.open(QIODevice::WriteOnly);

QTextStream old(&e);
QTextStream newb(&r);
QString bal="";
int g=1;
while (!old.atEnd())
{
     bal=old.readLine();
     if (g==9)
     {
        long int qw=bal.toLong();
        qw=qw-amount;
        bal=QString::number(qw);
     }
     newb<<bal+"\r\n";
     g++;
}
e.close();
r.close();

QFile::remove("E:/INSTANT_ALPHA/assets/acc/" + sender+".html");
QFile::rename("E:/INSTANT_ALPHA/assets/acc/temper.html","E:/INSTANT_ALPHA/assets/acc/" + sender+".html");
QFile::remove("E:/INSTANT_ALPHA/assets/acc/temper.html");
QFile er("E:/INSTANT_ALPHA/assets/acc/" + receiver+".html");
er.open(QIODevice::ReadWrite);
QFile rr("E:/INSTANT_ALPHA/assets/acc/tempero.html");
rr.open(QIODevice::WriteOnly);
QTextStream oldie(&er);
QTextStream newbie(&rr);
QString val="";
int gr=1;
while (!oldie.atEnd())
{
     val=oldie.readLine();
     if (gr==9)
     {
        long int qw=val.toLong();
        qw=qw+amount;
        val=QString::number(qw);
     }
     newbie<<val+"\r\n";
     gr++;
}

er.close();
rr.close();
er.remove("E:/INSTANT_ALPHA/assets/acc/" + receiver+ ".html");
QFile::rename("E:/INSTANT_ALPHA/assets/acc/tempero.html","E:/INSTANT_ALPHA/assets/acc/" + receiver+".html");
QFile::remove("E:/INSTANT_ALPHA/assets/acc/tempero.html");
}
QStringList send,rece,amnt;
int add;
void MainWindow:: consensus (int r)
{

   if (!in_cons)
{
     add=r;
int f=r;
QFile d("E:/INSTANT_ALPHA/assets/docs/rawf.txt");
d.open(QIODevice::ReadWrite);
QTextStream c(&d);

send.clear();
rece.clear();
amnt.clear();
ui->progressBar->setValue(0);

while (f--)
{
    QString sen=c.readLine();
    QString rec=c.readLine();
    QString am=c.readLine();
    send.push_back(sen);
    rece.push_back(rec);
    amnt.push_back(am);
    block * b= new block (sen,rec,am.toInt());
    hash(alt,b);}
d.close();
chainwriter(alt);
QFile con("E:/INSTANT_ALPHA/assets/docs/undtran.txt");
con.open(QIODevice::WriteOnly);
con.write("0");
con.close();
QFile cons("E:/INSTANT_ALPHA/assets/docs/rawf.txt");
cons.open(QIODevice::WriteOnly);
cons.write("");
cons.close();
in_cons=true;
set_in_cons(in_cons);
   }

QFile ch("E:/INSTANT_ALPHA/assets/docs/consensbuild.txt");
ch.open(QIODevice::ReadWrite);
QTextStream v(&ch);
int ok=0,pres=0;
while (!v.atEnd())
{
    QString l;
    l=v.readLine() ;
    if (l==QString::number(1))
    {
        ok++;
       }
    pres++;
}
ui->progressBar->setValue(pres*20);
ui->label_21->setText(" TOTAL NUMBER OF MINERS ONLINE:- "+ QString::number(pres)+"/5 . TOTAL VALIDATIONS :- "+ QString::number(ok) + "/"+  QString::number(pres) +". TOTAL BREACH REPORTS :- " + QString::number(pres-ok) +"/" + QString::number(pres)+".");
if (pres==5)
{
    ui->label_19->setText("PROCESS COMPLETED. ");
    if (ok<3)
    {
        ui->label_21->setText("Consensus failed . Now Rolling back.");
         block *r=alt.head;
         while (!(*r==*(master.head) || r==NULL))
         {
             block *e=r;
             r=r->prev;
             delete e;
         }
         alt.head=r;

    }
    else {
        ui->label_21->setText("Consensus successful. The Transactions are accepted and implemeted.");
        while(!send.empty())
        {
            QString s=send.front();
            QString r=rece.front();
            QString a=amnt.front();
            block *g=new block(s,r,a.toLong());
            hash(master,g);
        implement(s,r,a.toLong());
            send.pop_front();
            rece.pop_front();
            amnt.pop_front();
            }
//transaction_writer();
    ui->label_6->setText(QString::number((ui->label_6->text().toInt())+add));
    ui->label_17->setText("TRANSACTIONS:-");
    for (block *itr=master.head;itr->sen!="HEAD";itr=itr->prev)
    {
        ui->label_17->setText(ui->label_17->text()+"\n"+"*. "+itr->sen+" --" + QString::number(itr->amount)+"--> " +itr->rec);
    }
    }
    ch.close();
    QFile che("E:/INSTANT_ALPHA/assets/docs/consensbuild.txt");
    che.open(QIODevice::WriteOnly);
    che.write("");
    che.close();
in_cons=false;
set_in_cons(in_cons);}
else {
    ch.close();
    v.flush();
    v.reset();
}

}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tab->setAutoFillBackground(true);
    ui->tabWidget->showFullScreen();
    QPixmap p(":/img/images/cooltext339114830885719.png");
    ui->label->setPixmap(p);
    ui->label_4->setText(QDate::currentDate().toString());
QDir fr("E:/INSTANT_ALPHA/assets/acc");
ui->label_5->setText(QString (char (fr.count()+'0'-2)));

QStringList users=fr.entryList();
int t=0;
for (auto i:users)
{
if (t>1)
ui->label_15->setText(ui->label_15->text() +"\n"+QString(t+'0'-1)+ ". "+(i.left(i.length()-5)));
t++;

}
QFile e(QDir::currentPath()+"/assets/docs/undtran.txt");
e.open(QIODevice::ReadWrite);
QTextStream r(&e);
int tr=r.readLine().toInt();
if (tr != 0)
{

    {
    ui->label_13->setText("PENDING");
QPalette g=ui->label_15->palette();
g.setColor(QPalette::WindowText,QColor(Qt::red));
ui->label_18->setText(" NEW TRANSACTIONS HAVE BEEN MADE AND ARE REQUIRED TO BE MINED FOR THEM TAKE EFFECT. CONSENSUS BUILDING PROCESS IS IN EFFECT CURRENTLY .");
ui->label_13->setPalette(g);
ui->progressBar->setVisible(true);
ui->label_19->setVisible(true);
ui->label_20->setVisible(true);
ui->label_21->setVisible(true);
ui->label_22->setVisible(true);
ui->line_10->setVisible(true);
ui->progressBar->setValue(0);
//MainWindow::consensus(tr);
//fre=false;
}
}
else
{
ui->label_13->setText("MADE");
QPalette g=ui->label_15->palette();
g.setColor(QPalette::WindowText,QColor(Qt::green));
ui->label_13->setPalette(g);
ui->label_18->setText("BLOCK CHAIN CONSENSUS IS THE MOST IMPORTANT ASPECT OF CRYPTOCURRENCY TRANSACTIONS. IT IS ALREADY DONE FOR NOW, NO NEW TRANSCATIONS HAVE BEEN MADE. RELAX!");
ui->progressBar->setVisible(false);
ui->label_19->setVisible(false);
ui->label_20->setVisible(false);
ui->label_21->setVisible(false);
ui->label_22->setVisible(false);
ui->line_10->setVisible(false);

}
timerid=startTimer(10000);
}

MainWindow::~MainWindow()
{
      killTimer(timerid);
        delete ui;
}

void MainWindow::timerEvent(QTimerEvent *event)
{

     ui->label_5->setText((QString (char(QDir ("E:/INSTANT_ALPHA/assets/acc").count()+'0'-2))));
     QDir fr("E:/INSTANT_ALPHA/assets/acc");
     QStringList users=fr.entryList();
     int t=0;
     ui->label_15->setText("USERS:-");
     for (auto i:users)
     {
     if (t>1)
     ui->label_15->setText(ui->label_15->text() +"\n"+QString(t+'0'-1)+ ". "+(i.left(i.length()-5)));
     t++;}

     {

     QFile dfg("E:/INSTANT_ALPHA/assets/docs/undtran.txt");
     dfg.open(QIODevice::ReadOnly);
     QTextStream tre(&dfg);
     int trea=tre.readLine().toInt();
     dfg.close();
     if ( trea!=0 || in_cons)
     {

         {
         ui->label_13->setText("PENDING");
     QPalette g=ui->label_15->palette();
     g.setColor(QPalette::WindowText,QColor(Qt::red));
    ui->label_18->setText(" NEW TRANSACTIONS HAVE BEEN MADE AND ARE REQUIRED TO BE MINED FOR THEM TAKE EFFECT. CONSENSUS BUILDING PROCESS IS IN EFFECT CURRENTLY .");
     ui->label_13->setPalette(g);
     ui->progressBar->setVisible(true);
     ui->label_19->setVisible(true);
     ui->label_20->setVisible(true);
     ui->label_21->setVisible(true);
     ui->label_22->setVisible(true);
     ui->line_10->setVisible(true);

           MainWindow::consensus(trea);
          }
}
     else
     {
     ui->label_13->setText("MADE");
     QPalette g=ui->label_15->palette();
     g.setColor(QPalette::WindowText,QColor(Qt::green));
     ui->label_13->setPalette(g);
     ui->label_18->setText("BLOCK CHAIN CONSENSUS IS THE MOST IMPORTANT ASPECT OF CRYPTOCURRENCY TRANSACTIONS. IT IS ALREADY DONE FOR NOW, NO NEW TRANSCATIONS HAVE BEEN MADE. RELAX!");
     ui->progressBar->setVisible(false);
     ui->label_19->setVisible(false);
     ui->label_20->setVisible(false);
     ui->label_21->setVisible(false);
     ui->label_22->setVisible(false);
     ui->line_10->setVisible(false);

}
}

}
void MainWindow::on_MainWindow_destroyed()
{

}
