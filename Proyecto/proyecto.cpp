#include <stdio.h>
#include <Windows.h>
#include <conio.h>
#include <stdlib.h>
#include <list>
#include <iostream>
using namespace std;


//Definición de los valores del código ASCII de las teclas
#define ARRIBA 72
#define IZQUIERDA 75
#define DERECHA 77
#define ABAJO 80

void gotoxy(int x, int y);
void OcultarCursor();


//Clase NAVE con atributos y metódos
class NAVE{
    int x, y;
    int corazones;
    int vidas;
public:
    NAVE(int _x, int _y,int _corazones,int _vidas) :x(_x), y(_y), corazones(_corazones), vidas(_vidas){}
    int X(){ return x; }
    int Y() { return y; }
    int vida(){return vidas;}
    void cor() { corazones--; };
    void pintar();
    void borrar();
    void mover();
    void dibujar_corazones();
    void morir();

};

//Definiciones de los metódos
//Dibuja la nave en la consola
void NAVE::pintar() {
    gotoxy(x, y);     printf("  %c", 30);
    gotoxy(x, y + 1); printf(" %c%c%c", 40, 207, 41);
    gotoxy(x, y + 2); printf("%c%c %c%c", 30, 190, 190, 30);
}

//Borra el rastro de la nave
void NAVE::borrar() {
    gotoxy(x, y);   printf("      ");
    gotoxy(x, y+1); printf("      ");
    gotoxy(x, y+2); printf("      ");
}

//Identifica la tecla presionada para mover la nave
void NAVE::mover() {
    if (_kbhit()) {
        char tecla = _getch();
        borrar();
        if (tecla == IZQUIERDA && x - 1>3) {
            x--;
        }
        if (tecla == DERECHA && x + 6<77) {
            x++;
        }
        if (tecla == ARRIBA && y>4) {
            y--;
        }
        if (tecla == ABAJO && y + 3<33) {
            y++;
        }
        
        pintar();
        dibujar_corazones();
    }
}

void NAVE::dibujar_corazones() {

    gotoxy(50, 2); printf("VIDAS %d", vidas);
    gotoxy(64, 2); printf("SALUD:");
    gotoxy(70, 2); printf("     ");
    for (int i = 0; i < corazones; i++) {

        gotoxy(70 + i, 2); printf("%c", 3);
    }

}


void pintar_limites() {

    for (int i = 2; i < 78; i++) {
        gotoxy(i, 3); printf("%c", 205);
        gotoxy(i, 33); printf("%c", 205);
    }
    for (int i = 4; i < 33; i++) {
        gotoxy(2, i); printf("%c", 186);
        gotoxy(77, i); printf("%c", 186);
    }
    gotoxy(2, 3); printf("%c", 201);
    gotoxy(2,33); printf("%c", 200);
    gotoxy(77,3); printf("%c", 187);
    gotoxy(77,33); printf("%c", 188);
}

void NAVE::morir() {

    if (corazones == 0) {
        borrar();
        gotoxy(x, y);   printf("  **  ");
        gotoxy(x, y+1); printf(" **** ");
        gotoxy(x, y+2); printf("  **  ");
        Sleep(400);

        borrar();
        gotoxy(x, y);     printf("* ** *");
        gotoxy(x, y + 1); printf(" **** ");
        gotoxy(x, y + 2); printf("* ** *");
        Sleep(800);
        borrar();
        vidas--;
        corazones = 3;
        dibujar_corazones();
        pintar();
        
    }

}


class AST {
    int x, y;
public:
    AST(int _x, int _y) :x(_x), y(_y) {}
    int X(){return x;}
    int Y(){return y;}
    void pintarast();
    void moverast();
    void colision(class NAVE &N);
};

void AST::pintarast() {

    gotoxy(x, y); printf("%c", 184);

}

void AST::moverast() {


    gotoxy(x, y); printf(" ");
    y++;
    if (y > 32) {

        x = rand() % 71 + 4;
        y = 4;

    }
    pintarast();
        
}

