//                                     PROJECT PLAN
//                               BOOKSTORE MANAGEMENT SYSTEM
//                                      GROUP MEMBERS
// Mobeen Saeed (BCS213072)
// Ruquiya Nasir (BCS213065)
// Laiba Shahzadi (BCS213053)

#include<fstream>
#include<conio.h>
#include<iomanip>
#include<stdlib.h>
#include<string.h>
#include <iostream>

using namespace std;

class book_store{
	public:
		char book_name[20];
		char writer_name[20];
		float price;
		char code[10];
		virtual void book_data()=0; 
		
		void get_data()
		{
			cout<<"\nBook name  : ";
			cin>>book_name;
			
			cout<<"\nBook code  : ";
			cin>>code;
			
			cout<<"\nWriter name: ";
			cin>>writer_name;
			
			cout<<"\nPrice      : ";
			cin>>price;	
			
		}
		
};

class book_file:public book_store
{
	public:
		void fill()
		{
			fstream file("All_Books.txt",ios::out|ios::app);
			
			file.width(20);
			file<<setiosflags(ios::left);
			file<<book_name;
			
			file.width(20);
			file<<setiosflags(ios::left);
			file<<writer_name;
			
			file.width(10);
			file<<setiosflags(ios::right);
			file<<code;
			
			file.width(10);
			file<<setiosflags(ios::right);
			file<<price<<endl;
	
			file.close();
		}
		void file();
		
};

void book_file::file()
{
	char fill[20];
	
	get_data();
	strcpy(fill,code);
	strcat(fill,".txt");

	
	ofstream file(fill);
	file<<"Book name   : "<<book_name<<endl;
	file<<"Writer name : "<<writer_name<<endl;
	file<<"Book Code   : "<<code<<endl;
	file<<"Price       : "<<price<<endl;
 
	file.close();
}


class T1:public book_file{
	public:
		
		void book_data()
		{
			fstream file1("OOP.txt",ios::out|ios::app);
			file1<<endl;
			file1<<"Book name   : "<<book_name<<endl;
			file1<<"Writer name : "<<writer_name<<endl;
			file1<<"Book code   : "<<code<<endl;
			file1<<"Price       : "<<price<<endl;
			
			file1.close();
		}
};

class T2:public book_file{
	public:
		
		void book_data()
		{
			fstream file1("Discrete.txt",ios::out|ios::app);
			file1<<endl;
			file1<<"Book name   : "<<book_name<<endl;
			file1<<"Writer name : "<<writer_name<<endl;
            file1<<"Book code   : "<<code<<endl;
			file1<<"Price       : "<<price<<endl;
			
			file1.close();
		}
};

class T3:public book_file{
	public:
		
		void book_data()
		{
			fstream file1("English.txt",ios::out|ios::app);
			file1<<endl;
			file1<<"Book name   : "<<book_name<<endl;
			file1<<"Writer name : "<<writer_name<<endl;
			file1<<"Book code   : "<<code<<endl;
			file1<<"Price       : "<<price<<endl;
			
			file1.close();
		}
};

class T4:public book_file{
	public:
		void book_data()
		{
			fstream file1("Linera_alegebra.txt",ios::out|ios::app);
			file1<<endl;
			file1<<"Book name   : "<<book_name<<endl;
			file1<<"Writer name : "<<writer_name<<endl;
			file1<<"Book code   : "<<code<<endl;
			file1<<"Price       : "<<price<<endl;

			file1.close();
		}
};

class T5:public book_file{
	public:
		
		void book_data()
		{
			fstream file1("Story_books.txt",ios::out|ios::app);
			file1<<endl;
			file1<<"Book name   : "<<book_name<<endl;
			file1<<"Writer name : "<<writer_name<<endl;
            file1<<"Book code   : "<<code<<endl;
			file1<<"Price       : "<<price<<endl;
			
			file1.close();
		}
};

class add_books{
	public:
		add_books();
		~add_books(){
		}
};

