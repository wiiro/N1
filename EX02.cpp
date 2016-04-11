#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<graphics.h>

int i = 0, j = 0;
int pg = 1;
int left, right, top, bottom;
int poly[10];
int barco[14];
int triang[8];

void desenhaCampo();
void desenhaBarco();
void viraBarco();

int main () 
{
 initwindow(800, 600, "Ex 02");
	while (i < 540)
	{	
		if (pg == 1) pg = 2; else pg = 1;
		setactivepage(pg);		//pagina ativa
		cleardevice();			//limpa tela
		desenhaCampo();			//desenha fundo
		desenhaBarco();			//desenha barco
		setvisualpage(pg);		//pagina mostrada ao usuário
		
	}
 getch();
}

void desenhaBarco() 			//desenho e movimento do barco
{
	setfillstyle(1, DARKGRAY); 	//barco
 		barco[0] = 400;
 		barco[1] = 0 + i;
 		barco[2] = 380;
		barco[3] = 20 + i;
 		barco[4] = 380;
 		barco[5] = 60 + i;
 		barco[6] = 400;
		barco[7] = 80 + i;
 		barco[8] = 420;
 		barco[9] = 60 + i;
 		barco[10] = 420;
 		barco[11] = 20 + i;
 		barco[12] = 400;
 		barco[13] = 0 + i;
 		fillpoly(7, barco);
 		i = i + 1;
		delay(10);
		
}

void viraBarco()					//virar o barco
{
	setfillstyle(1, DARKGRAY);		//barco
		barco[0] = 400;
 		barco[1] = 0 + i;
 		barco[2] = 380;
		barco[3] = 20 + i;
 		barco[4] = 380;
 		barco[5] = 60 + i;
 		barco[6] = 400;
		barco[7] = 80 + i;
 		barco[8] = 420;
 		barco[9] = 60 + i;
 		barco[10] = 420;
 		barco[11] = 20 + i;
 		barco[12] = 400;
 		barco[13] = 0 + i;
 		fillpoly(7, barco);
 		i = i + 1;
		delay(10);
	
}


void desenhaCampo()				//desenho do background
{
setbkcolor(GREEN); 				//cor do fundo
 
setfillstyle(1, BLUE); 			//cor da agua

bar(360, 0, 440, 600);			//rio principal

bar(440, 150, 580, 200); 		// primerio braco da direita	
poly[0] = 580;
poly[1] = 150;
poly[2] = 580;
poly[3] = 200;
poly[4] = 680;
poly[5] = 150;
poly[6] = 680;
poly[7] = 100;
poly[8] = 580;
poly[9] = 150;
fillpoly(5, poly);
bar(680, 100, 800, 150); 
		
bar(240, 300, 360, 350);		//braco da esquerda	
poly[0] = 0;
poly[1] = 250;
poly[2] = 120;
poly[3] = 300;
poly[4] = 240;
poly[5] = 350;
poly[6] = 240;
poly[7] = 300;
poly[8] = 0;
poly[9] = 200;
fillpoly(5, poly);
 					
poly[0] = 360;					//segundo braco da direita  
poly[1] = 350;
poly[2] = 360;
poly[3] = 400;
poly[4] = 560;
poly[5] = 450;
poly[6] = 560;
poly[7] = 400;
poly[8] = 360;
poly[9] = 350;
fillpoly(5, poly);
setcolor(BLUE);
bar(560, 400, 600, 450);
poly[0] = 600;
poly[1] = 400;
poly[2] = 600;
poly[3] = 450;
poly[4] = 800;
poly[5] = 600;
poly[6] = 800;
poly[7] = 525;
poly[8] = 600;
poly[9] = 400;
fillpoly(5, poly);

bar(150, 0, 200, 600);			//rio vertical 1
bar(0, 550, 800, 600);			//rio horizontal 1
}




