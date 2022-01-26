#include<windows.h>
#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#include<string.h>                  //contains strcmp(),strcpy(),strlen(),etc
#include<ctype.h>                   //contains toupper(), tolower(),etc
#include<dos.h>                     //contains _dos_getdate
#include<time.h>
//#include<bios.h>

#define RETURNTIME 15
int arraycounter(char ch[],char ch1[],int n);
int yeardisc(int n,int price);
int condition(int price,int a);
int killometers(int killmo,int price);

void output(int c,char ch4[]);
void display(int n,int killometers,int ch);
void doitall(int c,char ch[],int a);

char catagories1[][15]={"Maruti Suzuki","Nissan","Renault","Mahindra","Toyota","Honda","Tata","Kia","Hyundai","Skoda","Volkswagen","Mitsubushi","Ford"};
char catergories2[][15]={"Kawasaki","Ducati","Harley Davidson","Trimuph","BAJAJ"};
void returnfunc(void);
void mainmenu(void);
void Cars(void);
void Bikes(void);
void makeit(void);
//void show_mouse(void);
void loaderanim();
COORD coord = {0, 0};
//list of global variable

void gotoxy (int x, int y)
{
coord.X = x; coord.Y = y; // X and Y coordinates
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main()
{
    mainmenu();
    return 0;
}
void mainmenu()
{
//loaderanim();
system("cls");
//    textbackground(13);
int i;gotoxy(20,2);printf("WELCOME TO SECOND HAND VEHICLE PRICING APPLICATION BY THE FINGERMASTERS");
gotoxy(20,3);
printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 MAIN MENU\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
//    show_mouse();
gotoxy(20,5);
printf("\xDB\xDB\xDB\xDB\xB2 1. Cars");
gotoxy(20,7);
printf("\xDB\xDB\xDB\xDB\xB2 2. Bikes");
gotoxy(20,9);
printf("\xDB\xDB\xDB\xDB\xB2 3. Close Application");
gotoxy(20,15);
printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
gotoxy(20,20);
printf("\n");
gotoxy(20,21);
printf("Enter your choice:");
switch(getch())
{
case '1':
Cars();
break;
case '2':
Bikes();
break;
case '3':
{
system("cls");
gotoxy(16,3);
printf("\tSecond Hand Vehicle Pricing Application");
gotoxy(16,4);
printf("\tMini Project in C");
gotoxy(16,5);
printf("\tis brought to you by");
gotoxy(16,7);
printf("\tCode with Fingermasters");
gotoxy(16,8);
printf("**");
gotoxy(16,10);
printf("***");
gotoxy(16,11);
printf("***");
gotoxy(16,13);
printf("**");
gotoxy(10,17);
printf("Exiting in 3 second...........>");
//flushall();
Sleep(3000);
exit(0);
}
default:
{
gotoxy(10,23);
printf("\aWrong Entry!!Please re-entered correct option");
if(getch())
mainmenu();
}

}
}
void Cars()
{
system("cls");
int i;
gotoxy(20,5);
printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2Select Your Brand \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
gotoxy(20,7);
printf("\xDB\xDB\xDB\xDB\xB2 1. Maruti Suzuki");
gotoxy(20,9);
printf("\xDB\xDB\xDB\xDB\xB2 2. Nissan");
gotoxy(20,11);
printf("\xDB\xDB\xDB\xDB\xB2 3. Renault");
gotoxy(20,13);
printf("\xDB\xDB\xDB\xDB\xB2 4. Mahindra");
gotoxy(20,15);
printf("\xDB\xDB\xDB\xDB\xB2 5. Toyota");
gotoxy(20,17);
printf("\xDB\xDB\xDB\xDB\xB2 6. Honda");
gotoxy(20,19);
printf("\xDB\xDB\xDB\xDB\xB2 7. Tata");
gotoxy(20,21);
printf("\xDB\xDB\xDB\xDB\xB2 8. Kia");
gotoxy(20,23);
printf("\xDB\xDB\xDB\xDB\xB2 9. Hyundai");
gotoxy(20,25);
printf("\xDB\xDB\xDB\xDB\xB2 10. Skoda");
gotoxy(20,27);
printf("\xDB\xDB\xDB\xDB\xB2 11. Volkswagen");
gotoxy(20,29);
printf("\xDB\xDB\xDB\xDB\xB2 12. Mitsubushi");
gotoxy(20,31);
printf("\xDB\xDB\xDB\xDB\xB2 13. Ford");
gotoxy(20,33);
printf("\xDB\xDB\xDB\xDB\xB2 14. Back to main menu");
gotoxy(20,35);
printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
gotoxy(20,37);
printf("Enter your choice : ");
int s;
scanf("%d",&s);
if(s==14)
mainmenu() ;

system("cls");
gotoxy(20,3);printf("Enter the Information Below");
gotoxy(20,4);printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
gotoxy(20,5);printf("\xB2");gotoxy(113,5);printf("\xB2");
gotoxy(20,6);
printf("\xB2");gotoxy(113,6);printf("\xB2");
gotoxy(20,7);
printf("\xB2");gotoxy(113,7);printf("\xB2");
gotoxy(20,8);
printf("\xB2");gotoxy(113,8);printf("\xB2");
gotoxy(20,9);
printf("\xB2");gotoxy(113,9);printf("\xB2");
gotoxy(20,10);
printf("\xB2");gotoxy(113,10);printf("\xB2");
gotoxy(20,11);
printf("\xB2");gotoxy(113,11);printf("\xB2");
gotoxy(20,12);printf("\xB2");gotoxy(113,12);printf("\xB2");
gotoxy(20,13);printf("\xB2");gotoxy(113,13);printf("\xB2");
gotoxy(20,14);printf("\xB2");gotoxy(113,14);printf("\xB2");
gotoxy(20,15);printf("\xB2");gotoxy(113,15);printf("\xB2");
gotoxy(20,16);printf("\xB2");gotoxy(113,16);printf("\xB2");
gotoxy(20,17);printf("\xB2");gotoxy(113,17);printf("\xB2");
gotoxy(20,18);printf("\xB2");gotoxy(113,18);printf("\xB2");
gotoxy(20,19);printf("\xB2");gotoxy(113,19);printf("\xB2");
gotoxy(20,20);printf("\xB2");gotoxy(113,20);printf("\xB2");
gotoxy(20,21);printf("\xB2");gotoxy(113,21);printf("\xB2");
gotoxy(20,22);printf("\xB2");gotoxy(113,22);printf("\xB2");
gotoxy(20,23);printf("\xB2");gotoxy(113,23);printf("\xB2");
gotoxy(20,24);printf("\xB2");gotoxy(113,24);printf("\xB2");
gotoxy(20,25);printf("\xB2");gotoxy(113,25);printf("\xB2");
gotoxy(20,26);printf("\xB2");gotoxy(113,26);printf("\xB2");
gotoxy(20,27);printf("\xB2");gotoxy(113,27);printf("\xB2");
gotoxy(20,28);printf("\xB2");gotoxy(113,28);printf("\xB2");
gotoxy(20,29);printf("\xB2");gotoxy(113,29);printf("\xB2");
gotoxy(20,30);printf("\xB2");gotoxy(113,30);printf("\xB2");
gotoxy(20,31);printf("\xB2");gotoxy(113,31);printf("\xB2");
gotoxy(20,32);printf("\xB2");gotoxy(113,32);printf("\xB2");
gotoxy(20,33);printf("\xB2");gotoxy(113,33);printf("\xB2");
gotoxy(20,34);
printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
char ch1[13][25]={"MARUTI.csv","NISSAN.csv","Renalut.csv","MAHINDRA.csv","TOYOTA.csv","HONDA.csv","TATA.csv","KIA.csv","HYUNDAI.csv","SKODA.csv","VOLKSWAGEN.csv","MITSUBUSHI.csv","FORD.csv"};
if(s==1)
{
    char companys[20][15]={"ALTO","ALTO800","WAGONR","DZIRE","SWIFT","ERTIGA","CIAZ","SX4-SCROSS","SCROSS","SX4","VITARABREZZA","KIZASHI","CELEREO","ASTAR","ECCO","SPRESSO","IGNIS","BALENO","XL6","XL7"};
    gotoxy(21,5);printf("Select you car\n");int select;
    for(int i=0;i<20;i++)
    {
        gotoxy(21,6+i);printf("%d %s\n",(i+1),companys[i]);
    }
    gotoxy(21,26);printf("Enter your choice");gotoxy(21,27);scanf("%d",&select);
    FILE *maruti=fopen(ch1[0],"r");
    if(maruti==NULL)
    {
        perror("Unable to open the file");
        exit(1);
    }
    char line[200];makeit();gotoxy(21,6);
    printf("Select your variant");int k=0;
    while(fgets(line,sizeof(line),maruti))
    {
        char *token;
        token=strtok(line,",");
        if(strcmp(companys[select-1],token)==0)
        {k++;gotoxy(21,7+k);printf("%d ",k);
        while(token!=NULL)
        {

            printf("%-18s",token);token=strtok(NULL,",");
        }
        printf("\n");
        }
    }
    int d;gotoxy(21,7+k+1);
    printf("Enter your choice");gotoxy(21,9+k);scanf("%d",&d);
    int c=arraycounter(companys[select-1],ch1[0],d);
    fclose(maruti);
    doitall(c,companys[select-1],9+k);
}
else if(s==2)
{
    char companys[4][15]={"SUNNY","MICRA","KICKS","TERRANO"};
    gotoxy(21,5);printf("Select you car\n");int select;
    for(int i=0;i<4;i++)
    {
        gotoxy(21,6+i);printf("%d %s\n",(i+1),companys[i]);
    }
    gotoxy(21,10);printf("Enter your choice");gotoxy(21,11);scanf("%d",&select);
    FILE *maruti=fopen(ch1[1],"r");
    if(maruti==NULL)
    {
        perror("Unable to open the file");
        exit(1);
    }
    char line[200];makeit();gotoxy(21,6);
    printf("Select your variant");int k=0;
    while(fgets(line,sizeof(line),maruti))
    {
        char *token;
        token=strtok(line,",");
        if(strcmp(companys[select-1],token)==0)
        {k++;gotoxy(21,7+k);printf("%d ",k);
        while(token!=NULL)
        {

            printf("%-18s",token);token=strtok(NULL,",");
        }
        printf("\n");
        }
    }
    int d;gotoxy(21,7+k+1);
    printf("Enter your choice");gotoxy(21,9+k);scanf("%d",&d);
    int c=arraycounter(companys[select-1],ch1[1],d);
    fclose(maruti);
    doitall(c,companys[select-1],9+k);
}
else if(s==3)
{
    char companys[10][15]={"FLUENCE","KOLEOS","PULSE","SCALA","LODGY","CAPTUR","DUSTER","KWID","TRIBBER","KIGGER"};
    gotoxy(21,5);printf("Select you car\n");int select;
    for(int i=0;i<10;i++)
    {
        gotoxy(21,6+i);printf("%d %s\n",(i+1),companys[i]);
    }
    gotoxy(21,17);printf("Enter your choice");gotoxy(21,18);scanf("%d",&select);
    FILE *maruti=fopen(ch1[2],"r");
    if(maruti==NULL)
    {
        perror("Unable to open the file");
        exit(1);
    }
    char line[200];makeit();gotoxy(21,6);
    printf("Select your variant");int k=0;
    while(fgets(line,sizeof(line),maruti))
    {
        char *token;
        token=strtok(line,",");
        if(strcmp(companys[select-1],token)==0)
        {k++;gotoxy(21,7+k);printf("%d ",k);
        while(token!=NULL)
        {

            printf("%-18s",token);token=strtok(NULL,",");
        }
        printf("\n");
        }
    }
    int d;gotoxy(21,7+k+1);
    printf("Enter your choice");gotoxy(21,9+k);scanf("%d",&d);
    int c=arraycounter(companys[select-1],ch1[2],d);
    fclose(maruti);
    doitall(c,companys[select-1],9+k);
    }
else if(s==4)
{
    char companys[13][15]={"BOLERO","BOLERO-NEO","SCORPIO","XUV500","XUV300","TUV300","MARRAZO","KUV100","KUV100NXT","ALTURASG4","VERITO","VERITOVIBE","THAR"};
    gotoxy(21,5);printf("Select you car\n");int select;
    for(int i=0;i<13;i++)
    {
        gotoxy(21,6+i);printf("%d %s\n",(i+1),companys[i]);
    }
    gotoxy(21,20);printf("Enter your choice");gotoxy(21,21);scanf("%d",&select);
    FILE *maruti=fopen(ch1[3],"r");
    if(maruti==NULL)
    {
        perror("Unable to open the file");
        exit(1);
    }
    char line[200];makeit();gotoxy(21,6);
    printf("Select your variant");int k=0;
    while(fgets(line,sizeof(line),maruti))
    {
        char *token;
        token=strtok(line,",");
        if(strcmp(companys[select-1],token)==0)
        {k++;gotoxy(21,7+k);printf("%d ",k);
        while(token!=NULL)
        {

            printf("%-18s",token);token=strtok(NULL,",");
        }
        printf("\n");
        }
    }
    int d;gotoxy(21,7+k+1);
    printf("Enter your choice");gotoxy(21,9+k);scanf("%d",&d);
    int c=arraycounter(companys[select-1],ch1[3],d);
    fclose(maruti);
     doitall(c,companys[select-1],9+k);
}
else if(s==5)
{
    char companys[11][15]={"FORTUNER","YARIS","LAND-CRUISER","ETIOS","ETIOS-LIVA","INNOVA","INNOVA-CRYSTA","CAMRY","VELLFIRE","URBAN-CRUISER","GLANZA"};
    gotoxy(21,5);printf("Select you car\n");int select;
    for(int i=0;i<11;i++)
    {
        gotoxy(21,6+i);printf("%d %s\n",(i+1),companys[i]);
    }
    gotoxy(21,19);printf("Enter your choice");gotoxy(21,20);scanf("%d",&select);
    FILE *maruti=fopen(ch1[4],"r");
    if(maruti==NULL)
    {
        perror("Unable to open the file");
        exit(1);
    }
    char line[200];makeit();gotoxy(21,6);
    printf("Select your variant");int k=0;
    while(fgets(line,sizeof(line),maruti))
    {
        char *token;
        token=strtok(line,",");
        if(strcmp(companys[select-1],token)==0)
        {k++;gotoxy(21,7+k);printf("%d ",k);
        while(token!=NULL)
        {

            printf("%-18s",token);token=strtok(NULL,",");
        }
        printf("\n");
        }
    }
    int d;gotoxy(21,7+k+1);
    printf("Enter your choice");gotoxy(21,9+k);scanf("%d",&d);
    int c=arraycounter(companys[select-1],ch1[4],d);
    fclose(maruti);
     doitall(c,companys[select-1],9+k);
}
else if(s==6)
{
    char companys[9][15]={"CITY","AMAZE","CIVIC","CRV","WRV","JAZZ","MOBILIO","BRV","BRIO"};
    gotoxy(21,5);printf("Select you car\n");int select;
    for(int i=0;i<9;i++)
    {
        gotoxy(21,6+i);printf("%d %s\n",(i+1),companys[i]);
    }
    gotoxy(21,16);printf("Enter your choice");gotoxy(21,17);scanf("%d",&select);
    FILE *maruti=fopen(ch1[5],"r");
    if(maruti==NULL)
    {
        perror("Unable to open the file");
        exit(1);
    }
    char line[200];makeit();gotoxy(21,6);
    printf("Select your variant");int k=0;
    while(fgets(line,sizeof(line),maruti))
    {
        char *token;
        token=strtok(line,",");
        if(strcmp(companys[select-1],token)==0)
        {k++;gotoxy(21,7+k);printf("%d ",k);
        while(token!=NULL)
        {

            printf("%-18s",token);token=strtok(NULL,",");
        }
        printf("\n");
        }
    }
    int d;gotoxy(21,7+k+1);
    printf("Enter your choice");gotoxy(21,9+k);scanf("%d",&d);
    int c=arraycounter(companys[select-1],ch1[5],d);
    fclose(maruti);
     doitall(c,companys[select-1],9+k);
}
else if(s==7)
{
    char companys[19][15]={"INDICA","INDIGO","INDIGO-MARINA","SUMO","MANZA","HEXA","ARIA","NANO","ZEST","BOLT","TIAGO","TIGOR","PUNCH","ALTROZ","NEXON","NEXON-EV","HARRIER","SAFARI","SAFARI-STROME"};
    gotoxy(21,5);printf("Select you car\n");int select;
    for(int i=0;i<19;i++)
    {
        gotoxy(21,6+i);printf("%d %s\n",(i+1),companys[i]);
    }
    gotoxy(21,25);printf("Enter your choice");gotoxy(21,26);scanf("%d",&select);
    FILE *maruti=fopen(ch1[6],"r");
    if(maruti==NULL)
    {
        perror("Unable to open the file");
        exit(1);
    }
    char line[200];makeit();gotoxy(21,6);
    printf("Select your variant");int k=0;
    while(fgets(line,sizeof(line),maruti))
    {
        char *token;
        token=strtok(line,",");
        if(strcmp(companys[select-1],token)==0)
        {k++;gotoxy(21,7+k);printf("%d ",k);
        while(token!=NULL)
        {

            printf("%-18s",token);token=strtok(NULL,",");
        }
        printf("\n");
        }
    }
    int d;gotoxy(21,7+k+1);
    printf("Enter your choice");gotoxy(21,9+k);scanf("%d",&d);
    int c=arraycounter(companys[select-1],ch1[6],d);
    fclose(maruti);
     doitall(c,companys[select-1],9+k);
}
else if(s==8)
{
    char companys[3][15]={"SELTOS","SONET","CARNIVAL"};
    gotoxy(21,5);printf("Select you car\n");int select;
    for(int i=0;i<3;i++)
    {
        gotoxy(21,6+i);printf("%d %s\n",(i+1),companys[i]);
    }
    gotoxy(21,10);printf("Enter your choice");gotoxy(21,11);scanf("%d",&select);
    FILE *maruti=fopen(ch1[7],"r");
    if(maruti==NULL)
    {
        perror("Unable to open the file");
        exit(1);
    }
    char line[200];makeit();gotoxy(21,6);
    printf("Select your variant");int k=0;
    while(fgets(line,sizeof(line),maruti))
    {
        char *token;
        token=strtok(line,",");
        if(strcmp(companys[select-1],token)==0)
        {k++;gotoxy(21,7+k);printf("%d ",k);
        while(token!=NULL)
        {

            printf("%-18s",token);token=strtok(NULL,",");
        }
        printf("\n");
        }
    }
    int d;gotoxy(21,7+k+1);
    printf("Enter your choice");gotoxy(21,9+k);scanf("%d",&d);
    int c=arraycounter(companys[select-1],ch1[7],d);
    fclose(maruti);
     doitall(c,companys[select-1],9+k);
}
else if(s==9)
{
    char companys[23][15]={"SANTRO-XING","SANTRO","ACCENT","XCENT","SONATA","TERRACAN","SANTA-FE","GETZ","EON","TUSCON","I10","GRAND-I10","GRAND-I10-NIOS","I20","ELITE-120","I20-N-LINE","ELANTRA","VERNA","AURA","CRETA","ALCAZAR","VENUE","KONA"};
    gotoxy(21,5);printf("Select you car\n");int select;
    for(int i=0;i<23;i++)
    {
        gotoxy(21,6+i);printf("%d %s\n",(i+1),companys[i]);
    }
    gotoxy(21,30);printf("Enter your choice");gotoxy(21,31);scanf("%d",&select);
    FILE *maruti=fopen(ch1[8],"r");
    if(maruti==NULL)
    {
        perror("Unable to open the file");
        exit(1);
    }
    char line[200];makeit();gotoxy(21,6);
    printf("Select your variant");int k=0;
    while(fgets(line,sizeof(line),maruti))
    {
        char *token;
        token=strtok(line,",");
        if(strcmp(companys[select-1],token)==0)
        {k++;gotoxy(21,7+k);printf("%d ",k);
        while(token!=NULL)
        {

            printf("%-23s",token);token=strtok(NULL,",");
        }
        printf("\n");
        }
    }
    int d;gotoxy(21,7+k+1);
    printf("Enter your choice");gotoxy(21,9+k);scanf("%d",&d);
    int c=arraycounter(companys[select-1],ch1[8],d);
    fclose(maruti);
    doitall(c,companys[select-1],9+k);
}
else if(s==10)
{
    char companys[8][15]={"OCTAVIA","LAURA","FABIA","YETI","SUPERB","RAPID","KODIAQ","KUSHAQ"};
    gotoxy(21,5);printf("Select you car\n");int select;
    for(int i=0;i<8;i++)
    {
        gotoxy(21,6+i);printf("%d %s\n",(i+1),companys[i]);
    }
    gotoxy(21,13);printf("Enter your choice");gotoxy(21,14);scanf("%d",&select);
    FILE *maruti=fopen(ch1[9],"r");
    if(maruti==NULL)
    {
        perror("Unable to open the file");
        exit(1);
    }
    char line[200];makeit();gotoxy(21,6);
    printf("Select your variant");int k=0;
    while(fgets(line,sizeof(line),maruti))
    {
        char *token;
        token=strtok(line,",");
        if(strcmp(companys[select-1],token)==0)
        {k++;gotoxy(21,7+k);printf("%d ",k);
        while(token!=NULL)
        {

            printf("%-18s",token);token=strtok(NULL,",");
        }
        printf("\n");
        }
    }
    int d;gotoxy(21,7+k+1);
    printf("Enter your choice");gotoxy(21,9+k);scanf("%d",&d);
    int c=arraycounter(companys[select-1],ch1[9],d);
    fclose(maruti);
     doitall(c,companys[select-1],9+k);
}
else if(s==11)
{

    char companys[13][20]={"BEETLE","PHATEON","TOUAREG","PASSAT","JETTA","AMEO","TIGUAN-ALL-SPACE","T-ROC","TIGUAN","TAIGUN","POLO","VENTO"};
    gotoxy(21,5);printf("Select you car\n");int select;
    for(int i=0;i<12;i++)
    {
        gotoxy(21,6+i);printf("%d %s\n",(i+1),companys[i]);
    }
    gotoxy(21,19);printf("Enter your choice");gotoxy(21,20);scanf("%d",&select);
    FILE *maruti=fopen(ch1[10],"r");
    if(maruti==NULL)
    {
        perror("Unable to open the file");
        exit(1);
    }
    char line[200];makeit();gotoxy(21,6);
    printf("Select your variant");int k=0;
    while(fgets(line,sizeof(line),maruti))
    {
        char *token;
        token=strtok(line,",");
        if(strcmp(companys[select-1],token)==0)
        {k++;gotoxy(21,7+k);printf("%d ",k);
        while(token!=NULL)
        {

            printf("%-18s",token);token=strtok(NULL,",");
        }
        printf("\n");
        }
    }
    int d;gotoxy(21,7+k+1);
    printf("Enter your choice");gotoxy(21,9+k);scanf("%d",&d);
    int c=arraycounter(companys[select-1],ch1[10],d);
    fclose(maruti);
     doitall(c,companys[select-1],9+k);
}
else if(s==12)
{
    char companys[4][15]={"LANCER","PAJERO","PAJERO-SPORT","OUTLANDER"};
    gotoxy(21,5);printf("Select you car\n");int select;
    for(int i=0;i<4;i++)
    {
        gotoxy(21,6+i);printf("%d %s\n",(i+1),companys[i]);
    }
    gotoxy(21,11);printf("Enter your choice");gotoxy(21,12);scanf("%d",&select);
    FILE *maruti=fopen(ch1[11],"r");
    if(maruti==NULL)
    {
        perror("Unable to open the file");
        exit(1);
    }
    char line[200];makeit();gotoxy(21,6);
    printf("Select your variant");int k=0;
    while(fgets(line,sizeof(line),maruti))
    {
        char *token;
        token=strtok(line,",");
        if(strcmp(companys[select-1],token)==0)
        {k++;gotoxy(21,7+k);printf("%d ",k);
        while(token!=NULL)
        {

            printf("%-18s",token);token=strtok(NULL,",");
        }
        printf("\n");
        }
    }
    int d;gotoxy(21,7+k+1);
    printf("Enter your choice");gotoxy(21,9+k);scanf("%d",&d);
    int c=arraycounter(companys[select-1],ch1[11],d);
    fclose(maruti);
     doitall(c,companys[select-1],9+k);
}
else if(s==13)
{
    char companys[12][15]={"ESCORT","IKON","MODEO","ENDEAVOUR","FUSION","FIESTA-CLASSIC","FIESTA","FIGO","FIGO-ASPIRE","FREESTYLE","ECOSPORT","MUSTANG"};
    gotoxy(21,5);printf("Select you car\n");int select;
    for(int i=0;i<12;i++)
    {
        gotoxy(21,6+i);printf("%d %s\n",(i+1),companys[i]);
    }
    gotoxy(21,19);printf("Enter your choice");gotoxy(21,20);scanf("%d",&select);
    FILE *maruti=fopen(ch1[12],"r");
    if(maruti==NULL)
    {
        perror("Unable to open the file");
        exit(1);
    }
    char line[200];makeit();gotoxy(21,6);
    printf("Select your variant");int k=0;
    while(fgets(line,sizeof(line),maruti))
    {
        char *token;
        token=strtok(line,",");
        if(strcmp(companys[select-1],token)==0)
        {k++;gotoxy(21,7+k); printf("%d ",k);
        while(token!=NULL)
        {

            printf("%-18s",token);token=strtok(NULL,",");
        }
        printf("\n");
        }
    }
    int d;gotoxy(21,7+k+1);
    printf("Enter your choice");gotoxy(21,9+k);scanf("%d",&d);
    int c=arraycounter(companys[select-1],ch1[12],d);
    fclose(maruti);
     doitall(c,companys[select-1],9+k);;
}
}
void Bikes()
{
 system("cls");
 int i;
 gotoxy(20,5);
 system("cls");

gotoxy(20,5);
printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2Select Your Brand\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
gotoxy(20,7);
printf("\xDB\xDB\xDB\xDB\xB2 1. Kawasaki");
gotoxy(20,9);
printf("\xDB\xDB\xDB\xDB\xB2 2. Ducatti");
gotoxy(20,11);
printf("\xDB\xDB\xDB\xDB\xB2 3. Harley Davidson");
gotoxy(20,13);
printf("\xDB\xDB\xDB\xDB\xB2 4. Triumph");
gotoxy(20,15);
printf("\xDB\xDB\xDB\xDB\xB2 5. Bajaj");
gotoxy(20,17);
printf("\xDB\xDB\xDB\xDB\xB2 6. Back to main menu");
gotoxy(20,35);
printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
gotoxy(20,37);
printf("Enter your choice : ");
int k;
scanf("%d",&k);
if(k==7)
mainmenu() ;

system("cls");
gotoxy(20,3);printf("Enter the Information Below");
gotoxy(20,4);printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
gotoxy(20,5);printf("\xB2");gotoxy(46,5);printf("\xB2");
gotoxy(20,6);
printf("\xB2");gotoxy(46,6);printf("\xB2");
gotoxy(20,7);
printf("\xB2");gotoxy(46,7);printf("\xB2");
gotoxy(20,8);
printf("\xB2");gotoxy(46,8);printf("\xB2");
gotoxy(20,9);
printf("\xB2");gotoxy(46,9);printf("\xB2");
gotoxy(20,10);
printf("\xB2");gotoxy(46,10);printf("\xB2");
gotoxy(20,11);
printf("\xB2");gotoxy(46,11);printf("\xB2");
gotoxy(20,12);printf("\xB2");gotoxy(46,12);printf("\xB2");
gotoxy(20,13);printf("\xB2");gotoxy(46,13);printf("\xB2");
gotoxy(20,14);printf("\xB2");gotoxy(46,14);printf("\xB2");
gotoxy(20,15);printf("\xB2");gotoxy(46,16);printf("\xB2");
gotoxy(20,16);printf("\xB2");gotoxy(46,17);printf("\xB2");
gotoxy(20,17);printf("\xB2");gotoxy(46,18);printf("\xB2");
gotoxy(20,18);printf("\xB2");gotoxy(46,20);printf("\xB2");
gotoxy(20,19);printf("\xB2");gotoxy(46,21);printf("\xB2");

gotoxy(20,28);
printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
char ch1[5][25]={"KAWASAKI.csv","DUCATI.csv","HARLEY.csv","TRIUMPH.csv","BAJAJ.csv"};
if(k==1)
{
    char companys[3][15]={"Ninja","KLX","Versys"};
    gotoxy(21,5);printf("Select you bike");int select;
    for(int i=0;i<3;i++)
    {
        gotoxy(21,6+i);printf("%d %s\n",(i+1),companys[i]);
    }
    gotoxy(21,10);printf("Enter your choice");gotoxy(21,11);scanf("%d",&select);
    FILE *maruti=fopen(ch1[0],"r");
    if(maruti==NULL)
    {
        perror("Unable to open the file");
        exit(1);
    }
    char line[200];makeit();gotoxy(21,6);
    printf("Select your variant");int k=0;
    while(fgets(line,sizeof(line),maruti))
    {
        char *token;
        token=strtok(line,",");
        if(strcmp(companys[select-1],token)==0)
        {k++;gotoxy(21,7+k);printf("%d ",k);
        while(token!=NULL)
        {

            printf("%-18s",token);token=strtok(NULL,",");
        }
        printf("\n");
        }
    }
    int d;gotoxy(21,7+k+1);
    printf("Enter your choice");gotoxy(21,9+k);scanf("%d",&d);
    int c=arraycounter(companys[select-1],ch1[0],d);
    fclose(maruti);
    doitall(c,companys[select-1],9+k);
}
else if(k==2)
{
    char companys[6][15]={"Panigale","scrambler","Diavel","XDiavel","Hypermotard","Multistrada"};
    gotoxy(21,5);printf("Select you bike");int select;
    for(int i=0;i<6;i++)
    {
        gotoxy(21,6+i);printf("%d %s\n",(i+1),companys[i]);
    }
    gotoxy(21,13);printf("Enter your choice");gotoxy(21,14);scanf("%d",&select);
    FILE *maruti=fopen(ch1[1],"r");
    if(maruti==NULL)
    {
        perror("Unable to open the file");
        exit(1);
    }
    char line[200];makeit();gotoxy(21,6);
    printf("Select your variant");int k=0;
    while(fgets(line,sizeof(line),maruti))
    {
        char *token;
        token=strtok(line,",");
        if(strcmp(companys[select-1],token)==0)
        {k++;gotoxy(21,7+k);printf("%d ",k);
        while(token!=NULL)
        {

            printf("%-18s",token);token=strtok(NULL,",");
        }
        printf("\n");
        }
    }
    int d;gotoxy(21,7+k+1);
    printf("Enter your choice");gotoxy(21,9+k);scanf("%d",&d);
    int c=arraycounter(companys[select-1],ch1[1],d);
    fclose(maruti);
    doitall(c,companys[select-1],9+k);
}
else if(k==3)
{
    char companys[13][20]={"Sportster-S","Fat-bob","Fat-boy","Glide-special","Pan-America","Road-gilde","Road-king","Electra-glide","Heritage-class","Low-rider","Street-bob","Softail"};
    gotoxy(21,5);printf("Select you bike");int select;
    for(int i=0;i<12;i++)
    {
        gotoxy(21,6+i);printf("%d %s\n",(i+1),companys[i]);
    }
    gotoxy(21,19);printf("Enter your choice");gotoxy(21,20);scanf("%d",&select);
    FILE *maruti=fopen(ch1[2],"r");
    if(maruti==NULL)
    {
        perror("Unable to open the file");
        exit(1);
    }
    char line[200];makeit();gotoxy(21,6);
    printf("Select your variant");int k=0;
    while(fgets(line,sizeof(line),maruti))
    {
        char *token;
        token=strtok(line,",");
        if(strcmp(companys[select-1],token)==0)
        {k++;gotoxy(21,7+k);printf("%d ",k);
        while(token!=NULL)
        {

            printf("%-18s",token);token=strtok(NULL,",");
        }
        printf("\n");
        }
    }
    int d;gotoxy(21,7+k+1);
    printf("Enter your choice");gotoxy(21,9+k);scanf("%d",&d);
    int c=arraycounter(companys[select-1],ch1[2],d);
    fclose(maruti);
    doitall(c,companys[select-1],9+k);
}
else if(k==4)
{
    char companys[11][15]={"Trident","Scrambler","Rocket","Street-triple","Street-twin","Street","Bonneville","Scrambler","Speed-twin","Speed-triple","Tiger"};
     gotoxy(21,5);printf("Select you bike");int select;
    for(int i=0;i<11;i++)
    {
        gotoxy(21,6+i);printf("%d %s\n",(i+1),companys[i]);
    }
    gotoxy(21,18);printf("Enter your choice");gotoxy(21,19);scanf("%d",&select);
    FILE *maruti=fopen(ch1[3],"r");
    if(maruti==NULL)
    {
        perror("Unable to open the file");
        exit(1);
    }
    char line[200];makeit();gotoxy(21,6);
    printf("Select your variant");int k=0;
    while(fgets(line,sizeof(line),maruti))
    {
        char *token;
        token=strtok(line,",");
        if(strcmp(companys[select-1],token)==0)
        {k++;gotoxy(21,7+k);printf("%d ",k);
        while(token!=NULL)
        {

            printf("%-18s",token);token=strtok(NULL,",");
        }
        printf("\n");
        }
    }
    int d;gotoxy(21,7+k+1);
    printf("Enter your choice");gotoxy(21,9+k);scanf("%d",&d);
    int c=arraycounter(companys[select-1],ch1[3],d);
    fclose(maruti);
    doitall(c,companys[select-1],9+k);
}
else if(k==5)
{
    char companys[4][15]={"Avenger","Dominar","Pulsar","Platina"};
    gotoxy(21,5);printf("Select you car\n");int select;
    for(int i=0;i<4;i++)
    {
        gotoxy(21,6+i);printf("%d %s\n",(i+1),companys[i]);
    }
    gotoxy(21,11);printf("Enter your choice");gotoxy(21,12);scanf("%d",&select);
    FILE *maruti=fopen(ch1[4],"r");
    if(maruti==NULL)
    {
        perror("Unable to open the file");
        exit(1);
    }
    char line[200];makeit();gotoxy(21,6);
    printf("Select your variant");int k=0;
    while(fgets(line,sizeof(line),maruti))
    {
        char *token;
        token=strtok(line,",");
        if(strcmp(companys[select-1],token)==0)
        {k++;gotoxy(21,7+k);printf("%d ",k);
        while(token!=NULL)
        {

            printf("%-18s",token);token=strtok(NULL,",");
        }
        printf("\n");
        }
    }
    int d;gotoxy(21,7+k+1);
    printf("Enter your choice");gotoxy(21,9+k);scanf("%d",&d);
    int c=arraycounter(companys[select-1],ch1[4],d);
    fclose(maruti);
    doitall(c,companys[select-1],9+k);
}
}
int arraycounter(char ch[],char ch1[],int n)
{
   FILE *maruti=fopen(ch1,"r");
    if(maruti==NULL)
    {
        perror("Unable to open the file");
        exit(1);
    }
   char xd[2000];int a;
    while(fgets((xd),sizeof(xd),maruti))
    {
        char *token;token=strtok(xd,",");char d[100];
        if(strcmp(ch,token)==0)
        {
            while(token!=NULL)
            {
                strcpy(d,token);
                token=strtok(NULL,",");
                if(token==NULL)
                {
                    if((--n)==0)
                        a=atoi(d);
                }
            }
        }
    }
    fclose(maruti);
    return a;
}

int yeardisc(int n,int price)
{
    int loss;
    if(n<=2)
    loss=price*7.5/100;
    else if(n>2 && n<=6)
    {
        loss=price*7.5/100+(price*4/100)*(n-2);
    }
    else if(n>6)
    {
        loss=price*7.5/100+(price*4/100)*(4)+(price*2/100)*(n-6);
    }
    return loss;
}
int condition(int price,int a)
{
    gotoxy(21,a);printf("Enter the required numbers according to the following given condition of your vehicle");
    gotoxy(21,++a);printf("Enter 1 if your vehicle is of 'Excellent' condition");
    gotoxy(21,++a);printf("Enter 2 if your vehicle is of 'Very Good' condition");
    gotoxy(21,++a);printf("Enter 3 if your vehicle is of 'Good' condition");
    gotoxy(21,++a);printf("Enter 4 if your vehicle is of 'Moderate' condition");
    gotoxy(21,++a);printf("Enter 5 if your vehicle is of 'Bad' condition");
    gotoxy(21,++a);printf("Enter 6 if your vehicle is of 'Worst' condition\n");
    int choice,loss;gotoxy(21,++a);scanf("%d",&choice);
    if(choice>6 || choice<1)
    {
        do{
            gotoxy(21,++a);printf("Wrong Choice, please re enter from between 1 to 6");
            gotoxy(21,++a);scanf("%d",&choice);
        }while(choice<=6 && choice>=1);
    }
    switch(choice)
    {
        case 1:loss=price*.1;break;
        case 2:loss=price*.15;break;
        case 3:loss=price*.25;break;
        case 4:loss=price*.30;break;
        case 5:gotoxy(21,++a);printf("\nWe would recommend you to show your car to an expert to know the price of your vehicle");break;
        case 6:gotoxy(21,++a);printf("\nWe would recommend you to show your car to an expert to know the price of your vehicle");break;
        default:printf("Wrong input");
    }
    return (loss);
}
int killometers(int killmo,int price)
{
    int loss;
    if(killmo>0 && killmo<=5000)
    loss=price*.05;
    else if(killmo>5000 && killmo<=25000)
    loss=price*.075;
    else if(killmo>25000 && killmo<=60000)
    loss=price*.12;
    else if(killmo>60000 && killmo<=90000)
    loss=price*.15;
    else if(killmo>90000 && killmo<=160000)
    loss=price*.20;
    else if(killmo>160000)
    loss=price*.275;
    return (loss);
}
void output(int c,char ch4[])
{
    char ch1[10][9]={"One","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten"};
    char ch2[9][9]={"Twenty","Thirty","Fourty","Fifty","Sixty","Seventy","Eighty","Ninety"};
    char ch3[9][9]={"Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};
    if(c>=11 && c<=19)
        {
        printf("%s %s",ch3[c-11],ch4);
        }
        else if(c<=10)
        {
        printf(" %s %s ",ch1[c-1],ch4);
        }
        else if(c>=20)
        {

            int d=c/10;c=c%10;if(c==0)
            printf(" %s %s ",ch2[d-2],ch4);
            else if(c!=0)
            {
                printf(" %s %s %s ",ch2[d-2],ch1[c-1],ch4);
            }
        }
}
void display(int n,int killometers,int ch)
{
    int c;
    char ch4[4][11]={"Crore","Lakh","Thousand","Hundred"};
    if(n>10000000)
    {
        c=n/10000000;output(c,ch4[0]);n=n%10000000;
    }
    if(n>100000)
    {
       c=n/100000;output(c,ch4[1]);n=n%100000;
    }
    if(n>1000)
    {
        c=n/1000;output(c,ch4[2]);n=n%1000;
    }
    if(n>100)
    {
        c=n/100;output(c,ch4[3]);n=n%100;
    }
    output(n,"Only");
    gotoxy(20,17);printf(" %d               %d",killometers,ch);

}
void doitall(int c,char ch[],int a)
{
    int year;gotoxy(21,++a);
    printf("Enter in which year you bought your vehicle ");
    gotoxy(21,++a);scanf("%d",&year);
int price1=yeardisc((2022-year),c);
int price2=condition(c,(++a));
int killo;
gotoxy(21,a+9);printf("Enter the number of kilometers driven ");gotoxy(21,a+10);scanf("%d",&killo);
int price3=killometers(killo,c);
    system("cls");gotoxy(20,7);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 YOUR PRICE \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    //show_mouse();

    gotoxy (20,10);
    printf("\n");gotoxy(20,11);printf("The second hand price of your vehicle is\n");
    printf("\n\n");
    gotoxy(20,15);
    printf(" %s               %d\n",ch,(c-(price1+price2+price3)));
    gotoxy(20,16);display((c-(price1+price2+price3)),killo,(year));
    gotoxy(20,18);printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoxy(20,20);
    printf("***THANKS FOR YOUR VISIT***");
    printf("Exiting in 3 second...........>");
    //flushall();
    Sleep(3000);
    exit(0);
}
void makeit()
{
    system("cls");int i;
    for(i=5;i<=92;i++)
    {
        if(i==5 || i==92)
    {
        gotoxy(20,i);printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    }
    else
    gotoxy(20,i);printf("\xB2");gotoxy(131,i);printf("\xB2");
    }
}
/*void show_mouse(void) //show inactive mouse pointer in programme
{
union REGS in,out;
       in.x.ax = 0x1;
       int86(0x33,&in,&out);
}*/
/*void loaderanim()
{
int loader;
system("cls");
gotoxy(20,10);
printf("LOADING........");
printf("\n\n");
gotoxy(22,11);
for(loader=1;loader<20;loader++)
{
Sleep(100);printf("%c",219);}
}*/
//End of program