add_books::add_books()
{
	T1 t1;
	T2 t2;
	T3 t3;
	T4 t4;
	T5 t5;
	
	int choice;

	while(1)
	{
		system("cls");
		cout<<"\n\n";
		cout<<"\t\t\t___________________________________"<<endl;
		cout<<"\t\t\t|           ADD BOOKS             |"<<endl;
		cout<<"\t\t\t|_________________________________|"<<endl;
		cout<<"\t\t\t| 1.  OOP  BOOK                   |"<<endl;
		cout<<"\t\t\t| 2. DISCRETE BOOK                |"<<" () ()"<<endl;
		cout<<"\t\t\t| 3. ENGLISH BOOK                 |"<<" (o o)"<<endl;
		cout<<"\t\t\t| 4. LINEAR ALEGEBRA BOOK         |"<<"c(   )"<<endl;
		cout<<"\t\t\t| 5. STORY BOOKS                  |"<<"  O O  "<<endl;
		cout<<"\t\t\t| 6. TO EXIT                      |"<<endl;
		cout<<"\t\t\t|_________________________________|"<<endl<<endl;                 
		cout<<"\n\t\t\t CHOICE:";
		cin>>choice;
	    while(choice >6||choice<1)
		{
				cout<<"\n\n\t\t\t INVALID OPTION! TRY AGAIN: ";
	    	cin>>choice;
		   }   
        if(choice == 1)
        {
        	t1.file();
		    t1.book_data();
			t1.fill();
		}
        
        if(choice == 2)
        {
        	t2.file();
		    t2.book_data();
			t2.fill();
		}
		
		if(choice == 3)
		{
			t3.file();
		    t3.book_data();
			t3.fill();
		}
		
		if(choice == 4)
		{
			t4.file();
		    t4.book_data();
			t4.fill();
		}
		
	    if(choice == 5)
		{
			t5.file();
		    t5.book_data();
			t5.fill();
		}
		   
		if(choice == 6)
		{
			cout<<"\a\t\tTHANKYOU :)"<<endl;
			break;
	    }  
	}
}
 
class display{
	public:
		display();
};

display::display()
{
	system("cls");
    int choice;
	char code[10],ch;

	while(1)
	{
		cout<<"\t\t\t___________________________________"<<endl;
		cout<<"\t\t\t|      DISPLAYING INFORMATION     | "<<endl;
		cout<<"\t\t\t|_________________________________|"<<endl;
		cout<<"\t\t\t| 1. ALL BOOKS                    |"<<endl;
		cout<<"\t\t\t| 2. OOP                          |"<<endl;
		cout<<"\t\t\t| 3. DISCRETE                     |"<<" () ()"<<endl;
		cout<<"\t\t\t| 4. ENGLISH                      |"<<" (o o)"<<endl;
		cout<<"\t\t\t| 5. LINEAR ALEGEBRA              |"<<"c(   )"<<endl;
		cout<<"\t\t\t| 6. STORY BOOKS                  |"<<"  O O  "<<endl;
		cout<<"\t\t\t| 7. EXIT                         |"<<endl;
		cout<<"\t\t\t|_________________________________|"<<endl<<endl;
		cout<<"\n\t\t\t CHOICE:";
     cin>>choice;
		while(choice>7||choice<1)
		{
			cout<<"\n\n\t\t\t INVALID OPTION! TRY AGAIN: ";
	    	cin>>choice;
		}
      if(choice==1)
      {
        system("cls");
        cout<<"\n\t\t\tDISPLAYING INFORMATION"<<endl;
         cout<<endl;
         cout<<"............................................................"<<endl;
         cout.width(20);
         cout<<setiosflags(ios::left);
         cout<<"Book Name ";

         cout.width(20);
         cout<<setiosflags(ios::left);
         cout<<"Writer Name ";

         cout.width(10);
         cout<<setiosflags(ios::right);
         cout<<"Code ";

         cout.width(10);
         cout<<setiosflags(ios::right);
         cout<<"Price :"<<endl;
          cout<<"............................................................"<<endl;
          cout<<endl;

         fstream file("All_Books.txt",ios::in);
         file.seekg(0);
         cout<<"\n";
         while(file)
         {
         	for(int r=0;r<1;r++)
	        {
	         	for(int c=0;c<10000000;c++)
		        {
		        }
				file.get(ch);
			    cout<<ch;
	        }
         }
       cout<<"............................................................"<<endl<<endl;
       cout<<"Press any key to continue......."<<endl;
       file.close();
       
		getch();
 
      }

		if (choice == 2)
		{
			system("cls");
			fstream file("OOP.txt",ios::in);
			file.seekg(0);
			if(!file)
			{
				cout<<"\n\t\t\tTHIS BOOK IS NOT AVAILABLE!!"<<endl<<endl;
			}
			else
			{
			   cout<<"\n\t\tDISPLAYING INFORMATION"<<endl;
			   cout<<"\n";
			   while(file)
			   {
			   	 for(int r=0;r<1;r++)
	             {
	         	   for(int c=0;c<10000000;c++)
		            {
		            }
				   file.get(ch);
			        cout<<ch;
	             } 
			   }
			    cout<<"Press any key to continue......."<<endl;
			    file.close();
			    getch();
			}
		}
		
		if(choice == 3)
		{
			system("cls");
			fstream file("Discrete.txt",ios::in);
			file.seekg(0);
			if(!file)
			{
				cout<<"\n\t\t\tTHIS BOOK IS NOT AVAILABLE!!"<<endl<<endl;
			}
	        else
	        {
	        	cout<<"\n\t\tDISPLAYING INFORMATION"<<endl;
			    cout<<"\n";
			    while(file)
			    {
			   	 for(int r=0;r<1;r++)
	             {
	         	   for(int c=0;c<10000000;c++)
		            {
		            }
				   file.get(ch);
			        cout<<ch;
	             } 
			    }
			    cout<<"Press any key to continue......."<<endl;
			    file.close();
			    getch();
			}
			
		}
		
		if(choice == 4)
		{
			system("cls");
			fstream file("English.txt",ios::in);
			file.seekg(0);
			if(!file)
			{
				cout<<"\n\t\t\tTHIS BOOK IS NOT AVAILABLE!!"<<endl<<endl;
			}
			else
			{
				cout<<"\n\t\tDISPLAYING INFORMATION"<<endl;
			    cout<<"\n";
			    while(file)
			    {
			   	 for(int r=0;r<1;r++)
	             {
	         	   for(int c=0;c<10000000;c++)
		            {
		            }
				   file.get(ch);
			        cout<<ch;
	             } 
			    }
			    cout<<"Press any key to continue......."<<endl;
			    file.close();
			    getch();
			}

		}
		if(choice == 5)
		{
			system("cls");
			fstream file("Linear_alegebra.txt",ios::in);
			file.seekg(0);
			if(!file)
			{
				cout<<"\n\t\t\tTHIS BOOK IS NOT AVAILABLE!!"<<endl<<endl;
			}
			else
			{
				cout<<"\t\tDISPLAYING INFORMATION"<<endl;
			    cout<<"\n";
			    while(file)
		       	{
			   	 for(int r=0;r<1;r++)
	             {
	         	   for(int c=0;c<10000000;c++)
		            {
		            }
				   file.get(ch);
			        cout<<ch;
	             } 
			    }
			    cout<<"Press any key to continue......."<<endl;
			    file.close();
			    getch();
			}
			
		}
		if(choice == 6)
		{
			system("cls");
			fstream file("Story_books.txt",ios::in);
			file.seekg(0);
			if(!file)
			{
				cout<<"\n\t\t\tTHIS BOOK IS NOT AVAILABLE!!"<<endl<<endl;
			}
			else
			{
				cout<<"\t\tDISPLAYING INFORMATION"<<endl;
			    cout<<"\n";
			    while(file)
		       	{
			   	 for(int r=0;r<1;r++)
	             {
	         	   for(int c=0;c<10000000;c++)
		            {
		            }
				   file.get(ch);
			        cout<<ch;
	             } 
			    }
			    cout<<"Press any key to continue......."<<endl;
			    file.close();
			    getch();
			}
			
		}
		if(choice == 7)
		{
			system("cls");
			cout<<"\a\t\t THANKYOU :)";
			break;
		}
	}	
}

