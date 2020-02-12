/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QFrame *line;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLabel *label_4;
    QFrame *line_2;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_2;
    QLabel *label_5;
    QFrame *line_4;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_7;
    QLabel *label_6;
    QFrame *line_6;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_8;
    QLabel *label_9;
    QFrame *line_3;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_11;
    QLabel *label_13;
    QFrame *line_5;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_12;
    QLabel *label_10;
    QFrame *line_7;
    QLabel *label_14;
    QWidget *tab2;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_16;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_15;
    QFrame *line_8;
    QVBoxLayout *verticalLayout_14;
    QLabel *label_17;
    QWidget *tab3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_18;
    QFrame *line_9;
    QProgressBar *progressBar;
    QHBoxLayout *horizontalLayout;
    QLabel *label_20;
    QLabel *label_19;
    QFrame *line_10;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_22;
    QLabel *label_21;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(2026, 1156);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/images/cooltext339114830885719_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        centralWidget->setMouseTracking(false);
        horizontalLayout_3 = new QHBoxLayout(centralWidget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(165, 165, 165, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        QBrush brush2(QColor(75, 75, 75, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush2);
        QBrush brush3(QColor(255, 170, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush3);
        QBrush brush4(QColor(130, 130, 130, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush4);
        QBrush brush5(QColor(92, 247, 249, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush5);
        QBrush brush6(QColor(255, 255, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        QBrush brush7(QColor(250, 250, 250, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush7);
        QBrush brush8(QColor(85, 0, 127, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        QBrush brush9(QColor(92, 247, 249, 128));
        brush9.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush8);
        QBrush brush10(QColor(0, 0, 0, 128));
        brush10.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush10);
#endif
        tabWidget->setPalette(palette);
        QFont font;
        font.setFamily(QString::fromUtf8("Impact"));
        font.setPointSize(29);
        font.setBold(false);
        font.setWeight(50);
        tabWidget->setFont(font);
        tabWidget->setMouseTracking(false);
        tabWidget->setLayoutDirection(Qt::LeftToRight);
        tabWidget->setAutoFillBackground(true);
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setSpacing(20);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setPixmap(QPixmap(QString::fromUtf8("images/cooltext339114830885719.png")));
        label->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_2->addWidget(label);

        line = new QFrame(tab);
        line->setObjectName(QString::fromUtf8("line"));
        line->setLineWidth(10);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(15);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        QBrush brush11(QColor(170, 85, 255, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush11);
        QBrush brush12(QColor(170, 255, 127, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        label_3->setPalette(palette1);
        QFont font1;
        font1.setPointSize(36);
        label_3->setFont(font1);
        label_3->setAutoFillBackground(false);
        label_3->setFrameShape(QFrame::NoFrame);
        label_3->setLineWidth(0);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_3);

        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QPalette palette2;
        QBrush brush13(QColor(0, 255, 0, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush13);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush11);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush12);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush13);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush11);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        label_4->setPalette(palette2);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial Black"));
        font2.setPointSize(36);
        font2.setBold(true);
        font2.setWeight(75);
        label_4->setFont(font2);
        label_4->setAutoFillBackground(false);
        label_4->setFrameShape(QFrame::Box);
        label_4->setLineWidth(0);
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_4);


        horizontalLayout_6->addLayout(verticalLayout_3);

        line_2 = new QFrame(tab);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setLineWidth(7);
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_6->addWidget(line_2);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        QBrush brush14(QColor(170, 255, 0, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush14);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush12);
        QBrush brush15(QColor(85, 255, 255, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush15);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush14);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush15);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush15);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush15);
        label_2->setPalette(palette3);
        label_2->setFont(font1);
        label_2->setAutoFillBackground(false);
        label_2->setFrameShape(QFrame::NoFrame);
        label_2->setLineWidth(0);
        label_2->setScaledContents(false);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_2);

        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush13);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush11);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush12);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush13);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush11);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        label_5->setPalette(palette4);
        QFont font3;
        font3.setPointSize(48);
        label_5->setFont(font3);
        label_5->setAutoFillBackground(false);
        label_5->setFrameShape(QFrame::NoFrame);
        label_5->setLineWidth(0);
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_5);


        horizontalLayout_6->addLayout(verticalLayout_5);

        line_4 = new QFrame(tab);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setLineWidth(7);
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        horizontalLayout_6->addWidget(line_4);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_7 = new QLabel(tab);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush11);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush12);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush11);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        label_7->setPalette(palette5);
        label_7->setFont(font1);
        label_7->setAutoFillBackground(false);
        label_7->setFrameShape(QFrame::NoFrame);
        label_7->setLineWidth(0);
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_7);

        label_6 = new QLabel(tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush13);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush11);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush12);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush13);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush11);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        label_6->setPalette(palette6);
        label_6->setFont(font3);
        label_6->setAutoFillBackground(false);
        label_6->setFrameShape(QFrame::NoFrame);
        label_6->setLineWidth(0);
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_6);


        horizontalLayout_6->addLayout(verticalLayout_7);


        verticalLayout_2->addLayout(horizontalLayout_6);

        line_6 = new QFrame(tab);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setLineWidth(10);
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(15);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(0);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        label_8 = new QLabel(tab);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush11);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush12);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush11);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        label_8->setPalette(palette7);
        label_8->setFont(font1);
        label_8->setAutoFillBackground(false);
        label_8->setFrameShape(QFrame::NoFrame);
        label_8->setLineWidth(0);
        label_8->setScaledContents(true);
        label_8->setAlignment(Qt::AlignCenter);
        label_8->setWordWrap(true);

        verticalLayout_9->addWidget(label_8);

        label_9 = new QLabel(tab);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush13);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush11);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush12);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush13);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush11);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        label_9->setPalette(palette8);
        label_9->setFont(font3);
        label_9->setAutoFillBackground(false);
        label_9->setFrameShape(QFrame::NoFrame);
        label_9->setLineWidth(0);
        label_9->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(label_9);


        horizontalLayout_4->addLayout(verticalLayout_9);

        line_3 = new QFrame(tab);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setLineWidth(7);
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout_4->addWidget(line_3);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(0);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        label_11 = new QLabel(tab);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush11);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush12);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush11);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        label_11->setPalette(palette9);
        label_11->setFont(font1);
        label_11->setAutoFillBackground(false);
        label_11->setFrameShape(QFrame::NoFrame);
        label_11->setLineWidth(0);
        label_11->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(label_11);

        label_13 = new QLabel(tab);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush13);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush11);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush12);
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush13);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush11);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        label_13->setPalette(palette10);
        label_13->setFont(font3);
        label_13->setAutoFillBackground(false);
        label_13->setFrameShape(QFrame::NoFrame);
        label_13->setLineWidth(0);
        label_13->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(label_13);


        horizontalLayout_4->addLayout(verticalLayout_11);

        line_5 = new QFrame(tab);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setLineWidth(7);
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);

        horizontalLayout_4->addWidget(line_5);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(0);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        label_12 = new QLabel(tab);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette11.setBrush(QPalette::Active, QPalette::Base, brush11);
        palette11.setBrush(QPalette::Active, QPalette::Window, brush12);
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush11);
        palette11.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette11.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        label_12->setPalette(palette11);
        label_12->setFont(font1);
        label_12->setAutoFillBackground(false);
        label_12->setFrameShape(QFrame::NoFrame);
        label_12->setLineWidth(0);
        label_12->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(label_12);

        label_10 = new QLabel(tab);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::WindowText, brush13);
        palette12.setBrush(QPalette::Active, QPalette::Base, brush11);
        palette12.setBrush(QPalette::Active, QPalette::Window, brush12);
        palette12.setBrush(QPalette::Inactive, QPalette::WindowText, brush13);
        palette12.setBrush(QPalette::Inactive, QPalette::Base, brush11);
        palette12.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        palette12.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette12.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette12.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        label_10->setPalette(palette12);
        label_10->setFont(font3);
        label_10->setAutoFillBackground(false);
        label_10->setFrameShape(QFrame::NoFrame);
        label_10->setLineWidth(0);
        label_10->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(label_10);


        horizontalLayout_4->addLayout(verticalLayout_10);


        verticalLayout_2->addLayout(horizontalLayout_4);

        line_7 = new QFrame(tab);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_7);

        label_14 = new QLabel(tab);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        QPalette palette13;
        QBrush brush16(QColor(255, 0, 255, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette13.setBrush(QPalette::Active, QPalette::WindowText, brush16);
        palette13.setBrush(QPalette::Inactive, QPalette::WindowText, brush16);
        palette13.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        label_14->setPalette(palette13);
        QFont font4;
        font4.setFamily(QString::fromUtf8("Gentium Book Basic"));
        font4.setPointSize(20);
        label_14->setFont(font4);
        label_14->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_14);

        verticalLayout_2->setStretch(0, 4);
        verticalLayout_2->setStretch(1, 1);
        verticalLayout_2->setStretch(2, 8);
        verticalLayout_2->setStretch(3, 1);
        verticalLayout_2->setStretch(4, 8);
        verticalLayout_2->setStretch(5, 1);
        verticalLayout_2->setStretch(6, 2);
        tabWidget->addTab(tab, QString());
        tab2 = new QWidget();
        tab2->setObjectName(QString::fromUtf8("tab2"));
        verticalLayout_12 = new QVBoxLayout(tab2);
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setContentsMargins(11, 11, 11, 11);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        label_16 = new QLabel(tab2);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::WindowText, brush13);
        palette14.setBrush(QPalette::Active, QPalette::Base, brush);
        palette14.setBrush(QPalette::Active, QPalette::Window, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::WindowText, brush13);
        palette14.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette14.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::Window, brush);
        label_16->setPalette(palette14);
        QFont font5;
        font5.setFamily(QString::fromUtf8("Calibri"));
        font5.setPointSize(28);
        font5.setBold(true);
        font5.setItalic(true);
        font5.setWeight(75);
        label_16->setFont(font5);
        label_16->setAutoFillBackground(true);
        label_16->setWordWrap(true);

        verticalLayout_12->addWidget(label_16);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        label_15 = new QLabel(tab2);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::WindowText, brush14);
        QBrush brush17(QColor(170, 170, 255, 255));
        brush17.setStyle(Qt::SolidPattern);
        palette15.setBrush(QPalette::Active, QPalette::Base, brush17);
        QBrush brush18(QColor(0, 85, 255, 255));
        brush18.setStyle(Qt::SolidPattern);
        palette15.setBrush(QPalette::Active, QPalette::Window, brush18);
        palette15.setBrush(QPalette::Inactive, QPalette::WindowText, brush14);
        palette15.setBrush(QPalette::Inactive, QPalette::Base, brush17);
        palette15.setBrush(QPalette::Inactive, QPalette::Window, brush18);
        palette15.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette15.setBrush(QPalette::Disabled, QPalette::Base, brush18);
        palette15.setBrush(QPalette::Disabled, QPalette::Window, brush18);
        label_15->setPalette(palette15);
        label_15->setAutoFillBackground(true);
        label_15->setFrameShape(QFrame::Box);
        label_15->setFrameShadow(QFrame::Raised);
        label_15->setLineWidth(10);
        label_15->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_13->addWidget(label_15);


        horizontalLayout_7->addLayout(verticalLayout_13);

        line_8 = new QFrame(tab2);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setAutoFillBackground(true);
        line_8->setLineWidth(10);
        line_8->setFrameShape(QFrame::VLine);
        line_8->setFrameShadow(QFrame::Sunken);

        horizontalLayout_7->addWidget(line_8);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        label_17 = new QLabel(tab2);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        QPalette palette16;
        palette16.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush19(QColor(85, 255, 127, 255));
        brush19.setStyle(Qt::SolidPattern);
        palette16.setBrush(QPalette::Active, QPalette::Light, brush19);
        QBrush brush20(QColor(85, 255, 0, 255));
        brush20.setStyle(Qt::SolidPattern);
        palette16.setBrush(QPalette::Active, QPalette::Dark, brush20);
        palette16.setBrush(QPalette::Active, QPalette::Text, brush5);
        palette16.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette16.setBrush(QPalette::Active, QPalette::Base, brush);
        palette16.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette16.setBrush(QPalette::Active, QPalette::LinkVisited, brush14);
        QBrush brush21(QColor(92, 247, 249, 128));
        brush21.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Active, QPalette::PlaceholderText, brush21);
