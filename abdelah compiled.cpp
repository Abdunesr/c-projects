#include<iostream>
#include<conio.h>
#include<unistd.h>

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

void menu();
int books();
int members();
int search();
void reports();
void credits();

int main(){
    char loading[]="\t\t\t|||||||   ";
    system("cls");
    std::cout<<std::endl<<std::endl<<std::endl<<std::endl;
    std::cout<<"\t\t\t       "<<"  /////////////////\n";
    std::cout<<"\t\t\t       "<<" //////////////////\n";
    std::cout<<"\t\t\t       "<<"|||              //\n";
    std::cout<<"\t\t\t       "<<"|||   LIBRARY    //\n";
    std::cout<<"\t\t\t       "<<"|||  MANAGMENT   //\n";
    std::cout<<"\t\t\t       "<<"|||   SYSTEM     //\n";
    std::cout<<"\t\t\t       "<<"|||              //\n";
    std::cout<<"\t\t\t       "<<"|||              //\n";
    std::cout<<std::endl;
    std::cout<<"\t\t\t\tPROGRAM LOADING...\n";

    for(int i=0;i<=loading[i];i++) {
        std::cout<<loading[i];
        usleep(70000);
    }
    menu();
    return 0;
}

void menu(){
    char ch;
    system("cls");
    std::cout<<"___________________\n";
    std::cout<<"\t\t** Library Management System **\n";
    std::cout<<"-------------------------------------------------------------------------------\n";
    std::cout<<"\tMAIN MENU\n";
    std::cout<<"-------------------------------------------------------------------------------\n";
    std::cout<<"Press B :::> BOOKS MENU"<<std::endl;
    std::cout<<"Press M :::> MEMBERS MENU"<<std::endl;
    std::cout<<"Press S :::> SEARCH MENU"<<std::endl;
    std::cout<<"Press R :::> VIEW REPORTS"<<std::endl;
    std::cout<<"Press E :::> EXIT PROGRAM"<<std::endl;
    std::cout<<"-------------------------------------------------------------------------------\n";
    std::cout<<"Press A :::> ABOUT THE DEVELOPERS"<<std::endl;
    std::cout<<"-------------------------------------------------------------------------------\n";
    std::cout<<"Please Select your choice?.."<<std::endl;
    ch=getch();
    if(ch=='B'||ch=='b'){
        //books();
    }
    else if(ch=='M'||ch=='m'){
        //members();
    }
    else if(ch=='S'||ch=='s'){
        //search();
    }
    else if(ch=='R'||ch=='r'){
        //reports();
    }
    else if(ch=='A'||ch=='a'){
        credits();
    }
    else if(ch=='E'||ch=='e'){
        //getch();
    }
}

void credits(){
    char title[]="\t\t  * LIBRARY MANAGMENT SYSTEM *";
    char grpmem[]="\t\t DEVELOPED BY:";
    char name1[]="\t\t\t   1.KALEAB MULUGETA";
    char name2[]="\t\t\t   2.DAGIM GIRMA";
    char name3[]="\t\t\t   3.MAHILET TSIGE";
    char cpr[]="\t\t    SHAREWARE/FREEWARE EDITION ";
    int i;
    system("cls");
    std::cout<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl;
    std::cout<<"\t     -------------------------------------------------"<<std::endl;
    for(i=0;i<=title[i];i++) {
        std::cout<<title[i];
        usleep(100000);
    }
    std::cout<<std::endl<<"\t     -------------------------------------------------"<<std::endl;
    for(i=0;i<=grpmem[i];i++) {
        std::cout<<grpmem[i];
        usleep(100000);
    }
    std::cout<<std::endl<<"\t     -------------------------------------------------"<<std::endl;
    for(i=0;i<=name1[i];i++) {
        std::cout<<name1[i];
    }}