class delete_book
{
public:
delete_book();
~delete_book(){
}
};

delete_book::delete_book()
{
	system("cls");
    int choice,choice1;
    char fill[20];
    char ch,code[10];
    while(1)
    {
    	system("cls");
		cout<<"\n\n\t\t---------DELETE--------\n\n";
		cout<<"\t\t1. DELETE ";
		cout<<"\n\t\t2. EXIT\n ";
		cout<<"\n\t\t CHOICE:";
		cin>>choice1;
		while(choice1 >2 || choice1<1)
		{
			cout<<"\n\n\t\t\t INVALID OPTION! TRY AGAIN: ";
	    	cin>>choice1;
		}
        if(choice1 == 1)
        {
        cout<<"\t\t\t _________________________________"<<endl;
        cout<<"\t\t\t|       DELETE BOOK SECTION       |"<<endl;
        cout<<"\t\t\t|_________________________________|"<<endl;
        cout<<"\t\t\t|1.OOP  BOOKS                     |"<<endl;
        cout<<"\t\t\t|2 DISCRETE BOOKS                 |"<<endl;
        cout<<"\t\t\t|3.ENGLISH BOOKS                  |"<<endl;
        cout<<"\t\t\t|4.LINEAR ALEGEBRA BOOKS          |"<<endl;
        cout<<"\t\t\t|5.STORY BOOKS                    |"<<endl;
        cout<<"\t\t\t|6.EXIT                           |"<<endl;
        cout<<"\t\t\t|_________________________________|"<<endl<<endl;                
        cout<<"\n\n\t\t\t\tCHOICE: ";
        cin>>choice;
        while(choice >6 || choice <1)
        {
        	cout<<"\n\n\t\t\t INVALID OPTION! TRY AGAIN: ";
	    	cin>>choice;
		}
		
        if(choice == 1)
        {
		    system("cls");
            remove("OOP.txt");
            cout<<"\n\n\t\tOOP Books Section Has Been Deleted!!"<<endl<<endl;
        }

        if(choice == 2)
        {
	        system("cls");
            remove("Discrete.txt");
            cout<<"\n\n\t\tDiscrete Books Section Has Been Deleted!!"<<endl<<endl;
        }
        
        if(choice == 3)
        {
     		system("cls");
            remove("English.txt");
            cout<<"\n\n\t\tEnglish Books Section Has Been Deleted!!"<<endl<<endl;
        }
        
        if(choice == 4)
        {
                system("cls");
                remove("Linear_alegebra.txt");
                cout<<"\n\n\t\tLinear Alegebra Books Section Has Been Deleted!!"<<endl<<endl;
        }
        
        if(choice == 5)
        {
			   system("cls");
               remove("Story_books.txt");
               cout<<"\n\n\t\tLinear Alegebra Books Section Has Been Deleted!!"<<endl<<endl;	
		}
		
        if(choice == 6)
        {
           break;
        }
            cout<<"\t\tThank you!!"<<endl<<endl<<endl;
           cout<<"Press any key to continue......."<<endl;
			getch();
		}
		if(choice1 == 2)
		{
			cout<<"\a";
			break;
		}
}
}

