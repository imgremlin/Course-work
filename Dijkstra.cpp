#define ESC 27
#define ENTER 13
#define UP 72
#define DOWN 80
#define BACKSPACE 8
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h> 
#include<process.h>
#include<math.h>
#include<windows.h>
#define INF 99
#define N 55
#define BLUE 1
#define WHITE 15
#define BLACK 0
#define CYAN 3
using namespace std;

int source = 13200, target = 13200;
int ostanovochka = 47;
int funk;
int indent = 29;


char stations[52][30] = {"AKADEMMISTECHKO", "ZHYTOMYRSKA", "SVIATOSHYN", "NYVKY", "BERESTEISKA", "SHULIAVSKA",
							 "POLITEKHNICHNYI INSTYTUT", "VOKZALNA", "UNIVERSYTET", "TEATRALNA", "KHRESHCHATYK", "ARSENALNA", "DNIPRO", 
							 "HIDROPARK", "LIVOBEREZHNA", "DARNYTSIA", "CHERNIHIVSKA", "LISOVA", "SYRETS", "DOROHOZHYCHI", "LUKIANIVSKA", 
							 "ZOLOTI VOROTA", "PALATS SPORTU", "KLOVSKA", "PECHERSKA", "DRUZHBY NARODIV", "VYDUBYCHI", "SLAVUTYCH", 
							 "OSOKORKY", "POZNIAKY", "KHARKIVSKA", "VYRLYTSIA", "BORYSPILSKA", "CHERVONY KHUTIR","HEROIV DNIPRA", 
							 "MINSKA", "OBOLON", "POCHAINA", "TARASA SHEVCHENKA", "KONTRAKTOVA PLOSHCHA", "POSHTOVA PLOSHCHA", 
							 "MAIDAN NEZALEZHNOSTI", "PLOSHCHA LVA TOLSTOHO", "OLIMPIISKA", "PALATS UKRAYINA", "LYBIDSKA", "DEMIIVSKA", 
							 "HOLOSIIVSKA", "VASYLKIVSKA", "VYSTAVKOVYI TSENTR", "IPODROM", "TEREMKY"};
							 
							 
int dijsktra(int cost[][N],int source,int target);
int Choosestation_red(int switcher);
int Choosestation_green(int switcher);
int Choosestation_blue(int switcher);
int Chooseline(int switcher);
int Choosestation_enter_menu(int switcher, int counter, char **dyn_stations );
int Choosestation_enter(int switcher);
int Choosetype(int switcher);
int Choose_startend(int switcher, int &source, int &target);
int StartMenu(int switcher, int &source, int &target);
int ask_main();
int show_stat();
HANDLE hCons = GetStdHandle(STD_OUTPUT_HANDLE);