#endif
        palette16.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::Light, brush19);
        palette16.setBrush(QPalette::Inactive, QPalette::Dark, brush20);
        palette16.setBrush(QPalette::Inactive, QPalette::Text, brush5);
        palette16.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette16.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush14);
        QBrush brush22(QColor(92, 247, 249, 128));
        brush22.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush22);
#endif
        palette16.setBrush(QPalette::Disabled, QPalette::WindowText, brush20);
        palette16.setBrush(QPalette::Disabled, QPalette::Light, brush19);
        palette16.setBrush(QPalette::Disabled, QPalette::Dark, brush20);
        palette16.setBrush(QPalette::Disabled, QPalette::Text, brush20);
        palette16.setBrush(QPalette::Disabled, QPalette::ButtonText, brush20);
        palette16.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette16.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        palette16.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush14);
        QBrush brush23(QColor(92, 247, 249, 128));
        brush23.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush23);
#endif
        label_17->setPalette(palette16);
        label_17->setAutoFillBackground(true);
        label_17->setFrameShape(QFrame::Box);
        label_17->setFrameShadow(QFrame::Raised);
        label_17->setLineWidth(10);
        label_17->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_14->addWidget(label_17);


        horizontalLayout_7->addLayout(verticalLayout_14);

        horizontalLayout_7->setStretch(0, 2);
        horizontalLayout_7->setStretch(1, 1);
        horizontalLayout_7->setStretch(2, 6);

        verticalLayout_12->addLayout(horizontalLayout_7);

        verticalLayout_12->setStretch(0, 2);
        verticalLayout_12->setStretch(1, 6);
        tabWidget->addTab(tab2, QString());
        tab3 = new QWidget();
        tab3->setObjectName(QString::fromUtf8("tab3"));
        verticalLayout_4 = new QVBoxLayout(tab3);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, -1, 0, 0);
        label_18 = new QLabel(tab3);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        QPalette palette17;
        palette17.setBrush(QPalette::Active, QPalette::WindowText, brush14);
        palette17.setBrush(QPalette::Active, QPalette::Base, brush6);
        QBrush brush24(QColor(255, 0, 127, 255));
        brush24.setStyle(Qt::SolidPattern);
        palette17.setBrush(QPalette::Active, QPalette::Window, brush24);
        palette17.setBrush(QPalette::Inactive, QPalette::WindowText, brush14);
        palette17.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette17.setBrush(QPalette::Inactive, QPalette::Window, brush24);
        palette17.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette17.setBrush(QPalette::Disabled, QPalette::Base, brush24);
        palette17.setBrush(QPalette::Disabled, QPalette::Window, brush24);
        label_18->setPalette(palette17);
        QFont font6;
        font6.setFamily(QString::fromUtf8("Arial Black"));
        font6.setBold(true);
        font6.setUnderline(true);
        font6.setWeight(75);
        label_18->setFont(font6);
        label_18->setAutoFillBackground(true);
        label_18->setWordWrap(true);

        verticalLayout_4->addWidget(label_18);

        line_9 = new QFrame(tab3);
        line_9->setObjectName(QString::fromUtf8("line_9"));
        QPalette palette18;
        palette18.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette18.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette18.setBrush(QPalette::Active, QPalette::Dark, brush13);
        palette18.setBrush(QPalette::Active, QPalette::Text, brush5);
        palette18.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush25(QColor(92, 247, 249, 128));
        brush25.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::Active, QPalette::PlaceholderText, brush25);
