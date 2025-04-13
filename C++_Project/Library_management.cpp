#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

class Library
{
    public:
    int id;
    char name[ 100 ] ;
    char author[ 100 ] ;
    char student[ 100 ] ;
    int price;
    int pages;

};

int main()
{   
    
    Library lib[ 20 ];
    int input = 0;
    int count = 0;

    while( input != 5)
    {
    cout<<"Enter 1 to input details like ,id,name,author,student : " << endl;
    cout<<"Enter 2 to display details...." << endl;
    cout<<"Enter 3 to quit" << endl;
    cout<<"Choice an option : ";
    cin>>input;
    cout<<endl;

    switch(input)
    {
        case 1: 
        start:
        cout<<"Enter Student Name : ";
        //cin>>lib[count].student;
        cin.getline(lib[count].student,100,'.');
        cout<<"Enter Book Id : ";
        cin>>lib[count].id;
        cout<<"Enter Book Name : ";
        cin.getline(lib[count].name,100,'.');
        cout<<"Enter Book Author : " ;
        cin.getline(lib[count].author,100,'.');
        cout<<"Enter Book Price :  ";
        cin>>lib[count].price;
        cout<<"Enter Book pages : ";
        cin>>lib[count].pages;
        cout<<"\n";
        count++;
        break;

        case 2 :
             for(int i=0; i<count; i++)
             {
                cout<<"====> Book issue <=== "<<endl;
                cout<<"Book Student : "<<lib[i].student <<endl;
                cout<<"Book Name : "<<lib[i].name <<endl;
                cout<<"Book Author : "<<lib[i].author <<endl;
                cout<<"Book Id : "<<lib[i].id <<endl;
                cout<<"Book Price : "<<lib[i].price <<endl;
                cout<<"Book pages : "<<lib[i].pages <<endl;
                cout<<endl;
             }
             break;

        case 3 : 
             exit(0);
             break;

        default : 
        cout<<"you are entered wrong value,please type again"<<endl;
        goto start;

    }
    }

}