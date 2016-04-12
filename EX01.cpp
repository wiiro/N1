#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <graphics.h>

using namespace std;

void desenhaCampos( int x_start, int y_start, bool sup);

void pecasVermelhas();
void pecasAzuis();
		
int main(){
		
	// inicio da parte grafica
	initwindow(750, 500, "N1 - EX 01");
	setbkcolor(BROWN);				//cor de fundo
	cleardevice();					//para a cor de fundo sobrepor o fundo	
		
	setfillstyle(1, LIGHTGRAY);		//moldura exterior
	bar(25, 25, 725, 475);
	setfillstyle(1, BLACK); 		//linha do centro
	bar(374, 0, 376, 500);
	
	setfillstyle(1, BROWN);			//barra vertical centro esquerda
	bar(349, 0, 374, 500);
	setfillstyle(1, BROWN); 		//barra vertical centro direita
	bar(376, 0, 401, 500);

	setfillstyle(1, YELLOW); 		//dobradiça superior esquerda		
	bar(349, 70, 374, 120);
	setfillstyle(1, YELLOW);		//dobradiça inferior esquerda		
	bar(349, 380, 374, 430); 
	setfillstyle(1, YELLOW);		//dobradiça superior direita	
	bar(376, 70, 401, 120); 
	setfillstyle(1, YELLOW);		//dobradiça inferior direita	
	bar(376, 380, 401, 430); 
	
	desenhaCampos(53,200,true);
	desenhaCampos(428,200,true);
	
	desenhaCampos(53,300,false);
	desenhaCampos(428,300,false);

	pecasVermelhas();
	pecasAzuis();
	getch();
}

void desenhaCampos( int x_start, int y_start, bool sup)
{	
	int poly_t [8];
	// primeiro X
	poly_t[0] = x_start;
	// Pimeiro Y
	poly_t[1] = y_start;
			
	for(int v = 0; v < 6; v++)
	{
		poly_t[2] = poly_t[0] - 27;
		
		if(sup)
			poly_t[3] = poly_t[1] - 175;
		else
			poly_t[3] = poly_t[1] + 175;

		poly_t[4] = poly_t[0] + 27;
		poly_t[5] = poly_t[3];

		poly_t[6] = poly_t[0];
		poly_t[7] = poly_t[1];
		
		if(v % 2){
			setfillstyle(1, DARKGRAY);	
			setcolor(DARKGRAY);
			
		}else{
			setfillstyle(1, BLACK);	
			setcolor(BLACK);
		}
		fillpoly(4, poly_t);
		
		poly_t[0] += 54; // incrementa para o próximo triâgulo		
	}
}


void pecasVermelhas()
{
	int xcima, ycima, xbaixo, ybaixo;		//coordenadas bola
	int raio = 20;							//raio bola
	int i = 0;//contador
	
	//Lado direito superior
	xcima = 52;
	ycima = 44;
	for(i = 0; i < 5; i++)
	{
	setfillstyle(1, RED);
	setcolor(RED);
	fillellipse(xcima, ycima, raio, raio);
	ycima = ycima+40;
	}

	//Lado esquerdo superior
	ycima = 44;
	xcima = 699;
	for(i = 0; i < 2; i++)
	{
	setfillstyle(1, RED);
	setcolor(RED);
	fillellipse(xcima, ycima, raio, raio);
	ycima = ycima+40;
	}
		
	//Lado direito inferior
	xbaixo = 268;
	ybaixo = 455;
	for(i = 0; i < 3; i++)
	{
	setfillstyle(1, RED);
	setcolor(RED);
	fillellipse(xbaixo, ybaixo, raio, raio);
	ybaixo = ybaixo - 40;
	}
	
	//Lado esquerdo inferior
	xbaixo = 428;
	ybaixo = 455;
	for(i = 0; i < 5; i++)
	{
	setfillstyle(1, RED);
	setcolor(RED);
	fillellipse(xbaixo, ybaixo, raio, raio);
	ybaixo = ybaixo - 40;
	}
}


void pecasAzuis()
{
	int xcima, ycima, xbaixo, ybaixo;		//coordenadas bola
	int raio = 20;							//raio bola
	int i = 0;//contador
	
	//Lado esquerdo superior
	xcima = 268;
	ycima = 44;	
	for(i = 0; i < 3; i++)
	{
	setfillstyle(1, BLUE);
	setcolor(BLUE);
	fillellipse(xcima, ycima, raio, raio);
	ycima = ycima+40;
	}
	
	//Lado direito superior
	xcima = 428;
	ycima = 44;
	for(i = 0; i < 5; i++)
	{
	setfillstyle(1, BLUE);
	setcolor(BLUE);
	fillellipse(xcima, ycima, raio, raio);
	ycima = ycima+40;
	}
	
	//Lado inferior esquerdo
	xbaixo = 52;
	ybaixo = 455;
	for(i = 0; i < 5; i++)
	{
	setfillstyle(1, BLUE);
	setcolor(BLUE);
	fillellipse(xbaixo, ybaixo, raio, raio);
	ybaixo = ybaixo-40;
	}
	
	//Lado inferior direito
	xbaixo = 699;
	ybaixo = 455;
	for(i = 0; i < 2; i++)
	{
	setfillstyle(1, BLUE);
	setcolor(BLUE);
	fillellipse(xbaixo, ybaixo, raio, raio);
	ybaixo = ybaixo-40;
	}	
}