#endif
        palette18.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette18.setBrush(QPalette::Inactive, QPalette::Dark, brush13);
        palette18.setBrush(QPalette::Inactive, QPalette::Text, brush5);
        palette18.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QBrush brush26(QColor(92, 247, 249, 128));
        brush26.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush26);
#endif
        palette18.setBrush(QPalette::Disabled, QPalette::WindowText, brush13);
        palette18.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette18.setBrush(QPalette::Disabled, QPalette::Dark, brush13);
        palette18.setBrush(QPalette::Disabled, QPalette::Text, brush13);
        palette18.setBrush(QPalette::Disabled, QPalette::ButtonText, brush13);
        QBrush brush27(QColor(92, 247, 249, 128));
        brush27.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush27);
#endif
        line_9->setPalette(palette18);
        line_9->setFrameShadow(QFrame::Raised);
        line_9->setLineWidth(30);
        line_9->setFrameShape(QFrame::HLine);

        verticalLayout_4->addWidget(line_9);

        progressBar = new QProgressBar(tab3);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setEnabled(true);
        QPalette palette19;
        QBrush brush28(QColor(85, 170, 255, 255));
        brush28.setStyle(Qt::SolidPattern);
        palette19.setBrush(QPalette::Active, QPalette::WindowText, brush28);
        palette19.setBrush(QPalette::Inactive, QPalette::WindowText, brush28);
        palette19.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        progressBar->setPalette(palette19);
        progressBar->setValue(24);

        verticalLayout_4->addWidget(progressBar);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_20 = new QLabel(tab3);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setEnabled(true);
        QPalette palette20;
        QBrush brush29(QColor(255, 255, 127, 255));
        brush29.setStyle(Qt::SolidPattern);
        palette20.setBrush(QPalette::Active, QPalette::WindowText, brush29);
        palette20.setBrush(QPalette::Inactive, QPalette::WindowText, brush29);
        palette20.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        label_20->setPalette(palette20);
        label_20->setAutoFillBackground(true);
        label_20->setWordWrap(true);

        horizontalLayout->addWidget(label_20);

        label_19 = new QLabel(tab3);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setEnabled(true);
        QPalette palette21;
        QBrush brush30(QColor(255, 0, 0, 255));
        brush30.setStyle(Qt::SolidPattern);
        palette21.setBrush(QPalette::Active, QPalette::WindowText, brush30);
        palette21.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush31(QColor(0, 0, 127, 255));
        brush31.setStyle(Qt::SolidPattern);
        palette21.setBrush(QPalette::Active, QPalette::Window, brush31);
        palette21.setBrush(QPalette::Inactive, QPalette::WindowText, brush30);
        palette21.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette21.setBrush(QPalette::Inactive, QPalette::Window, brush31);
        palette21.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette21.setBrush(QPalette::Disabled, QPalette::Base, brush31);
        palette21.setBrush(QPalette::Disabled, QPalette::Window, brush31);
        label_19->setPalette(palette21);
        QFont font7;
        font7.setFamily(QString::fromUtf8("HP Simplified"));
        font7.setPointSize(48);
        font7.setBold(true);
        font7.setWeight(75);
        label_19->setFont(font7);
        label_19->setAutoFillBackground(true);
        label_19->setWordWrap(true);

        horizontalLayout->addWidget(label_19);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 4);

        verticalLayout_4->addLayout(horizontalLayout);

        line_10 = new QFrame(tab3);
        line_10->setObjectName(QString::fromUtf8("line_10"));
        QPalette palette22;
        palette22.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush32(QColor(170, 0, 0, 255));
        brush32.setStyle(Qt::SolidPattern);
        palette22.setBrush(QPalette::Active, QPalette::Light, brush32);
        palette22.setBrush(QPalette::Active, QPalette::Dark, brush13);
        palette22.setBrush(QPalette::Active, QPalette::Text, brush5);
        palette22.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush33(QColor(92, 247, 249, 128));
        brush33.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette22.setBrush(QPalette::Active, QPalette::PlaceholderText, brush33);