class search
{
	public:
		search();
		~search(){
		}
};

search::search()
{
	int choice;
	char fill[20];
	char code[10];
	char ch;
	while(1)
	{
		system("cls");
		cout<<"\n\n\t\t---------SEARCH--------\n\n";
		cout<<"\t\t1. SEARCH ";
		cout<<"\n\t\t2. EXIT\n ";
		cout<<"\n\t\t CHOICE:";
		cin>>choice;
		while(choice >2 || choice<1)
		{
			cout<<"\n\n\t\t\t INVALID OPTION! TRY AGAIN: ";
	    	cin>>choice;
		}
		if(choice == 1)
		{
			cout<<"Enter Code:";
			cin>>code;
			cout<<endl;
			strcpy(fill,code);
			strcat(fill,".txt");
			fstream file(fill,ios::in);
			if(!file)
			{
				cout<<"\n\t\tTHIS BOOK IS NOT AVAILABLE!!";
				cout<<"\n\t\t\t      () () "<<endl;
	            cout<<"\t\t\t      (o o) "<<endl;
	            cout<<"\t\t\t     c(   ) "<<endl;
	            cout<<"\t\t\t       O O  "<<endl;
			}
			else
			{
				while(file)
			    {
			    	for(int r=0;r<1;r++)
	                {
	         	       for(int c=0;c<10000000;c++)
		               {
		               }
				      file.get(ch);
			    	  cout<<ch;
	               }

			    }
			    file.close();
			}
			cout<<"Press any key to continue......."<<endl;
			getch();
		}
		if(choice == 2)
		{
			cout<<"\a";
			break;
		}
	}
}

class student
{
	private:
		char reg_no[20];
	    char student_name[20];
	    string date;
	    char ch;
	public:
	    student(){}
	    ~student(){}

		void crete_student()
		{
			system("cls");
			cout<<"\n\n";
			cout<<"\t\t\t      () () "<<endl;
	        cout<<"\t\t\t      (o o) "<<endl;
	        cout<<"\t\t\t     c(   ) "<<endl;
	        cout<<"\t\t\t       O O  "<<endl;
			cout<<"\t\t        NEW STUDENT RECORD       "<<endl;
			cout<<"\t\t_________________________________"<<endl;
			cout<<"\n\n\t\t REGISTRATION NUMBER:  ";
			cin>>reg_no;
			cout<<"\n\t\t STUDENT NAME:  ";
			cin>>student_name;
			cout<<"\n\t\t DATE (d/m/y): ";
			cin>>date;
			fstream file2("Student.txt",ios::out|ios::app);
			file2<<endl;
			file2<<"\t\tREGISTRATION NUMBER  :"<<reg_no<<endl;
			file2<<"\t\tSTUDENT NAME         :"<<student_name<<endl;
			file2<<"\t\tDATE (d/m/y)         :"<<date<<endl;
			cout<<"\t\t_________________________________"<<endl;
			cout<<"\n\n\t\tStudent record created !!"<<endl;
			cout<<"\n\nPress any key to continue......."<<endl;
	        getch();
			file2.close();
			
		}
		void display_student()
		{
			system("cls");
			cout<<"\n\n\t\t\t          () () "<<endl;
	        cout<<"\t\t\t          (o o) "<<endl;
	        cout<<"\t\t\t         c(   ) "<<endl;
	        cout<<"\t\t\t           O O  "<<endl;
			cout<<"\t\t         ALL STUDENT ENTRY RECORD          "<<endl;
			cout<<"\t\t        THAT HAS COME TO BOOKSHOUSE        "<<endl;
			cout<<"\t\t___________________________________________"<<endl;
			fstream file2("student.txt",ios::in);
            file2.seekg(0);
            cout<<"\n";
            while(file2)
            {
            	for(int r=0;r<1;r++)
	           {
	         	for(int c=0;c<10000000;c++)
		        {
		        }
                file2.get(ch);
                cout<<ch;
	           }
            }
            cout<<"\t\t___________________________________________"<<endl;
            cout<<"Press any key to continue......."<<endl;
            cout<<"\a";
            file2.close();
            getch();
		}
};

