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

char stations[52][30] = {"AKADEMMISTECHKO", "ZHYTOMYRSKA", "SVIATOSHYN", "NYVKY", "BERESTEISKA", "SHULIAVSKA",
							 "POLITEKHNICHNYI INSTYTUT", "VOKZALNA", "UNIVERSYTET", "TEATRALNA", "KHRESHCHATYK", "ARSENALNA", "DNIPRO", 
							 "HIDROPARK", "LIVOBEREZHNA", "DARNYTSIA", "CHERNIHIVSKA", "LISOVA", "SYRETS", "DOROHOZHYCHI", "LUKIANIVSKA", 
							 "ZOLOTI VOROTA", "PALATS SPORTU", "KLOVSKA", "PECHERSKA", "DRUZHBY NARODIV", "VYDUBYCHI", "SLAVUTYCH", 
							 "OSOKORKY", "POZNIAKY", "KHARKIVSKA", "VYRLYTSIA", "BORYSPILSKA", "CHERVONY KHUTIR","HEROIV DNIPRA", 
							 "MINSKA", "OBOLON", "POCHAINA", "TARASA SHEVCHENKA", "KONTRAKTOVA PLOSHCHA", "POSHTOVA PLOSHCHA", 
							 "MAIDAN NEZALEZHNOSTI", "PLOSHCHA LVA TOLSTOHO", "OLIMPIISKA", "PALATS UKRAYINA", "LYBIDSKAV", "DEMIIVSKA", 
							 "HOLOSIIVSKA", "VASYLKIVSKA", "VYSTAVKOVYI TSENTR", "IPODROM", "TEREMKY"};


int Choosestation_enter_menu(int switcher, int counter, char ( &dyn_stations )[15][30])
{
	
    int k, j, l, lenth;
    system("cls");
    
    cout<<endl<<endl;
    for (int i=0; i<counter; i++)
    {	
    	lenth = 23 - strlen(dyn_stations[i])/2;
    	if (i==switcher-1)
		{
			for(int j=0; j<lenth; j++) cout<<" ";
    		cout<<"<<  "<<dyn_stations[i]<<"!  >>"<<endl<<endl;
		} 
    	else {
    			for(int j=0; j<lenth+4; j++) cout<<" ";
    			cout<<dyn_stations[i]<<endl<<endl;
				}
	}
	
    int choice = getch();
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
 	if (choice == ENTER || choice == SPACE)
    {
    	int cmp = 0; 
    	while(strcmp(dyn_stations[switcher-1], stations[cmp])!= 0)
			cmp++;	
		return cmp;				
	}
}



int Choosestation_enter(int switcher)
{
	string str;
	int res;
	char enter[15];
	int i = 0;
	char choize;
	int razmer = 0;
	char dyn_stations[15][30];
	int counter = 0, funk;
	
	cout<<"Enter name of stantion: ";
	
	do{
		choize = getch();
		if (choize!=ENTER)
		{
			cout<<choize;
			enter[i] = choize;
			razmer++;
			} 
		i++;
	  }
    while(choize!=ENTER);
    
    
    
    enter[i] = '\0';
    char new_enter[razmer];
	strncpy(new_enter, enter, razmer);
	for(int i=0; i<razmer; i++)
		new_enter[i]=(char)toupper(new_enter[i]);
		
	cout<<endl;	
	
	for(int i=0; i<52;i++)
	{
		str = stations[i];
		res = str.find(new_enter);
		if (res!=-1) {
			strncpy(dyn_stations[counter], stations[i], strlen(stations[i]));
			counter++;
		}
	}
	
  	int k, j, lenth;
    //system("cls");
    
	funk = Choosestation_enter_menu(1, counter, dyn_stations);
	return funk;
    
	/*for(int i =0; i<20; i++)
	{
		strncpy(dyn_stations[i], stations[i], strlen(stations[i]));
		for(int j =0; j<strlen(stations[i]); j++) cout<<stations[i][j];
	}
	
	
	for(int i = 0;i<30; i++)
		for(int j=0;j<strlen(dyn_stations[i]); j++)
		{
			dyn_stations[i][j] = '\0';
			cout<<dyn_stations[i][j];
		}  	*/
}

int main()
{
	HWND hwnd;       
    char Title[1024];
    GetConsoleTitle(Title, 1024);
    hwnd=FindWindow(NULL, Title);
    MoveWindow(hwnd,0,0,540,720,TRUE);
    
    
	int x = Choosestation_enter(1);
	for(int i =0; i<strlen(stations[x]); i++)
		cout<<stations[x][i];
	

	return 0;
}
