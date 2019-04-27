#define ESC 27
#define ENTER 13
#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80
#define SPACE 32
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

using namespace std;

int ostanovochka = 47;

char stations[52][30] = {"AKADEMMISTECHKO", "ZHYTOMYRSKA", "SVIATOSHYN", "NYVKY", "BERESTEISKA", "SHULIAVSKA",
							 "POLITEKHNICHNYI INSTYTUT", "VOKZALNA", "UNIVERSYTET", "TEATRALNA", "KHRESHCHATYK", "ARSENALNA", "DNIPRO", 
							 "HIDROPARK", "LIVOBEREZHNA", "DARNYTSIA", "CHERNIHIVSKA", "LISOVA", "SYRETS", "DOROHOZHYCHI", "LUKIANIVSKA", 
							 "ZOLOTI VOROTA", "PALATS SPORTU", "KLOVSKA", "PECHERSKA", "DRUZHBY NARODIV", "VYDUBYCHI", "SLAVUTYCH", 
							 "OSOKORKY", "POZNIAKY", "KHARKIVSKA", "VYRLYTSIA", "BORYSPILSKA", "CHERVONY KHUTIR","HEROIV DNIPRA", 
							 "MINSKA", "OBOLON", "POCHAINA", "TARASA SHEVCHENKA", "KONTRAKTOVA PLOSHCHA", "POSHTOVA PLOSHCHA", 
							 "MAIDAN NEZALEZHNOSTI", "PLOSHCHA LVA TOLSTOHO", "OLIMPIISKA", "PALATS UKRAYINA", "LYBIDSKAV", "DEMIIVSKA", 
							 "HOLOSIIVSKA", "VASYLKIVSKA", "VYSTAVKOVYI TSENTR", "IPODROM", "TEREMKY"};


int dijsktra(int cost[][N],int source,int target)
{
    int dist[N],prev[N],selected[N]={0},i,m,min,start,d,j;
    char path[N][N];
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
            d = dist[start] +cost[start][i];
            if(d< dist[i]&&selected[i]==0)
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
        strncpy(path[j++], stations[start-1], 25);
        start = prev[start];
    }
    int amount = j;
    for (i = amount; i >= 0; i--)
	{
		if (strlen(path[i]) != 0)
		{	
			
			for(j=0; j<strlen(path[i]); j++)
			{
				printf("%c", path[i][j]);
			}
			printf("\n");
		}
	}
    return dist[target];
}


int Choosestation_red(int switcher)
{
  	int k, j, lenth;
    system("cls");
    cout<<endl<<endl;
    for (int i=0; i<18; i++)
    {	
    	lenth = 23 - strlen(stations[i])/2;
    	if (i==switcher-1)
		{
			for(int j=0; j<lenth; j++) cout<<" ";
    		cout<<"<<  "<<stations[i]<<"!  >>"<<endl<<endl;
		} 
    	else {
    			for(int j=0; j<lenth+4; j++) cout<<" ";
    			cout<<stations[i]<<endl<<endl;
				}
		k = i;		
	}
    
    int choice = getch();
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
			      
    if (choice == ENTER || choice == SPACE)
      	return switcher;
      	
}


int Choosestation_green(int switcher)
{
  	int k, j, lenth;
    system("cls");
    cout<<endl<<endl;
    for (int i=18; i<18+16; i++)
    {	
    	lenth = 23 - strlen(stations[i])/2;
    	if (i==switcher-1+18)
		{
			for(int j = 0; j<lenth; j++) cout<<" ";
    		cout<<"<<  "<<stations[i]<<"!  >>"<<endl<<endl;
		} 
    	else {
    			for(int j = 0; j<lenth+4; j++) cout<<" ";
    			cout<<stations[i]<<endl<<endl;
				}
		k = i;		
	}
	
    int choice = getch();
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
    if (choice == ENTER || choice == SPACE)
    	return switcher+18;
    }

int Choosestation_blue(int switcher)
{
  	int k, j, lenth;
    system("cls");
    cout<<endl<<endl;
    for (int i=18+16; i<18+16+18; i++)
    {	
    	lenth = 23 - strlen(stations[i])/2;
    	if (i==switcher-1+18+16)
		{
			for(int j=0; j<lenth; j++) cout<<" ";
    		cout<<"<<  "<<stations[i]<<"!  >>"<<endl<<endl;
		} 
    	else {
    			for(int j=0; j<lenth+4; j++) cout<<" ";
    			cout<<stations[i]<<endl<<endl;
				}
		k = i;		
	}
	
    int choice = getch();
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
    if (choice == ENTER || choice == SPACE)
    	return switcher+18+16;
    	
}