#endif
        palette22.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette22.setBrush(QPalette::Inactive, QPalette::Light, brush32);
        palette22.setBrush(QPalette::Inactive, QPalette::Dark, brush13);
        palette22.setBrush(QPalette::Inactive, QPalette::Text, brush5);
        palette22.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QBrush brush34(QColor(92, 247, 249, 128));
        brush34.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette22.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush34);
#endif
        palette22.setBrush(QPalette::Disabled, QPalette::WindowText, brush13);
        palette22.setBrush(QPalette::Disabled, QPalette::Light, brush32);
        palette22.setBrush(QPalette::Disabled, QPalette::Dark, brush13);
        palette22.setBrush(QPalette::Disabled, QPalette::Text, brush13);
        palette22.setBrush(QPalette::Disabled, QPalette::ButtonText, brush13);
        QBrush brush35(QColor(92, 247, 249, 128));
        brush35.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette22.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush35);
#endif
        line_10->setPalette(palette22);
        line_10->setLineWidth(20);
        line_10->setFrameShape(QFrame::HLine);
        line_10->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_10);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_22 = new QLabel(tab3);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setEnabled(true);
        QPalette palette23;
        QBrush brush36(QColor(0, 170, 0, 255));
        brush36.setStyle(Qt::SolidPattern);
        palette23.setBrush(QPalette::Active, QPalette::WindowText, brush36);
        QBrush brush37(QColor(170, 85, 0, 255));
        brush37.setStyle(Qt::SolidPattern);
        palette23.setBrush(QPalette::Active, QPalette::Base, brush37);
        palette23.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette23.setBrush(QPalette::Inactive, QPalette::WindowText, brush36);
        palette23.setBrush(QPalette::Inactive, QPalette::Base, brush37);
        palette23.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette23.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette23.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette23.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        label_22->setPalette(palette23);
        QFont font8;
        font8.setFamily(QString::fromUtf8("Microsoft Sans Serif"));
        font8.setPointSize(48);
        label_22->setFont(font8);
        label_22->setAutoFillBackground(true);

        horizontalLayout_2->addWidget(label_22);

        label_21 = new QLabel(tab3);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setEnabled(true);
        QPalette palette24;
        palette24.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush38(QColor(255, 255, 255, 255));
        brush38.setStyle(Qt::SolidPattern);
        palette24.setBrush(QPalette::Active, QPalette::Window, brush38);
        palette24.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette24.setBrush(QPalette::Inactive, QPalette::Window, brush38);
        palette24.setBrush(QPalette::Disabled, QPalette::Base, brush38);
        palette24.setBrush(QPalette::Disabled, QPalette::Window, brush38);
        label_21->setPalette(palette24);
        QFont font9;
        font9.setFamily(QString::fromUtf8("Ink Free"));
        font9.setPointSize(48);
        label_21->setFont(font9);
        label_21->setAutoFillBackground(true);
        label_21->setWordWrap(true);

        horizontalLayout_2->addWidget(label_21);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 4);

        verticalLayout_4->addLayout(horizontalLayout_2);

        verticalLayout_4->setStretch(0, 2);
        verticalLayout_4->setStretch(1, 1);
        verticalLayout_4->setStretch(2, 3);
        verticalLayout_4->setStretch(3, 1);
        verticalLayout_4->setStretch(4, 2);
        verticalLayout_4->setStretch(5, 2);
        tabWidget->addTab(tab3, QString());

        verticalLayout->addWidget(tabWidget);


        horizontalLayout_3->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 2026, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "INSTANT ALPHA", nullptr));
        label->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "TODAY:-", nullptr));
        label_4->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "NUMBER OF USERS :-", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "45", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "TOTAL TRANSACTIONS:-", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "0", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "BLOCKCHAIN FUNCTIONAL:-", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "YES", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "CONSENSUS :-", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "MADE", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "NUMBER OF MINERS:-", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "5", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "MADE WITH CARE ", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "INSTANT ALPHA", nullptr));
        label_16->setText(QApplication::translate("MainWindow", "THIS SECTION IS FOR TRUSTED ADMINISTRATORS ONLY. THE INFORMATION IS STRICTLY READ ONLY AND MEANT FOR SUPPORT PURPOSES ONLY.", nullptr));
        label_15->setText(QApplication::translate("MainWindow", "USERS:-", nullptr));
        label_17->setText(QApplication::translate("MainWindow", "TRANSACTIONS:-", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab2), QApplication::translate("MainWindow", "ADMINISTRATION", nullptr));
        label_18->setText(QApplication::translate("MainWindow", "BLOCK CHAIN CONSENSUS IS THE MOST IMPORTANT ASPECT OF CRYPTOCURRENCY TRANSACTIONS. IT IS ALREADY DONE FOR NOW, NO NEW TRANSCATIONS HAVE BEEN MADE. RELAX!", nullptr));
        label_20->setText(QApplication::translate("MainWindow", "STATUS OF CONSENSUS:-", nullptr));
        label_19->setText(QApplication::translate("MainWindow", " WAITING FOR MINERS...", nullptr));
        label_22->setText(QApplication::translate("MainWindow", "REMARKS:-", nullptr));
        label_21->setText(QApplication::translate("MainWindow", "PRESENTLY ALL OK", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab3), QApplication::translate("MainWindow", "CONSENSUS BUILDER", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
