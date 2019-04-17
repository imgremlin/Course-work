/*https://www.codewithc.com/dijkstras-algorithm-in-c/*/
#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<string.h>
#include<math.h>
#define IN 99
#define N 53
int dijkstra(int cost[][N], int source, int target);
int main()
{
    int cost[N][N],i,j,w,ch,co;
    int source, target,x,y;
    for(i=1;i< N;i++)
    for(j=1;j< N;j++)
    cost[i][j] = IN;
    
    cost [1][2] = cost[2][1] = 1; //1 - akadem
	cost [2][3] = cost[3][2] = 1;
	cost [3][4] = cost[4][3] = 1;
	cost [4][5] = cost[5][4] = 1;
	cost [5][6] = cost[6][5] = 1;
	cost [6][7] = cost[7][6] = 1;
	cost [7][8] = cost[8][7] = 1;
	cost [8][9] = cost[9][8] = 1;
	cost [9][10] = cost[10][9] = 1; //10 - teatr
	cost [10][11] = cost[11][10] = 1; //11 - hrest
	cost [11][12] = cost[12][11] = 1;
	cost [12][13] = cost[13][12] = 1;
	cost [13][14] = cost[14][13] = 1;
	cost [14][15] = cost[15][14] = 1;
	cost [15][16] = cost[16][15] = 1;
	cost [16][17] = cost[17][16] = 1;
	cost [18][17] = cost[17][18] = 1; //18 - lisova
	
	
	cost [19][20] = cost[20][19] = 1; //19 - syrets
	cost [20][21] = cost[21][20] = 1; 
	cost [21][22] = cost[22][21] = 1; //22 - zoloti vorota
	cost [22][23] = cost[23][22] = 1; //23 - palats sportu
	cost [23][24] = cost[24][23] = 1;
	cost [24][25] = cost[25][24] = 1;
	cost [25][26] = cost[26][25] = 1;
	cost [26][27] = cost[27][26] = 1;
	cost [27][28] = cost[28][27] = 1;
	cost [28][29] = cost[29][28] = 1;
	cost [29][30] = cost[30][29] = 1;
	cost [30][31] = cost[31][30] = 1;
	cost [31][32] = cost[32][31] = 1; 
	cost [33][32] = cost[32][33] = 1;
	cost [33][34] = cost[34][33] = 1; //34 - chervoniy khutir
	
	cost [35][36] = cost[36][35] = 1; //35 - heroiv dnipra
	cost [36][37] = cost[37][36] = 1;
	cost [37][38] = cost[38][37] = 1;
	cost [38][39] = cost[39][38] = 1;
	cost [39][40] = cost[40][39] = 1; 
	cost [40][41] = cost[41][40] = 1; //42 - maidan
	cost [41][42] = cost[42][41] = 1; //43 - plosha lva tolstogo
	cost [42][43] = cost[43][42] = 1;
	cost [43][44] = cost[44][43] = 1;
	cost [44][45] = cost[45][44] = 1;
	cost [45][46] = cost[46][45] = 1;
	cost [46][47] = cost[47][46] = 1;
	cost [47][48] = cost[48][47] = 1;
	cost [48][49] = cost[49][48] = 1;
	cost [50][49] = cost[49][50] = 1;
	cost [50][51] = cost[51][50] = 1;
	cost [52][51] = cost[51][52] = 1; //52 - teremki
        
    cost [22][10] = cost[10][22] = 1; //zv - teatr   
    cost [42][11] = cost[11][42] = 1; //maidan - hrest
	cost [23][43] = cost[43][23] = 1; //lt - palats sportu  
	
    printf("Enter the source: ");
    scanf("%d", &source);
    printf("Enter the target: ");
    scanf("%d", &target);
    co = dijsktra(cost,source,target);
    printf("The Shortest Path: %d",co);
}
int dijsktra(int cost[][N],int source,int target)
{
	char stations[49][30] = {"Akademmistechko", "Zhytomyrska", "Sviatoshyn", "Nyvky", "Beresteiska", "Shuliavska",
							 "Politekhnichnyi Instytut", "Vokzalna", "Universytet", "Teatralna", "Khreshchatyk", "Arsenalna", "Dnipro", 
							 "Hidropark", "Livoberezhna", "Darnytsia", "Chernihivska", "Lisova", "Syrets", "Dorohozhychi", "Lukianivska", 
							 "Zoloti Vorota", "Palats Sportu", "Klovska", "Pecherska", "Druzhby Narodiv", "Vydubychi", "Slavutych", 
							 "Osokorky", "Pozniaky", "Kharkivska", "Vyrlytsia", "Boryspilska", "Chervony Khutir","Heroiv Dnipra", 
							 "Minska", "Obolon", "Pochaina", "Tarasa Shevchenka", "Kontraktova Ploshcha", "Poshtova Ploshcha", 
							 "Maidan Nezalezhnosti", "Ploshcha Lva Tolstoho", "Olimpiiska", "Palats Ukrayina", "Lybidskav", "Demiivska", 
							 "Holosiivska", "Vasylkivska", "Vystavkovyi Tsentr", "Ipodrom", "Teremky" };
    int dist[N],prev[N],selected[N]={0},i,m,min,start,d,j;
    char path[N][N];
    for(i=1;i< N;i++)
    {
        dist[i] = IN;
        prev[i] = -1;
    }
    start = source;
    selected[start]=1;
    dist[start] = 0;
    while(selected[target] == 0)
    {
        min = IN;
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
        //path[j++] = stations[start-1];
        strncpy(path[j++], stations[start-1], 25);
        start = prev[start];
    }
    //path[j]='\0';
    //strrev(path);
    for (i = N-1; i >= 0; i--)
	{
		if (strlen(path[i]) != 0)
		{	
			
			for(j=0; j<strlen(path[i]); j++)
			{
				printf("%c", path[i][j]);
			}
			printf("\n");
		}
		//printf("'%s'\n", path[i]); //, strlen(path[i])
	}
    //printf("%s", path);
    return dist[target];
}