class buy_book{
	public:
	    char fill[20];
	    char ch,code[10];
	    float total_bill;
	    float price1=0;
	buy_book(){
	}
	~buy_book(){}
	void buy();
	float return_total_bill();

};
void buy_book::buy(){
	int choice;
	while(1)
	{
		system("cls");
		cout<<"\n\n\t\t---------BUY--------\n\n";
		cout<<"\t\t1. AVAILABLE BOOKS";
		cout<<"\n\t\t2. BUY ";
		cout<<"\n\t\t3. EXIT\n ";
		cout<<"\n\t\t CHOICE:";
		cin>>choice;
		while(choice >3 || choice <1)
		{
			cout<<"\n\n\t\t\t INVALID OPTION! TRY AGAIN: ";
	    	cin>>choice;
		}
		if(choice == 1)
		{
			system("cls");
        cout<<"\n\t\t\tAVAILABLE BOOKS"<<endl;
         cout<<"\n............................................................"<<endl;
         cout.width(20);
         cout<<setiosflags(ios::left);
         cout<<"Book Name ";

         cout.width(20);
         cout<<setiosflags(ios::left);
         cout<<"Writer Name ";

         cout.width(10);
         cout<<setiosflags(ios::right);
         cout<<"Code ";

         cout.width(10);
         cout<<setiosflags(ios::right);
         cout<<"Price :"<<endl;
          cout<<"............................................................"<<endl;
          cout<<endl;

         fstream file("All_Books.txt",ios::in);
         file.seekg(0);
         cout<<"\n";
         while(file)
         {
			   	 for(int r=0;r<1;r++)
	             {
	         	   for(int c=0;c<10000000;c++)
		            {
		            }
				   file.get(ch);
			        cout<<ch;
	             } 
         }
       cout<<"............................................................"<<endl<<endl;
       cout<<"Press any key to continue......."<<endl;
       file.close();
       
		getch();
 
		}
		if(choice == 2)
		{
			int option;
			char input3;
			do{
			system("cls");
			cout<<"\n\n\t\tENTER CODE:";
			cin>>code;
			cout<<endl;
			strcpy(fill,code);
			strcat(fill,".txt");
			fstream file(fill,ios::in);
			if(!file)
			{
				cout<<"\n\t\tTHIS BOOK IS NOT AVAILABLE!!";
				cout<<"\n\t\t\t      () () "<<endl;
	            cout<<"\t\t\t      (o o) "<<endl;
	            cout<<"\t\t\t     c(   ) "<<endl;
	            cout<<"\t\t\t       O O  "<<endl;
			}
			else{
				cout<<"\t\t...........YOUR ORDER IS ............."<<endl<<endl;
			    while(file)
			    {
			   	 for(int r=0;r<1;r++)
	             {
	         	   for(int c=0;c<10000000;c++)
		            {
		            }
				   file.get(ch);
			        cout<<ch;
	             } 
			    }
			    cout<<"PRICE OF BOOK: ";
			    cin>>price1;
				total_bill=total_bill+price1;
				cout<<"\nPress any key to continue......."<<endl;
			    file.close();
			    getch();
			    cout<<"\n\t\t..........CONFIRM YOUR ORDER.........."<<endl;
			    cout<<"\n\t\t1. CORRECT";
			    cout<<"\n\t\t2. NOT CORRECT";
			    cout<<"\n\n\t\t CHOICE:";
			    cin>>option;
			    while(option <1|| option >2)
				{
					cout<<"\n\n\t\t\t INVALID OPTION! TRY AGAIN: ";
	    	        cin>>option;
				}	
			    if(option == 1)
			    {
				   cout<<"\n\t\tORDER PLACED :)";
			    }
			    if (option == 2)
			    {
				   cout<<"\n\t\tSORRY FOR INCONVIENECE :( "<<endl;
			    }
			}		

			cout<<"\n\n\t\tDO YOU WANNA BUY MORE BOOKS?";
			cin>>input3;
			
			}while(input3 == 'Y'|| input3 == 'y');
		}
		if(choice == 3)
		{
			cout<<"\a";
			break;
		}
	}
}