int main()
{
	
	system ("mode con cols=66 lines=20");
    SetConsoleTitle("Dijkstra Algorithm");
    system( "color F0" );
    HANDLE hCons = GetStdHandle(STD_OUTPUT_HANDLE);
	int dijkstra();
    int cost[N][N],total;
    int x,y, amount;
    int choice;
    for(int i=1;i< N;i++)
    	for(int j=1; j< N;j++)
    		cost[i][j] = INF;
    
    cost [1][2] = cost[2][1] = 3; //1 - akadem
	cost [2][3] = cost[3][2] = 3;
	cost [3][4] = cost[4][3] = 2;
	cost [4][5] = cost[5][4] = 2;
	cost [5][6] = cost[6][5] = 4;
	cost [6][7] = cost[7][6] = 2;
	cost [7][8] = cost[8][7] = 4;
	cost [8][9] = cost[9][8] = 2;
	cost [9][10] = cost[10][9] = 2; //10 - teatr
	cost [10][11] = cost[11][10] = 1; //11 - hrest
	cost [11][12] = cost[12][11] = 3;
	cost [12][13] = cost[13][12] = 2;
	cost [13][14] = cost[14][13] = 2;
	cost [14][15] = cost[15][14] = 3;
	cost [15][16] = cost[16][15] = 2;
	cost [16][17] = cost[17][16] = 3;
	cost [18][17] = cost[17][18] = 2; //18 - lisova
	
	
	cost [19][20] = cost[20][19] = 3; //19 - syrets
	cost [20][21] = cost[21][20] = 5; 
	cost [21][22] = cost[22][21] = 5; //22 - zoloti vorota
	cost [22][23] = cost[23][22] = 2; //23 - palats sportu
	cost [23][24] = cost[24][23] = 2;
	cost [24][25] = cost[25][24] = 2;
	cost [25][26] = cost[26][25] = 2;
	cost [26][27] = cost[27][26] = 4;
	cost [27][28] = cost[28][27] = 5;
	cost [28][29] = cost[29][28] = 2;
	cost [29][30] = cost[30][29] = 3;
	cost [30][31] = cost[31][30] = 2;
	cost [31][32] = cost[32][31] = 2; 
	cost [33][32] = cost[32][33] = 2;
	cost [33][34] = cost[34][33] = 2; //34 - chervoniy khutir
	
	cost [35][36] = cost[36][35] = 2; //35 - heroiv dnipra
	cost [36][37] = cost[37][36] = 2;
	cost [37][38] = cost[38][37] = 3;
	cost [38][39] = cost[39][38] = 3;
	cost [39][40] = cost[40][39] = 2; 
	cost [40][41] = cost[41][40] = 2; 
	cost [41][42] = cost[42][41] = 3; //42 - maidan
	cost [42][43] = cost[43][42] = 2; //43 - plosha lva tolstogo
	cost [43][44] = cost[44][43] = 1;
	cost [44][45] = cost[45][44] = 3;
	cost [45][46] = cost[46][45] = 1;
	cost [46][47] = cost[47][46] = 3;
	cost [47][48] = cost[48][47] = 1;
	cost [48][49] = cost[49][48] = 3;
	cost [50][49] = cost[49][50] = 3;
	cost [50][51] = cost[51][50] = 2;
	cost [52][51] = cost[51][52] = 2; //52 - teremki
        
    cost [22][10] = cost[10][22] = 2; //zv - teatr   
    cost [42][11] = cost[11][42] = 2; //maidan - hrest
	cost [23][43] = cost[43][23] = 1; //lt - palats sportu  
	
	StartMenu(1, source, target);
	SetConsoleTextAttribute(hCons, (WORD) ((WHITE << 4) | BLUE));
	system("cls");
    total = dijsktra(cost,source,target);
    cout<<endl;
    for(int t=0; t<14; t++) cout<<" ";
	cout<<"ESTIMATED TIME: "<<total<<" MIN";
    SetConsoleTextAttribute(hCons, (WORD) ((WHITE << 4) | CYAN));
    
    while(1)
    {
    	ask_main();
		do
	    {
	    	choice = getch();
	    	if (choice==ESC) exit(0);
	    	if (choice==ENTER)
			{
				target = source = 13200;
				ostanovochka = 47;
				StartMenu(1, source, target);
				system("cls");
				total = dijsktra(cost,source,target);
				cout<<endl;
				for(int t=0; t<14; t++) cout<<" ";
				cout<<"ESTIMATED TIME: "<<total<<" MIN";
			 } 
		}while( choice!=ENTER && choice!=ESC);
	}
	
	SetConsoleTextAttribute(hCons, (WORD) ((WHITE << 4) | BLACK));
	
	return 0;
}