int Chooseline(int switcher)
{
	char lines[3][15] = {"RED LINE", "GREEN LINE", "BLUE LINE"};
    int k, j, l, lenth;
    system("cls");
    
    cout<<endl<<endl;
    for (int i=0; i<3; i++)
    {	
    	lenth = 23 - strlen(lines[i])/2;
    	if (i==switcher-1)
		{
			for(int j=0; j<lenth; j++) cout<<" ";
    		cout<<"<<  "<<lines[i]<<"!  >>"<<endl<<endl;
		} 
    	else {
    			for(int j=0; j<lenth+4; j++) cout<<" ";
    			cout<<lines[i]<<endl<<endl;
				}
	}
	
    int choice = getch();
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
    if (choice == ENTER || choice == SPACE)
    {
        if (switcher == 1)
        	l = Choosestation_red(1);
        if (switcher == 2)
           l = Choosestation_green(1);
        if (switcher == 3)
            l = Choosestation_blue(1);
        return l;    
}}












int Choosetype(int switcher)
{
	char type[2][15] = {"FIND BY NAME", "CHOOSE LINE"};
    int k, j, l, lenth;
    system("cls");
    
    cout<<endl<<endl;
    for (int i=0; i<2; i++)
    {	
    	lenth = 23 - strlen(type[i])/2;
    	if (i==switcher-1)
		{
			for(int j=0; j<lenth; j++) cout<<" ";
    		cout<<"<<  "<<type[i]<<"!  >>"<<endl<<endl;
		} 
    	else {
    			for(int j=0; j<lenth+4; j++) cout<<" ";
    			cout<<type[i]<<endl<<endl;
				}
	}
	
    int choice = getch();
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
    if (choice == ENTER || choice == SPACE)
    {
        if (switcher == 1)
        	cout<<"wait a little bit";
        	
        if (switcher == 2)
           l = Chooseline(1);
        return l;
		
		    
}}









int Choose_startend(int switcher, int &source, int &target)
{
	char type[3][15] = {"CHOOSE START", "CHOOSE END", "BUILD A ROUTE"};
    int k, j,  lenth;
    do
	{
	system("cls");
    cout<<endl<<endl;
    for (int i=0; i<3; i++)
    {	
    	lenth = 23 - strlen(type[i])/2;
    	if (i==switcher-1)
		{
			for(int j=0; j<lenth; j++) cout<<" ";
    		cout<<"<<  "<<type[i]<<"!  >>"<<endl<<endl;
		} 
    	else {
    			for(int j=0; j<lenth+4; j++) cout<<" ";
    			cout<<type[i]<<endl<<endl;
				}
	}
    int choice = getch();
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
            
    
		if (choice == ENTER || choice == SPACE)
    	{
        if (switcher == 1)
        	source = Choosetype(1);
        if (switcher == 2)
           target = Choosetype(1);
        if (switcher == 3)
			ostanovochka = 4747;
		}
	} while(ostanovochka!=4747); 

}










int StartMenu(int switcher, int &source, int &target)
{
    char menus[4][15] = {"BUILD A ROUTE", "HELP", "INFO", "EXIT"};
    int k, j, l, lenth;
    system("cls");
    
	cout<<endl<<endl;
    for (int i=0; i<4; i++)
    {	
    	lenth = 23 - strlen(menus[i])/2;
    	if (i==switcher-1)
		{
			for(int j=0; j<lenth; j++) cout<<" ";
    		cout<<"<<  "<<menus[i]<<"!  >>"<<endl<<endl;
		} 
    	else {
    			for(int j=0; j<lenth+4; j++) cout<<" ";
    			cout<<menus[i]<<endl<<endl;
				}		
	}
    
    int choice = getch();
    if (choice == 224)
        choice = getch();
    if (choice == UP)
        if (switcher != 1)
            StartMenu(switcher - 1, source, target);
        else
            StartMenu(4, source, target);
    if (choice == DOWN)
        if (switcher != 4)
            StartMenu(switcher + 1,source, target);
        else
            StartMenu(1, source, target);
    if (choice == ENTER || choice == SPACE)
    {
        if (switcher == 1){
        	//cout<<"Choose the source line and station: ";
        	l = Choose_startend(1, source, target);
        	//cout<<"Choose the source line and station: ";
        	//target = Choose_startend(1);
        
  };
        if (switcher == 2)
        if (switcher == 3)
        if (switcher == 4)
            exit(0);  
    }
}


int main()
{
	HWND hwnd;       
    char Title[1024];
    GetConsoleTitle(Title, 1024);
    hwnd=FindWindow(NULL, Title);
    MoveWindow(hwnd,0,0,540,720,TRUE);
    
	int dijkstra();
    int cost[N][N],i,j,w,ch,co;
    int source, target,x,y, amount;
    for(i=1;i< N;i++)
    for(j=1;j< N;j++)
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
    co = dijsktra(cost,source,target);
    printf("\nEstimated time: %d min",co);
    
	return 0;
}
