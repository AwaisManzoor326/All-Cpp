#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;
void login();
void registration();
void forgot();
int main()
{
	int c;
	cout<<"\t\t\t_______________________________________________________\n\n\n";
	cout<<"				       Welcome to the Login page			    \n\n\n";
	cout<<"\t\t\t______________		Menu		______________\n\n\n";
	cout<<"                                                      \n\n";
	cout<<"\t* Press 1 to LOGIN						"<<endl;
	cout<<"\t* Press 2 to REGISTER				    "<<endl;
	cout<<"\t* Press 3 if you forgot your PASSWORD	"<<endl;
	cout<<"\t* Press 4 to EXIT						"<<endl;
	cout<<"\n\t\t Please enter your choice : ";
	cin>>c;
	cout<<endl;
	switch(c)
	{
	
	case 1:
		 login();
		 break;
	case 2:
		 registration();
		 break;
	case 3:
		 forgot();
		 break;
	case 4:
	cout<<"\t\t\t Thank You!\n\n";
	break;
	default:
	system ("cls");
	cout<<"\t\t\t Please select from the options given above \n"<<endl;
	main();	 
	}	
}
void login()
{
	int count;
	string userId,pass,id,password;
	system("cls");
	cout<<"\t\t\t Please enter the Username and Password : "<<endl;
	cout<<"\t\t\t USERNAME ";
	cin>>userId;
	cout<<"\t\t\t PASSWORD ";
	cin>>password;
	ifstream input("records.txt");
	while(input>>id>>pass)
	{
		if(id==userId && pass==password)
		{
			count=1;
			system("cls");
		}
	}
	input.close();
	if(count==1)
	{
		cout<<userId<<"\n Your LOGIN is successful \n Thanks for logging in ! \n";
		main();
	}
	else{
		cout<<"\n LOGIN ERROR \n Please check your username and password \n";
		main();
	}
}
void registration()
{
	string rid,rpass,ruserId,rpassword;
	cout<<"\t\t\t Enter the Username : ";
	cin>>ruserId;
	cout<<"\t\t\t Enter the Password : ";
	cin>>rpassword;
	ofstream f1("records.txt",ios::app);
	f1<<ruserId<<" "<<rpassword<<endl;
	system("cls");
	cout<<"\n\t\t Registration Successful ! \n";
	main();
}
void forgot()
{
	int option;
	system("cls");
	cout<<"\t\t\t You forgot the password? No worries \n";
	cout<<"\t\t\t Press 1 to search your id by Username"<<endl;
	cout<<"\t\t\t Press 2 to go back to the main menu"<<endl;
	cout<<"Enter your choice ";
	cin>>option;
	switch(option)
	{
	case 2:
	{
	main();
	}
	default:
	{
	cout<<"\t\t\t Wrong choice. Please try again!"<<endl;
	forgot();
		case 1:
		int count=0;
		string suserid,spass,sid;
		cout<<"\n\t\t Enter the Username you remembered ";
		cin>>suserid;
		ifstream f2("records.txt");
		while(f2>>sid>>suserid)
		if(sid==suserid)
		{
			count=1;
		}
		f2.close();
		if(count=1)
		{
			cout<<"\n\n Your account is found! \n";
			cout<<"\n\n Your password is "<<spass;
			main();
			}else{
				cout<<"\n Sorry your account is not found ";
				main();
			}
			break;
		}
		}
		}
		
				
				
