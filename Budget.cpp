#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h> 
#include<process.h>
#include<math.h>
#include<windows.h>
#include <vector>   
#include <algorithm>
#include <unistd.h>

#define ESC 27
#define ENTER 13
#define UP 72
#define DOWN 80
#define BACKSPACE 8

#define INF 99
#define N 55
#define BLUE 1
#define WHITE 15
#define BLACK 0
#define CYAN 3

using namespace std; 

int indent = 29;

class Trans{  

	private:
		string title;
	  	string category;

		int day;
		int month;
		int year;
		int sum; 
		bool income;
		int term;
		
	public:  
		string get_title() const{return title;}
		string get_category() const{return category;}

		int get_day() const{return day;}
		int get_month() const{return month;}
		int get_year() const{return year;}
		int get_sum() const{return sum;}
		int get_income() const{return income;}
		int get_term() const{return term;}
	 	
	Trans()
	{   
		title = "none";
	    category = "other";
		day = 1;
		month = 1;
		year = 1920;
		sum = 0; 
		income = 1;
		term = 0;
	}
		  
	Trans(string title1, string category1, int day1, int month1, int year1, int sum1, bool income1, int term1)
	{  
		title = title1;
	    category = category1;
		day = day1;
		month = month1;
		year = year1;
		sum = sum1; 
		income = income1;
		term = term1;
	}
	  
	Trans(const Trans &b){    
		title = b.title;
	    category = b.category;
		day = b.day;
		month = b.month;
		year = b.year;
		sum = b.sum; 
		income = b.income;
		term = b.term;  
	}
	    
	~Trans(){}
		
	void print()
	{
		int length;
		int otstup=0;
			cout<<"   ";
			cout<<get_title(); 											for (int i=0; i<(15-get_title().size()); i++) cout<<" ";
			cout<<get_category(); 										for (int i=0; i<(15-get_category().size()); i++) cout<<" ";				
			cout<<get_term()<<" "; 										length = get_term(); while ((length /= 10) > 0) otstup++; for (int i=0; i<(8-otstup); i++) cout<<" ";					
			cout<<get_day()<<"."<<get_month()<<"."<<get_year()<<" ";	otstup = 0; if(get_day() > 9) otstup++;	if(get_month() > 9) otstup++; for (int i=0; i<(5-otstup); i++) cout<<" ";	
			cout<<get_sum()<<" "; 										otstup=0; length = get_sum(); while( ( length /= 10) > 0 ) otstup++; for (int i=0; i<(8-otstup); i++) cout<<" ";
			cout<<get_income();		
			
	}
	
};

vector<Trans> g1;
struct EntityComp 
	{
	  int property;
	  EntityComp(int property) {this->property = property;}
	  bool operator()(const Trans& s1, const Trans& s2) const
	  	{
		    if(property == 1)
		      	return s1.get_title()<s2.get_title();
		      	
	    	if(property == 2)
		      	return s1.get_category()<s2.get_category();
		      	
			if(property == 3)
		      	return s1.get_term()<s2.get_term();
		      	
		    if(property == 4)
		    {
		    	if (s1.get_year()!=s2.get_year())
		    		return s1.get_year()<s2.get_year();
		    	else {
						if (s1.get_month()!=s2.get_month())
		    				return s1.get_month()<s2.get_month();
		    			else return s1.get_day()<s2.get_day();		
		    			}
			}
		      	  	
		    if(property == 5)
		      	return s1.get_sum()<s2.get_sum();
		      	
		    if(property == 6)
		      	return s1.get_income()<s2.get_income();
		    
  		}
	};

int StartMenu(int switcher);
int Adm_mode();
HANDLE hCons = GetStdHandle(STD_OUTPUT_HANDLE);
		