float buy_book::return_total_bill()
{
	return total_bill;
}

class bill:public buy_book{
	public:
	bill();
};
bill::bill(){
		int choice;
	    int option2;
	    char ch;
	while(1)
	{
		system("cls");
		cout<<"\n\n\t\t---------DISPLAY BILL--------\n\n";
		cout<<"\t\t1. DISPLAY BILL ";
		cout<<"\n\t\t2. EXIT\n ";
		cout<<"\n\t\t CHOICE:";
		cin>>choice;
	    while(choice >2 || choice <1)
	  	{
		  	cout<<"\n\n\t\t\t INVALID OPTION! TRY AGAIN: ";
	    	cin>>choice;
	    }
		if(choice == 1)
		{
			system("cls");
			cout<<"\n\n";
			cout<<"\t\t\t      () () "<<endl;
	        cout<<"\t\t\t      (o o) "<<endl;
	        cout<<"\t\t\t     c(   ) "<<endl;
	        cout<<"\t\t\t       O O  "<<endl;
	        cout<<"\n\t\tDEAR CUSTOMER THANKYOU FOR VISTING !!";
	        cout<<"\n\n\t\t_____________________________________";
	        cout<<"\n\t\t   YOUR TOTAL BILL IS:  "<<total_bill;
	        cout<<"\n\t\t_____________________________________";
	        cout<<"\n\n\t\tHOW DO YOU WANNA PAY BILL?";
	        cout<<"\n\t\t1. CREDIT CARD ";
	        cout<<"\n\t\t2. CASH ";
	        cout<<"\n\n\t\t CHOICE:";
	        cin>>option2;
		    while(option2 >2 || option2< 1)
			{
				cout<<"\n\n\t\t\t INVALID OPTION! TRY AGAIN: ";
	    	    cin>>option2;
			}
			
	        if(option2 == 1)
	        {  
	        cout<<"\n\t\tYOUR CARD HAS BEEN SWIPED"<<endl;
	        	cout<<"\n\t\tTHANKYOU FOR SHOPPING :)"<<endl;
	        	cout<<"\n\nPress any key to continue......."<<endl;
	        	getch();
			}
			if (option2 == 2)
			{
				float customer_money=0;
			    float change=0;
			    float money=0;
				cout<<"\n\t\t CASH GIVEN: ";
				cin>>customer_money;
				 if(customer_money > total_bill)
				 {
				 	change=customer_money-total_bill;
				 	cout<<"\t\t CHANGE :" <<change<<endl;
				 	cout<<"\n\t\tTHANKYOU FOR SHOPPING :)"<<endl;
				 	cout<<"\n\nPress any key to continue......."<<endl;
			        getch();
				 }
				 if(customer_money < total_bill)
				 {
				 	float money;
				 	money=total_bill-customer_money;
				 	cout<<"\n\t\t YOU ARE SHORT OF "<< money<<"  MONEY :)";
				 	cout<<"\n\nPress any key to continue......."<<endl;
			        getch();
				 }
				 if(customer_money = total_bill)
				 {
				 	cout<<"\t\t THANKYOU :)";
				 	break;
				 }
			}
		}
		if(choice == 2)
		{
			cout<<"\a";
			break;
		}
	}
}

class start{
	private:
		const string username="sir_hashim_ayub";
		const string password="sir_hashim";
		string pass,un;
	public:
		start();
};

