#include<iostream>
#include<conio.h>
#include<dos.h>
//-----------------------
struct address{
char city[10];
char sub_city[10];
int kebele;
int house_no;
};

struct member{
char mid[10];
char fname[20];
char lname[20];
address add;
int age;
};

struct book{
int isbn;
char author[20];
char title[20];
};
//-----------------------
void menu();
int books();
int members();
int search();
void reports();
void credits();
//----------------------------------------------

int main(){
char loading[]="\t\t\t|||||||||||||||||||||||||||||||||||   ";
clrscr();
cout<<endl<<endl<<endl<<endl;
cout<<"\t\t\t       "<<"  /////////////////\n";
cout<<"\t\t\t       "<<" //////////////////\n";
cout<<"\t\t\t       "<<"|||              //\n";
cout<<"\t\t\t       "<<"|||   LIBRARY    //\n";
cout<<"\t\t\t       "<<"|||  MANAGMENT   //\n";
cout<<"\t\t\t       "<<"|||   SYSTEM     //\n";
cout<<"\t\t\t       "<<"|||              //\n";
cout<<"\t\t\t       "<<"|||              //\n";
cout<<endl;
cout<<"\t\t\t\tPROGRAM LOADING...\n";

for(int i=0;i<=loading[i];i++)
{
cout<<loading[i];
delay(70);
}
menu();
return 0;
}

void menu(){
char ch;
clrscr();
cout<<"_______________________________________________________________________________\n";
cout<<"\t\t**** Library Managment System ****\n";
cout<<"-------------------------------------------------------------------------------\n";
cout<<"\tMAIN MENU\n";
cout<<"-------------------------------------------------------------------------------\n";
cout<<"Press B :::> BOOKS MENU"<<endl;
cout<<"Press M :::> MEMBERS MENU"<<endl;
cout<<"Press S :::> SEARCH MENU"<<endl;
cout<<"Press R :::> VIEW REPORTS"<<endl;
cout<<"Press E :::> EXIT PROGRAM"<<endl;
cout<<"-------------------------------------------------------------------------------\n";
cout<<"Press A :::> ABOUT THE DEVELOPERS"<<endl;
cout<<"-------------------------------------------------------------------------------\n";
cout<<"Please Select your choice?.."<<endl;
ch=getch();
if(ch=='B'||ch=='b')
{
//books();
}
else if(ch=='M'||ch=='m')
{
//members();
}
else if(ch=='S'||ch=='s')
{
//search();
}
else if(ch=='R'||ch=='r')
{
//reports();
}
else if(ch=='A'||ch=='a')
{
credits();
}

else if(ch=='E'||ch=='e')
{
getch();
}

}
/*
int books(){

}

int members(){

}

int search(){

}
int reports(){

} */

void credits(){
char title[]="\t\t  *** LIBRARY MANAGMENT SYSTEM ***";
char grpmem[]="\t\t DEVELOPED BY:";
char name1[]="\t\t\t   1.KALEAB MULUGETA";
char name2[]="\t\t\t   2.DAGIM GIRMA";
char name3[]="\t\t\t   3.MAHILET TSIGE";
char cpr[]="\t\t    SHAREWARE/FREEWARE EDITION ";
int i;
   clrscr();
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"\t     -------------------------------------------------"<<endl;
for(i=0;i<=title[i];i++)
{
cout<<title[i];
delay(100);
}
cout<<endl<<"\t     -------------------------------------------------"<<endl;
for(i=0;i<=grpmem[i];i++)
{
cout<<grpmem[i];
delay(100);
}
cout<<endl<<"\t     -------------------------------------------------"<<endl;

for(i=0;i<=name1[i];i++)
{
cout<<name1[i];
delay(100);
}
cout<<endl;
for(i=0;i<=name2[i];i++)
{
cout<<name2[i];
delay(100);
}
cout<<endl;
for(i=0;i<=name3[i];i++)
{
cout<<name3[i];
delay(100);
}
cout<<endl<<"\t     -------------------------------------------------"<<endl;
for(i=0;i<=cpr[i];i++)
{
cout<<cpr[i];
delay(100);
}
cout<<endl<<"\t     -------------------------------------------------"<<endl;

}