int main() 
{ 
	system ("mode con cols=100 lines=20");
    SetConsoleTitle("Budget accounting system");
    system( "color F0" );
    HANDLE hCons = GetStdHandle(STD_OUTPUT_HANDLE);
    
	
		
	Trans a1( "first_credit", "credit", 2,10,2016, 20000, true,0);	
	Trans a2("my_salary", "salary", 1,10,2019, 15000, true, 1);
	Trans a3("auchan_loot", "food", 24,12,2019, 3000, false, 3);
	Trans a4("new_notebook", "gadgets", 5,7,2018, 30000, false, 1);
	Trans a5("water", "food", 22,12,2019, 30, false, 20);
	
	g1.push_back(a1);
	g1.push_back(a2);
	g1.push_back(a3);
	g1.push_back(a4);
	g1.push_back(a5);

	StartMenu(1);
	return 0; 
}


vector<Trans> Add(vector<Trans>& g1)
{
	system ("mode con cols=66 lines=20");
	int choice;
	int dy,mth,yr, am, trm, rt, prd;
	int prb, des;
	string ttl, cat;
	char addd[1][20]={"ADD TRANSACTION"};
	while(1)
	{	
		rt = 0;
		trm = 0;
		
		 for (int i=0; i<33 - strlen(addd[0])/2; i++) cout<<" "; for (int i=0; i<strlen(addd[0]); i++) cout<<addd[0][i]; cout<<endl<<endl;	
		
		do{		
			cout<<"Input title of transaction: ";
			cin>>ttl;
			
			}while(ttl.size()>12) ;
		
		
		do{		
			cout<<"Input category of transaction: ";
			cin>>cat;
			
			}while(ttl.size()>12) ;	
			
			
		do{		
			cout<<"Is it income or consumption (1/0): ";
			prb = getch();
		    cout<<prb-48<<endl;
		    
			}while((prb<48) || (prb>49 )) ;
		
		
		while(1)
		{
		    cout<<"Input periodicity of transaction: ";	
		    cin >> prd;
		    if(!cin) 
		    {
		       cin.clear();
		       while (cin.get() != '\n');
		    }
		    else break;
		 }
 
		while(1)
		{
		    cout<<"Input sum of transaction: ";	
		    cin>>am;
		    if(!cin) 
		    {
		       cin.clear();
		       while (cin.get() != '\n');
		    }
		    else break;
		 }
		
		cout<<"Input date of transaction: ";
		do
		{
		    cout<<"Day: ";
		    cin>>dy;
		    if(!cin) 
		    {
		       cin.clear();
		       while (cin.get() != '\n');
		    }
		 }while((dy>31) || (dy<1));
		
		do
		{
		    cout<<"Month: ";
		    cin>>mth;
		    if(!cin) 
		    {
		       cin.clear();
		       while (cin.get() != '\n');
		    }
		 }while((mth>12)||(mth<1));
		 
		 do
		{
		    cout<<"Year: ";
		    cin>>yr;
		    if(!cin) 
		    {
		       cout<<"Year(between 1900 & 2019): ";
		       cin.clear();
		       while (cin.get() != '\n');
		    }
		    
		 }while((yr>2019)|| (yr<1900));
		 
		g1.push_back(Trans(ttl, cat, dy, mth, yr, am ,prb, trm));
		
		do{		
			cout<<"Do u want to add 1 more (1/0): ";
			des = getch();
		    cout<<des-48<<endl;
		    
			}while((des<48) || (des>49 )) ;
		if (des == 48) StartMenu(1);
		system("cls");
	}
	
	return g1;
	
     do
    {
    	choice = getch();

	}while(choice!=ESC);
	
    if (choice == 224)
        choice = getch();
    if (choice == ESC)
		StartMenu(1);	
}