start::start()
{
	
	int choice;
	system("cls");
	cout<<"\n\n\n";
	cout<<"\t\t\t        () () "<<endl;
	cout<<"\t\t\t        (o o) "<<endl;
	cout<<"\t\t\t       c(   ) "<<endl;
	cout<<"\t\t\t         O O  "<<endl;
	cout<<"\t\t          LOGIN INFORMATION          "<<endl;
	cout<<"\t\t _____________________________________"<<endl;
	cout<<"\n\t\t         USERNAME:";
	cin>>un;
	cout<<"\n\t\t         PASSWORD:";
	cin>>pass;
	cout<<"\t\t _____________________________________"<<endl;
	
	if(username == un && password == pass)
	{
	while(1)
	{
		system("cls");
		cout<<"\n\n"<<endl;
	    cout<<"\t\t\t\t () () "<<"  () () "<<"  () () "<<endl;
	    cout<<"\t\t\t\t (o o) "<<"  (o o) "<<"  (o o) "<<endl;
	    cout<<"\t\t\t\tc(   ) "<<" c(   ) "<<" c(   ) "<<endl;
	    cout<<"\t\t\t\t  O O  "<<"   O O  "<<"   O O  "<<endl;

	    cout<<"\t\t    -------------------------------------------------"<<endl;
	    cout<<"\t\t    ' A ROOM WITHOUT BOOKS IS LIKE BODY WITHOUT SOUL '"<<endl;
	    cout<<"\t\t    -------------------------------------------------"<<endl<<endl;
		cout<<"\t\t\t____________________________________"<<endl;
		cout<<"\t\t\t|           MAIN MENU              |"<<endl;
		cout<<"\t\t\t|__________________________________|"<<endl;
		cout<<"\t\t\t|1. TO ADD BOOKS                   |"<<endl;
		cout<<"\t\t\t|2. TO DISPLAY BOOKS               |"<<endl;
		cout<<"\t\t\t|3. TO SEARCH SPECIFIC BOOK        |"<<endl;
		cout<<"\t\t\t|4. TO DELETE BOOKS                |"<<endl;
		cout<<"\t\t\t|5. TO EXIT                        |"<<endl;
		cout<<"\t\t\t|__________________________________|"<<endl<<endl;
		cout<<"\n\t\t\t CHOICE:";
		cin>>choice;
				
		while(choice >5 ||choice <0)
		{
		    cout<<"\n\n\t\t\t INVALID OPTION! TRY AGAIN: ";
	    	cin>>choice;
		}
		
		if(choice == 1)
		{
			add_books a;
		}
		
		if(choice == 2)
		{
			display d;
		}
		
		if(choice == 3)
		{
			search s;
		}
		
		if(choice == 4)
		{
	        delete_book db;
		}
		
		
		if(choice == 5)
		{
			system("cls");
			cout<<"\n\n";
			cout<<"\t\t ---------------------------------------"<<endl;
			cout<<"\t\t ' THERE IS NO FRIEND LOYAL THAN BOOK '"<<endl;
			cout<<"\t\t ---------------------------------------"<<endl;
			cout<<"\t\t\t\t () () "<<endl;
	        cout<<"\t\t\t\t (o o) "<<endl;
	        cout<<"\t\t\t\tc(   ) "<<endl;
	        cout<<"\t\t\t\t  O O  "<<endl;
	        cout<<"\t\t  ..........(: THANK YOU :)........."<<endl;
			break;
		}
	}
}
    else if(username != un)
    {
	    cout<<"\n\n\t\t\t INVALID USERNAME!! "<<endl<<endl;
	    cout<<"\t\t\t   Please try again :)";
    }
    
    else 
    {
	    cout<<"\n\n\t\t\t INVALID PASSWORD!! "<<endl<<endl;
	    cout<<"\t\t\t   Please try again :)";
    }
}

