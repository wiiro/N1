#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <graphics.h>

using namespace std;

void superiorDireito();
void superiorEsquerdo();
void inferiorDireito();
void inferiorEsquerdo();
void pecasVermelhas();
void pecasAzuis();

//declaracao das variaveis
	int poly [8];		 					//matriz para desenhar os triangulos
	int xcima, ycima, xbaixo, ybaixo;		//coordenadas bola
	int raio = 20;							//raio bola
	int i = 0;								//contador
		
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

	superiorDireito();
	superiorEsquerdo();
	inferiorDireito();
	inferiorEsquerdo();
	pecasVermelhas();
	pecasAzuis();
	getch();
}
//origem , diminui x e y , mantem y e sobe x, origem
void superiorDireito()
{
	setfillstyle(1, BLACK);		//primeiro triangulo superior esquerdo
	setcolor(BLACK);
	poly[0] = 52;
	poly[1] = 200;
	poly[2] = 25;
	poly[3] = 25;
	poly[4] = 79;
	poly[5] = 25;
	poly[6] = 52;
	poly[7] = 200;
	fillpoly(4, poly);

	setfillstyle(1, DARKGRAY);		//segundo triangulo superior esquerdo
	setcolor(DARKGRAY);
	poly[0] = 106;
	poly[1] = 200;
	poly[2] = 79;
	poly[3] = 25;
	poly[4] = 133;
	poly[5] = 25;
	poly[6] = 106;
	poly[7] = 200;
	fillpoly(4, poly);
	
	setfillstyle(1, BLACK);		//terceiro triangulo superior esquerdo
	setcolor(BLACK);
	poly[0] = 160;
	poly[1] = 200;
	poly[2] = 133;
	poly[3] = 25;
	poly[4] = 187;
	poly[5] = 25;
	poly[6] = 160;
	poly[7] = 200;
	fillpoly(4, poly);

	setfillstyle(1, DARKGRAY);		//quarto triangulo superior esquerdo
	setcolor(DARKGRAY);
	poly[0] = 214;
	poly[1] = 200;
	poly[2] = 187;
	poly[3] = 25;
	poly[4] = 241;
	poly[5] = 25;
	poly[6] = 214;
	poly[7] = 200;
	fillpoly(4, poly);
	
	setfillstyle(1, BLACK);		//quinto triangulo superior esquerdo
	setcolor(BLACK);
	poly[0] = 268;
	poly[1] = 200;
	poly[2] = 241;
	poly[3] = 25;
	poly[4] = 295;
	poly[5] = 25;
	poly[6] = 268;
	poly[7] = 200;
	fillpoly(4, poly);
	
	setfillstyle(1, DARKGRAY);		//sexto triangulo superior esquerdo
	setcolor(DARKGRAY);
	poly[0] = 321,5;
	poly[1] = 200;
	poly[2] = 295;
	poly[3] = 25;
	poly[4] = 348;
	poly[5] = 25;
	poly[6] = 322;
	poly[7] = 200;
	fillpoly(4, poly);
}

void superiorEsquerdo()
{
	setfillstyle(1, BLACK);		//primeiro triangulo superior direito
	setcolor(BLACK);
	poly[0] = 428;
	poly[1] = 200;
	poly[2] = 401;
	poly[3] = 25;
	poly[4] = 455;
	poly[5] = 25;
	poly[6] = 428;
	poly[7] = 200;
	fillpoly(4, poly);
	
	setfillstyle(1, DARKGRAY);		//segundo triangulo superior direito
	setcolor(DARKGRAY);
	poly[0] = 483;	//soma 54 do [0] anterior
	poly[1] = 200;	//mantém
	poly[2] = 456;	//copia o [4] anterior
	poly[3] = 25;	//mantém
	poly[4] = 510;	//soma 54 do [2] 
	poly[5] = 25;	//mantém
	poly[6] = 483;	//soma 54 do [0] anterior
	poly[7] = 200;	//mantém
	fillpoly(4, poly);
	
	setfillstyle(1, BLACK);		//terceiro triangulo superior direito
	setcolor(BLACK);
	poly[0] = 537;
	poly[1] = 200;
	poly[2] = 510;
	poly[3] = 25;
	poly[4] = 564;
	poly[5] = 25;
	poly[6] = 537;
	poly[7] = 200;
	fillpoly(4, poly);
	
	setfillstyle(1, DARKGRAY);		//quarto triangulo superior direito
	setcolor(DARKGRAY);
	poly[0] = 591;
	poly[1] = 200;
	poly[2] = 564;
	poly[3] = 25;
	poly[4] = 618;
	poly[5] = 25;
	poly[6] = 591;
	poly[7] = 200;
	fillpoly(4, poly);
	
	setfillstyle(1, BLACK);			//quinto triangulo superior direito
	setcolor(BLACK);
	poly[0] = 645;
	poly[1] = 200;
	poly[2] = 618;
	poly[3] = 25;
	poly[4] = 672;
	poly[5] = 25;
	poly[6] = 645;
	poly[7] = 200;
	fillpoly(4, poly);
	
	setfillstyle(1, DARKGRAY);		//sexto triangulo superior direito
	setcolor(DARKGRAY);
	poly[0] = 699;
	poly[1] = 200;
	poly[2] = 672;
	poly[3] = 25;
	poly[4] = 725;
	poly[5] = 25;
	poly[6] = 699;
	poly[7] = 200;
	fillpoly(4, poly); 
}

