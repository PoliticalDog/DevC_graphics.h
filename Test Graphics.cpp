#include<winbgim.h>
#include<conio.h>
#include<dos.h>
#include<stdio.h>
#include<iostream>

using namespace std;

void waitforLeftMouseClick();
void hanoi(int num,char A,char B,char C);

int imprimir();

int main(){
   
        int n=3;//numero de discos
        char A,B,C; //torres
	    
		printf("Programa de recursividad\n\t Torres de Hanoi\n");
        printf("\nTotal de discos:%d\n",n);
        printf("Torres A - B - C\n\n\n");
        hanoi(n,'A','B','C');
		//setcolor(YELLOW);outtextxy(180,110,"Torres: A - B - C");
		system("pause");
   imprimir();
  
	return 0;
}

void hanoi(int num,char A,char B,char C)
{
	//caso base
    if(num==1)//si mi dsico es igual a 1
    {
            printf("Movimiento del disco %d %c-->%c\n",num,A,C);//muestra el disco y lo mueve con A y C por ser el primer movimiento
    }
    //caso recursivo
    else//de lo contrario no es mi disco 1
    {
        hanoi(num-1,A,C,B); //cambiamos los parametros
        printf("Movimiento del disco %d %c-->%c\n",num,A,C);
        hanoi(num-1,B,A,C);//cambiamos los parametros
    }
}

