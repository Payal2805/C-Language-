#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
     long account,phone;
     char name[10];
     char mail[20];
     char admin,z;
     long a=200000,b,c;
     int bank;
clrscr();

// main line start
  cout<<"|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n";
  cout<<" |\t\t\t\t\t\t\t\t\t    |\n";
  cout<<"|\t\t\t     BANK MANAGEMENT SYSTEM  \t\t\t     |\n";
  cout<<" |\t\t\t   ------------------------- \t\t\t    |\n";
  cout<<"|\t\t\t\t\t\t\t\t\t     |\n";
  cout<<"|\t\t\t\t\t\t\t\t\t     |\n";
  cout<<"|\t\t\t\t\t\t\t\t\t     |\n";
  cout<<" |\t\t\t      Design The Program By :- \t\t\t    |\n";
  cout<<"|\t\t\t      ------------------------ \t\t\t     |\n";
  cout<<" |\t\t\t\t\t\t\t\t\t    |\n";
  cout<<"|\t\t\t\t\t\t\t\t\t     |\n";
  cout<<"|\t\t\t\t\t\t\t\t\t     |\n";
  cout<<"|\t\t\t\t\t\t\t\t\t     |\n";
  cout<<" |\t\t\t\t\t\t\t\t\t    |\n";
  cout<<"|\t\t\t         Payal J Jadhav \t\t\t     |\n";
  cout<<" |\t\t\t\t\t\t\t\t\t    |\n";
  cout<<"|\t\t\t\t\t\t\t\t\t     |\n";
  cout<<"|\t\t\t\t\t\t\t\t\t     |\n";
  cout<<"|\t\t\t\t\t\t\t\t\t     |\n";
  cout<<" |\t\t\t\t\t\t\t\t\t    |\n";
  cout<<"|\t\t\t\t\t\t\t\t\t     |\n";
  cout<<"|\t\t\t  Press Any Key The ENTER To Program.......  \t     |\n";
  cout<<" |\t\t\t\t\t\t\t\t\t    |\n";
  cout<<"|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n";
  cin>>z;
  clrscr();

// Next Page Start
  cout<<"\n\n\n\n\n\n\n\n\n";
  cout<<"|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n";
  cout<<"  |\t\t\t\t\t\t\t\t\t   |\n";
  cout<<"    |\t\t\t\t\t\t\t\t\t |\n";
  cout<<"      |   Press [A] to login as Administator OR [S] to login as Staff  |\n";
  cout<<"    |\t\t\t\t\t\t\t\t\t |\n";
  cout<<"  |\t\t\t\t\t\t\t\t\t   |\n";
  cout<<"|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n";
  cin>>admin;
  clrscr();

    switch(admin)
    {
	case 'a':
  cout<<"|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n";
  cout<<"  |\t\t\t\t\t\t\t\t\t   |\n";
  cout<<"    |\t\t\t\t\t\t\t\t\t |\n";
  cout<<"      |\t\t\t   Welcome As Administator :-       \t\t|\n";
  cout<<"    |\t\t\t\t\t\t\t\t\t |\n";
  cout<<"  |\t\t\t\t\t\t\t\t\t   |\n";
  cout<<"|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n";
    break;

	case 's':
  cout<<"|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n";
  cout<<"  |\t\t\t\t\t\t\t\t\t   |\n";
  cout<<"    |\t\t\t\t\t\t\t\t\t |\n";
  cout<<"      |\t\t\t   Welcome As Staff :-    \t\t\t|\n";
  cout<<"    |\t\t\t\t\t\t\t\t\t |\n";
  cout<<"  |\t\t\t\t\t\t\t\t\t   |\n";
  cout<<"|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n";

     cout<<"\n\nEmter the Name of Staff :-\t" ;
     cin>>name;
     cout<<"\nEnter the Account Number of Staff :-\t";
     cin>>account;
     cout<<"\nEnter the Phone Number of staff :-\t";
     cin>>phone;
     cout<<"\nEnter the E-mail ID of Staff :-\t";
     cin>>mail;
     break;

	default:
     cout<<"Invalit Input........";
     break;
    }
  clrscr();

// Ending Lines Start
  cout<<"\n|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n";
  cout<<"\n  Name      :-  "<<name;
  cout<<"\n  Account   :-  "<<account;
  cout<<"\n  Phone No  :-  "<<phone;
  cout<<"\n  E-mail    :-  "<<mail;
  cout<<"\n|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n";

  cout<<"\n\n\n\t\t\tPress [1] to Deposite the Money..\n";
  cout<<"\n\t\t\tPress [2] to Transfer the Money..\n";
  cout<<"\n\t\t\tPress [3] to Withdrwal the Money..\n\n\t\t\t\t\t";
  cin>>bank;

    switch(bank)
    {
	 case 1:
	 cout<<"\n\nDeposite The Money :\t";
	 cin>>b;
	 cout<<"\nYour Actual Amount :\t"<<a;
	 c=a+b;
	 cout<<"\n\nCongrates Your Amount has been Deposited ..!";
	 cout<<"\nAccount Balance :\t"<<c;
	 break;

	 case 2:
	 cout<<"\n\nTransfer The Money :\t";
	 cin>>b;
	 cout<<"\nYour Actual Amount :\t"<<a;
	 c=a-b;
	 cout<<"\n\nCongrates Your Amount has been Transfer ..!";
	 cout<<"\nAccount Balance :\t"<<c;
	 break;

	 case 3:
	 cout<<"\n\nWithdrwal The Money :\t";
	 cin>>b;
	 cout<<"\n Your Actual Amount :\t"<<a;
	 c=a-b;
	 cout<<"\n\nCongrates Your Amount has been Withdrwal ..!";
	 cout<<"\nAccount Balance :\t"<<c;
	 break;

	 default:
	 cout<<"\nInvalid Input......";
	 break;
    }
  getch();
}