int dijsktra(int cost[][N],int source,int target)
{
	system ("mode con cols=66 lines=30");
	int selected[N]={0};
	int i,m,min,start,d,j;
    
    int *dist = new int[N];
    int *prev = new int[N];
		char **path = new char* [N];
		for (int i = 0; i<N; i++)
			path[i] = new char [N];				
				
				
    for(i=1;i< N;i++)
    {
        dist[i] = INF;
        prev[i] = -1;
    }
    
    start = source;
    selected[start]=1;
    dist[start] = 0;
    
    while(selected[target] == 0)
    {
        min = INF;
        m = 0;
        for(i=1;i< N;i++)
        {
            d = dist[start] + cost[start][i];
            if(d < dist[i] && selected[i]==0)
            {
                dist[i] = d;
                prev[i] = start;
            }
            if(min>dist[i] && selected[i]==0)
            {
                min = dist[i];
                m = i;
            }
        }
        start = m;
        selected[start] = 1;
    }
    start = target;
    j = 0;
    while(start != -1)
    {
        strncpy(path[j++], stations[start-1], 24);
        start = prev[start];
    }
    
    int amount = j;
    if (target==7 || source==7) 
		amount = j-1;
    else amount = j;
    
    for (i = amount; i >= 0; i--)
	{
		if (strlen(path[i]) != 0)
		{
			for(int t=0; t<14; t++) cout<<" ";
				
			for(int k=0; k<strlen(path[i]); k++)
				cout<<path[i][k];
			cout<<endl;
		}
	}
    return dist[target];
    
    for (int i = 0; i < N; i++)
        		delete [] path[i];
    		delete [] dist;   
			delete [] prev; 
}


int Choosestation_red(int switcher)
{
	system ("mode con cols=66 lines=40");
  	int k, j, lenth, choice;
    system("cls");
    cout<<endl<<endl;
    for (int i=0; i<18; i++)
    {	
    	lenth = indent - strlen(stations[i])/2;
    	if (i==switcher-1)
		{
			SetConsoleTextAttribute(hCons, (WORD) ((WHITE << 4) | BLUE));
			for(int j=0; j<lenth; j++) cout<<" ";
    		cout<<"<<  "<<stations[i]<<"!  >>"<<endl<<endl;
    		SetConsoleTextAttribute(hCons, (WORD) ((WHITE << 4) | BLACK));
		} 
    	else {
    			for(int j=0; j<lenth+4; j++) cout<<" ";
    			cout<<stations[i]<<endl<<endl;
				}
		k = i;		
	}
    
     do
    {
    	choice = getch();

	}while( choice!=ENTER && choice!=UP && choice!=DOWN && choice!=ESC);
	
    if (choice == 224)
        choice = getch();
    if (choice == UP)
        if (switcher != 1)
            Choosestation_red(switcher - 1);
        else
            Choosestation_red(18);
    if (choice == DOWN)
        if (switcher != 18)
            Choosestation_red(switcher + 1);
        else
            Choosestation_red(1);
	if (choice == ESC)
		Chooseline(1);	
    if (choice == ENTER)
      	return switcher;
      	
}


int Choosestation_green(int switcher)
{
	system ("mode con cols=66 lines=36");
  	int k, j, lenth, choice;
    system("cls");
    cout<<endl<<endl;
    for (int i=18; i<18+16; i++)
    {	
    	lenth = indent - strlen(stations[i])/2;
    	if (i==switcher-1+18)
		{
			SetConsoleTextAttribute(hCons, (WORD) ((WHITE << 4) | BLUE));
			for(int j = 0; j<lenth; j++) cout<<" ";
    		cout<<"<<  "<<stations[i]<<"!  >>"<<endl<<endl;
    		SetConsoleTextAttribute(hCons, (WORD) ((WHITE << 4) | BLACK));
		} 
    	else {
    			for(int j = 0; j<lenth+4; j++) cout<<" ";
    			cout<<stations[i]<<endl<<endl;
				}
		k = i;		
	}
	
     do
    {
    	choice = getch();

	}while( choice!=ENTER && choice!=UP && choice!=DOWN && choice!=ESC);
	
    if (choice == 224)
        choice = getch();
    if (choice == UP)
        if (switcher != 1)
            Choosestation_green(switcher - 1);
        else
            Choosestation_green(16);
    if (choice == DOWN)
        if (switcher != 16)
            Choosestation_green(switcher + 1);
        else
            Choosestation_green(1);
    if (choice == ESC)
		Chooseline(1);	        
    if (choice == ENTER)
    	return switcher+18;
    }