int imprimir(){
	int gd = DETECT, gm, x, y, color, angle = 0;
   struct arccoordstype a, b;
   initgraph(&gd, &gm, "C:\\TC\\BGI");
   delay(2000); 
   int k=0, i=280, j=300;
    


	setfillstyle(SOLID_FILL, 0);
	floodfill(0,100,0);
	setbkcolor(0);
	

setcolor(COLOR(0,0,255));rectangle(105,30,515,80); 
setcolor(COLOR(255,255,0));outtextxy(190,50," TORRES DE HANOI, MODO GRAFICO");
setcolor(COLOR(255,175,175));outtextxy(235,100,"Total de discos: 3"); 

	
    //torres
	setcolor(COLOR(255,255,255));	
	rectangle(20,350,200,360);
	rectangle(225,350,405,360);
	rectangle(430,350,610,360);
	rectangle(105,150,115,350);
	rectangle(310,150,320,350);
	rectangle(515,150,525,350);

	
	//nombre bases
	setcolor(COLOR(246,61,125));
	outtextxy(105,370,"A");
	setcolor(COLOR(105,205,204)); 
	outtextxy(310,370,"B");
	setcolor(COLOR(189,55,154)); 
	outtextxy(515,370,"C");
	
	
	//disco3
	setcolor(COLOR(141,10,255));
	rectangle(40,327,180,347);
	setcolor(COLOR(127,255,10));//Disco 2 color
    rectangle(50,305,170,325);
		
		while(k<=8){
			setcolor(COLOR(255,142,10));	
		    rectangle(60,i,160,j);
		    delay(300);
		    setcolor(0);
		    rectangle(60,i,160,j);
		    i=i-20;
		    j=j-20;
		    k++;
		}
				
		i=60; j=160; k=0;
		while(k<=4){
			setcolor(COLOR(255,142,10));	
		    rectangle(i,120,j,140);
		    delay(300);
		    setcolor(0);
		    rectangle(i,120,j,140);
		    i=i+100;
		    j=j+100;
		    k++;
		}
		
		i=120; j=140; k=0;
		while(k<=9){
			setcolor(COLOR(255,142,10));	
		    rectangle(470,i,570,j);
		    delay(300);
		    setcolor(0);
		    rectangle(470,i,570,j);
		    i=i+20;
		    j=j+20;
		    k++;
		}
		setcolor(COLOR(255,142,10));	
		    rectangle(470,325,570,345);
	setcolor(0);

		setcolor(COLOR(255,255,255));	//setcolor(COLOR(236,245,88));
	rectangle(20,350,200,360);
	rectangle(225,350,405,360);
	rectangle(430,350,610,360);
	rectangle(105,150,115,350);
	rectangle(310,150,320,350);
	rectangle(515,150,525,350);
	setcolor(0);
	rectangle(40,309,180,329);
	
	i=305; j=325; k=0;
	while(k<=9){
			setcolor(COLOR(127,255,10));	
		    rectangle(50,i,170,j);
		    delay(300);
		    setcolor(0);
		    rectangle(50,i,170,j);
		    i=i-20;
		    j=j-20;
		    k++;
		}
	
	i=50; j=170; k=0;
	while(k<=2){
			setcolor(COLOR(127,255,10));	
		    rectangle(i,127,j,147);
		    delay(300);
		    setcolor(0);
		    rectangle(i,127,j,147);
		    i=i+100;
		    j=j+100;
		    k++;
		}
		
	    i=127; j=147; k=0;	
		while(k<=9){
			setcolor(COLOR(127,255,10));	
		    rectangle(250,i,370,j);
		    delay(300);
		    setcolor(0);
		    rectangle(250,i,370,j);
		    i=i+20;
		    j=j+20;
		    k++;
			
		}
		setcolor(COLOR(127,255,10));	
		    rectangle(255,325,375,345);
	
	setcolor(0);
	setcolor(COLOR(255,255,255));	//setcolor(COLOR(236,245,88));
	rectangle(20,350,200,360);
	rectangle(225,350,405,360);
	rectangle(430,350,610,360);
	rectangle(105,150,115,350);
	rectangle(310,150,320,350);
	rectangle(515,150,525,350);
	
	setcolor(COLOR(127,255,10));	
		    rectangle(470,325,570,345);
	
	i=325, j=345; k=0;
		while(k<=10){
			setcolor(COLOR(255,142,10));	
		    rectangle(470,i,570,j);
		    delay(300);
		    setcolor(0);
		    rectangle(470,i,570,j);
		    i=i-20;
		    j=j-20;
		    k++;
		}
		
	i=470, j=570; k=0;
		while(k<=2){
			setcolor(COLOR(255,142,10));	
		    rectangle(i,125,j,145);
		    delay(300);
		    setcolor(0);
		    rectangle(i,125,j,145);
		    i=i-100;
		    j=j-100;
		    k++;
		}
		
	i=120, j=140; k=0;
		while(k<=9){
			setcolor(COLOR(255,142,10));	
		    rectangle(265,i,365,j);
		    delay(300);
		    setcolor(0);
		    rectangle(265,i,365,j);
		    i=i+20;
		    j=j+20;
		    k++;
		}
		setcolor(COLOR(255,142,10));	
		    rectangle(265,300,365,320);
		    
	setcolor(0);

			setcolor(COLOR(255,255,255));	//setcolor(COLOR(236,245,88));
	rectangle(20,350,200,360);
	rectangle(225,350,405,360);
	rectangle(430,350,610,360);
	rectangle(105,150,115,350);
	rectangle(310,150,320,350);
	rectangle(515,150,525,350);
	
	setcolor(0);
	rectangle(40,327,180,347);
	
	i=327; j=347; k=0;
	while(k<=10){
			setcolor(COLOR(141,10,255));	
		    rectangle(40,i,180,j);
		    delay(300);
		    setcolor(0);
		    rectangle(40,i,180,j);
		    i=i-20;
		    j=j-20;
		    k++;
		}
		
        i=40, j=180; k=0;
		while(k<=4){
			setcolor(COLOR(141,10,255));	
		    rectangle(i,125,j,145);
		    delay(300);
		    setcolor(0);
		    rectangle(i,125,j,145);
		    i=i+100;
		    j=j+100;
		    k++;
		}
		setcolor(6);
		rectangle(450,125,590,145);
		
		i=145, j=125; k=0;
		while(k<=10){
			setcolor(COLOR(141,10,255));	
		    rectangle(450,i,590,j);
		    delay(300);
		    setcolor(0);
		    rectangle(450,i,590,j);
		    i=i+20;
		    j=j+20;
		    k++;
		}
		setcolor(COLOR(141,10,255));	
		   rectangle(450,345,590,325);
		   
	setcolor(0);

		setcolor(COLOR(255,255,255));	//setcolor(COLOR(236,245,88));
	rectangle(20,350,200,360);
	rectangle(225,350,405,360);
	rectangle(430,350,610,360);
	rectangle(105,150,115,350);
	rectangle(310,150,320,350);
	rectangle(515,150,525,350);

	i=300; j=320; k=0;
	while(k<=10){
			setcolor(COLOR(255,142,10));	
		    rectangle(265,i,365,j);
		    delay(300);
		    setcolor(0);
		    rectangle(265,i,365,j);
		    i=i-20;
		    j=j-20;
		    k++;
		}
		
        i=265, j=365; k=0;
		while(k<=2){
			setcolor(COLOR(255,142,10));	
		    rectangle(i,100,j,120);
		    delay(300);
		    setcolor(0);
		    rectangle(i,100,j,120);
		    i=i-100;
		    j=j-100;
		    k++;
		}
		
		i=100, j=120; k=0;
		while(k<=11){
			setcolor(COLOR(255,142,10));	
		    rectangle(65,i,165,j);
		    delay(300);
		    setcolor(0);
		    rectangle(65,i,165,j);
		    i=i+20;
		    j=j+20;
		    k++;
		}
		setcolor(COLOR(255,142,10));
		rectangle(60,325,160,345);
		
	setcolor(0);
	setcolor(COLOR(255,255,255));	//setcolor(COLOR(236,245,88));
	rectangle(20,350,200,360);
	rectangle(225,350,405,360);
	rectangle(430,350,610,360);
	rectangle(105,150,115,350);
	rectangle(310,150,320,350);
	rectangle(515,150,525,350);
	
	rectangle(255,325,375,345);
	i=325; j=345; k=0;
	while(k<=9){
			setcolor(COLOR(127,255,10));	
		    rectangle(255,i,375,j);
		    delay(300);
		    setcolor(0);
		    rectangle(255,i,375,j);
		    i=i-20;
		    j=j-20;
		    k++;
		}
	
	i=255; j=375; k=0;
	while(k<=2){
			setcolor(COLOR(127,255,10));	
		    rectangle(i,145,j,165);
		    delay(300);
		    setcolor(0);
		    rectangle(i,145,j,165);
		    i=i+100;
		    j=j+100;
		    k++;
		}
		
	    i=145; j=165; k=0;	
		while(k<=7){
			setcolor(COLOR(127,255,10));	
		    rectangle(455,i,575,j);
		    delay(300);
		    setcolor(0);
		    rectangle(455,i,575,j);
		    i=i+20;
		    j=j+20;
		    k++;
			                       
		}
		setcolor(COLOR(127,255,10));	
		    rectangle(460,300,580,320);
		
			setcolor(0);
	setcolor(COLOR(255,255,255));	//setcolor(COLOR(236,245,88));
	rectangle(20,350,200,360);
	rectangle(225,350,405,360);
	rectangle(430,350,610,360);
	rectangle(105,150,115,350);
	rectangle(310,150,320,350);
	rectangle(515,150,525,350);
	

	i=325; j=345; k=0;
	while(k<=9){
			setcolor(COLOR(255,142,10));	
		    rectangle(60,i,160,j);
		    delay(300);
		    setcolor(0);
		    rectangle(60,i,160,j);
		    i=i-20;
		    j=j-20;
		    k++;
		}
	
	i=60; j=160; k=0;
	while(k<=4){
			setcolor(COLOR(255,142,10));	
		    rectangle(i,145,j,165);
		    delay(300);
		    setcolor(0);
		    rectangle(i,145,j,165);
		    i=i+100;
		    j=j+100;
		    k++;
		}
		
	    i=145; j=165; k=0;	
		while(k<=6){
			setcolor(COLOR(255,142,10));	
		    rectangle(460,i,560,j);
		    delay(300);
		    setcolor(0);
		    rectangle(460,i,560,j);
		    i=i+20;
		    j=j+20;
		    k++;
			                       
		}
		setcolor(COLOR(255,142,10));	
	    rectangle(470,275,570,295);
			setcolor(COLOR(255,255,255));	//setcolor(COLOR(236,245,88));
	rectangle(20,350,200,360);
	rectangle(225,350,405,360);
	rectangle(430,350,610,360);
	rectangle(105,150,115,350);
	rectangle(310,150,320,350);
	rectangle(515,150,525,350);
	
	
	waitforLeftMouseClick();
	
	getch;
	closegraph();
   
}

void waitforLeftMouseClick(){
	clearmouseclick(WM_LBUTTONDOWN);
	const int DELAY = 50;
	int x, y;
	while(!ismouseclick(WM_LBUTTONDOWN))
	delay(DELAY);
	getmouseclick(WM_LBUTTONDOWN,x,y);
}
