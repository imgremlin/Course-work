#include <stdio.h>
int main() {
	int c,k1,k2,k3;
	printf(	"1.Red line\n"
		    "2.Green line\n"
		    "3.Blue line\n"
				);
	printf("Choose the line: ");
	scanf("%i", &c);
	printf("\n");
	switch (c)
	{
				case 1: printf( "1.Akademmistechko\n"
								"2.Zhytomyrska\n"
								"3.Sviatoshyn\n"
								"4.Nyvky\n"
								"5.Beresteiska\n"
								"6.Shuliavska\n"
								"7.Politekhnichnyi Instytut\n"
								"8.Vokzalna\n"
								"9.Universytet\n"
								"10.Teatralna\n"
								"11.Khreshchatyk\n"
								"12.Arsenalna\n"
								"13.Dnipro\n"
								"14.Hidropark\n"
								"15.Livoberezhna\n"
								"16.Darnytsia\n"
								"17.Chernihivska\n"
								"18.Lisova\n"
						);
				printf("Choose the station: ");
				scanf("%i", &k1);
				printf("\n");
	        	break;
	        	
	        	case 2: printf( "1.Syrets\n"
								"2.Dorohozhychi\n"
								"3.Lukianivska\n"
								"4.Zoloti Vorota\n"
								"5.Palats Sportu \n"
								"6.Klovska\n"
								"7.Pecherska\n"
								"8.Druzhby Narodiv\n"
								"9.Vydubychi\n"
								"10.Slavutych\n"
								"11.Osokorky\n"
								"12.Pozniaky\n"
								"13.Kharkivska\n"
								"14.Vyrlytsia\n"
								"15.Boryspilska\n"
								"16.Chervony Khutir\n"
						);
				printf("Choose the station: ");
				scanf("%i", &k2);
				printf("\n");
	        	break;
	        	
	        	case 3: printf( "1. Heroiv Dnipra\n"
								"2.Minska\n"
								"3.Obolon\n"
								"4.Pochaina\n"
								"5.Tarasa Shevchenka\n"
								"6.Kontraktova Ploshcha\n"
								"7.Poshtova Ploshcha\n"
								"8.Maidan Nezalezhnosti\n"
								"9.Ploshcha Lva Tolstoho\n"
								"10.Olimpiiska\n"
								"11.Palats Ukrayina\n"
								"12.Lybidskav\n"
								"13.Demiivska\n"
								"14.Holosiivska\n"
								"15.Vasylkivska\n"
								"16.Vystavkovyi Tsentr\n"
								"17.Ipodrom\n"
								"18.Teremky\n"
						);
				printf("Choose the station: ");
				scanf("%i", &k3);
				printf("\n");
	        	break;
	        	
		default: printf("Input correct number");
	}
	return 0;
}