int Choosestation_blue(int switcher)
{
	system ("mode con cols=66 lines=40");
  	int k, j, lenth, choice;
    system("cls");
    cout<<endl<<endl;
    for (int i=18+16; i<18+16+18; i++)
    {	
    	lenth = indent - strlen(stations[i])/2;
    	if (i==switcher-1+18+16)
		{
			SetConsoleTextAttribute(hCons, (WORD) ((WHITE << 4) | BLUE));
			for(int j=0; j<lenth; j++) cout<<" ";
    		cout<<"<<  "<<stations[i]<<"!  >>"<<endl<<endl;
    		SetConsoleTextAttribute(hCons, (WORD) ((WHITE << 4) | BLACK));
		} 
    	else {
    			for(int j=0; j<lenth+4; j++) cout<<" ";
    			cout<<stations[i]<<endl<<endl;
				}
		k = i;		
	}
	
     do
    {
    	choice = getch();
	}while( choice!=ENTER && choice!=UP && choice!=DOWN && choice!=ESC);
	
    if (choice == 224)
        choice = getch();
    if (choice == UP)
        if (switcher != 1)
            Choosestation_blue(switcher - 1);
        else
            Choosestation_blue(18);
    if (choice == DOWN)
        if (switcher != 18)
            Choosestation_blue(switcher + 1);
        else
            Choosestation_blue(1);
    if (choice == ESC)
		Chooseline(1);	        
    if (choice == ENTER)
    	return switcher+18+16;
}

int Chooseline(int switcher)
{
	system ("mode con cols=66 lines=20");
	char lines[3][15] = {"RED LINE", "GREEN LINE", "BLUE LINE"};
    int k, j, l, lenth, choice;
    system("cls");
    
    cout<<endl<<endl;
    for (int i=0; i<3; i++)
    {	
    	lenth = indent - strlen(lines[i])/2;
    	if (i==switcher-1)
		{
			SetConsoleTextAttribute(hCons, (WORD) ((WHITE << 4) | BLUE));
			for(int j=0; j<lenth; j++) cout<<" ";
    		cout<<"<<  "<<lines[i]<<"!  >>"<<endl<<endl;
    		SetConsoleTextAttribute(hCons, (WORD) ((WHITE << 4) | BLACK));
		} 
    	else {
    			for(int j=0; j<lenth+4; j++) cout<<" ";
    			cout<<lines[i]<<endl<<endl;
				}
	}
	
     do
    {
    	choice = getch();
	}while( choice!=ENTER && choice!=UP && choice!=DOWN && choice!=ESC);
	
    if (choice == 224)
        choice = getch();
    if (choice == UP)
        if (switcher != 1)
            Chooseline(switcher - 1);
        else
            Chooseline(3);
    if (choice == DOWN)
        if (switcher != 3)
            Chooseline(switcher + 1);
        else
            Chooseline(1);
    if (choice == ESC)
		Choosetype(1);	        
    if (choice == ENTER)
    {
        if (switcher == 1)
        	l = Choosestation_red(1);
        if (switcher == 2)
           l = Choosestation_green(1);
        if (switcher == 3)
            l = Choosestation_blue(1);
        return l;    
}}



int Choosestation_enter_menu(int switcher, int counter, char **dyn_stations )
{
	system ("mode con cols=66 lines=35");
    int k, j, l, lenth, choice;
    system("cls");
    	
    cout<<endl<<endl;
    for (int i=0; i<counter; i++)
    {	
    	lenth = indent - strlen(dyn_stations[i])/2;
    	if (i==switcher-1)
		{
			SetConsoleTextAttribute(hCons, (WORD) ((WHITE << 4) | BLUE));
			for(int j=0; j<lenth; j++) cout<<" ";
    		cout<<"<<  "<<dyn_stations[i]<<"!  >>"<<endl<<endl;
    		SetConsoleTextAttribute(hCons, (WORD) ((WHITE << 4) | BLACK));
		} 
    	else {
    			for(int j=0; j<lenth+4; j++) cout<<" ";
    			cout<<dyn_stations[i]<<endl<<endl;
				}
	}
	
     do
    {
    	choice = getch();

	}while( choice!=ENTER && choice!=UP && choice!=DOWN);
	
    if (choice == 224)
        choice = getch();
    if (choice == UP)
        if (switcher != 1)
            Choosestation_enter_menu(switcher - 1, counter, dyn_stations);
        else
            Choosestation_enter_menu(counter, counter, dyn_stations);
    if (choice == DOWN)
        if (switcher != counter)
            Choosestation_enter_menu(switcher + 1, counter, dyn_stations);
        else
            Choosestation_enter_menu(1, counter, dyn_stations);	        
 	if (choice == ENTER)
    {
    	int cmp = 0; 
    	while(strncmp(dyn_stations[switcher-1], stations[cmp], strlen(stations[cmp]))!= 0)
			cmp++;		
		return cmp+1;		
	}
}


