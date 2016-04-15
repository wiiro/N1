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

 void printNave(TNave *n);
 void printFundo(TEstrelas *stars);

int main(){
 
 initwindow(800, 600, "N1 - EX 03");									//Inicio da parte grafica	
 cleardevice();															//Garantir que a tela está limpa para desenhar
 srand (time(NULL));													//seed do rand
 
 //declaracao de variaveis
 char tecla;	
 TEstrelas	Estrelas[2000];												//vetor para gerar 2000 estrelas coloridas
 TNave		move;														//variavel da posicao da nave
 int 		pg = 1;
 int		i = 1;
 move.passo.passo_x = 410;												//posicao inicial da nave em x
 move.passo.passo_y = 380;												//posicao inicial da nave em y
 
 //printFundo(Estrelas);
 
  for(i = 0; i < 2000; i++){			
   Estrelas[i].cor = rand () % 15 + 1;									//gerar cores aleatorias
   Estrelas[i].x = rand () % 799;										//coordenada x aleatoria
   Estrelas[i].y = rand () % 599;										//coordenada y aleatoria
   putpixel(Estrelas[i].x, Estrelas[i].y, Estrelas[i].cor);				//desenho aleatorio
   }		
  
 while(tecla != ESC){
	if (pg == 1) pg = 2; else pg = 1;
	setactivepage(pg);													//Pagina ativa
	putpixel(Estrelas[i].x, Estrelas[i].y, Estrelas[i].cor);			//desenho das estrelas
	cleardevice();														//Limpa tela
	printNave(&move);													//Desenha Nave
	
    if (kbhit()){
    tecla = getch();
	if(tecla == LEFT) 	move.passo.passo_x	-= 2;						// Movimenta para esquerda em X
 	if(tecla == RIGHT)	move.passo.passo_x 	+= 2;						// Movimenta para direita em X
 	if(tecla == UP) 	move.passo.passo_y	-= 1;						// Movimenta para cima em Y
 	if(tecla == DOWN) 	move.passo.passo_y	+= 1;						// Movimenta para baixo em Y								
	printNave(&move);
 	}
 	setvisualpage(pg);													//pagina mostrada ao usuário
 }

getch();
}

 
 void printNave (TNave *n){
	
	int nave [8]; 
  	int nave_cor; 
	
	nave[0] = n->passo.passo_x;
	nave[1] = n->passo.passo_y;

	nave[2] = n->passo.passo_x - 40;
	nave[3] = n->passo.passo_y + 70;

	nave[4] = n->passo.passo_x + 40;
	nave[5] = n->passo.passo_y + 70;

	nave[6] = n->passo.passo_x;
	nave[7] = n->passo.passo_y;
 
 	nave_cor = RGB(rand() % 200, rand() % 156, rand() % 200); 
  	setfillstyle(1, nave_cor);		
  	setcolor(YELLOW);
  	fillpoly(4, nave);
}

/*void printFundo(TEstrelas stars[]){
 for( int i = 0; i < 2000; i++){			
   stars[i].cor = rand () % 15 + 1;									//gerar cores aleatorias
   stars[i].x = rand () % 799;										//coordenada x aleatoria
   stars[i].y = rand () % 599;										//coordenada y aleatoria
   putpixel(stars[i].x, stars[i].y, stars[i].cor);					//desenho aleatorio
   }*/		

 
