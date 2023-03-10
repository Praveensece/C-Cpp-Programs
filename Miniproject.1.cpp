//mini project 1
#include <iostream>
#include<string.h>
struct employee
{
    int regno;
    char name[30];
    char password[30];
    
}e[50];

int main()
{
    int n,l,d;
    char m='y';
    char str[20],k;
    std::cout<<"enter the no of employee : ";
    std::cin>>n;
    for(int i=0;i<n;i++)
    {
        std::cout<<"enter the regno : ";
        std::cin>>e[i].regno;
        std::cout<<"enter the name : ";
        std::cin>>e[i].name;
        std::cout<<"enter your passsword : ";
        std::cin>>e[i].password;
    }
    
    std::cout<<std::endl<<std::endl<<"               "<<" WELCOME TO ORGAL COMPANY "<<std::endl<<std::endl<<std::endl;
    while (m=='y')
    {
        
        for(int i=0;i<n;i++)
        {
        
        std::cout<<"ENTER THE FOLLWOING TO LOGIN"<<std::endl<<"enter you empid : ";
        std::cin>>l;
        if(l==e[i].regno)
        {
        std::cout<<"name : "<<e[i].name<<std::endl;
        std::cout<<"enter your password to login : ";
        std::cin>>str;
        d=strcmp(e[i].password,str);
        if(d==0)
        {
        std::cout<<std::endl<<"  LOGGED IN SUCCESSFULLY  "<<std::endl<<std::endl;
        std::cout<<"|||||  THANK YOU  |||||"<<std::endl;
        std::cout<<"do you want to continue(y/n) : ";
        std::cin>>m;
        }
        else
        {
        std::cout<<"^^^^^  WRONG PASSWORD  ^^^^^"<<std::endl;
        std::cout<<"do you want to retry(y/n) :";
        std::cin>>k;
        
        while(k=='y')
        {
        for(int i=0;i<n;i++)
        {
        std::cout<<"re-enter your password :";
        std::cin>>str;
        d=strcmp(e[i].password,str);
        if(d==0)
        {
        std::cout<<"..........LOGGED IN SUCCESSFULLY.........."<<std::endl;
        std::cout<<"|||||  THANK YOU  |||||"<<std::endl;
        k='n';
        }
        else
        {
        std::cout<<"again wrong password"<<std::endl<<"do you want to retry(y/n)";
        std::cin>>k;
        }
        }
        }
        }
        }
        
        else
        {
        std::cout<<"^^^^^ RECORD NOT FOUND ^^^^^"<<std::endl;
        std::cout<<"do you want to continue(y/n) :";
        std::cin>>m;
        }
        }
    }
    return 0;
}