int Choosestation_enter(int switcher)
{
	system("cls");	
	
    while(1)
    {
    	system ("mode con cols=82 lines=20");
    	
	    int counter = 0;
		string str;
		int res;
		int i = 0, choice;
		char choize;
		int razmer = 0;
		
	    char *enter = new char[25];
		char **dyn_stations = new char* [30];
		for (int i = 0; i<30; i++)
			dyn_stations[i] = new char [30];
		for(int i =0; i<30;i++)
			for(int j=0; j<30;j++)
				dyn_stations[i][j] = '\0';
		string strf;
		
	SetConsoleTextAttribute(hCons, (WORD) ((WHITE << 4) | BLUE));	
	for(int i=0; i<41-8; i++) cout<<" "; 
	cout<<"LIST OF STATIONS"<<endl<<endl;	
	SetConsoleTextAttribute(hCons, (WORD) ((WHITE << 4) | BLACK));	
	
	show_stat();
	cout<<endl<<"ENTER NAME OF STATION(AT LEAST 2 LETTERS): ";
	
	do{
		choize = getch();
		if (choize==BACKSPACE && razmer>0 && i>0)
		{
			i=i-2;
			razmer--;
			system("cls");	
			SetConsoleTextAttribute(hCons, (WORD) ((WHITE << 4) | BLUE));	
			for(int i=0; i<41-8; i++) cout<<" "; 
			cout<<"LIST OF STATIONS"<<endl<<endl;	
			SetConsoleTextAttribute(hCons, (WORD) ((WHITE << 4) | BLACK));
			show_stat();
			cout<<endl<<"ENTER NAME OF STATION(AT LEAST 2 LETTERS): ";
			for(int j=0; j<i+1; j++)
				cout<<enter[j];
			i++;	
		}
		if (choize!=ENTER && choize!=BACKSPACE && choize!=ESC && razmer<20)
		{
			cout<<choize;
			enter[i] = choize;
			razmer++;
			i++;
			} 
	  }
    while(!( (choize==ENTER) && (razmer>1) ) );
    
	system("cls");	
	
    char *new_enter = new char[razmer];
	strncpy(new_enter, enter, razmer);
	for(int i=0; i<razmer; i++)
		new_enter[i]=(char)toupper(new_enter[i]);
		
	cout<<endl;	
	
	for(int i =0; i<razmer; i++)
		strf+=new_enter[i];
	
	for(int i=0; i<52;i++)
	{
		str = stations[i];
		res = str.find(strf);
		if (res!=-1) {
			strncpy(dyn_stations[counter], stations[i], strlen(stations[i]));
			counter++;
		}
	}
	
  	int k, j, lenth;
  	
	if (counter==0)
	{
		for (int i = 0; i < 30; i++)
        	delete [] dyn_stations[i];
    	delete [] enter;   
		delete [] new_enter; 
	}
	else {
			funk = Choosestation_enter_menu(1, counter, dyn_stations);
			return funk;
			for (int i = 0; i < 30; i++)
        		delete [] dyn_stations[i];
    		delete [] enter;   
			delete [] new_enter; 
			break;
		}
			}
}