vector<Trans> Show(vector<Trans>& g1)
{	
	while(1){
		
		SetConsoleTextAttribute(hCons, (WORD) ((WHITE << 4) | BLACK));
		system("cls");
		char help[14][80]={"Press ESC to come back to menu", "HELP", "Buttons to use: ", "ESC - to back to previous menu", "UP/DOWN ARROW - to move", "ENTER - to select",
							"You can enter a full or incomplete name of station", "You can select a station by: ", "entering its name", "selecting the line", "List of transactions" };
		system ("mode con cols=100 lines=20");
		
		int choice;
		
		for (int i=0; i<29; i++) cout<<" "; for (int i=0; i<strlen(help[10]); i++) cout<<help[10][i]; cout<<endl<<endl;
		cout<<"N"; for (int i=0; i<5; i++) cout<<" ";
		cout<<"Title"; for (int i=0; i<15-5; i++) cout<<" ";
		cout<<"Category"; for (int i=0; i<15-8; i++) cout<<" ";
		cout<<"Period"; for (int i=0; i<10-6; i++) cout<<" ";
		cout<<"Date"; for (int i=0; i<10; i++) cout<<" ";
		cout<<"Sum"; for (int i=0; i<10-3; i++) cout<<" ";
		cout<<"Income"; 
		cout<<endl;
		for(int i = 0; i < g1.size(); i++)
			{
				cout<<i+1<<". ";
		    	g1[i].print();
		    	cout<<endl;
				}
	
	    cout<<endl;
	    cout<<endl<<"Sort by: "<<endl<<endl<<"1. Title"<<endl<<"2. Category"<<endl<<"3. Period"<<endl<<"4. Date"<<endl<<"5. Sum"<<endl<<"6. Income"<<endl<<"7. EXIT";
	    
	    do{		
			choice = getch();
			}
			while((choice<48) || (choice>55 )) ;
			
			
		if (choice == 49){
			sort(g1.begin(),g1.end(), EntityComp(1));
			cout<<"sorted by title";
		}
		
		if (choice == 50){
			sort(g1.begin(),g1.end(), EntityComp(2));
			cout<<"sorted by category";
		}	 
			
		if (choice == 51)
		{
			sort(g1.begin(),g1.end(), EntityComp(3));
			cout<<"sorted by period";
		}
			
		if (choice == 52){
			sort(g1.begin(),g1.end(), EntityComp(4));
			cout<<"sorted by date";
		}
			
		if (choice == 53)
		{
			sort(g1.begin(),g1.end(), EntityComp(5));
			cout<<"sorted by sum"<<endl;
		}
				
			
		if (choice == 54)
		{
			sort(g1.begin(),g1.end(), EntityComp(6));
			cout<<"sorted by income";
		}
		if (choice == 55) StartMenu(1);
		system("cls");
		for(int i = 0; i < g1.size(); i++)
			{
				cout<<i+1<<". ";
		    	g1[i].print();
		    	cout<<endl;
			}

	}
}


