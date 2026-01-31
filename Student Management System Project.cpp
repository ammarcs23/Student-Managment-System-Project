#include<iostream>
#include<fstream>
#include<string>
#include<stdio.h>
#include<sstream>
using namespace std;
class person
{
	protected:
		int rollno[200];
		string name[200];
		int age [200];
		string gender[200];
		float gpa[200];
		string status[200];
	public:	
		virtual void add()=0;
		virtual void menu()=0;
		virtual void list()=0;
		virtual void viewclasses()=0;
		virtual void viewrecord()=0;
		virtual void login()=0;
		virtual void update()=0;
		virtual void remve()=0;
		virtual void search()=0;
		virtual void stdsearch()=0;	
};
class student:public person
{
	public:
		void add();
		void menu();
		void viewclasses();
		void list();
		void viewrecord();
		void login();
		void remve();
		void update();
		void search();
		void stdsearch();
};
void student::login()
{
	cout<<"\t\t\t******************************************************"<<endl;
	cout<<"\t\t\t\tWelcome to the student management system:)"<<endl;
	cout<<"\t\t\t******************************************************"<<endl;
	cout<<endl;
	cout<<"\t\t\t\t-----------"<<endl;
	cout<<"\t\t\t\tLogin as:"<<endl;
	cout<<"\t\t\t\t-----------"<<endl;
	cout<<"\t\t\t\t************"<<endl;
	cout<<"\t\t\t\t1-As Admin."<<endl;
	cout<<"\t\t\t\t************"<<endl;
	cout<<"\t\t\t\t2-As Student."<<endl;
	cout<<"\t\t\t\t************"<<endl;
	cout<<"\t\t\t\t3-Exit"<<endl;
	cout<<"\t\t\t\t************"<<endl;
	int choice;
	int count=3;
	char m;
	cout<<"\t\t\t\tEnter your choice:";
	cin>>choice;
	int pass=3;
	string password,p="Admin";
	if(choice==1)
	{
		while(pass>=1)
		{
			system("cls");
			cout<<"Enter Password:";
			cin>>password;
			if(password==p)
			{
			system("cls");
			menu();
			}
			else
			{
				pass--;
				cout<<"You Have "<<pass<<" Turns left."<<endl
				<<"Please Try Again"<<endl;
				if(pass==0)
				{
					system("cls");
					cout<<"You Have no turn left!!!."<<endl;
					cout<<"Would you like to go to Login Page again[y/n]:";
					cin>>m;
					if(m=='y' or m=='Y')
					{
						system("cls");
						login();
					}
					else
					{
						cout<<"Program is terminated.";
						exit(0);
					}
				}
			}
	}
}
	else if(choice==2)
	{
		system("cls");
		cout<<"\t\t\t***************************************************************"<<endl;
		cout<<"\t\t\t Welcome to the student management system(Student View Only)"<<endl;
		cout<<"\t\t\t***************************************************************"<<endl;
		stdsearch();
	}
	else if(choice==3)
	{
		system("cls");
		cout<<"Program is terminated.";
		exit(0);
	}
}
void student::viewclasses()
{
	cout<<"**********************"<<endl;
	cout<<"1-BS CS 2nd(Morning)\n";
	cout<<"**********************"<<endl;
	cout<<"2-BS CS 2nd(Evening)\n";
	cout<<"**********************"<<endl;
	cout<<"3-BS CS 4th\n";
	cout<<"**********************"<<endl;
	cout<<" 4-BS CS 6th\n";
	cout<<"**********************"<<endl;
	cout<<"5-BS CS 8th\n";
	cout<<"**********************"<<endl;
	cout<<"Do you want to go back to main menu[Y/N]:";
	char yn;
	cin>>yn;
	if(yn=='y' or yn=='Y')
	{
		system("CLS");
		menu();
	}
	else
	{
		system("cls");
		cout<<"Program is terminated.";
		exit(0);
	}
}
void student::list()
{
	cout<<"**********************"<<endl;
	cout<<"1-BS CS 2nd(Morning)\n";
	cout<<"**********************"<<endl;
	cout<<"2-BS CS 2nd(Evening)\n";
	cout<<"**********************"<<endl;
	cout<<"3-BS CS 4th\n";
	cout<<"**********************"<<endl;
	cout<<" 4-BS CS 6th\n";
	cout<<"**********************"<<endl;
	cout<<"5-BS CS 8th\n";
	cout<<"**********************"<<endl;
}
void student::menu()
{
	cout<<"\t\t\t*********************************************************"<<endl;
	cout<<"\t\t\t  Welcome to the student management system(Admin View)"<<endl;
	cout<<"\t\t\t*********************************************************"<<endl;
		cout<<endl<<endl;
		cout<<"\t\t\t****************"<<endl;
		cout<<"\t\t\t1-Insert Record.\n";
		cout<<"\t\t\t****************"<<endl;
		cout<<"\t\t\t2-Update Record.\n";
		cout<<"\t\t\t****************"<<endl;
		cout<<"\t\t\t3-View Record\n";
		cout<<"\t\t\t****************"<<endl;
		cout<<"\t\t\t4-View Classes\n";
		cout<<"\t\t\t****************"<<endl;
		cout<<"\t\t\t5-Search Record\n";
		cout<<"\t\t\t****************"<<endl;
		cout<<"\t\t\t6-Delete Record\n";
		cout<<"\t\t\t****************"<<endl;
		cout<<"\t\t\t7-Login\n";
		cout<<"\t\t\t****************"<<endl;
		cout<<"\t\t\tEnter menu number:";
		int n;
		cin>>n;
		if(n==1)
		{
			system("cls");
			add();
		}
		else if(n==2)
		{
			system("cls");
			update();
		}
		else if(n==3)
		{
			system("cls");
			viewrecord();
		}
		else if(n==4)
		{
			system("cls");
			viewclasses();
		}
		else if(n==5)
		{
			system("cls");
			search();
		}
		else if(n==6)
		{
			system("cls");
			remve();
		}
		else if(n==7)
		{
			system("cls");
			login();
		}
		else 
		{
			system("cls");
			cout<<"Invalid Number"<<endl;
			cout<<"would you like to main menu[y/n]:"<<endl;
			char mm;
			cin>>mm;
			if(mm='y' or mm=='Y')
			{
				system("cls");
				menu();
			}
			else
			{
				cout<<"Program is now terminated.";
				exit(0);
			}
		}
}
void student::add()
{
	system("cls");
	list();
	int nm,std;
	char m;
	cout<<"Which class's data would you like to enter:";
	cin>>nm;
	if(nm==1)
	{
		system("cls");
		cout<<"\t\t\t\t---------------------------------------------"<<endl;
		cout<<"\t\t\t\t\tData Entry of BS CS 2nd(Morning)."<<endl;
		cout<<"\t\t\t\t---------------------------------------------"<<endl;
		cout<<"How many student's data would you like to enter:";
		cin>>std;
		system("cls");
		ofstream fout;
		fout.open("C:\\Users\\Ammar Malik\\Desktop\\BS CS 2nd(Morning).csv",ios::app);
		for(int i=1;i<=std;i++)
		{
			system("cls");
			cout<<"\t\t\t\t---------------------------------------------"<<endl;
			cout<<"\t\t\t\t\tData Entry of BS CS 2nd(Morning)."<<endl;
			cout<<"\t\t\t\t---------------------------------------------"<<endl;
			cout<<"Enter Student NO "<<i<<" data"<<endl; 
			cout<<"Enter Roll No:";
			cin>>rollno[i];
			cin.ignore();
			cout<<"Enter Name:";
			getline(cin,name[i]);
			cout<<"Enter Age:";
			cin>>age[i];
			cin.ignore();
			cout<<"Enter Gender:";
			getline(cin,gender[i]);
			cout<<"Enter CGPA:";
			cin>>gpa[i];
			cin.ignore();
			cout<<"Enter Status:";
			cin>>status[i];
			fout<<rollno[i]<<","<<name[i]<<","<<age[i]
			<<","<<gender[i]<<","<<gpa[i]<<","<<status[i]<<endl;
			cout<<endl;
		}
		fout.flush();
		fout.close();
		cout<<"Data entry is completed."<<endl;
		cout<<"Would you like to go to main menu[y/n]:";
		cin>>m;
		if(m=='y' or m=='Y')
		{
			system("cls");
			menu();
		}
		else
		{
			cout<<"Program is terminated.";
			exit(0);
		}
	}
	else if(nm==2)
	{
		system("cls");
		cout<<"\t\t\t\t---------------------------------------------"<<endl;
		cout<<"\t\t\t\t\tData Entry of BS CS 2nd(Evening)."<<endl;
		cout<<"\t\t\t\t---------------------------------------------"<<endl;
		cout<<"How many student's data would you like to enter:";
		cin>>std;
		ofstream fout;
		fout.open("C:\\Users\\Ammar Malik\\Desktop\\BS CS 2nd(Evening).csv",ios::app);
		for(int i=1;i<=std;i++)
		{
			system("cls");
			cout<<"\t\t\t\t---------------------------------------------"<<endl;
			cout<<"\t\t\t\t\tData Entry of BS CS 2nd(Evening)."<<endl;
			cout<<"\t\t\t\t---------------------------------------------"<<endl;
			cout<<"Enter Student NO "<<i<<" data"<<endl;
			cout<<"Enter Roll No:";
			cin>>rollno[i];
			cin.ignore();
			cout<<"Enter Name:";
			getline(cin,name[i]);
			cout<<"Enter Age:";
			cin>>age[i];
			cin.ignore();
			cout<<"Enter Gender:";
			getline(cin,gender[i]);
			cout<<"Enter CGPA:";
			cin>>gpa[i];
			cin.ignore();
			cout<<"Enter Status:";
			cin>>status[i];
			fout<<rollno[i]<<","<<name[i]<<","<<age[i]
			<<","<<gender[i]<<","<<gpa[i]<<","<<status[i]<<endl;
		}
		fout.close();
		cout<<"Data entry is completed."<<endl;
		cout<<"Would you like to go to main menu[y/n]:";
		cin>>m;
		if(m=='y' or m=='Y')
		{
			system("cls");
			menu();
		}
		else
		{
			cout<<"Program is terminated.";
			exit(0);
		}
	}	
	else if(nm==3)
	{
		system("cls");
		cout<<"\t\t\t\t---------------------------------------------"<<endl;
		cout<<"\t\t\t\t\tData Entry of BS CS 4th."<<endl;
		cout<<"\t\t\t\t---------------------------------------------"<<endl;
		cout<<"How many student's data would you like to enter:";
		cin>>std;
		ofstream fout;
		fout.open("C:\\Users\\Ammar Malik\\Desktop\\BS CS 4th.csv",ios::app);
		for(int i=1;i<=std;i++)
		{
			system("cls");
			cout<<"\t\t\t\t---------------------------------------------"<<endl;
			cout<<"\t\t\t\t\tData Entry of BS CS 4th."<<endl;
			cout<<"\t\t\t\t---------------------------------------------"<<endl;
			cout<<"Enter Student NO "<<i<< "data"<<endl;
			cout<<"Enter Roll No:";
			cin>>rollno[i];
			cin.ignore();
			cout<<"Enter Name:";
			getline(cin,name[i]);
			cout<<"Enter Age:";
			cin>>age[i];
			cin.ignore();
			cout<<"Enter Gender:";
			getline(cin,gender[i]);
			cout<<"Enter CGPA:";
			cin>>gpa[i];
			cin.ignore();
			cout<<"Enter Status:";
			cin>>status[i];
			fout<<rollno[i]<<","<<name[i]<<","<<age[i]
			<<","<<gender[i]<<","<<gpa[i]<<","<<status[i]<<endl;
		}
		fout.close();
	}
	else if(nm==4)
	{
		system("cls");
		cout<<"\t\t\t\t---------------------------------------------"<<endl;
		cout<<"\t\t\t\t\tData Entry of BS CS 6th."<<endl;
		cout<<"\t\t\t\t---------------------------------------------"<<endl;
		cout<<"How many student's data would you like to enter:";
		cin>>std;
		ofstream fout;
		fout.open("C:\\Users\\Ammar Malik\\Desktop\\BS CS 6th.csv",ios::app);
		for(int i=1;i<=std;i++)
		{
			system("cls");
			cout<<"\t\t\t\t---------------------------------------------"<<endl;
			cout<<"\t\t\t\t\tData Entry of BS CS 6th."<<endl;
			cout<<"\t\t\t\t---------------------------------------------"<<endl;
			cout<<"Enter Student NO "<<i<< "data"<<endl;
			cout<<"Enter Roll No:";
			cin>>rollno[i];
			cin.ignore();
			cout<<"Enter Name:";
			getline(cin,name[i]);
			cout<<"Enter Age:";
			cin>>age[i];
			cin.ignore();
			cout<<"Enter Gender:";
			getline(cin,gender[i]);
			cout<<"Enter CGPA:";
			cin>>gpa[i];
			cin.ignore();
			cout<<"Enter Status:";
			cin>>status[i];
			fout<<rollno[i]<<","<<name[i]<<","<<age[i]
			<<","<<gender[i]<<","<<gpa[i]<<","<<status[i]<<endl;
		}
		fout.close();
		cout<<"Data entry is completed."<<endl;
		cout<<"Would you like to go to main menu[y/n]:";
		cin>>m;
		if(m=='y' or m=='Y')
		{
			system("cls");
			menu();
		}
		else
		{
			cout<<"Program is terminated.";
			exit(0);
		}
	}
	else if(nm==5)
	{
		system("cls");
		cout<<"\t\t\t\t---------------------------------------------"<<endl;
		cout<<"\t\t\t\t\tData Entry of BS CS 8th."<<endl;
		cout<<"\t\t\t\t---------------------------------------------"<<endl;
		cout<<"How many student's data would you like to enter:";
		cin>>std;
		ofstream fout;
		fout.open("C:\\Users\\Ammar Malik\\Desktop\\BS CS 8th.csv",ios::app);
		for(int i=1;i<=std;i++)
		{
			system("cls");
			cout<<"\t\t\t\t---------------------------------------------"<<endl;
			cout<<"\t\t\t\t\tData Entry of BS CS 8th."<<endl;
			cout<<"\t\t\t\t---------------------------------------------"<<endl;
			cout<<"Enter Student NO "<<i<<" data"<<endl;
			cout<<"Enter Roll No:";
			cin>>rollno[i];
			cin.ignore();
			cout<<"Enter Name:";
			getline(cin,name[i]);
			cout<<"Enter Age:";
			cin>>age[i];
			cin.ignore();
			cout<<"Enter Gender:";
			getline(cin,gender[i]);
			cout<<"Enter CGPA:";
			cin>>gpa[i];
			cin.ignore();
			cout<<"Enter Status:";
			cin>>status[i];
			fout<<rollno[i]<<","<<name[i]<<","<<age[i]
			<<","<<gender[i]<<","<<gpa[i]<<","<<status[i]<<endl;
		}
		fout.close();
		cout<<"Data entry is completed."<<endl;
		cout<<"Would you like to go to main menu[y/n]:";
		cin>>m;
		if(m=='y' or m=='Y')
		{
			system("cls");
			menu();
		}
		else
		{
			cout<<"Program is terminated.";
			exit(0);
		}
	}
	else
	{
		cout<<"Invalid number"<<endl;
		cout<<"Would you like to go to main menu [y/n]:";
	    char a;
	    cin>>a;
	    if(a=='y' or a=='Y')
	    {
	    	menu();
		}
		else
		{
			cout<<"Program is terminated.";
			exit(0);
		}
	}
}
void student::viewrecord()
{
	int ns;
	char c;
	//system("cls");
	ifstream file;
	list();
	int choice;
	cout<<"Which Class data do you want to see:";
	cin>>choice;
	if(choice==1)
	{
		system("cls");
		cout<<"How many student's data would you like to see:";
		cin>>ns;
		system("cls");
		cout<<"\t\t\t\t---------------------------------------------"<<endl;
		cout<<"\t\t\t\t\tData of Cs 2nd (Morning)."<<endl;
		cout<<"\t\t\t\t---------------------------------------------"<<endl;
		file.open("C:\\Users\\Ammar Malik\\Desktop\\BS CS 2nd(Morning).csv",ios::in);
		cout<<"+--------+-----+-------+-----------+"<<endl;
		cout<<"Roll No|Name|Age|Gender|CGPA|Status"<<endl;
		cout<<"+--------+-----+-------+-----------+"<<endl;
		for(int i=1;i<=ns;i++)
		{
			cout<<rollno[i]<<" | "<<name[i]<<" | "<<age[i]<<" | "<<gender[i]
			<<" | "<<gpa[i]<<" | "<<status[i]<<"\n";
			cout<<"+--------+-----+-------+-----------+"<<endl;
		}
		file.close();
		cout<<"Data viewing is completed"<<endl;
		cout<<"Would you like to go back to main menu[y/n]:";
		cin>>c;
		if(c=='y' || c=='Y')
		{
			system("cls");
			menu();
		}
		else
		{
			cout<<"Program is terminated.";
			exit(0);
		}
	}
	else if(choice==2)
	{
		system("cls");
		cout<<"How many student's data would you like to see:";
		cin>>ns;
		system("cls");
		cout<<"\t\t\t\t---------------------------------------------"<<endl;
		cout<<"\t\t\t\t\tData of Cs 2nd (Evening)."<<endl;
		cout<<"\t\t\t\t---------------------------------------------"<<endl;
		file.open("C:\\Users\\Ammar Malik\\Desktop\\BS CS 2nd(Evening).csv",ios::in);
		cout<<"+--------+-----+-------+-----------+"<<endl;
		cout<<"Roll No|Name|Age|Gender|CGPA|Status"<<endl;
		cout<<"+--------+-----+-------+-----------+"<<endl;
		for(int i=1;i<=ns;i++)
		{
			cout<<rollno[i]<<" | "<<name[i]<<" | "<<age[i]<<" | "<<gender[i]
			<<" | "<<gpa[i]<<" | "<<status[i]<<"\n";
			cout<<"+--------+-----+-------+-----------+"<<endl;
		}
		file.close();
		cout<<"Data viewing is completed"<<endl;
		cout<<"Would you like to go back to main menu[y/n]:";
		cin>>c;
		if(c=='y' or c=='Y')
		{
			system("cls");
			menu();
		}
		else
		{
			cout<<"Program is terminated.";
			exit(0);
		}
	}
	else if(choice==3)
	{
		system("cls");
		cout<<"How many student's data would you like to see:";
		cin>>ns;
		system("cls");
		cout<<"\t\t\t\t---------------------------------------------"<<endl;
		cout<<"\t\t\t\t\tData of Cs 4th."<<endl;
		cout<<"\t\t\t\t---------------------------------------------"<<endl;
		file.open("C:\\Users\\Ammar Malik\\Desktop\\BS CS 4th.csv",ios::in);
		cout<<"+--------+-----+-------+-----------+"<<endl;
		cout<<"Roll No|Name|Age|Gender|CGPA|Status"<<endl;
		cout<<"+--------+-----+-------+-----------+"<<endl;
		for(int i=1;i<=ns;i++)
		{
			cout<<rollno[i]<<" | "<<name[i]<<" | "<<age[i]<<" | "<<gender[i]
			<<" | "<<gpa[i]<<" | "<<status[i]<<"\n";
			cout<<"+--------+-----+-------+-----------+"<<endl;
		}
		file.close();
		cout<<"Data viewing is completed"<<endl;
		cout<<"Would you like to go back to main menu[y/n]:";
		cin>>c;
		if(c=='y' or c=='Y')
		{
			system("cls");
			menu();
		}
		else
		{
			cout<<"Program is terminated.";
			exit(0);
		}
	}
	else if(choice==4)
	{
		system("cls");
		cout<<"How many student's data would you like to see:";
		cin>>ns;
		system("cls");
		cout<<"\t\t\t\t---------------------------------------------"<<endl;
		cout<<"\t\t\t\t\tData of Cs 6th."<<endl;
		cout<<"\t\t\t\t---------------------------------------------"<<endl;
		file.open("C:\\Users\\Ammar Malik\\Desktop\\BS CS 6th.csv",ios::in);
		cout<<"+--------+-----+-------+-----------+"<<endl;
		cout<<"Roll No|Name|Age|Gender|CGPA|Status"<<endl;
		cout<<"+--------+-----+-------+-----------+"<<endl;
		for(int i=1;i<=ns;i++)
		{
			cout<<rollno[i]<<" | "<<name[i]<<" | "<<age[i]<<" | "<<gender[i]
			<<" | "<<gpa[i]<<" | "<<status[i]<<"\n";
			cout<<"+--------+-----+-------+-----------+"<<endl;
		}
		file.close();
		cout<<"Data viewing is completed"<<endl;
		cout<<"Would you like to go back to main menu[y/n]:";
		cin>>c;
		if(c=='y' or c=='Y')
		{
			system("cls");
			menu();
		}
		else
		{
			cout<<"Program is terminated.";
			exit(0);
		}
	}
	else if(choice==5)
	{
		system("cls");
		cout<<"How many student's data would you like to see:";
		cin>>ns;
		system("cls");
		cout<<"\t\t\t\t---------------------------------------------"<<endl;
		cout<<"\t\t\t\t\tData of Cs 8th."<<endl;
		cout<<"\t\t\t\t---------------------------------------------"<<endl;
		file.open("C:\\Users\\Ammar Malik\\Desktop\\BS CS 8th.csv",ios::in);
		cout<<"+--------+-----+-------+-----------+"<<endl;
		cout<<"Roll No|Name|Age|Gender|CGPA|Status"<<endl;
		cout<<"+--------+-----+-------+-----------+"<<endl;
		for(int i=1;i<=ns;i++)
		{
			cout<<rollno[i]<<" | "<<name[i]<<" | "<<age[i]<<" | "<<gender[i]
			<<" | "<<gpa[i]<<" | "<<status[i]<<"\n";
			cout<<"+--------+-----+-------+-----------+"<<endl;
		}
		file.close();
		cout<<"Data viewing is completed"<<endl;
		cout<<"Would you like to go back to main menu[y/n]:";
		cin>>c;
		if(c=='y' or c=='Y')
		{
			system("cls");
			menu();
		}
		else
		{
			cout<<"Program is terminated.";
			exit(0);
		}
	}
	else
	{
		cout<<"Invalid Number."<<endl;
		char mmm;
		cout<<"Do you want to go to main menu[y/n]:";
		cin>>mmm;
		if(mmm=='y' or mmm=='Y')
		{
			system("cls");
			menu();
		}
		else
		{
			system("cls");
			cout<<"Program is terminated.";
			exit(0);		
		}
		
	}
}
void student::update()
{
	list();
	int nbr;
	cout<<"Enter Number:";
	cin>>nbr;
	if(nbr==1)
	{
		system("cls");
		int r;
		string n;
		cout<<"Enter Roll No:";
		cin>>r;
		cin.ignore();
		cout<<"Enter Name:";
		getline(cin,n);
		int a;
		cout<<"Enter Age:";
		cin>>a;
		cin.ignore();
		string g;
		cout<<"Enter gender:";
		getline(cin,g);
		float gpaa;
		cout<<"Enter Gpa:";
		cin>>gpaa;
		cin.ignore();
		string stat;
		cout<<"Enter Status:";
		getline(cin,stat);
		ifstream file;
		file.open("C:\\Users\\Ammar Malik\\Desktop\\BS CS 2nd(Morning).csv",ios::in);
		ofstream temp;
		temp.open("temp.csv",ios::out);
		for(int i=1;i<=2;i++)
		{
			if(rollno[i]==r)
			{
				temp<<rollno[i]<<","<<n<<","<<a
				<<","<<g<<","<<gpaa<<","<<stat<<endl;
				cout<<endl;
			}
			else 
			{
				temp<<rollno[i]<<","<<name[i]<<","<<age[i]
				<<","<<gender[i]<<","<<gpa[i]<<","<<status[i]<<endl;
				cout<<endl;
			}
		}
		temp.close();
		file.close();
		remove("C:\\Users\\Ammar Malik\\Desktop\\BS CS 2nd(Morning).csv");
		rename("temp.csv","C:\\Users\\Ammar Malik\\Desktop\\BS CS 2nd(Morning).csv");
		cout<<"Data Updataion is completed."<<endl;
		cout<<"Do you want to go to main menu[y/n]:";
		char choi;
		cin>>choi;
		if(choi=='y' || choi=='Y')
		{
			system("Cls");
			menu();
		}
		else
		{
			system("CLS");
			cout<<"Program is terminated.";
			exit(0);
		}	
	}
	else if(nbr==2)
	{
		system("cls");
		int r;
		string n;
		cout<<"Enter Roll No:";
		cin>>r;
		cin.ignore();
		cout<<"Enter Name:";
		getline(cin,n);
		int a;
		cout<<"Enter Age:";
		cin>>a;
		cin.ignore();
		string g;
		cout<<"Enter gender:";
		getline(cin,g);
		float gpaa;
		cout<<"Enter Gpa:";
		cin>>gpaa;
		cin.ignore();
		string stat;
		cout<<"Enter Status:";
		getline(cin,stat);
		ifstream file;
		file.open("C:\\Users\\Ammar Malik\\Desktop\\BS CS 2nd(Evening).csv",ios::in);
		ofstream temp;
		temp.open("temp.csv",ios::out);
		for(int i=1;i<=2;i++)
		{
			if(rollno[i]==r)
			{
				temp<<rollno[i]<<","<<n<<","<<a
				<<","<<g<<","<<gpaa<<","<<stat<<endl;
				cout<<endl;
			}
			else 
			{
				temp<<rollno[i]<<","<<name[i]<<","<<age[i]
				<<","<<gender[i]<<","<<gpa[i]<<","<<status[i]<<endl;
				cout<<endl;
			}
		}
		temp.close();
		file.close();
		remove("C:\\Users\\Ammar Malik\\Desktop\\BS CS 2nd(Evening).csv");
		rename("temp.csv","C:\\Users\\Ammar Malik\\Desktop\\BS CS 2nd(Evening).csv");
		cout<<"Data Updataion is completed."<<endl;
		cout<<"Do you want to go to main menu[y/n]:";
		char choi;
		cin>>choi;
		if(choi=='y' || choi=='Y')
		{
			system("Cls");
			menu();
		}
		else
		{
			system("CLS");
			cout<<"Program is terminated.";
			exit(0);
		}	
	}
	else if(nbr==3)
	{
		system("cls");
		int r;
		string n;
		cout<<"Enter Roll No:";
		cin>>r;
		cin.ignore();
		cout<<"Enter Name:";
		getline(cin,n);
		int a;
		cout<<"Enter Age:";
		cin>>a;
		cin.ignore();
		string g;
		cout<<"Enter gender:";
		getline(cin,g);
		float gpaa;
		cout<<"Enter Gpa:";
		cin>>gpaa;
		cin.ignore();
		string stat;
		cout<<"Enter Status:";
		getline(cin,stat);
		ifstream file;
		file.open("C:\\Users\\Ammar Malik\\Desktop\\BS CS 4th.csv",ios::in);
		ofstream temp;
		temp.open("temp.csv",ios::out);
		for(int i=1;i<=2;i++)
		{
			if(rollno[i]==r)
			{
				temp<<rollno[i]<<","<<n<<","<<a
				<<","<<g<<","<<gpaa<<","<<stat<<endl;
				cout<<endl;
			}
			else 
			{
				temp<<rollno[i]<<","<<name[i]<<","<<age[i]
				<<","<<gender[i]<<","<<gpa[i]<<","<<status[i]<<endl;
				cout<<endl;
			}
		}
		temp.close();
		file.close();
		remove("C:\\Users\\Ammar Malik\\Desktop\\BS CS 4th.csv");
		rename("temp.csv","C:\\Users\\Ammar Malik\\Desktop\\BS CS 4th.csv");
		cout<<"Data Updataion is completed."<<endl;
		cout<<"Do you want to go to main menu[y/n]:";
		char choi;
		cin>>choi;
		if(choi=='y' || choi=='Y')
		{
			system("Cls");
			menu();
		}
		else
		{
			system("CLS");
			cout<<"Program is terminated.";
			exit(0);
		}	
	}
	else if(nbr==4)
	{
		system("cls");
		int r;
		string n;
		cout<<"Enter Roll No:";
		cin>>r;
		cin.ignore();
		cout<<"Enter Name:";
		getline(cin,n);
		int a;
		cout<<"Enter Age:";
		cin>>a;
		cin.ignore();
		string g;
		cout<<"Enter gender:";
		getline(cin,g);
		float gpaa;
		cout<<"Enter Gpa:";
		cin>>gpaa;
		cin.ignore();
		string stat;
		cout<<"Enter Status:";
		getline(cin,stat);
		ifstream file;
		file.open("C:\\Users\\Ammar Malik\\Desktop\\BS CS 6th.csv",ios::in);
		ofstream temp;
		temp.open("temp.csv",ios::out);
		for(int i=1;i<=2;i++)
		{
			if(rollno[i]==r)
			{
				temp<<rollno[i]<<","<<n<<","<<a
				<<","<<g<<","<<gpaa<<","<<stat<<endl;
				cout<<endl;
			}
			else 
			{
				temp<<rollno[i]<<","<<name[i]<<","<<age[i]
				<<","<<gender[i]<<","<<gpa[i]<<","<<status[i]<<endl;
				cout<<endl;
			}
		}
		temp.close();
		file.close();
		remove("C:\\Users\\Ammar Malik\\Desktop\\BS CS 6th.csv");
		rename("temp.csv","C:\\Users\\Ammar Malik\\Desktop\\BS CS 6th.csv");
		cout<<"Data Updataion is completed."<<endl;
		cout<<"Do you want to go to main menu[y/n]:";
		char choi;
		cin>>choi;
		if(choi=='y' || choi=='Y')
		{
			system("Cls");
			menu();
		}
		else
		{
			system("CLS");
			cout<<"Program is terminated.";
			exit(0);
		}	
	}
	else if(nbr==5)
	{
		system("cls");
		int r;
		string n;
		cout<<"Enter Roll No:";
		cin>>r;
		cin.ignore();
		cout<<"Enter Name:";
		getline(cin,n);
		int a;
		cout<<"Enter Age:";
		cin>>a;
		cin.ignore();
		string g;
		cout<<"Enter gender:";
		getline(cin,g);
		float gpaa;
		cout<<"Enter Gpa:";
		cin>>gpaa;
		cin.ignore();
		string stat;
		cout<<"Enter Status:";
		getline(cin,stat);
		ifstream file;
		file.open("C:\\Users\\Ammar Malik\\Desktop\\BS CS 8th.csv",ios::in);
		ofstream temp;
		temp.open("temp.csv",ios::out);
		for(int i=1;i<=2;i++)
		{
			if(rollno[i]==r)
			{
				temp<<rollno[i]<<","<<n<<","<<a
				<<","<<g<<","<<gpaa<<","<<stat<<endl;
				cout<<endl;
			}
			else 
			{
				temp<<rollno[i]<<","<<name[i]<<","<<age[i]
				<<","<<gender[i]<<","<<gpa[i]<<","<<status[i]<<endl;
				cout<<endl;
			}
		}
		temp.close();
		file.close();
		remove("C:\\Users\\Ammar Malik\\Desktop\\BS CS 8th.csv");
		rename("temp.csv","C:\\Users\\Ammar Malik\\Desktop\\BS CS 8th.csv");
		cout<<"Data Updataion is completed."<<endl;
		cout<<"Do you want to go to main menu[y/n]:";
		char choi;
		cin>>choi;
		if(choi=='y' || choi=='Y')
		{
			system("Cls");
			menu();
		}
		else
		{
			system("CLS");
			cout<<"Program is terminated.";
			exit(0);
		}	
	}
	else
	{
		system("Cls");
		cout<<"Wrong Number.\n Try again\n";
		update();
	}
}
void student::remve()
{
	list();
	cout<<"Enter the class of which data do you want to delete:";
	int n;
	cin>>n;
	if(n==1)
	{
		system("cls");
		cout<<"1-Do you want to delete a specific row\n2-OR Whole Data"<<endl;
		cout<<"Enter Number:";
		int d;
		cin>>d;
		if(d==1)
		{
			system("cls");
			ifstream file;
			file.open("C:\\Users\\Ammar Malik\\Desktop\\BS CS 2nd(Morning).csv",ios::in);
			ofstream temp;
			temp.open("temp.csv",ios::out);
			cout<<"Enter the roll no:";
			int r;
			cin>>r;
			for(int i=1;i<=2;i++)
			{
				if (rollno[i]!= r) 
				{
		            temp<<rollno[i]<<","<< name[i]<<","<<age[i]<< ","
		            <<gender[i]<<","<<gpa[i]<<","<<status[i]<<"\n";
				}
			}
			remove("C:\\Users\\Ammar Malik\\Desktop\\BS CS 2nd(Morning).csv");
			rename("temp.csv","C:\\Users\\Ammar Malik\\Desktop\\BS CS 2nd(Morning).csv");
			file.close();
			temp.close();
			if (remove("C:\\Users\\Ammar Malik\\Desktop\\BS CS 2nd(Morning).csv")!= 0)
			{
		        cout <<"Error deleting the original file!"<< endl;
		    }
		    if(rename("temp.csv", "C:\\Users\\Ammar Malik\\Desktop\\BS CS 2nd(Morning).csv")!=0)
			{
		        cout <<"Error renaming the temporary file!"<< endl;
		    }
		    else
		    {
		    	cout<<"Record deleted and file updated successfully!"<<endl;
		    	cout<<"Do You want to go to main menu[y/n]:";
		    	char c;
		    	cin>>c;
		    	if(c=='y' || c=='Y')
		    	{
		    		system("cls");
		    		menu();
				}
				else
				{
					system("cls");
					cout<<"Program Terminated.";
					exit(0);
				}
			}
		}
		else if(d==2)
		{
		    const char* file = "C:\\Users\\Ammar Malik\\Desktop\\BS CS 2nd(Morning).csv";  
		    if (remove(file) == 0)
		    {
		        cout << "File has been deleted successfully."<<endl;
		        cout<<"Do You want to go to main menu[y/n]:";
		    	char c;
		    	cin>>c;
		    	if(c=='y' || c=='Y')
		    	{
		    		system("cls");
		    		menu();
				}
				else
				{
					system("cls");
					cout<<"Program Terminated.";
					exit(0);
				}
		    }
		    else
		    {
		        perror("Error deleting the file");
		    }
		}
	}
	else if(n==2)
	{
		system("cls");
		cout<<"1-Do you want to delete a specific row\n2-OR Whole Data"<<endl;
		cout<<"Enter Number:";
		int d;
		cin>>d;
		if(d==1)
		{
			system("cls");
			ifstream file;
			file.open("C:\\Users\\Ammar Malik\\Desktop\\BS CS 2nd(Evening).csv",ios::in);
			ofstream temp;
			temp.open("temp.csv",ios::out);
			cout<<"Enter the roll no:";
			int r;
			cin>>r;
			for(int i=1;i<=2;i++)
			{
				if (rollno[i]!= r) 
				{
		            temp<<rollno[i]<<","<< name[i]<<","<<age[i]<< ","
		            <<gender[i]<<","<<gpa[i]<<","<<status[i]<<"\n";
				}
			}
			remove("C:\\Users\\Ammar Malik\\Desktop\\BS CS 2nd(Evening).csv");
			rename("temp.csv","C:\\Users\\Ammar Malik\\Desktop\\BS CS 2nd(Evening).csv");
			file.close();
			temp.close();
			if (remove("C:\\Users\\Ammar Malik\\Desktop\\BS CS 2nd(Evening).csv")!= 0)
			{
		        cout <<"Error deleting the original file!"<< endl;
		    }
		    if(rename("temp.csv", "C:\\Users\\Ammar Malik\\Desktop\\BS CS 2nd(Evening).csv")!=0)
			{
		        cout <<"Error renaming the temporary file!"<< endl;
		    }
		    else
		    {
		    	cout<<"Record deleted and file updated successfully!"<<endl;
		    	cout<<"Do You want to go to main menu[y/n]:";
		    	char c;
		    	cin>>c;
		    	if(c=='y' || c=='Y')
		    	{
		    		system("cls");
		    		menu();
				}
				else
				{
					system("cls");
					cout<<"Program Terminated.";
					exit(0);
				}
			}
		}
		else if(d==2)
		{
		    const char* file = "C:\\Users\\Ammar Malik\\Desktop\\BS CS 2nd(Evening).csv";  
		    if (remove(file) == 0)
		    {
		        cout << "File has been deleted successfully."<<endl;
		        cout<<"Do You want to go to main menu[y/n]:";
		    	char c;
		    	cin>>c;
		    	if(c=='y' || c=='Y')
		    	{
		    		system("cls");
		    		menu();
				}
				else
				{
					system("cls");
					cout<<"Program Terminated.";
					exit(0);
				}
		    }
		    else
		    {
		        perror("Error deleting the file");
		    }
		}
	}
	else if(n==3)
	{
		system("cls");
		cout<<"1-Do you want to delete a specific row\n2-OR Whole Data"<<endl;
		cout<<"Enter Number:";
		int d;
		cin>>d;
		if(d==1)
		{
			system("cls");
			ifstream file;
			file.open("C:\\Users\\Ammar Malik\\Desktop\\BS CS 4th.csv",ios::in);
			ofstream temp;
			temp.open("temp.csv",ios::out);
			cout<<"Enter the roll no:";
			int r;
			cin>>r;
			for(int i=1;i<=2;i++)
			{
				if (rollno[i]!= r) 
				{
		            temp<<rollno[i]<<","<< name[i]<<","<<age[i]<< ","
		            <<gender[i]<<","<<gpa[i]<<","<<status[i]<<"\n";
				}
			}
			remove("C:\\Users\\Ammar Malik\\Desktop\\BS CS 4th.csv");
			rename("temp.csv","C:\\Users\\Ammar Malik\\Desktop\\BS CS 4th.csv");
			file.close();
			temp.close();
			if (remove("C:\\Users\\Ammar Malik\\Desktop\\BS CS 4th.csv")!= 0)
			{
		        cout <<"Error deleting the original file!"<< endl;
		    }
		    if(rename("temp.csv","C:\\Users\\Ammar Malik\\Desktop\\BS CS 4th.csv")!=0)
			{
		        cout <<"Error renaming the temporary file!"<< endl;
		    }
		    else
		    {
		    	cout<<"Record deleted and file updated successfully!"<<endl;
		    	cout<<"Do You want to go to main menu[y/n]:";
		    	char c;
		    	cin>>c;
		    	if(c=='y' || c=='Y')
		    	{
		    		system("cls");
		    		menu();
				}
				else
				{
					system("cls");
					cout<<"Program Terminated.";
					exit(0);
				}
			}
		}
		else if(d==2)
		{
		    const char* file ="C:\\Users\\Ammar Malik\\Desktop\\BS CS 4th.csv";  
		    if (remove(file) == 0)
		    {
		        cout << "File has been deleted successfully."<<endl;
		        cout<<"Do You want to go to main menu[y/n]:";
		    	char c;
		    	cin>>c;
		    	if(c=='y' || c=='Y')
		    	{
		    		system("cls");
		    		menu();
				}
				else
				{
					system("cls");
					cout<<"Program Terminated.";
					exit(0);
				}
		    }
		    else
		    {
		        perror("Error deleting the file");
		    }
		}
	}
	else if(n==4)
	{
		system("cls");
		cout<<"1-Do you want to delete a specific row\n2-OR Whole Data"<<endl;
		cout<<"Enter Number:";
		int d;
		cin>>d;
		if(d==1)
		{
			system("cls");
			ifstream file;
			file.open("C:\\Users\\Ammar Malik\\Desktop\\BS CS 6th.csv",ios::in);
			ofstream temp;
			temp.open("temp.csv",ios::out);
			cout<<"Enter the roll no:";
			int r;
			cin>>r;
			for(int i=1;i<=2;i++)
			{
				if (rollno[i]!= r) 
				{
		            temp<<rollno[i]<<","<< name[i]<<","<<age[i]<< ","
		            <<gender[i]<<","<<gpa[i]<<","<<status[i]<<"\n";
				}
			}
			remove("C:\\Users\\Ammar Malik\\Desktop\\BS CS 6th.csv");
			rename("temp.csv","C:\\Users\\Ammar Malik\\Desktop\\BS CS 6th.csv");
			file.close();
			temp.close();
			if (remove("C:\\Users\\Ammar Malik\\Desktop\\BS CS 6th.csv")!= 0)
			{
		        cout <<"Error deleting the original file!"<< endl;
		    }
		    if(rename("temp.csv","C:\\Users\\Ammar Malik\\Desktop\\BS CS 6th.csv")!=0)
			{
		        cout <<"Error renaming the temporary file!"<< endl;
		    }
		    else
		    {
		    	cout<<"Record deleted and file updated successfully!"<<endl;
		    	cout<<"Do You want to go to main menu[y/n]:";
		    	char c;
		    	cin>>c;
		    	if(c=='y' || c=='Y')
		    	{
		    		system("cls");
		    		menu();
				}
				else
				{
					cout<<"Program Terminated.";
					exit(0);
				}
			}
		}
		else if(d==2)
		{
		    const char* file ="C:\\Users\\Ammar Malik\\Desktop\\BS CS 6th.csv";  
		    if (remove(file) == 0)
		    {
		        cout << "File has been deleted successfully."<<endl;
		        cout<<"Do You want to go to main menu[y/n]:";
		    	char c;
		    	cin>>c;
		    	if(c=='y' || c=='Y')
		    	{
		    		system("cls");
		    		menu();
				}
				else
				{
					system("cls");
					cout<<"Program Terminated.";
					exit(0);
				}
		    }
		    else
		    {
		        perror("Error deleting the file");
		    }
		}
	}
	else if(n==5)
	{
		system("cls");
		cout<<"1-Do you want to delete a specific row\n2-OR Whole Data"<<endl;
		cout<<"Enter Number:";
		int d;
		cin>>d;
		if(d==1)
		{
			system("cls");
			ifstream file;
			file.open("C:\\Users\\Ammar Malik\\Desktop\\BS CS 8th.csv",ios::in);
			ofstream temp;
			temp.open("temp.csv",ios::out);
			cout<<"Enter the roll no:";
			int r;
			cin>>r;
			for(int i=1;i<=2;i++)
			{
				if (rollno[i]!= r) 
				{
		            temp<<rollno[i]<<","<< name[i]<<","<<age[i]<< ","
		            <<gender[i]<<","<<gpa[i]<<","<<status[i]<<"\n";
				}
			}
			remove("C:\\Users\\Ammar Malik\\Desktop\\BS CS 8th.csv");
			rename("temp.csv","C:\\Users\\Ammar Malik\\Desktop\\BS CS 8th.csv");
			file.close();
			temp.close();
			if (remove("C:\\Users\\Ammar Malik\\Desktop\\BS CS 8th.csv")!= 0)
			{
		        cout <<"Error deleting the original file!"<< endl;
		    }
		    if(rename("temp.csv","C:\\Users\\Ammar Malik\\Desktop\\BS CS 8th.csv")!=0)
			{
		        cout <<"Error renaming the temporary file!"<< endl;
		    }
		    else
		    {
		    	cout<<"Record deleted and file updated successfully!"<<endl;
		    	cout<<"Do You want to go to main menu[y/n]:";
		    	char c;
		    	cin>>c;
		    	if(c=='y' || c=='Y')
		    	{
		    		system("cls");
		    		menu();
				}
				else
				{
					system("cls");
					cout<<"Program Terminated.";
					exit(0);
				}
			}
		}
		else if(d==2)
		{
		    const char* file ="C:\\Users\\Ammar Malik\\Desktop\\BS CS 8th.csv";  
		    if (remove(file) == 0)
		    {
		        cout << "File has been deleted successfully."<<endl;
		        cout<<"Do You want to go to main menu[y/n]:";
		    	char c;
		    	cin>>c;
		    	if(c=='y' || c=='Y')
		    	{
		    		system("cls");
		    		menu();
				}
				else
				{
					cout<<"Program Terminated.";
					exit(0);
				}
		    }
		    else
		    {
		        perror("Error deleting the file");
		    }
		}
	}
	else
	{
		system("Cls");
		cout<<"Wrong Number."<<endl;
		cout<<"Try Again."<<endl;
		remve();
	}
}
void student::search()
{
	list();
	cout<<"Enter Number:";
	int nbr;
	cin>>nbr;
	if(nbr==1)
	{
		system("cls");
		int r;
		cout<<"Enter Roll No:";
		cin>>r;
		ifstream file;
		file.open("C:\\Users\\Ammar Malik\\Desktop\\BS CS 2nd(Morning).csv",ios::in);
		for(int i=1;!file.eof();i++)
		{
			if(rollno[i]==r)
			{
				cout<<"+--------+-----+-------+-----------+"<<endl;
				cout<<"Roll No|Name|Age|Gender|CGPA|Status"<<endl;
				cout<<"+--------+-----+-------+-----------+"<<endl;
				cout<<rollno[i]<<" | "<<name[i]<<" | "<<age[i]<<" | "<<gender[i]
				<<" | "<<gpa[i]<<" | "<<status[i]<<"\n";
				cout<<"+--------+-----+-------+-----------+"<<endl<<endl;
				cout<<"Data Searchin is completed."<<endl<<endl;
				cout<<"Do you want to go to main menu[y/n]:";
				char c;
				cin>>c;
				if(c=='Y' || c=='y')
				{
					system("cls");
					menu();
				}
				else
				{
					system("cls");
					cout<<"Program is terminated.";
					exit(0);
				}
			}
		}
		file.close();
	}
	else if(nbr==2)
	{
		system("cls");
		int r;
		cout<<"Enter Roll No:";
		cin>>r;
		ifstream file;
		file.open("C:\\Users\\Ammar Malik\\Desktop\\BS CS 2nd(Evening).csv",ios::in);
		for(int i=1;!file.eof();i++)
		{
			if(rollno[i]==r)
			{
				cout<<"+--------+-----+-------+-----------+"<<endl;
				cout<<"Roll No|Name|Age|Gender|CGPA|Status"<<endl;
				cout<<"+--------+-----+-------+-----------+"<<endl;
				cout<<rollno[i]<<" | "<<name[i]<<" | "<<age[i]<<" | "<<gender[i]
				<<" | "<<gpa[i]<<" | "<<status[i]<<"\n";
				cout<<"+--------+-----+-------+-----------+"<<endl<<endl;
				cout<<"Data Searchin is completed."<<endl<<endl;
				cout<<"Do you want to go to main menu[y/n]:";
				char c;
				cin>>c;
				if(c=='Y' || c=='y')
				{
					system("cls");
					menu();
				}
				else
				{
					system("cls");
					cout<<"Program is terminated.";
					exit(0);
				}
			}
		}
		file.close();
	}
	else if(nbr==3)
	{
		system("cls");
		int r;
		cout<<"Enter Roll No:";
		cin>>r;
		ifstream file;
		file.open("C:\\Users\\Ammar Malik\\Desktop\\BS CS 4th.csv",ios::in);
		for(int i=1;!file.eof();i++)
		{
			if(rollno[i]==r)
			{
				cout<<"+--------+-----+-------+-----------+"<<endl;
				cout<<"Roll No|Name|Age|Gender|CGPA|Status"<<endl;
				cout<<"+--------+-----+-------+-----------+"<<endl;
				cout<<rollno[i]<<" | "<<name[i]<<" | "<<age[i]<<" | "<<gender[i]
				<<" | "<<gpa[i]<<" | "<<status[i]<<"\n";
				cout<<"+--------+-----+-------+-----------+"<<endl<<endl;
				cout<<"Data Searchin is completed."<<endl<<endl;
				cout<<"Do you want to go to main menu[y/n]:";
				char c;
				cin>>c;
				if(c=='Y' || c=='y')
				{
					system("cls");
					menu();
				}
				else
				{
					system("cls");
					cout<<"Program is terminated.";
					exit(0);
				}
			}
		}
		file.close();
	}
	else if(nbr==4)
	{
		system("cls");
		int r;
		cout<<"Enter Roll No:";
		cin>>r;
		ifstream file;
		file.open("C:\\Users\\Ammar Malik\\Desktop\\BS CS 6th.csv",ios::in);
		for(int i=1;!file.eof();i++)
		{
			if(rollno[i]==r)
			{
				cout<<"+--------+-----+-------+-----------+"<<endl;
				cout<<"Roll No|Name|Age|Gender|CGPA|Status"<<endl;
				cout<<"+--------+-----+-------+-----------+"<<endl;
				cout<<rollno[i]<<" | "<<name[i]<<" | "<<age[i]<<" | "<<gender[i]
				<<" | "<<gpa[i]<<" | "<<status[i]<<"\n";
				cout<<"+--------+-----+-------+-----------+"<<endl<<endl;
				cout<<"Data Searchin is completed."<<endl<<endl;
				cout<<"Do you want to go to main menu[y/n]:";
				char c;
				cin>>c;
				if(c=='Y' || c=='y')
				{
					system("cls");
					menu();
				}
				else
				{
					system("cls");
					cout<<"Program is terminated.";
					exit(0);
				}
			}
		}
		file.close();
	}
	else if(nbr==5)
	{
		system("cls");
		int r;
		cout<<"Enter Roll No:";
		cin>>r;
		ifstream file;
		file.open("C:\\Users\\Ammar Malik\\Desktop\\BS CS 8th.csv",ios::in);
		for(int i=1;!file.eof();i++)
		{
			if(rollno[i]==r)
			{
				cout<<"+--------+-----+-------+-----------+"<<endl;
				cout<<"Roll No|Name|Age|Gender|CGPA|Status"<<endl;
				cout<<"+--------+-----+-------+-----------+"<<endl;
				cout<<rollno[i]<<" | "<<name[i]<<" | "<<age[i]<<" | "<<gender[i]
				<<" | "<<gpa[i]<<" | "<<status[i]<<"\n";
				cout<<"+--------+-----+-------+-----------+"<<endl<<endl;
				cout<<"Data Searchin is completed."<<endl<<endl;
				cout<<"Do you want to go to main menu[y/n]:";
				char c;
				cin>>c;
				if(c=='Y' || c=='y')
				{
					system("cls");
					menu();
				}
				else
				{
					system("cls");
					cout<<"Program is terminated.";
					exit(0);
				}
			}
		}
		file.close();
	}
	else
	{
		system("cls");
		cout<<"Wrong Number."<<endl;
		cout<<"Try Again."<<endl;
		search();
	}
}
void student::stdsearch()
{
	list();
	cout<<"Enter Number:";
	int nbr;
	cin>>nbr;
	if(nbr==1)
	{
		system("cls");
		int r;
		cout<<"Enter Roll No:";
		cin>>r;
		ifstream file;
		file.open("C:\\Users\\Ammar Malik\\Desktop\\BS CS 2nd(Morning).csv",ios::in);
		for(int i=1;!file.eof();i++)
		{
			if(rollno[i]==r)
			{
				cout<<"+--------+-----+-------+-----------+"<<endl;
				cout<<"Roll No|Name|Age|Gender|CGPA|Status"<<endl;
				cout<<"+--------+-----+-------+-----------+"<<endl;
				cout<<rollno[i]<<" | "<<name[i]<<" | "<<age[i]<<" | "<<gender[i]
				<<" | "<<gpa[i]<<" | "<<status[i]<<"\n";
				cout<<"+--------+-----+-------+-----------+"<<endl<<endl;
				cout<<"Data Searching is completed."<<endl<<endl;
				cout<<"Do you want to go to Login page[y/n]:";
				char c;
				cin>>c;
				if(c=='Y' || c=='y')
				{
					system("cls");
					login();
				}
				else
				{
					system("cls");
					cout<<"Program is terminated.";
					exit(0);
				}
			}
		}
		file.close();
	}
	else if(nbr==2)
	{
		system("cls");
		int r;
		cout<<"Enter Roll No:";
		cin>>r;
		ifstream file;
		file.open("C:\\Users\\Ammar Malik\\Desktop\\BS CS 2nd(Evening).csv",ios::in);
		for(int i=1;!file.eof();i++)
		{
			if(rollno[i]==r)
			{
				cout<<"+--------+-----+-------+-----------+"<<endl;
				cout<<"Roll No|Name|Age|Gender|CGPA|Status"<<endl;
				cout<<"+--------+-----+-------+-----------+"<<endl;
				cout<<rollno[i]<<" | "<<name[i]<<" | "<<age[i]<<" | "<<gender[i]
				<<" | "<<gpa[i]<<" | "<<status[i]<<"\n";
				cout<<"+--------+-----+-------+-----------+"<<endl<<endl;
				cout<<"Data Searching is completed."<<endl<<endl;
				cout<<"Do you want to go to Login page[y/n]:";
				char c;
				cin>>c;
				if(c=='Y' || c=='y')
				{
					system("cls");
					login();
				}
				else
				{
					system("cls");
					cout<<"Program is terminated.";
					exit(0);
				}
			}
		}
		file.close();
	}
	else if(nbr==3)
	{
		system("cls");
		int r;
		cout<<"Enter Roll No:";
		cin>>r;
		ifstream file;
		file.open("C:\\Users\\Ammar Malik\\Desktop\\BS CS 4th.csv",ios::in);
		for(int i=1;!file.eof();i++)
		{
			if(rollno[i]==r)
			{
				cout<<"+--------+-----+-------+-----------+"<<endl;
				cout<<"Roll No|Name|Age|Gender|CGPA|Status"<<endl;
				cout<<"+--------+-----+-------+-----------+"<<endl;
				cout<<rollno[i]<<" | "<<name[i]<<" | "<<age[i]<<" | "<<gender[i]
				<<" | "<<gpa[i]<<" | "<<status[i]<<"\n";
				cout<<"+--------+-----+-------+-----------+"<<endl<<endl;
				cout<<"Data Searching is completed."<<endl<<endl;
				cout<<"Do you want to go to Login page[y/n]:";
				char c;
				cin>>c;
				if(c=='Y' || c=='y')
				{
					system("cls");
					login();
				}
				else
				{
					system("cls");
					cout<<"Program is terminated.";
					exit(0);
				}
			}
		}
		file.close();
	}
	else if(nbr==4)
	{
		system("cls");
		int r;
		cout<<"Enter Roll No:";
		cin>>r;
		ifstream file;
		file.open("C:\\Users\\Ammar Malik\\Desktop\\BS CS 6th.csv",ios::in);
		for(int i=1;!file.eof();i++)
		{
			if(rollno[i]==r)
			{
				cout<<"+--------+-----+-------+-----------+"<<endl;
				cout<<"Roll No|Name|Age|Gender|CGPA|Status"<<endl;
				cout<<"+--------+-----+-------+-----------+"<<endl;
				cout<<rollno[i]<<" | "<<name[i]<<" | "<<age[i]<<" | "<<gender[i]
				<<" | "<<gpa[i]<<" | "<<status[i]<<"\n";
				cout<<"+--------+-----+-------+-----------+"<<endl<<endl;
				cout<<"Data Searchin is completed."<<endl<<endl;
				cout<<"Do you want to go to Login page[y/n]:";
				char c;
				cin>>c;
				if(c=='Y' || c=='y')
				{
					system("cls");
					login();
				}
				else
				{
					system("cls");
					cout<<"Program is terminated.";
					exit(0);
				}
			}
		}
		file.close();
	}
	else if(nbr==5)
	{
		system("cls");
		int r;
		cout<<"Enter Roll No:";
		cin>>r;
		ifstream file;
		file.open("C:\\Users\\Ammar Malik\\Desktop\\BS CS 8th.csv",ios::in);
		for(int i=1;!file.eof();i++)
		{
			if(rollno[i]==r)
			{
				cout<<"+--------+-----+-------+-----------+"<<endl;
				cout<<"Roll No|Name|Age|Gender|CGPA|Status"<<endl;
				cout<<"+--------+-----+-------+-----------+"<<endl;
				cout<<rollno[i]<<" | "<<name[i]<<" | "<<age[i]<<" | "<<gender[i]
				<<" | "<<gpa[i]<<" | "<<status[i]<<"\n";
				cout<<"+--------+-----+-------+-----------+"<<endl<<endl;
				cout<<"Data Searchin is completed."<<endl<<endl;
				cout<<"Do you want to go to Login page[y/n]:";
				char c;
				cin>>c;
				if(c=='Y' || c=='y')
				{
					system("cls");
					login();
				}
				else
				{
					system("cls");
					cout<<"Program is terminated.";
					exit(0);
				}
			}
		}
		file.close();
	}
	else
	{
		system("cls");
		cout<<"Wrong Number."<<endl;
		cout<<"Try Again."<<endl;
		stdsearch();
	}
}
int main()
{
	system("color 9f");
	person *p1;
	student s1;
	p1=&s1;
	//p1->menu();
	//p1->add();
	//p1->list();
	//p1->viewrecord();
	p1->login();
	//p1->remve();
}
