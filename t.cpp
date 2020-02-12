#include<iostream>
#include<conio.h>
struct node
{
int data;
};
node bst[100];
void addnodes(int index,int left,int right)
{
bst[2*index+1].data=left;
bst[2*index+2].data=right;
}
void duplicater(int i)
{
if (i>99)
{
    std::cout<<"NO DUPLICATES\n";
}
}
int main()
{
     

}