void inferiorDireito()
{
	setfillstyle(1, DARKGRAY);		//primeiro triangulo inferior esquerdo
	setcolor(DARKGRAY);
	poly[0] = 52;
	poly[1] = 300;
	poly[2] = 25;
	poly[3] = 475;
	poly[4] = 79;
	poly[5] = 475;
	poly[6] = 52;
	poly[7] = 300;
	fillpoly(4, poly); 
	
	setfillstyle(1, BLACK);			//segundo triangulo inferior esquerdo
	setcolor(BLACK);
	poly[0] = 106;
	poly[1] = 300;
	poly[2] = 79;
	poly[3] = 475;
	poly[4] = 133;
	poly[5] = 475;
	poly[6] = 106;
	poly[7] = 300;
	fillpoly(4, poly);
	
	setfillstyle(1, DARKGRAY);		//terceiro triangulo inferior esquerdo
	setcolor(DARKGRAY);
	poly[0] = 160;
	poly[1] = 300;
	poly[2] = 133;
	poly[3] = 475;
	poly[4] = 187;
	poly[5] = 475;
	poly[6] = 160;
	poly[7] = 300;
	fillpoly(4, poly);

	setfillstyle(1, BLACK);			//quarto triangulo inferior esquerdo
	setcolor(BLACK);
	poly[0] = 214;
	poly[1] = 300;
	poly[2] = 187;
	poly[3] = 475;
	poly[4] = 241;
	poly[5] = 475;
	poly[6] = 214;
	poly[7] = 300;
	fillpoly(4, poly);
	
	setfillstyle(1, DARKGRAY);		//quinto triangulo inferior esquerdo
	setcolor(DARKGRAY);
	poly[0] = 268;
	poly[1] = 300;
	poly[2] = 241;
	poly[3] = 475;
	poly[4] = 295;
	poly[5] = 475;
	poly[6] = 268;
	poly[7] = 300;
	fillpoly(4, poly);
	
	setfillstyle(1, BLACK);			//sexto triangulo inferior esquerdo
	setcolor(BLACK);
	poly[0] = 321,5;
	poly[1] = 300;
	poly[2] = 295;
	poly[3] = 475;
	poly[4] = 348;
	poly[5] = 475;
	poly[6] = 322;
	poly[7] = 300;
	fillpoly(4, poly);
}

void inferiorEsquerdo()
{
	setfillstyle(1, BLACK);		//primeiro triangulo inferior direito
	setcolor(BLACK);
	poly[0] = 428;
	poly[1] = 300;
	poly[2] = 401;
	poly[3] = 475;
	poly[4] = 455;
	poly[5] = 475;
	poly[6] = 428;
	poly[7] = 300;
	fillpoly(4, poly);
	
	setfillstyle(1, DARKGRAY);		//segundo triangulo inferior direito
	setcolor(DARKGRAY);
	poly[0] = 483;	//soma 54 do [0] anterior
	poly[1] = 300;	//mantém
	poly[2] = 456;	//copia o [4] anterior
	poly[3] = 475;	//mantém
	poly[4] = 510;	//soma 54 do [2] 
	poly[5] = 475;	//mantém
	poly[6] = 483;	//soma 54 do [0] anterior
	poly[7] = 300;	//mantém
	fillpoly(4, poly);
	
	setfillstyle(1, BLACK);		//terceiro triangulo inferior direito
	setcolor(BLACK);
	poly[0] = 537;
	poly[1] = 300;
	poly[2] = 510;
	poly[3] = 475;
	poly[4] = 564;
	poly[5] = 475;
	poly[6] = 537;
	poly[7] = 300;
	fillpoly(4, poly);
	
	setfillstyle(1, DARKGRAY);		//quarto triangulo inferior direito
	setcolor(DARKGRAY);
	poly[0] = 591;
	poly[1] = 300;
	poly[2] = 564;
	poly[3] = 475;
	poly[4] = 618;
	poly[5] = 475;
	poly[6] = 591;
	poly[7] = 300;
	fillpoly(4, poly);
	
	setfillstyle(1, BLACK);			//quinto triangulo inferior direito
	setcolor(BLACK);
	poly[0] = 645;
	poly[1] = 300;
	poly[2] = 618;
	poly[3] = 475;
	poly[4] = 672;
	poly[5] = 475;
	poly[6] = 645;
	poly[7] = 300;
	fillpoly(4, poly);
	
	setfillstyle(1, DARKGRAY);		//sexto triangulo inferior direito
	setcolor(DARKGRAY);
	poly[0] = 699;
	poly[1] = 300;
	poly[2] = 672;
	poly[3] = 475;
	poly[4] = 725;
	poly[5] = 475;
	poly[6] = 699;
	poly[7] = 300;
	fillpoly(4, poly); 
}

void pecasVermelhas()
{
	
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