int Choosetype(int switcher)
{
	system ("mode con cols=66 lines=20");
	char type[2][15] = {"FIND BY NAME", "CHOOSE LINE"};
    int k, j, lenth, choice, l=13200;
    system("cls");
    
    cout<<endl<<endl;
    for (int i=0; i<2; i++)
    {	
    	lenth = indent - strlen(type[i])/2;
    	if (i==switcher-1)
		{
			SetConsoleTextAttribute(hCons, (WORD) ((WHITE << 4) | BLUE));
			for(int j=0; j<lenth; j++) cout<<" ";
    		cout<<"<<  "<<type[i]<<"!  >>"<<endl<<endl;
    		SetConsoleTextAttribute(hCons, (WORD) ((WHITE << 4) | BLACK));
		} 
    	else {
    			for(int j=0; j<lenth+4; j++) cout<<" ";
    			cout<<type[i]<<endl<<endl;
				}
	}
	
    do
    {
    	choice = getch();

	}while( choice!=ENTER && choice!=UP && choice!=DOWN && choice!=ESC);
	
    if (choice == 224)
        choice = getch();
    if (choice == UP)
        if (switcher != 1)
            Choosetype(switcher - 1);
        else
            Choosetype(2);
    if (choice == DOWN)
        if (switcher != 2)
            Choosetype(switcher + 1);
        else
            Choosetype(1);
    if (choice == ESC)
		Choose_startend(1, source, target);	        
    if (choice == ENTER)
    {
        if (switcher == 1)
       		l = Choosestation_enter(1);
        	
        if (switcher == 2)
           l = Chooseline(1);
        return l;
	}
}



int Choose_startend(int switcher, int &source, int &target)
{
	system ("mode con cols=66 lines=20");
	char type[3][15] = {"CHOOSE START", "CHOOSE END", "BUILD A ROUTE"};
    int k, j,  lenth, choice;
    do
	{
	system("cls");
    cout<<endl<<endl;
    for (int i=0; i<3; i++)
    {	
    	lenth = indent - 15;
    	if (i==switcher-1)
		{
			SetConsoleTextAttribute(hCons, (WORD) ((WHITE << 4) | BLUE));
			if ((i==0)&&(source!=13200))
			{
				for(int j=0; j<lenth; j++) cout<<" ";
    			cout<<"<<  "<<type[i]<<"!  >>"<<" ( "<<stations[source-1]<<" ) "<<endl<<endl;
			}
			else if ((i==0)&&(source==13200))
			{
				for(int j=0; j<lenth; j++) cout<<" ";
    			cout<<"<<  "<<type[i]<<"!  >>"<<" ( "<<"NONE"<<" ) "<<endl<<endl;
			}
			
			
			if ((i==1)&&(target!=13200))
			{
				for(int j=0; j<lenth; j++) cout<<" ";
    			cout<<"<<  "<<type[i]<<"!  >>"<<" ( "<<stations[target-1]<<" ) "<<endl<<endl;
			}
			else if ((i==1)&&(target==13200))
			{
				for(int j=0; j<lenth; j++) cout<<" ";
    			cout<<"<<  "<<type[i]<<"!  >>"<<" ( "<<"NONE"<<" ) "<<endl<<endl;
			}
			
			if (i==2)
			{
				for(int j=0; j<lenth; j++) cout<<" ";
    			cout<<"<<  "<<type[i]<<"!  >>"<<endl<<endl;
			}
		} 
    	else 
			{
				SetConsoleTextAttribute(hCons, (WORD) ((WHITE << 4) | BLACK));
				
    			if ((i==0)&&(source!=13200))
				{
					for(int j=0; j<lenth+4; j++) cout<<" ";
	    			cout<<type[i]<<" ( "<<stations[source-1]<<" ) "<<endl<<endl;
				}
				else if ((i==0)&&(source==13200))
				{
					for(int j=0; j<lenth+4; j++) cout<<" ";
	    			cout<<type[i]<<" ( "<<"NONE"<<" ) "<<endl<<endl;
				}
				
				
				if ((i==1)&&(target!=13200))
				{
					for(int j=0; j<lenth+4; j++) cout<<" ";
	    			cout<<type[i]<<" ( "<<stations[target-1]<<" ) "<<endl<<endl;
				}
				else if ((i==1)&&(target==13200))
				{
					for(int j=0; j<lenth+4; j++) cout<<" ";
	    			cout<<type[i]<<" ( "<<"NONE"<<" ) "<<endl<<endl;
				}
				
				
				if (i==2)
				{
					for(int j=0; j<lenth+4; j++) cout<<" ";
	    			cout<<type[i]<<endl<<endl;
				}
	    			
				}
	}
	
    do
    {
    	choice = getch();

	}while( choice!=ENTER && choice!=UP && choice!=DOWN && choice!=ESC);
    if (choice == 224)
        choice = getch();
    if (choice == UP)
        if (switcher != 1)
            Choose_startend(switcher - 1, source, target);
        else
            Choose_startend(3, source, target);
    if (choice == DOWN)
        if (switcher != 3)
            Choose_startend(switcher + 1, source, target);
        else
            Choose_startend(1, source, target);
            
    	if (choice == ESC)
			StartMenu(1, source, target);	
		if (choice == ENTER)
    	{
        if (switcher==1)
        	source = Choosetype(1);
        if (switcher==2)
           target = Choosetype(1);
        if (switcher==3 && target!=13200 && source!=13200)
        	ostanovochka = 4747;
        	
		}
	} while(ostanovochka!=4747); 
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
		StartMenu(1, source, target);	
        
}
int ask_main()
{
	char main_help[2][35]={"Press ESC if u want to exit", "Press ENTER if u want to countinue"};
    cout<<endl;
    SetConsoleTextAttribute(hCons, (WORD) ((WHITE << 4) | CYAN));
    for (int i=0; i<13; i++) cout<<" "; cout<<"|"; for (int i=0; i<40; i++) cout<<"-"; cout<<"|"<<endl;
	for (int i=0; i<13; i++) cout<<" "; cout<<"|"; for (int i=0; i<(40-strlen(main_help[0]))/2; i++) cout<<" "; 	for (int i=0; i<strlen(main_help[0]); i++) cout<<main_help[0][i]; for (int i=0; i<(40-strlen(main_help[0]))/2+1; i++) cout<<" "; cout<<"|"<<endl;
	for (int i=0; i<13; i++) cout<<" "; cout<<"|"; 	for (int i=0; i<(40-strlen(main_help[1]))/2; i++) cout<<" "; for (int i=0; i<strlen(main_help[1]); i++) cout<<main_help[1][i]; for (int i=0; i<(40-strlen(main_help[1]))/2; i++) cout<<" "; cout<<"|"<<endl;
    for (int i=0; i<13; i++) cout<<" "; cout<<"|"; for (int i=0; i<40; i++) cout<<"-"; cout<<"|"<<endl;
    SetConsoleTextAttribute(hCons, (WORD) ((WHITE << 4) | BLACK));
}


