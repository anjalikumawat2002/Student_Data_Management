#include<iostream>

using namespace std;
string password="welcome";
string fname[100],lname[100],section[100],rollno[100];
int deposit=0,arr1[100],arr2[100],arr3[100],arr4[100],arr5[100],standard[100];
float sum[100];
void create_New_Record()
{

	int choice;
	k:
	cout<<"Enter the number of students = ";
	while(!(cin >> choice))
	{
		cout<<"Please enter a number"<<endl;
		cin.clear();
		cin.ignore(100, '\n');
		goto k;
	}
	if(deposit==0)
	{
	deposit=deposit+choice;
	for(int i=0;i<choice;i++)
	{
		cout<<"\nEnter the data of student "<<i+1<<endl<<endl;
		a:
		cout<<"Enter the first name of the student = ";
		cin>>fname[i];
		for(int k=0;k<sizeof(fname[i]);k++)
		{
			if((fname[i][k]>='A') && (fname[i][k]<='z'))
			{
				break;
			}
			else
			{
				cout<<"Please enter only characters"<<endl;
				goto a;
			}
		}
		z:
		cout<<"Enter the last name of the student = ";
		cin>>lname[i];
		for(int k=0;k<sizeof(lname[i]);k++)
		{
			if((lname[i][k]>='A') && (lname[i][k]<='z'))
			{
				break;
			}
			else
			{
				cout<<"Please enter only characters"<<endl;
				goto z;
			}
		}
		let:
		cout<<"Enter the roll number of the student =";
		cin>>rollno[i];
		for(int k=0;k<sizeof(rollno[i]);k++)
		{
			if((rollno[i][k]>='1') && (rollno[i][k]<='9'))
			{
				break;
			}
			else
			{
				cout<<"Please enter only numbers"<<endl;
				goto let;
			}
		}
		for(int j=0;j<i;j++)
		{
			if(rollno[j]==rollno[i])
			{
				cout<<"This roll number is already used"<<endl;
				goto let;
			}
		}
		y:
		cout<<"Enter the class of the student = ";
		while(!(cin>>standard[i]))
		{
			cout<<"Please enter a number"<<endl;
			cin.clear();
			cin.ignore(100, '\n');
			goto y;
		}
		if((standard[i]>=1)&&(standard[i]<=12))
		{
		}
		else
		{
			cout<<"Please enter valid class"<<endl;
			goto y;
		}
		b:
		cout<<"Enter the section of the student = ";
		cin>>section[i];
		for(int k=0;k<sizeof(section[i]);k++)
		{
			if((section[i][k]>='A') && (section[i][k]<='z'))
			{
				break;
			}
			else
			{
				cout<<"Please enter only characters"<<endl;
				goto b;
			}
		}
		go:
		cout<<"Enter the marks of english of the student = ";
		while(!(cin>>arr1[i]))
		{
			cout<<"Please enter a number"<<endl;
			cin.clear();
			cin.ignore(100, '\n');
			goto go;
		}
		if((arr1[i]>=0)&&(arr1[i]<=100))
		{
		}
		else
		{
			cout<<"Please enter valid marks"<<endl;
			goto go;
		}
		to:
		cout<<"Enter the marks of  hindi of the student = ";
		while(!(cin>>arr2[i]))
		{
			cout<<"Please enter a number"<<endl;
			cin.clear();
			cin.ignore(100, '\n');
			goto to;
		}
		if((arr2[i]>=0)&&(arr2[i]<=100))
		{
		}
		else
		{
			cout<<"Please enter valid marks"<<endl;
			goto to;
		}
		three:
		cout<<"Enter the marks of physics of the student = ";
		while(!(cin>>arr3[i]))
		{
			cout<<"Please enter a number"<<endl;
			cin.clear();
			cin.ignore(100, '\n');
			goto three;
		}
		if((arr3[i]>=0)&&(arr3[i]<=100))
		{
		}
		else
		{
			cout<<"Please enter valid marks"<<endl;
			goto three;
		}
		four:
		cout<<"Enter the marks of chemistry of the student = ";
		while(!(cin>>arr4[i]))
		{
			cout<<"Please enter a number"<<endl;
			cin.clear();
			cin.ignore(100, '\n');
			goto four;
		}
		if((arr4[i]>=0)&&(arr4[i]<=100))
		{
		}
		else
		{
			cout<<"Please enter valid marks"<<endl;
			goto four;
		}
		five:
		cout<<"Enter the marks of maths of the student = ";
		while(!(cin>>arr5[i]))
		{
			cout<<"Please enter a number"<<endl;
			cin.clear();
			cin.ignore(100, '\n');
			goto five;
		}
		if((arr5[i]>=0)&&(arr5[i]<=100))
		{
			sum[i]=arr1[i]+arr2[i]+arr3[i]+arr4[i]+arr5[i];
		}
		else
		{
			cout<<"Please enter valid marks"<<endl;
			goto five;
		}
	}
	}
	else
	{
	for(int i=deposit;i<deposit+choice;i++)
	{
		cout<<"\nEnter the data of student "<<i+1<<endl<<endl;
		set:
		cout<<"Enter the name of the student = ";
		cin>>fname[i];
		for(int k=0;k<sizeof(fname[i]);k++)
		{
			if((fname[i][k]>='A') && (fname[i][k]<='z'))
			{
				break;
			}
			else
			{
				cout<<"Please enter only characters"<<endl;
				goto set;
			}
		}
		x:
		cout<<"Enter the last name of the student = ";
		cin>>lname[i];
		for(int k=0;k<sizeof(lname[i]);k++)
		{
			if((lname[i][k]>='A') && (lname[i][k]<='z'))
			{
				break;
			}
			else
			{
				cout<<"Please enter only characters"<<endl;
				goto x;
			}
		}
		get:
		cout<<"Enter the roll number of the student =";
		cin>>rollno[i];
		for(int k=0;k<sizeof(rollno[i]);k++)
		{
			if((rollno[i][k]>='1') && (rollno[i][k]<='9'))
			{
				break;
			}
			else
			{
				cout<<"Please enter only numbers"<<endl;
				goto get;
			}
		}
		for(int j=0;j<i;j++)
		{
			if(rollno[j]==rollno[i])
			{
				cout<<"This roll number is already used"<<endl;
				goto get;
			}
		}
		n:
		cout<<"Enter the class of the student = ";
		while(!(cin>>standard[i]))
		{
			cout<<"Please enter a number"<<endl;
			cin.clear();
			cin.ignore(100, '\n');
			goto n;
		}
		if((standard[i]>=1)&&(standard[i]<=12))
		{
		}
		else
		{
			cout<<"Please enter valid class"<<endl;
			goto n;
		}
		jet:
		cout<<"Enter the section of the student = ";
		cin>>section[i];
		for(int k=0;k<sizeof(section[i]);k++)
		{
			if((section[i][k]>='A') && (section[i][k]<='z'))
			{
				break;
			}
			else
			{
				cout<<"Please enter only characters"<<endl;
				goto jet;
			}
		}
		six:
		cout<<"Enter the marks of english of the student = ";
		while(!(cin>>arr1[i]))
		{
			cout<<"Please enter a number"<<endl;
			cin.clear();
			cin.ignore(100, '\n');
			goto six;
		}
		if((arr1[i]>=0)&&(arr1[i]<=100))
		{
		}

		else
		{
			cout<<"Please enter valid marks"<<endl;
			goto six;
		}
		seven:
		cout<<"Enter the marks of  hindi of the student = ";
		while(!(cin>>arr2[i]))
		{
			cout<<"Please enter a number"<<endl;
			cin.clear();
			cin.ignore(100, '\n');
			goto seven;
		}
		if((arr2[i]>=0)&&(arr2[i]<=100))
		{
		}
		else
		{
			cout<<"Please enter valid marks"<<endl;
			goto seven;
		}
		eight:
		cout<<"Enter the marks of physics of the student = ";
		while(!(cin>>arr3[i]))
		{
			cout<<"Please enter a number"<<endl;
			cin.clear();
			cin.ignore(100, '\n');
			goto eight;
		}
		if((arr3[i]>=0)&&(arr3[i]<=100))
		{
		}
		else
		{
			cout<<"Please enter valid marks"<<endl;
			goto eight;
		}
		nine:
		cout<<"Enter the marks of chemistry of the student = ";
		while(!(cin>>arr4[i]))
		{
			cout<<"Please enter a number"<<endl;
			cin.clear();
			cin.ignore(100, '\n');
			goto nine;
		}
		if((arr4[i]>=0)&&(arr4[i]<=100))
		{
		}
		else
		{
			cout<<"Please enter valid marks"<<endl;
			goto nine;
		}
		ten:
		cout<<"Enter the marks of maths of the student = ";
		while(!(cin>>arr5[i]))
		{
			cout<<"Please enter a number"<<endl;
			cin.clear();
			cin.ignore(100, '\n');
			goto ten;
		}
		if((arr5[i]>=0)&&(arr5[i]<=100))
		{
			sum[i]=arr1[i]+arr2[i]+arr3[i]+arr4[i]+arr5[i];
		}
		else
		{
			cout<<"Please enter valid marks"<<endl;
			goto ten;
		}
	}
	deposit=deposit+choice;
	}
}
void modify_Existing_Record()
{
	string roll;
	if(deposit==0)
	{
		cout<<"\nNo data to modify"<<endl;
	}
	else
	{
		jin:
		cout<<"Enter the roll number of the student whose details you wants to modify = ";
		cin>>roll;
		for(int k=0;k<sizeof(roll);k++)
		{
			if((roll[k]>='1') && (roll[k]<='9'))
			{
				break;
			}
			else
			{
				cout<<"Please enter only numbers"<<endl;
				goto jin;
			}
		}
		for(int i=0;i<deposit;i++)
		{
			if(roll==rollno[i])
			{

				cout<<"\nEnter the data of student "<<endl<<endl;
				a:
				cout<<"Enter the name of the student = ";
				cin>>fname[i];
				for(int k=0;k<sizeof(fname[i]);k++)
				{
					if((fname[i][k]>='A') && (fname[i][k]<='z'))
					{
						break;
					}
					else
					{
						cout<<"Please enter only characters"<<endl;
						goto a;
					}
				}
				z:
				cout<<"Enter the last name of the student = ";
				cin>>lname[i];
				for(int k=0;k<sizeof(lname[i]);k++)
				{
					if((lname[i][k]>='A') && (lname[i][k]<='z'))
					{
						break;
					}
					else
					{
						cout<<"Please enter only characters"<<endl;
						goto z;
					}
				}
				let:
				cout<<"Enter the roll number of the student =";
				cin>>rollno[i];
				for(int k=0;k<sizeof(rollno[i]);k++)
				{
					if((rollno[i][k]>='1') && (rollno[i][k]<='9'))
					{
						break;
					}
					else
					{
						cout<<"Please enter only numbers"<<endl;
						goto let;
					}
				}
				for(int j=0;j<i;j++)
				{
					if(rollno[j]==rollno[i])
					{
						cout<<"This roll number is already used"<<endl;
						goto let;
					}
				}
				y:
				cout<<"Enter the class of the student = ";
				while(!(cin>>standard[i]))
				{
					cout<<"Please enter a number"<<endl;
					cin.clear();
					cin.ignore(100, '\n');
					goto y;
				}
				if((standard[i]>=1)&&(standard[i]<=12))
				{
				}
				else
				{
					cout<<"Please enter valid class"<<endl;
					goto y;
				}
				b:
				cout<<"Enter the section of the student = ";
				cin>>section[i];
				for(int k=0;k<sizeof(section[i]);k++)
				{
					if((section[i][k]>='A') && (section[i][k]<='z'))
					{
						break;
					}
					else
					{
						cout<<"Please enter only characters"<<endl;
						goto b;
					}
				}
				go:
				cout<<"Enter the marks of english of the student = ";
				while(!(cin>>arr1[i]))
				{
					cout<<"Please enter a number"<<endl;
					cin.clear();
					cin.ignore(100, '\n');
					goto go;
				}
				if((arr1[i]>=0)&&(arr1[i]<=100))
				{
				}
				else
				{
					cout<<"Please enter valid marks"<<endl;
					goto go;
				}
				to:
				cout<<"Enter the marks of  hindi of the student = ";
				while(!(cin>>arr2[i]))
				{
					cout<<"Please enter a number"<<endl;
					cin.clear();
					cin.ignore(100, '\n');
					goto to;
				}
				if((arr2[i]>=0)&&(arr2[i]<=100))
				{
				}
				else
				{
					cout<<"Please enter valid marks"<<endl;
					goto to;
				}
				three:
				cout<<"Enter the marks of physics of the student = ";
				while(!(cin>>arr3[i]))
				{
					cout<<"Please enter a number"<<endl;
					cin.clear();
					cin.ignore(100, '\n');
					goto three;
				}
				if((arr3[i]>=0)&&(arr3[i]<=100))
				{
				}
				else
				{
					cout<<"Please enter valid marks"<<endl;
					goto three;
				}
				four:
				cout<<"Enter the marks of chemistry of the student = ";
				while(!(cin>>arr4[i]))
				{
					cout<<"Please enter a number"<<endl;
					cin.clear();
					cin.ignore(100, '\n');
					goto four;
				}
				if((arr4[i]>=0)&&(arr4[i]<=100))
				{
				}
				else
				{
					cout<<"Please enter valid marks"<<endl;
					goto four;
				}
				five:
				cout<<"Enter the marks of maths of the student = ";
				while(!(cin>>arr5[i]))
				{
					cout<<"Please enter a number"<<endl;
					cin.clear();
					cin.ignore(100, '\n');
					goto five;
				}	
				if((arr5[i]>=0)&&(arr5[i]<=100))
				{
					sum[i]=arr1[i]+arr2[i]+arr3[i]+arr4[i]+arr5[i];
				}
				else
				{
					cout<<"Please enter valid marks"<<endl;
					goto five;
				}
			}
		}

	}
}
void delete_Record()
{
	if(deposit==0)
	{
		cout<<"\nNo data to delete"<<endl;
	}
	else
	{
		string roll;
		jin:
		cout<<"Enter the roll number of the student whose details you wants to delete = ";
		cin>>roll;
		for(int k=0;k<sizeof(roll);k++)
		{
			if((roll[k]>='1') && (roll[k]<='9'))
			{
				break;
			}
			else
			{
				cout<<"Please enter only numbers"<<endl;
				goto jin;
			}
		}
		for(int i=0;i<deposit;i++)
		{
			if(roll==rollno[i])	
			{
				for(int j=i;j<deposit;j++)
				{
					fname[j]=fname[j+1];
					lname[j]=lname[j+1];
					rollno[j]=rollno[j+1];
					standard[j]=standard[j+1];
					section[j]=section[j+1];
					arr1[j]=arr1[j+1];
					arr2[j]=arr2[j+1];
					arr3[j]=arr3[j+1];
					arr4[j]=arr4[j+1];
					arr5[j]=arr5[j+1];
				}
				deposit--;
				cout<<"\nYour required record is deleted "<<endl;
			}	
		}
	}
}
void delete_All_Records()
{
	if(deposit==0)
	{
		cout<<"\nNo data to delete"<<endl;
	}
	else
	{
		deposit=0;
		cout<<"\nAll record is deleted"<<endl;
	}
}
void show_Record()
{
	if(deposit==0)
	{
		cout<<"\nNo data to show"<<endl;
	}
	else
	{
		string roll;
		jin:
		cout<<"Enter the roll number of the student whose details you wants to see = ";
		cin>>roll;
		for(int k=0;k<sizeof(roll);k++)
		{
			if((roll[k]>='1') && (roll[k]<='9'))
			{
				break;
			}
			else
			{
				cout<<"Please enter only numbers"<<endl;
				goto jin;
			}
		}
		for(int i=0;i<deposit;i++)
		{
			if(roll==rollno[i])
			{
				cout<<"Data of student: "<<i+1<<endl<<endl;
				cout<<"Name : "<<fname[i]<<" "<<lname[i]<<endl;
				cout<<"Roll number : "<<rollno[i]<<endl;
				cout<<"Class : "<<standard[i]<<endl;
				cout<<"Section : "<<section[i]<<endl;
				cout<<"Percentage : "<<sum[i]/5<<"%";
				if(sum[i]>170)
				{
					cout<<"\nPass";
				}
				else
				{
					cout<<"\nFail";
				}	
				break;
			}
		}
	}
}
void show_All_Records()
{
	if(deposit==0)
	{
		cout<<"\nNo data to show"<<endl;
	}

	for(int i=0;i<deposit;i++)
	{
		cout<<"Data of student: "<<i+1<<endl<<endl;
		cout<<"Name : "<<fname[i]<<" "<<lname[i]<<endl;
		cout<<"Roll number : "<<rollno[i]<<endl;
		cout<<"Class : "<<standard[i]<<endl;
		cout<<"Section : "<<section[i]<<endl;
		cout<<"Percentage : "<<sum[i]/5<<"%";
		if(sum[i]>170)
		{
			cout<<"\nPass";
		}
		else
		{
			cout<<"\nFail";
		}
	}
}