int Help()
{
	system ("mode con cols=66 lines=20");
	int choice;
	char help[13][80]={"Press ESC to come back to menu", "HELP", "Buttons to use: ", "ESC - to back to previous menu(where it`s aviable)", "UP/DOWN ARROW - to move", "ENTER - to select",
						"You can enter a full or incomplete name of station", "Adding transactions: ", "period, date, income, periodicity, sum - are numerical fields", "title and category must be less than 20 characters in length",
						"Sorting transactions: ", "You can sort y all fields", "You can sort only in ascending order"};
	
    system("cls");
    SetConsoleTextAttribute(hCons, (WORD) ((WHITE << 4) | BLUE));
    for (int i=0; i<33 - strlen(help[1])/2; i++) cout<<" "; for (int i=0; i<strlen(help[1]); i++) cout<<help[1][i]; cout<<endl<<endl;
    SetConsoleTextAttribute(hCons, (WORD) ((WHITE << 4) | BLACK));
    
    cout<<"--"; for (int i=0; i<strlen(help[2]); i++) cout<<help[2][i]; cout<<endl;
    for (int i=0; i<2; i++) cout<<" "; cout<<"-"; for (int i=0; i<strlen(help[3]); i++) cout<<help[3][i]; cout<<endl;
    for (int i=0; i<2; i++) cout<<" "; cout<<"-"; for (int i=0; i<strlen(help[4]); i++) cout<<help[4][i]; cout<<endl;
    for (int i=0; i<2; i++) cout<<" "; cout<<"-"; for (int i=0; i<strlen(help[5]); i++) cout<<help[5][i]; cout<<endl;
    cout<<endl;
    
    cout<<"--"; for (int i=0; i<strlen(help[7]); i++) cout<<help[7][i]; cout<<endl;
    for (int i=0; i<2; i++) cout<<" "; cout<<"-"; for (int i=0; i<strlen(help[8]); i++) cout<<help[8][i]; cout<<endl;
    for (int i=0; i<2; i++) cout<<" "; cout<<"-"; for (int i=0; i<strlen(help[9]); i++) cout<<help[9][i]; cout<<endl;
    cout<<endl;
    
    cout<<"--"; for (int i=0; i<strlen(help[10]); i++) cout<<help[10][i]; cout<<endl;
    for (int i=0; i<2; i++) cout<<" "; cout<<"-"; for (int i=0; i<strlen(help[11]); i++) cout<<help[11][i]; cout<<endl;
    for (int i=0; i<2; i++) cout<<" "; cout<<"-"; for (int i=0; i<strlen(help[12]); i++) cout<<help[12][i]; cout<<endl;
    
    SetConsoleTextAttribute(hCons, (WORD) ((WHITE << 4) | CYAN));
    cout<<endl<<endl;
    for (int i=0; i<13; i++) cout<<" ";cout<<"|"; for (int i=0; i<40; i++) cout<<"-"; cout<<"|"<<endl;
	for (int i=0; i<13; i++) cout<<" ";cout<<"|"; 	for (int i=0; i<(40-strlen(help[0]))/2; i++) cout<<" "; for (int i=0; i<strlen(help[0]); i++) cout<<help[0][i]; for (int i=0; i<(40-strlen(help[0]))/2; i++) cout<<" "; cout<<"|"<<endl;
    for (int i=0; i<13; i++) cout<<" ";cout<<"|"; for (int i=0; i<40; i++) cout<<"-"; cout<<"|"<<endl;
    SetConsoleTextAttribute(hCons, (WORD) ((WHITE << 4) | BLACK));
     do
    {
    	choice = getch();

	}while(choice!=ESC);
	
    if (choice == 224)
        choice = getch();
    if (choice == ESC)
		StartMenu(1);	     
}

vector<Trans> Admin(vector<Trans>& g1)
{
	system ("mode con cols=66 lines=20");
	
	int choice;
	char help[10][80]={"Press ESC to come back to menu", "ADMIN", "Input password: " };
	string password;
	string true_password = "keklol";
    system("cls");
    system( "color 0F" );
    SetConsoleTextAttribute(hCons, (WORD) ((BLACK << 4) | WHITE));
    for (int i=0; i<33 - strlen(help[1])/2; i++) cout<<" "; for (int i=0; i<strlen(help[1]); i++) cout<<help[1][i]; cout<<endl<<endl;
    SetConsoleTextAttribute(hCons, (WORD) ((BLACK << 4) | WHITE));
    
    for (int i=0; i<strlen(help[2]); i++) cout<<help[2][i];
    int number;
    
    while(1)
    {
		cin>>password;

    	if (password == true_password)
	    	{
	    		while(1)
				{
		    		system("cls");
				    system( "color 0F" );
				    SetConsoleTextAttribute(hCons, (WORD) ((BLACK << 4) | WHITE));
				    for (int i=0; i<33 - strlen(help[1])/2; i++) cout<<" "; for (int i=0; i<strlen(help[1]); i++) cout<<help[1][i]; cout<<endl<<endl;
				    SetConsoleTextAttribute(hCons, (WORD) ((BLACK << 4) | WHITE));
				    		
					cout<<"You are in admin mode. Here you can delete public information."<<endl<<endl;
					cout<<"List of transactions: "<<endl;		    
					for(int i = 0; i < g1.size(); i++)
					{
						cout<<i+1<<". ";
						cout<<g1[i].get_title();
						cout<<endl;
					}
					cout<<g1.size()+1<<". GO TO MENU"<<endl;
						
					int ch_tr;
						
					do{		
						cout<<"Choose transaction you want to delete: ";
		    			ch_tr= getch();	
		    			cout<<ch_tr-48<<endl;
						}
					while((ch_tr<49) || (ch_tr>g1.size()+49 )) ;
					    
					if (ch_tr == g1.size()+49) StartMenu(1);
					else {
					   		g1.erase(g1.begin()+ch_tr-1);
					   		cout<<"element erased";
					   		sleep(1);
						}
				}
	    	}
	    	
		else 
		{
			cout<<"do want to leave this menu (1/0): ";
			
			
					choice=getch();
					if (choice == 49)
					{
						return g1;
						StartMenu(1);
					}
						
					else{
							system("cls");
						    system( "color 0F" );
						    SetConsoleTextAttribute(hCons, (WORD) ((BLACK << 4) | WHITE));
						    for (int i=0; i<33 - strlen(help[1])/2; i++) cout<<" "; for (int i=0; i<strlen(help[1]); i++) cout<<help[1][i]; cout<<endl<<endl;
						    SetConsoleTextAttribute(hCons, (WORD) ((BLACK << 4) | WHITE));
						    cout<<"Are you here? Input something: ";
						    cin>>password;
						    cout<<"Input password: ";  
						}		
		}
	}
   
        return g1;
}


