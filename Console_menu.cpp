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

using namespace std;

int Choosestation_red(int switcher)
{
  	int k;
    system("cls");
    switch (switcher)
    {
    case 1:
        cout << "\n\n\n                    <<  Akademmistechko!  >>\n\n                    Zhytomyrska\n\n                    Sviatoshyn\n\n                    Nyvky\n\n                    Beresteiska\n\n                    Shuliavska\n\n                    Politekhnichnyi Instytut\n\n                    Vokzalna\n\n                    Universytet\n\n                    Teatralna\n\n                    Khreshchatyk\n\n                    Arsenalna\n\n                    Dnipro\n\n                    Hidropark\n\n                    Livoberezhna\n\n                    Darnytsia\n\n                    Chernihivska\n\n                   Lisova\n\n";
        break;
    case 2:
        cout << "\n\n\n                    Akademmistechko\n\n                    <<  Zhytomyrska!  >>\n\n                    Sviatoshyn\n\n                    Nyvky\n\n                    Beresteiska\n\n                    Shuliavska\n\n                    Politekhnichnyi Instytut\n\n                    Vokzalna\n\n                    Universytet\n\n                    Teatralna\n\n                    Khreshchatyk\n\n                    Arsenalna\n\n                    Dnipro\n\n                    Hidropark\n\n                    Livoberezhna\n\n                    Darnytsia\n\n                    Chernihivska\n\n                   Lisova\n\n";
        break;
    case 3:
        cout << "\n\n\n                    Akademmistechko\n\n                    Zhytomyrska\n\n                    <<  Sviatoshyn!  >>\n\n                    Nyvky\n\n                    Beresteiska\n\n                    Shuliavska\n\n                    Politekhnichnyi Instytut\n\n                    Vokzalna\n\n                    Universytet\n\n                    Teatralna\n\n                    Khreshchatyk\n\n                    Arsenalna\n\n                    Dnipro\n\n                    Hidropark\n\n                    Livoberezhna\n\n                    Darnytsia\n\n                    Chernihivska\n\n                   Lisova\n\n";
        break;
    case 4:
        cout << "\n\n\n                    Akademmistechko\n\n                    Zhytomyrska\n\n                    Sviatoshyn\n\n                    <<  Nyvky!  >>\n\n                    Beresteiska\n\n                    Shuliavska\n\n                    Politekhnichnyi Instytut\n\n                    Vokzalna\n\n                    Universytet\n\n                    Teatralna\n\n                    Khreshchatyk\n\n                    Arsenalna\n\n                    Dnipro\n\n                    Hidropark\n\n                    Livoberezhna\n\n                    Darnytsia\n\n                    Chernihivska\n\n                   Lisova\n\n";
        break;
     case 5:
        cout << "\n\n\n                    Akademmistechko\n\n                    Zhytomyrska\n\n                    Sviatoshyn\n\n                    Nyvky\n\n                    <<  Beresteiska!  >>\n\n                    Shuliavska\n\n                    Politekhnichnyi Instytut\n\n                    Vokzalna\n\n                    Universytet\n\n                    Teatralna\n\n                    Khreshchatyk\n\n                    Arsenalna\n\n                    Dnipro\n\n                    Hidropark\n\n                    Livoberezhna\n\n                    Darnytsia\n\n                    Chernihivska\n\n                   Lisova\n\n";
        break;
	case 6:
        cout << "\n\n\n                    Akademmistechko\n\n                    Zhytomyrska\n\n                    Sviatoshyn\n\n                    Nyvky\n\n                    Beresteiska\n\n                    <<  Shuliavska!  >>\n\n                    Politekhnichnyi Instytut\n\n                    Vokzalna\n\n                    Universytet\n\n                    Teatralna\n\n                    Khreshchatyk\n\n                    Arsenalna\n\n                    Dnipro\n\n                    Hidropark\n\n                    Livoberezhna\n\n                    Darnytsia\n\n                    Chernihivska\n\n                   Lisova\n\n";
        break;
	case 7:
        cout << "\n\n\n                    Akademmistechko\n\n                    Zhytomyrska\n\n                    Sviatoshyn\n\n                    Nyvky\n\n                    Beresteiska\n\n                    Shuliavska\n\n                    <<  Politekhnichnyi Instytut!  >>\n\n                    Vokzalna\n\n                    Universytet\n\n                    Teatralna\n\n                    Khreshchatyk\n\n                    Arsenalna\n\n                    Dnipro\n\n                    Hidropark\n\n                    Livoberezhna\n\n                    Darnytsia\n\n                    Chernihivska\n\n                   Lisova\n\n";
        break;
	case 8:
        cout << "\n\n\n                    Akademmistechko\n\n                    Zhytomyrska\n\n                    Sviatoshyn\n\n                    Nyvky\n\n                    Beresteiska\n\n                    Shuliavska\n\n                    Politekhnichnyi Instytut\n\n                    <<  Vokzalna!  >>\n\n                    Universytet\n\n                    Teatralna\n\n                    Khreshchatyk\n\n                    Arsenalna\n\n                    Dnipro\n\n                    Hidropark\n\n                    Livoberezhna\n\n                    Darnytsia\n\n                    Chernihivska\n\n                   Lisova\n\n";
        break;
	case 9:
        cout << "\n\n\n                    Akademmistechko\n\n                    Zhytomyrska\n\n                    Sviatoshyn\n\n                    Nyvky\n\n                    Beresteiska\n\n                    Shuliavska\n\n                    Politekhnichnyi Instytut\n\n                    Vokzalna\n\n                    <<  Universytet!  >>\n\n                    Teatralna\n\n                    Khreshchatyk\n\n                    Arsenalna\n\n                    Dnipro\n\n                    Hidropark\n\n                    Livoberezhna\n\n                    Darnytsia\n\n                    Chernihivska\n\n                   Lisova\n\n";
        break;
	case 10:
        cout << "\n\n\n                    Akademmistechko\n\n                    Zhytomyrska\n\n                    Sviatoshyn\n\n                    Nyvky\n\n                    Beresteiska\n\n                    Shuliavska\n\n                    Politekhnichnyi Instytut\n\n                    Vokzalna\n\n                    Universytet\n\n                    <<  Teatralna!  >>\n\n                    Khreshchatyk\n\n                    Arsenalna\n\n                    Dnipro\n\n                    Hidropark\n\n                    Livoberezhna\n\n                    Darnytsia\n\n                    Chernihivska\n\n                   Lisova\n\n";
        break;		
	case 11:
        cout << "\n\n\n                    Akademmistechko\n\n                    Zhytomyrska\n\n                    Sviatoshyn\n\n                    Nyvky\n\n                    Beresteiska\n\n                    Shuliavska\n\n                    Politekhnichnyi Instytut\n\n                    Vokzalna\n\n                    Universytet\n\n                    Teatralna\n\n                    <<  Khreshchatyk!  >>\n\n                    Arsenalna\n\n                    Dnipro\n\n                    Hidropark\n\n                    Livoberezhna\n\n                    Darnytsia\n\n                    Chernihivska\n\n                   Lisova\n\n";
        break;		
	case 12:
        cout << "\n\n\n                    Akademmistechko\n\n                    Zhytomyrska\n\n                    Sviatoshyn\n\n                    Nyvky\n\n                    Beresteiska\n\n                    Shuliavska\n\n                    Politekhnichnyi Instytut\n\n                    Vokzalna\n\n                    Universytet\n\n                    Teatralna\n\n                    Khreshchatyk\n\n                    <<  Arsenalna!  >>\n\n                    Dnipro\n\n                    Hidropark\n\n                    Livoberezhna\n\n                    Darnytsia\n\n                    Chernihivska\n\n                   Lisova\n\n";
        break;	
	case 13:
        cout << "\n\n\n                    Akademmistechko\n\n                    Zhytomyrska\n\n                    Sviatoshyn\n\n                    Nyvky\n\n                    Beresteiska\n\n                    Shuliavska\n\n                    Politekhnichnyi Instytut\n\n                    Vokzalna\n\n                    Universytet\n\n                    Teatralna\n\n                    Khreshchatyk\n\n                    Arsenalna\n\n                   <<  Dnipro!  >>\n\n                    Hidropark\n\n                    Livoberezhna\n\n                    Darnytsia\n\n                    Chernihivska\n\n                   Lisova\n\n";
        break;	
	case 14:
        cout << "\n\n\n                    Akademmistechko\n\n                    Zhytomyrska\n\n                    Sviatoshyn\n\n                    Nyvky\n\n                    Beresteiska\n\n                    Shuliavska\n\n                    Politekhnichnyi Instytut\n\n                    Vokzalna\n\n                    Universytet\n\n                    Teatralna\n\n                    Khreshchatyk\n\n                    Arsenalna\n\n                    Dnipro\n\n                    <<  Hidropark!  >>\n\n                    Livoberezhna\n\n                    Darnytsia\n\n                    Chernihivska\n\n                   Lisova\n\n";
        break;	
	case 15:
        cout << "\n\n\n                    Akademmistechko\n\n                    Zhytomyrska\n\n                    Sviatoshyn\n\n                    Nyvky\n\n                    Beresteiska\n\n                    Shuliavska\n\n                    Politekhnichnyi Instytut\n\n                    Vokzalna\n\n                    Universytet\n\n                    Teatralna\n\n                    Khreshchatyk\n\n                    Arsenalna\n\n                    Dnipro\n\n                    Hidropark\n\n                    <<  Livoberezhna!  >>\n\n                    Darnytsia\n\n                    Chernihivska\n\n                   Lisova\n\n";
        break;	
	case 16:
        cout << "\n\n\n                    Akademmistechko\n\n                    Zhytomyrska\n\n                    Sviatoshyn\n\n                    Nyvky\n\n                    Beresteiska\n\n                    Shuliavska\n\n                    Politekhnichnyi Instytut\n\n                    Vokzalna\n\n                    Universytet\n\n                    Teatralna\n\n                    Khreshchatyk\n\n                    Arsenalna\n\n                    Dnipro\n\n                    Hidropark\n\n                    Livoberezhna\n\n                    <<  Darnytsia!  >>\n\n                    Chernihivska\n\n                   Lisova\n\n";
        break;
	case 17:
        cout << "\n\n\n                    Akademmistechko\n\n                    Zhytomyrska\n\n                    Sviatoshyn\n\n                    Nyvky\n\n                    Beresteiska\n\n                    Shuliavska\n\n                    Politekhnichnyi Instytut\n\n                    Vokzalna\n\n                    Universytet\n\n                    Teatralna\n\n                    Khreshchatyk\n\n                    Arsenalna\n\n                    Dnipro\n\n                    Hidropark\n\n                    Livoberezhna\n\n                    Darnytsia\n\n                    <<  Chernihivska!  >>\n\n                   Lisova\n\n";
        break;		
	case 18:
        cout << "\n\n\n                    Akademmistechko\n\n                    Zhytomyrska\n\n                    Sviatoshyn\n\n                    Nyvky\n\n                    Beresteiska\n\n                    Shuliavska\n\n                    Politekhnichnyi Instytut\n\n                    Vokzalna\n\n                    Universytet\n\n                    Teatralna\n\n                    Khreshchatyk\n\n                    Arsenalna\n\n                    Dnipro\n\n                    Hidropark\n\n                    Livoberezhna\n\n                    Darnytsia\n\n                    Chernihivska\n\n                   <<  Lisova!  >>\n\n";
        break;									   
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
    {
        if (switcher == 1) k=1;	
        if (switcher == 2) k=2;
        if (switcher == 3) k=3;
        if (switcher == 4) k=4;
        if (switcher == 5) k=5;
        if (switcher == 6) k=6;
        if (switcher == 7) k=7;
        if (switcher == 8) k=8;
        if (switcher == 9) k=9;
        if (switcher == 10) k=10;
        if (switcher == 11) k=11;
        if (switcher == 12) k=12;
        if (switcher == 13) k=13;
        if (switcher == 14) k=14;
        if (switcher == 15) k=15;
        if (switcher == 16) k=16;
        if (switcher == 17) k=17;
        if (switcher == 18) k=18;
        
      	return k;
    
}}




int Choosestation_green(int switcher)
{
  	int k;
    system("cls");
    switch (switcher)
    {
    case 1:
        cout << "\n\n\n                    <<  Syrets!  >>\n\n                    Dorohozhychi\n\n                    Lukianivska\n\n                    Zoloti Vorota\n\n                    Palats Sportu\n\n                    Klovska\n\n                    Pecherska\n\n                    Druzhby Narodiv\n\n                    Vydubychi\n\n                    Slavutych\n\n                    Osokorky\n\n                    Pozniaky\n\n                    Kharkivska\n\n                    Vyrlytsia\n\n                    Boryspilska\n\n                    Chervony Khutir\n\n";
		break;
    case 2:
        cout << "\n\n\n                    Syrets\n\n                    <<  Dorohozhychi!  >>\n\n                    Lukianivska\n\n                    Zoloti Vorota\n\n                    Palats Sportu\n\n                    Klovska\n\n                    Pecherska\n\n                    Druzhby Narodiv\n\n                    Vydubychi\n\n                    Slavutych\n\n                    Osokorky\n\n                    Pozniaky\n\n                    Kharkivska\n\n                    Vyrlytsia\n\n                    Boryspilska\n\n                    Chervony Khutir\n\n";
        break;
    case 3:
        cout << "\n\n\n                    Syrets\n\n                    Dorohozhychi\n\n                    <<  Lukianivska!  >>\n\n                    Zoloti Vorota\n\n                    Palats Sportu\n\n                    Klovska\n\n                    Pecherska\n\n                    Druzhby Narodiv\n\n                    Vydubychi\n\n                    Slavutych\n\n                    Osokorky\n\n                    Pozniaky\n\n                    Kharkivska\n\n                    Vyrlytsia\n\n                    Boryspilska\n\n                    Chervony Khutir\n\n";
        break;
    case 4:
        cout << "\n\n\n                    Syrets\n\n                    Dorohozhychi\n\n                    Lukianivska\n\n                    <<  Zoloti Vorota!  >>\n\n                    Palats Sportu\n\n                    Klovska\n\n                    Pecherska\n\n                    Druzhby Narodiv\n\n                    Vydubychi\n\n                    Slavutych\n\n                    Osokorky\n\n                    Pozniaky\n\n                    Kharkivska\n\n                    Vyrlytsia\n\n                    Boryspilska\n\n                    Chervony Khutir\n\n";
        break;
     case 5:
        cout << "\n\n\n                    Syrets\n\n                    Dorohozhychi\n\n                    Lukianivska\n\n                    Zoloti Vorota\n\n                    <<  Palats Sportu!  >>\n\n                    Klovska\n\n                    Pecherska\n\n                    Druzhby Narodiv\n\n                    Vydubychi\n\n                    Slavutych\n\n                    Osokorky\n\n                    Pozniaky\n\n                    Kharkivska\n\n                    Vyrlytsia\n\n                    Boryspilska\n\n                    Chervony Khutir\n\n";
        break;
	case 6:
        cout << "\n\n\n                    Syrets\n\n                    Dorohozhychi\n\n                    Lukianivska\n\n                    Zoloti Vorota\n\n                    Palats Sportu\n\n                    <<  Klovska!  >>\n\n                    Pecherska\n\n                    Druzhby Narodiv\n\n                    Vydubychi\n\n                    Slavutych\n\n                    Osokorky\n\n                    Pozniaky\n\n                    Kharkivska\n\n                    Vyrlytsia\n\n                    Boryspilska\n\n                    Chervony Khutir\n\n";
        break;
	case 7:
        cout << "\n\n\n                    Syrets\n\n                    Dorohozhychi\n\n                    Lukianivska\n\n                    Zoloti Vorota\n\n                    Palats Sportu\n\n                    Klovska\n\n                    <<  Pecherska!  >>\n\n                    Druzhby Narodiv\n\n                    Vydubychi\n\n                    Slavutych\n\n                    Osokorky\n\n                    Pozniaky\n\n                    Kharkivska\n\n                    Vyrlytsia\n\n                    Boryspilska\n\n                    Chervony Khutir\n\n";
        break;
	case 8:
        cout << "\n\n\n                    Syrets\n\n                    Dorohozhychi\n\n                    Lukianivska\n\n                    Zoloti Vorota\n\n                    Palats Sportu\n\n                    Klovska\n\n                    Pecherska\n\n                    <<  Druzhby Narodiv!  >>\n\n                    Vydubychi\n\n                    Slavutych\n\n                    Osokorky\n\n                    Pozniaky\n\n                    Kharkivska\n\n                    Vyrlytsia\n\n                    Boryspilska\n\n                    Chervony Khutir\n\n";
        break;
	case 9:
        cout << "\n\n\n                    Syrets\n\n                    Dorohozhychi\n\n                    Lukianivska\n\n                    Zoloti Vorota\n\n                    Palats Sportu\n\n                    Klovska\n\n                    Pecherska\n\n                    Druzhby Narodiv\n\n                    <<  Vydubychi!  >>\n\n                    Slavutych\n\n                    Osokorky\n\n                    Pozniaky\n\n                    Kharkivska\n\n                    Vyrlytsia\n\n                    Boryspilska\n\n                    Chervony Khutir\n\n";
        break;
	case 10:
        cout << "\n\n\n                    Syrets\n\n                    Dorohozhychi\n\n                    Lukianivska\n\n                    Zoloti Vorota\n\n                    Palats Sportu\n\n                    Klovska\n\n                    Pecherska\n\n                    Druzhby Narodiv\n\n                    Vydubychi\n\n                    <<  Slavutych!  >>\n\n                    Osokorky\n\n                    Pozniaky\n\n                    Kharkivska\n\n                    Vyrlytsia\n\n                    Boryspilska\n\n                    Chervony Khutir\n\n";
        break;		
	case 11:
        cout << "\n\n\n                    Syrets\n\n                    Dorohozhychi\n\n                    Lukianivska\n\n                    Zoloti Vorota\n\n                    Palats Sportu\n\n                    Klovska\n\n                    Pecherska\n\n                    Druzhby Narodiv\n\n                    Vydubychi\n\n                    Slavutych\n\n                    <<  Osokorky!  >>\n\n                    Pozniaky\n\n                    Kharkivska\n\n                    Vyrlytsia\n\n                    Boryspilska\n\n                    Chervony Khutir\n\n";
        break;		
	case 12:
        cout << "\n\n\n                    Syrets\n\n                    Dorohozhychi\n\n                    Lukianivska\n\n                    Zoloti Vorota\n\n                    Palats Sportu\n\n                    Klovska\n\n                    Pecherska\n\n                    Druzhby Narodiv\n\n                    Vydubychi\n\n                    Slavutych\n\n                    Osokorky\n\n                    <<  Pozniaky!  >>\n\n                    Kharkivska\n\n                    Vyrlytsia\n\n                    Boryspilska\n\n                    Chervony Khutir\n\n";
        break;	
	case 13:
        cout << "\n\n\n                    Syrets\n\n                    Dorohozhychi\n\n                    Lukianivska\n\n                    Zoloti Vorota\n\n                    Palats Sportu\n\n                    Klovska\n\n                    Pecherska\n\n                    Druzhby Narodiv\n\n                    Vydubychi\n\n                    Slavutych\n\n                    Osokorky\n\n                    Pozniaky\n\n                    <<  Kharkivska!  >>\n\n                    Vyrlytsia\n\n                    Boryspilska\n\n                    Chervony Khutir\n\n";
        break;	
	case 14:
        cout << "\n\n\n                    Syrets\n\n                    Dorohozhychi\n\n                    Lukianivska\n\n                    Zoloti Vorota\n\n                    Palats Sportu\n\n                    Klovska\n\n                    Pecherska\n\n                    Druzhby Narodiv\n\n                    Vydubychi\n\n                    Slavutych\n\n                    Osokorky\n\n                    Pozniaky\n\n                    Kharkivska\n\n                    <<  Vyrlytsia!  >>\n\n                    Boryspilska\n\n                    Chervony Khutir\n\n";
        break;	
	case 15:
        cout << "\n\n\n                    Syrets\n\n                    Dorohozhychi\n\n                    Lukianivska\n\n                    Zoloti Vorota\n\n                    Palats Sportu\n\n                    Klovska\n\n                    Pecherska\n\n                    Druzhby Narodiv\n\n                    Vydubychi\n\n                    Slavutych\n\n                    Osokorky\n\n                    Pozniaky\n\n                    Kharkivska\n\n                    Vyrlytsia\n\n                    <<  Boryspilska!  >>\n\n                    Chervony Khutir\n\n";
        break;	
	case 16:
        cout << "\n\n\n                    Syrets\n\n                    Dorohozhychi\n\n                    Lukianivska\n\n                    Zoloti Vorota\n\n                    Palats Sportu\n\n                    Klovska\n\n                    Pecherska\n\n                    Druzhby Narodiv\n\n                    Vydubychi\n\n                    Slavutych\n\n                    Osokorky\n\n                    Pozniaky\n\n                    Kharkivska\n\n                    Vyrlytsia\n\n                    Boryspilska\n\n                    <<  Chervony Khutir!  >>\n\n";
        break;
									   
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
    {
        if (switcher == 1) k=1;	
        if (switcher == 2) k=2;
        if (switcher == 3) k=3;
        if (switcher == 4) k=4;
        if (switcher == 5) k=5;
        if (switcher == 6) k=6;
        if (switcher == 7) k=7;
        if (switcher == 8) k=8;
        if (switcher == 9) k=9;
        if (switcher == 10) k=10;
        if (switcher == 11) k=11;
        if (switcher == 12) k=12;
        if (switcher == 13) k=13;
        if (switcher == 14) k=14;
        if (switcher == 15) k=15;
        if (switcher == 16) k=16;
        k+=18;
      	return k;
    
}}

int Choosestation_blue(int switcher)
{
  	int k;
    system("cls");
    switch (switcher)
    {
    case 1:
        cout << "\n\n\n                    <<  Heroiv Dnipra!  >>\n\n                    Minska\n\n                    Obolon\n\n                    Pochaina\n\n                    Tarasa Shevchenka\n\n                    Kontraktova Ploshcha\n\n                    Poshtova Ploshcha\n\n                    Maidan Nezalezhnosti\n\n                    Ploshcha Lva Tolstoho\n\n                    Olimpiiska\n\n                    Palats Ukrayina\n\n                    Lybidska\n\n                    Demiivska\n\n                    Holosiivska\n\n                    Vasylkivska\n\n                    Vystavkovyi Tsentr\n\n                    Ipodrom\n\n                    Teremky\n\n";
        break;
    case 2:
        cout << "\n\n\n                    Heroiv Dnipra\n\n                    <<  Minska!  >>\n\n                    Obolon\n\n                    Pochaina\n\n                    Tarasa Shevchenka\n\n                    Kontraktova Ploshcha\n\n                    Poshtova Ploshcha\n\n                    Maidan Nezalezhnosti\n\n                    Ploshcha Lva Tolstoho\n\n                    Olimpiiska\n\n                    Palats Ukrayina\n\n                    Lybidska\n\n                    Demiivska\n\n                    Holosiivska\n\n                    Vasylkivska\n\n                    Vystavkovyi Tsentr\n\n                    Ipodrom\n\n                    Teremky\n\n";
        break;
    case 3:
        cout << "\n\n\n                    Heroiv Dnipra\n\n                    Minska\n\n                    <<  Obolon!  >>\n\n                    Pochaina\n\n                    Tarasa Shevchenka\n\n                    Kontraktova Ploshcha\n\n                    Poshtova Ploshcha\n\n                    Maidan Nezalezhnosti\n\n                    Ploshcha Lva Tolstoho\n\n                    Olimpiiska\n\n                    Palats Ukrayina\n\n                    Lybidska\n\n                    Demiivska\n\n                    Holosiivska\n\n                    Vasylkivska\n\n                    Vystavkovyi Tsentr\n\n                    Ipodrom\n\n                    Teremky\n\n";
        break;
    case 4:
        cout << "\n\n\n                    Heroiv Dnipra\n\n                    Minska\n\n                    Obolon\n\n                    <<  Pochaina!  >>\n\n                    Tarasa Shevchenka\n\n                    Kontraktova Ploshcha\n\n                    Poshtova Ploshcha\n\n                    Maidan Nezalezhnosti\n\n                    Ploshcha Lva Tolstoho\n\n                    Olimpiiska\n\n                    Palats Ukrayina\n\n                    Lybidska\n\n                    Demiivska\n\n                    Holosiivska\n\n                    Vasylkivska\n\n                    Vystavkovyi Tsentr\n\n                    Ipodrom\n\n                    Teremky\n\n";
        break;
     case 5:
        cout << "\n\n\n                    Heroiv Dnipra\n\n                    Minska\n\n                    Obolon\n\n                    Pochaina\n\n                    <<  Tarasa Shevchenka!  >>\n\n                    Kontraktova Ploshcha\n\n                    Poshtova Ploshcha\n\n                    Maidan Nezalezhnosti\n\n                    Ploshcha Lva Tolstoho\n\n                    Olimpiiska\n\n                    Palats Ukrayina\n\n                    Lybidska\n\n                    Demiivska\n\n                    Holosiivska\n\n                    Vasylkivska\n\n                    Vystavkovyi Tsentr\n\n                    Ipodrom\n\n                    Teremky\n\n";
        break;
	case 6:
        cout << "\n\n\n                    Heroiv Dnipra\n\n                    Minska\n\n                    Obolon\n\n                    Pochaina\n\n                    Tarasa Shevchenka\n\n                    <<  Kontraktova Ploshcha!  >>\n\n                    Poshtova Ploshcha\n\n                    Maidan Nezalezhnosti\n\n                    Ploshcha Lva Tolstoho\n\n                    Olimpiiska\n\n                    Palats Ukrayina\n\n                    Lybidska\n\n                    Demiivska\n\n                    Holosiivska\n\n                    Vasylkivska\n\n                    Vystavkovyi Tsentr\n\n                    Ipodrom\n\n                    Teremky\n\n";
        break;
	case 7:
        cout << "\n\n\n                    Heroiv Dnipra\n\n                    Minska\n\n                    Obolon\n\n                    Pochaina\n\n                    Tarasa Shevchenka\n\n                    Kontraktova Ploshcha\n\n                    <<  Poshtova Ploshcha!  >>\n\n                    Maidan Nezalezhnosti\n\n                    Ploshcha Lva Tolstoho\n\n                    Olimpiiska\n\n                    Palats Ukrayina\n\n                    Lybidska\n\n                    Demiivska\n\n                    Holosiivska\n\n                    Vasylkivska\n\n                    Vystavkovyi Tsentr\n\n                    Ipodrom\n\n                    Teremky\n\n";
        break;
	case 8:
        cout << "\n\n\n                    Heroiv Dnipra\n\n                    Minska\n\n                    Obolon\n\n                    Pochaina\n\n                    Tarasa Shevchenka\n\n                    Kontraktova Ploshcha\n\n                    Poshtova Ploshcha\n\n                    <<  Maidan Nezalezhnosti!  >>\n\n                    Ploshcha Lva Tolstoho\n\n                    Olimpiiska\n\n                    Palats Ukrayina\n\n                    Lybidska\n\n                    Demiivska\n\n                    Holosiivska\n\n                    Vasylkivska\n\n                    Vystavkovyi Tsentr\n\n                    Ipodrom\n\n                    Teremky\n\n";
        break;
	case 9:
        cout << "\n\n\n                    Heroiv Dnipra\n\n                    Minska\n\n                    Obolon\n\n                    Pochaina\n\n                    Tarasa Shevchenka\n\n                    Kontraktova Ploshcha\n\n                    Poshtova Ploshcha\n\n                    Maidan Nezalezhnosti\n\n                    <<  Ploshcha Lva Tolstoho!  >>\n\n                    Olimpiiska\n\n                    Palats Ukrayina\n\n                    Lybidska\n\n                    Demiivska\n\n                    Holosiivska\n\n                    Vasylkivska\n\n                    Vystavkovyi Tsentr\n\n                    Ipodrom\n\n                    Teremky\n\n";
        break;
	case 10:
        cout << "\n\n\n                    Heroiv Dnipra\n\n                    Minska\n\n                    Obolon\n\n                    Pochaina\n\n                    Tarasa Shevchenka\n\n                    Kontraktova Ploshcha\n\n                    Poshtova Ploshcha\n\n                    Maidan Nezalezhnosti\n\n                    Ploshcha Lva Tolstoho\n\n                    <<  Olimpiiska!  >>\n\n                    Palats Ukrayina\n\n                    Lybidska\n\n                    Demiivska\n\n                    Holosiivska\n\n                    Vasylkivska\n\n                    Vystavkovyi Tsentr\n\n                    Ipodrom\n\n                    Teremky\n\n";
        break;		
	case 11:
        cout << "\n\n\n                    Heroiv Dnipra\n\n                    Minska\n\n                    Obolon\n\n                    Pochaina\n\n                    Tarasa Shevchenka\n\n                    Kontraktova Ploshcha\n\n                    Poshtova Ploshcha\n\n                    Maidan Nezalezhnosti\n\n                    Ploshcha Lva Tolstoho\n\n                    Olimpiiska\n\n                    <<  Palats Ukrayina!  >>\n\n                    Lybidska\n\n                    Demiivska\n\n                    Holosiivska\n\n                    Vasylkivska\n\n                    Vystavkovyi Tsentr\n\n                    Ipodrom\n\n                    Teremky\n\n";
        break;		
	case 12:
        cout << "\n\n\n                    Heroiv Dnipra\n\n                    Minska\n\n                    Obolon\n\n                    Pochaina\n\n                    Tarasa Shevchenka\n\n                    Kontraktova Ploshcha\n\n                    Poshtova Ploshcha\n\n                    Maidan Nezalezhnosti\n\n                    Ploshcha Lva Tolstoho\n\n                    Olimpiiska\n\n                    Palats Ukrayina\n\n                    <<  Lybidska!  >>\n\n                    Demiivska\n\n                    Holosiivska\n\n                    Vasylkivska\n\n                    Vystavkovyi Tsentr\n\n                    Ipodrom\n\n                    Teremky\n\n";
        break;	
	case 13:
        cout << "\n\n\n                    Heroiv Dnipra\n\n                    Minska\n\n                    Obolon\n\n                    Pochaina\n\n                    Tarasa Shevchenka\n\n                    Kontraktova Ploshcha\n\n                    Poshtova Ploshcha\n\n                    Maidan Nezalezhnosti\n\n                    Ploshcha Lva Tolstoho\n\n                    Olimpiiska\n\n                    Palats Ukrayina\n\n                    Lybidska\n\n                    <<  Demiivska!  >>\n\n                    Holosiivska\n\n                    Vasylkivska\n\n                    Vystavkovyi Tsentr\n\n                    Ipodrom\n\n                    Teremky\n\n";
        break;	
	case 14:
        cout << "\n\n\n                    Heroiv Dnipra\n\n                    Minska\n\n                    Obolon\n\n                    Pochaina\n\n                    Tarasa Shevchenka\n\n                    Kontraktova Ploshcha\n\n                    Poshtova Ploshcha\n\n                    Maidan Nezalezhnosti\n\n                    Ploshcha Lva Tolstoho\n\n                    Olimpiiska\n\n                    Palats Ukrayina\n\n                    Lybidska\n\n                    Demiivska\n\n                    <<  Holosiivska!  >>\n\n                    Vasylkivska\n\n                    Vystavkovyi Tsentr\n\n                    Ipodrom\n\n                    Teremky\n\n";
        break;	
	case 15:
        cout << "\n\n\n                    Heroiv Dnipra\n\n                    Minska\n\n                    Obolon\n\n                    Pochaina\n\n                    Tarasa Shevchenka\n\n                    Kontraktova Ploshcha\n\n                    Poshtova Ploshcha\n\n                    Maidan Nezalezhnosti\n\n                    Ploshcha Lva Tolstoho\n\n                    Olimpiiska\n\n                    Palats Ukrayina\n\n                    Lybidska\n\n                    Demiivska\n\n                    Holosiivska\n\n                    <<  Vasylkivska!  >>\n\n                    Vystavkovyi Tsentr\n\n                    Ipodrom\n\n                    Teremky\n\n";
        break;	
	case 16:
        cout << "\n\n\n                    Heroiv Dnipra\n\n                    Minska\n\n                    Obolon\n\n                    Pochaina\n\n                    Tarasa Shevchenka\n\n                    Kontraktova Ploshcha\n\n                    Poshtova Ploshcha\n\n                    Maidan Nezalezhnosti\n\n                    Ploshcha Lva Tolstoho\n\n                    Olimpiiska\n\n                    Palats Ukrayina\n\n                    Lybidska\n\n                    Demiivska\n\n                    Holosiivska\n\n                    Vasylkivska\n\n                    <<  Vystavkovyi Tsentr!  >>\n\n                    Ipodrom\n\n                    Teremky\n\n";
        break;
	case 17:
        cout << "\n\n\n                    Heroiv Dnipra\n\n                    Minska\n\n                    Obolon\n\n                    Pochaina\n\n                    Tarasa Shevchenka\n\n                    Kontraktova Ploshcha\n\n                    Poshtova Ploshcha\n\n                    Maidan Nezalezhnosti\n\n                    Ploshcha Lva Tolstoho\n\n                    Olimpiiska\n\n                    Palats Ukrayina\n\n                    Lybidska\n\n                    Demiivska\n\n                    Holosiivska\n\n                    Vasylkivska\n\n                    Vystavkovyi Tsentr\n\n                    <<  Ipodrom!  >>\n\n                    Teremky\n\n";
        break;		
	case 18:
        cout << "\n\n\n                    Heroiv Dnipra\n\n                    Minska\n\n                    Obolon\n\n                    Pochaina\n\n                    Tarasa Shevchenka\n\n                    Kontraktova Ploshcha\n\n                    Poshtova Ploshcha\n\n                    Maidan Nezalezhnosti\n\n                    Ploshcha Lva Tolstoho\n\n                    Olimpiiska\n\n                    Palats Ukrayina\n\n                    Lybidska\n\n                    Demiivska\n\n                    Holosiivska\n\n                    Vasylkivska\n\n                    Vystavkovyi Tsentr\n\n                    Ipodrom\n\n                    <<  Teremky!  >>\n\n";
        break;									   
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
    {
        if (switcher == 1) k=1;	
        if (switcher == 2) k=2;
        if (switcher == 3) k=3;
        if (switcher == 4) k=4;
        if (switcher == 5) k=5;
        if (switcher == 6) k=6;
        if (switcher == 7) k=7;
        if (switcher == 8) k=8;
        if (switcher == 9) k=9;
        if (switcher == 10) k=10;
        if (switcher == 11) k=11;
        if (switcher == 12) k=12;
        if (switcher == 13) k=13;
        if (switcher == 14) k=14;
        if (switcher == 15) k=15;
        if (switcher == 16) k=16;
        if (switcher == 17) k=17;
        if (switcher == 18) k=18;
        k+=34;
      	return k;
    
}}

int Chooseline(int switcher1)
{
   int l;
    system("cls");
    switch (switcher1)
    {
    case 1:
        cout << "\n\n\n                    <<  RED LINE!  >>\n\n                        GREEN LINE\n\n                   BLUE LINE\n\n";
        break;
    case 2:
        cout << "\n\n\n                        RED LINE\n\n                    <<  GREEN LINE!  >>\n\n                    BLUE LINE\n\n";
        break;
    case 3:
        cout << "\n\n\n                        RED LINE\n\n                        GREEN LINE\n\n                <<  BLUE LINE!  >>\n\n";
        break;
    case 4:
        cout << "\n\n\n                        RED LINE\n\n                        GREEN LINE\n\n                    BLUE LINE\n\n";
        break;
    }
    int choice = getch();
    if (choice == 224)
        choice = getch();
    if (choice == UP)
        if (switcher1 != 1)
            Chooseline(switcher1 - 1);
        else
            Chooseline(3);
    if (choice == DOWN)
        if (switcher1 != 3)
            Chooseline(switcher1 + 1);
        else
            Chooseline(1);
    if (choice == ENTER || choice == SPACE)
    {
        if (switcher1 == 1)
        	l = Choosestation_red(1);
        if (switcher1 == 2)
           l = Choosestation_green(1);
        if (switcher1 == 3)
            l = Choosestation_blue(1);
        return l;    
        
    
}}



int StartMenu(int switcher, int &y, int &z)
{//	int y,z;
    system("cls");
    switch (switcher)
    {
    case 1:
        cout << "\n\n\n                    <<  GAME!  >>\n\n                        HELP\n\n                    HALL OF FAME\n\n                        EXIT";
        break;
    case 2:
        cout << "\n\n\n                        GAME\n\n                    <<  HELP!  >>\n\n                    HALL OF FAME\n\n                        EXIT";
        break;
    case 3:
        cout << "\n\n\n                        GAME\n\n                        HELP\n\n                <<  HALL OF FAME!  >>\n\n                        EXIT";
        break;
    case 4:
        cout << "\n\n\n                        GAME\n\n                        HELP\n\n                    HALL OF FAME\n\n                    <<  EXIT!  >>";
        break;
    }
    int choice = getch();
    if (choice == 224)
        choice = getch();
    if (choice == UP)
        if (switcher != 1)
            StartMenu(switcher - 1, y, z);
        else
            StartMenu(4, y, z);
    if (choice == DOWN)
        if (switcher != 4)
            StartMenu(switcher + 1,y, z);
        else
            StartMenu(1, y, z);
    if (choice == ENTER || choice == SPACE)
    {
        if (switcher == 1){
        	y = Chooseline(1);
        	z = Chooseline(1);
        
  };
        if (switcher == 2)
        if (switcher == 3)
        if (switcher == 4)
            exit(0);  
    }
}





int main()
{
	int x,y, z;
	StartMenu(1, y, z);
	cout<<y<<endl<<z;
	return 0;
	
}
