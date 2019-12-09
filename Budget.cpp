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

	public:  
		string title;
	  	string category;
	  	int period;  
		int day;
		int month;
		int year;
		int sum; 
		bool income;
		int term;
		
	 	
	Trans(){   
		title = "none";
	    category = "other";
	  	period = 0;  
		day = 1;
		month = 1;
		year = 1920;
		sum = 0; 
		income = 1;
		term = 0;
	}
		  
	Trans(string title1, string category1, int period1, int day1, int month1, int year1, int sum1, bool income1, int term1){  
		title = title1;
	    category = category1;
	  	period = period1;  
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
	  	period = b.period;  
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
		
			cout<<"   ";
			cout<<title; 						for (int i=0; i<(15-title.size()); i++) cout<<" ";
			cout<<category; 					for (int i=0; i<(15-category.size()); i++) cout<<" ";
			cout<<term; 						int length = 1; while (term /= 10 ) length++;	for (int i=0; i<(10-length); i++) cout<<" ";
			cout<<day<<"."<<month<<"."<<year; 	length = 1; while (day /= 10 ) length++; while (month /= 10 ) length++;	for (int i=0; i<(10-length-3); i++) cout<<" ";
			cout<<sum; 							length = 1; while (sum /= 10 ) length++;	for (int i=0; i<(10-length); i++) cout<<" ";
			cout<<income;		
			
	}

};

vector<Trans> g1;


int StartMenu(int switcher);
int Adm_mode();
HANDLE hCons = GetStdHandle(STD_OUTPUT_HANDLE);
			
int main() 
{ 
	system ("mode con cols=100 lines=20");
    SetConsoleTitle("Budget accounting system");
    system( "color F0" );
    HANDLE hCons = GetStdHandle(STD_OUTPUT_HANDLE);
    
	Trans aa;
	Trans a1( "title", "deposit", 1,2,10,2019, 220, true, 0); 		
	g1.push_back(aa);
	g1.push_back(a1);
	
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

	while(1)
	{	
		rt = 0;
		trm = 0;
			
		
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
		       cout<<"Year: ";
		       cin.clear();
		       while (cin.get() != '\n');
		    }
		    
		 }while((yr>2019)|| (yr<2000));
		 
		g1.push_back(Trans(ttl, cat, prd, dy, mth, yr, am ,prb, trm));
		
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

    SetConsoleTextAttribute(hCons, (WORD) ((WHITE << 4) | CYAN));
    cout<<endl;
    for (int i=0; i<13; i++) cout<<" ";cout<<"|"; for (int i=0; i<40; i++) cout<<"-"; cout<<"|"<<endl;
	for (int i=0; i<13; i++) cout<<" ";cout<<"|"; 	for (int i=0; i<(40-strlen(help[0]))/2; i++) cout<<" "; for (int i=0; i<strlen(help[0]); i++) cout<<help[0][i]; for (int i=0; i<(40-strlen(help[0]))/2; i++) cout<<" "; cout<<"|"<<endl;
    for (int i=0; i<13; i++) cout<<" ";cout<<"|"; for (int i=0; i<40; i++) cout<<"-"; cout<<"|"<<endl;
    
     do
    {
    	choice = getch();

	}while(choice!=ESC);
	
    if (choice == 224)
        choice = getch();
    if (choice == ESC)
		StartMenu(1);	    
}


int Help()
{
	system ("mode con cols=66 lines=20");
	int choice;
	char help[10][80]={"Press ESC to come back to menu", "HELP", "Buttons to use: ", "ESC - to back to previous menu", "UP/DOWN ARROW - to move", "ENTER - to select",
						"You can enter a full or incomplete name of station", "You can select a station by: ", "entering its name", "selecting the line" };
	
    system("cls");
    SetConsoleTextAttribute(hCons, (WORD) ((WHITE << 4) | BLUE));
    for (int i=0; i<33 - strlen(help[1])/2; i++) cout<<" "; for (int i=0; i<strlen(help[1]); i++) cout<<help[1][i]; cout<<endl<<endl;
    SetConsoleTextAttribute(hCons, (WORD) ((WHITE << 4) | BLACK));
    
    for (int i=0; i<2; i++) cout<<" "; cout<<"--"; for (int i=0; i<strlen(help[2]); i++) cout<<help[2][i]; cout<<endl;
    for (int i=0; i<10; i++) cout<<" "; cout<<"-"; for (int i=0; i<strlen(help[3]); i++) cout<<help[3][i]; cout<<endl;
    for (int i=0; i<10; i++) cout<<" "; cout<<"-"; for (int i=0; i<strlen(help[4]); i++) cout<<help[4][i]; cout<<endl;
    for (int i=0; i<10; i++) cout<<" "; cout<<"-"; for (int i=0; i<strlen(help[5]); i++) cout<<help[5][i]; cout<<endl;
    cout<<endl;
    for (int i=0; i<2; i++) cout<<" "; cout<<"--"; for (int i=0; i<strlen(help[7]); i++) cout<<help[7][i]; cout<<endl;
    for (int i=0; i<10; i++) cout<<" "; cout<<"-"; for (int i=0; i<strlen(help[8]); i++) cout<<help[8][i]; cout<<endl;
    for (int i=0; i<10; i++) cout<<" "; cout<<"-"; for (int i=0; i<strlen(help[9]); i++) cout<<help[9][i]; cout<<endl;
    SetConsoleTextAttribute(hCons, (WORD) ((WHITE << 4) | CYAN));
    cout<<endl;
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
						cout<<g1[i].title;
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
