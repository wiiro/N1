/*
 * @brief contem todo o código do exercicio 03.
 *
 * @date 11/04/16
 * @author Bruno, Victor, Willian
 * @version 1.0
 */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>
#include <graphics.h>

using namespace std;
 
#define LEFT   	75
#define RIGHT  	77
#define UP     	72
#define DOWN   	80
#define ESC    	27

 void desenhaNave();
 void moveNave();

 //paramentros do putpixel
 typedef struct {
	int x; 
	int y;
	int cor;							
}TEstrelas;

//coordenadas da nave
typedef struct{
	int passo_x;
	int passo_y;
}TMove;

 typedef struct{
 	int nave_cor;
 	int nave[8];
	TMove passo;
 }TNave;


int main(){
 //declaracao de variaveis
 char tecla;
 
 initwindow(800, 600, "N1 - EX 03");						// inicio da parte grafica	
 cleardevice();												// garantir que a tela está limpa para desenhar
 srand (time(NULL));										//seed do rand
 	
 TEstrelas	Estrelas[2000];									//vetor para gerar 2000 estrelas coloridas
 TNave		move;		

  //while(tecla != ESC){
  //laço para gerar as posições aleatorias e guardá-las no vetor
   for( int i = 0; i < 2000; i++){			
   Estrelas[i].cor = rand () % 15 + 1;						//gerar cores aleatorias
   Estrelas[i].x = rand () % 799;							//coordenada x aleatoria
   Estrelas[i].y = rand () % 599;							//coordenada y aleatoria
   putpixel(Estrelas[i].x, Estrelas[i].y, Estrelas[i].cor);	//desenho aleatorio
   }

 desenhaNave();											
 moveNave();
  
getch();
}


 void desenhaNave(){
 	
  int nave [8]; 
  int nave_cor; 
	
  nave[0] = 410;
  nave[1] = 380;
  nave[2] = 380;
  nave[3] = 450;
  nave[4] = 440;
  nave[5] = 450;
  nave[6] = 410;
  nave[7] = 380;
  nave_cor = RGB(rand() % 200, rand() % 156, rand() % 200); 
  setfillstyle(1, nave_cor);		
  setcolor(YELLOW);
  fillpoly(4, nave);
 	
 } 
 
 void moveNave (TNave *n){
	
	int nave [8]; 
  	int nave_cor; 
	
	nave[0] = n->passo.passo_x;
	nave[1] = n->passo.passo_y;

	nave[2] = n->passo.passo_x + 20;
	nave[3] = n->passo.passo_y + 12;

	nave[4] = n->passo.passo_x;
	nave[5] = n->passo.passo_y + 24;

	nave[6] = n->passo.passo_x;
	nave[7] = n->passo.passo_y;
 
 	nave_cor = RGB(rand() % 200, rand() % 156, rand() % 200); 
  	setfillstyle(1, nave_cor);		
  	setcolor(YELLOW);
  	fillpoly(4, nave);
}
 