void AST:: colision(class NAVE &N) {
    if (x >=N.X() && x < N.X()+6 && y >= N.Y() && y <= N.Y()+2) {
        N.cor();
        N.borrar();
        N.pintar();
        N.dibujar_corazones();
        x = rand() % 71 + 4;
        y = 4;
     }
}


class bala {
    int x, y;
public:
       bala(int _x, int _y) : x(_x), y(_y){}
       int X() { return x; }
       int Y() { return y; }
       void mover();
       bool fuera();
};

void bala:: mover() {
    gotoxy(x, y); printf(" ");
    if (y > 4) {
        y--;
    }
    gotoxy(x, y); printf("*");
}

bool bala::fuera() {
    if (y == 4) {
        return true;
    }
    else {
        return false;
    }
}

//Función main
int main()
{
    
	
    OcultarCursor();
    
    pintar_limites();
   
	   
    NAVE N(7, 25, 3, 3);
    N.pintar();
    N.dibujar_corazones();
    int score = 0;
    
	
    list<AST*> A;
    
    list<AST*>::iterator itA;
    for(int i = 0; i<5; i++){
    	
    	A.push_back(new AST(rand()%75+3, rand()%4+4));
    	
    }

    list<bala*> B;
    list<bala*>::iterator it;

    bool gameover = false;
    
   
    
    while (gameover != true) {
		
	
    	gotoxy(4,2); printf("SCORE: %d", score);
    
		
		if(N.vida() == 0){
			gameover = true;
		}
        
        if (_kbhit()) {
            char tecla = _getch();
            if (tecla == 'z') {
                B.push_back(new bala(N.X() + 2, N.Y() - 1));
            }
        }
		
		//Se crean balas y se eliminan si llegan al límite
        for (it = B.begin(); it != B.end(); it++) {
            (*it)->mover();
            if ((*it)->fuera()) {
                gotoxy((*it)->X(), (*it)->Y()); printf(" ");
                delete(*it);
                it = B.erase(it);
            }
        }
		
		//Se crean asteroides
        for(itA = A.begin(); itA != A.end(); itA++){
        	(*itA)->moverast();
        	(*itA)->colision(N);
        }
        
        //Se detectan las colisiones, se eliminan y se posicionan en otra posición
        for(itA = A.begin(); itA != A.end(); itA++){
        	for(it = B.begin(); it != B.end(); it++){
        		if((*itA)->X() == (*it)->X() && ((*itA)->Y()+1 == (*it)->Y() || (*itA)->Y() == (*it)->Y())){
        			gotoxy((*it)->X(),(*it)->Y()); printf(" ");
        			delete(*it);
        			it = B.erase(it);
        			
        			A.push_back(new AST(rand()%74 + 3, 4));
        			gotoxy((*itA)->X(),(*itA)->Y()); printf(" ");
        			delete(*itA);
        			itA = A.erase(itA);
        			score += 5;
        		}
        	}
        }
        
        N.morir();
        N.mover();
        Sleep(40);
    }
	
    if(gameover == true){
    	for (int i = 2; i < 78; i++) {
        gotoxy(i, 3); printf(" ", 205);
        gotoxy(i, 33); printf(" ", 205);
    }
    for (int i = 4; i < 33; i++) {
        gotoxy(2, i); printf(" ", 186);
        gotoxy(77, i); printf(" ", 186);
    }
    gotoxy(2, 3); printf(" ", 201);
    gotoxy(2,33); printf(" ", 200);
    gotoxy(77,3); printf(" ", 187);
    gotoxy(77,33); printf(" ", 188);
    
    
    N.borrar();
    
    
    }
    
	
    return 0;
}

//Obtiene el identificador de la ventana y las coordenadas
void gotoxy(int x, int y) {
    HANDLE hCon;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);

    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition(hCon, dwPos);
}

//Oculta el cursor en la pantalla para que se vea más bonito
void OcultarCursor() {

    HANDLE hCon;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);

    CONSOLE_CURSOR_INFO cci;
    cci.dwSize = 2;
    cci.bVisible = FALSE;

    SetConsoleCursorInfo(hCon, &cci);

}