int show_stat()
{
	
    SetConsoleTextAttribute(hCons, (WORD) ((WHITE << 4) | CYAN));
    for(int t=0; t<13; t++)
    {
    	cout<<"  ";
    	for(int i=4*t; i<4*t+4; i++)
		{
    		for(int j=0; j<strlen(stations[i]); j++)
    			cout<<stations[i][j];
    		cout<<" | ";
		}
    	cout<<endl;
	}
    cout<<" ";	
    SetConsoleTextAttribute(hCons, (WORD) ((WHITE << 4) | BLACK));
}

int StartMenu(int switcher, int &source, int &target)
{
	system ("mode con cols=66 lines=20");
    char menus[3][15] = {"BUILD A ROUTE", "HELP", "EXIT"};
    int k, j, l, lenth;
    int choice;
    system("cls");
    
	cout<<endl<<endl;
    for (int i=0; i<3; i++)
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
            StartMenu(switcher - 1, source, target);
        else
            StartMenu(3, source, target);
    if (choice == DOWN)
        if (switcher != 3)
            StartMenu(switcher + 1,source, target);
        else
            StartMenu(1, source, target);
    if (choice == ENTER)
    {
        if (switcher == 1){
        	Choose_startend(1, source, target);
  		};
        if (switcher == 2)
        	Help();
        if (switcher == 3)
            exit(0);  
    }
}