int StartMenu(int switcher){

	system ("mode con cols=66 lines=20");
    char menus[5][21] = {"ADD TRANSACTION", "LIST OF TRANSACTIONS", "HELP", "ADMIN", "EXIT"};
    int k, j, l, lenth;
    int choice;
    system("cls");
    
	cout<<endl<<endl;
    for (int i=0; i<5; i++)
    {	
    	lenth = indent - strlen(menus[i])/2;
    	if (i==switcher-1)
		{
			SetConsoleTextAttribute(hCons, (WORD) ((WHITE << 4) | BLUE));
			for(int j=0; j<lenth; j++) cout<<" ";
    		cout<<"<<  "<<menus[i]<<"!  >>"<<endl<<endl;
    		SetConsoleTextAttribute(hCons, (WORD) ((WHITE << 4) | BLACK));
		} 
    	else {
    			for(int j=0; j<lenth+4; j++) cout<<" ";
    			cout<<menus[i]<<endl<<endl;
				}		
	}
	SetConsoleTextAttribute(hCons, (WORD) ((WHITE << 4) | CYAN));
	char start_help[2][35]={"move - UP/DOWN ARROW", "select - ENTER"};
	cout<<endl;
    for (int i=0; i<13; i++) cout<<" "; cout<<"|"; for (int i=0; i<40; i++) cout<<"-"; cout<<"|"<<endl;
	for (int i=0; i<13; i++) cout<<" "; cout<<"|"; for (int i=0; i<(40-strlen(start_help[0]))/2; i++) cout<<" "; 	for (int i=0; i<strlen(start_help[0]); i++) cout<<start_help[0][i]; for (int i=0; i<(40-strlen(start_help[0]))/2; i++) cout<<" "; cout<<"|"<<endl;
	for (int i=0; i<13; i++) cout<<" "; cout<<"|"; 	for (int i=0; i<(40-strlen(start_help[1]))/2; i++) cout<<" "; for (int i=0; i<strlen(start_help[1]); i++) cout<<start_help[1][i]; for (int i=0; i<(40-strlen(start_help[1]))/2; i++) cout<<" "; cout<<"|"<<endl;
    for (int i=0; i<13; i++) cout<<" "; cout<<"|"; for (int i=0; i<40; i++) cout<<"-"; cout<<"|"<<endl;
    SetConsoleTextAttribute(hCons, (WORD) ((WHITE << 4) | BLACK));
    
    do
    {
    	choice = getch();
    	
	}while( choice!=ENTER && choice!=UP && choice!=DOWN);
	
    if (choice == 224)
    	choice = getch();
    	
    if (choice == UP)
        if (switcher != 1)
            StartMenu(switcher - 1);
        else
            StartMenu(5);
    if (choice == DOWN)
        if (switcher != 5)
            StartMenu(switcher + 1);
        else
            StartMenu(1);
    if (choice == ENTER)
    {
        if (switcher == 1)
  			Add(g1);
        if (switcher == 2)
        	Show(g1);
        if (switcher == 3)
        	Help();
		if (switcher == 4)
        	Admin(g1);
        if (switcher == 5)
            exit(0);  
    }
}	