int main()
{
	// std::cout << emojicpp::emojize("Emoji :smile: for c++ :+1:") << std::endl;
	int operation;
	k:
	string p;
	cout<<"To access database you have to enter passwords first"<<endl;
	cin>>p;
	if (p==password)
	{
			while(true)
	{
	cout<<"\nEnter 1 to create new record";
	cout<<"\nEnter 2 to modify existing record";
	cout<<"\nEnter 3 to delete record";
	cout<<"\nEnter 4 to delete all record";
	cout<<"\nEnter 5 to show record";
	cout<<"\nEnter 6 to show all record"<<endl;
	cout<<"Enter 7 to exit"<<endl;
	
	while(!(cin >> operation))
	{
		cout<<"Please enter a number"<<endl;
		cin.clear();
		cin.ignore(100, '\n');
		goto k;
	}
	switch(operation)
	{
		case 1: create_New_Record();
			break;
		case 2: modify_Existing_Record();
			break;
		case 3: delete_Record();
			break;
		case 4: delete_All_Records();
			break;
		case 5: show_Record();
			break;
		case 6: show_All_Records();
			break;
		case 7: exit(0);
			break;
		default: cout<<"Wrong Entry"<<endl;
			 break;
	}
	}
		/* code */
	}
	else
	{
		cout<<"You have entered wrong passwords";
	}
	

}