int main()
{
	int choice;
	int choice1;
	char input;
	char ch;
	student st;
	system("Color 03");
   cout<<"\n\n\a";
   cout<<"\t                   WELCOME TO BOOKHOUSE              ";
   cout<<"\n\t                    THE PAGES OF TIME                 "<<endl<<endl;
   cout<<"\t_________________________________________________________"<<endl;
   cout<<"\t||-------------------------------------------------------||"<<endl;
   cout<<"\t||.--.    .-._                        .----.             ||"<<endl;
   cout<<"\t|||==|____| |H|___            .---.___|    |_____.--.___ ||"<<endl;
   cout<<"\t|||  |====| | |oop|___        |+++|=-=| _ _|-=+=-|==|---|||"<<endl;
   cout<<"\t|||==|    | | |   | l|        |   |   | _/_|math |  | ^ |||"<<"           FINAL PROJECT  :  "<<endl;
   cout<<"\t|||  |    | | |   | i|   .--. |   |=-=| _/_|-=+=-|  | ^ |||"<<"               OBJECT ORIENTED PROGRAMMING"<<endl;
   cout<<"\t|||  |    | | |   | f| _( oo )|   |   |    |book |  | ^ |||"<<endl;
   cout<<"\t|||==|====| |H|xxx| e|   |''| |+++|=-=|""""    |-=+=-|==|---|||"<<"           MADE BY :"<<endl;
   cout<<"\t||`--^----'-^-^---'   `-' ""    '---^---^----^-----^--^---^||"<<"                Ruquiya Nasir (BCS213065)"<<endl;
   cout<<"\t||-------------------------------------------------------||"<<"                Mobeen Saeed (BCS213072)"<<endl;
   cout<<"\t||-------------------------------------------------------||"<<"                Laiba Shahzadi(BCS213053)"<<endl;
   cout<<"\t||               ___                   .-.__.-----. .---.||"<<endl;
   cout<<"\t||              |===| .---.   __   .---| |XX|<(*)>|_|^^^|||"<<"            SUBMITTED TO  :"<<endl;
   cout<<"\t||         ,  /(|   |_|ENG|__|''|__|:x:|=|  |     |=| U |||"<<"                Sir Hashim Ayub"<<endl;
   cout<<"\t||      _a'{ / (|===|+|   |++|  |==|   | |  |DISCR| | R |||"<<endl;
   cout<<"\t||       '/\\/ _(|===|-|   |  |''|  |:x:|=|  | ETE | | D |||"<<endl;
   cout<<"\t||_____   -\{___(|   |-|   |  |  |  |   | |  |     | | U |||"<<endl;
   cout<<"\t||       _(____)|===|+|[I]|DK|''|==|:x:|=|XX|<(*)>|=|^^^|||"<<endl;
   cout<<"\t||              `---^-^---^--^--'--^---^-^--^-----^-^---^||"<<endl;
   cout<<"\t||-------------------------------------------------------||"<<endl;
   cout<<"\t||_______________________________________________________||"<<endl;
   cout<<"\nPress any key to continue.......";
   while(0)
    {
	   cin>>ch;
       cout<<ch;
	}
	getch();

	do
	{
		
		system("cls");
		cout<<"\n\n";
		cout<<"\t               WELCOME TO BOOKHOUSE              ";
		cout<<"\n\t                THE PAGES OF TIME                "<<endl<<endl;
		cout<<"\t\t\t     () () "<<endl;
	    cout<<"\t\t\t     (o o) "<<endl;
	    cout<<"\t\t\t    c(   ) "<<endl;
	    cout<<"\t\t\t      O O  "<<endl;
		cout<<"\t -------------------------------------------------"<<endl;
	    cout<<"\t ' A READER LIVES THOUSAND LIVES BEFORE HE DIES '"<<endl;
	    cout<<"\t -------------------------------------------------"<<endl;
	    cout<<"\n\n\t1. ADMINISTRATOR "<<endl;
	    cout<<"\t2. STUDENT "<<endl;
	    cout<<"\t3. DISPLAY STUDENT RECORD"<<endl;
	    cout<<"\t4. EXIT "<<endl;
	    cout<<"\n\t\t CHOICE:";
	    cin>>choice;
	    		while(choice >4 || choice <1)
		{
			cout<<"\n\n\t\t\t INVALID OPTION! TRY AGAIN: ";
	    	cin>>choice;
		}
		
	    if (choice == 1)
	    {
	    	system("cls");
	    	cout<<"\n\n\n\t\t\tLOADING";
	        for(int r=0;r<8;r++)
	        {
	         	for(int c=0;c<100000000;c++)
		        {
		        }
		    cout<<"-";
	        }
		   start end;
	    }
	    
	    if (choice == 2)
	    {
	    	system("cls");
	    	cout<<"\n\n\n\t\t\tLOADING";
	        for(int r=0;r<8;r++)
	        {
	         	for(int c=0;c<100000000;c++)
		        {
		        }
		    cout<<"-";
	        }
	    	st.crete_student();
	    	while(1){
	    	system("cls");
	    	cout<<"\n\n";
	    	cout<<"\t\t.......CHOOSE WHAT YOU WANNA DO.......... "<<endl;
	    	cout<<"\n\n\t\t1. BUY BOOKS"<<endl;
	    	cout<<"\t\t2. DISPLAY BILL"<<endl;
	    	cout<<"\t\t3. EXIT "<<endl;
	    	cout<<"\n\t\t CHOICE:";
	    	cin>>choice1;
	    	while(choice1 >3 ||choice1<1)
			{
				cout<<"\n\n\t\t\t INVALID OPTION! TRY AGAIN: ";
	    	    cin>>choice1;
			}
	    
	    	if(choice1 == 1)
	    	{
	    		 buy_book bb;
	    		 bb.buy();
			}
			
			if(choice1 == 2)
			{
				bill b;
				b.return_total_bill();
			}
			
			if (choice1 == 3)
			{
				system("cls");
				cout<<"\n\n\t\tThankyou for coming ";
            	cout<<"\n\n\t\t Visit again :)\a";
            	break;
			}
	        }
	    }
	    
	    if(choice == 3)
	    {
	    	system("cls");
	    	cout<<"\n\n\n\t\t\tLOADING";
	        for(int r=0;r<8;r++)
	        {
	         	for(int c=0;c<100000000;c++)
		        {
		        }
		    cout<<"-";
	        }
		    st.display_student();
	    }
	    
		if(choice == 4)
		{
			cout<<"\a";
			break;
		}
		
		 cout<<endl<<endl;
	    cout<<"Do you wanna continue(y/n)?"<<endl;
	    cin>>input;
	}while(input == 'y'|| input == 'Y');
	return 0;
}  

