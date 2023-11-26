#include <ncurses/curses.h>
#include <unistd.h>
#include <windows.h>
#include <iostream>
using namespace std;
int main(){
	initscr(); 
	mvprintw(2,2,"B");
	refresh();
	Sleep(200);
	mvprintw(3,2,"A");
	refresh();
	Sleep(200);
	mvprintw(4,2,"N");
	refresh();
	Sleep(200);
	mvprintw(5,2,"Y");
	refresh();
	Sleep(200);
	mvprintw(6,2,"U");
	refresh();
	Sleep(200);cout << endl;
	mvprintw(7,2,"N");
	refresh();
	Sleep(200);
	mvprintw(8,2,"A");
	refresh();
	Sleep(200);
	mvprintw(9,2,"D");
	refresh();
	Sleep(200);
	mvprintw(10,2,"H");
	refresh();
	Sleep(200);
	mvprintw(11,2,"I");
	refresh();
	Sleep(200);
	mvprintw(12,2,"F");
	refresh();
	Sleep(50);
	mvprintw(13,2,"BANYU NADHIF ASSAUQIE BIN THOMAS JULIANSYAH DAN RESTU DWI ARIANI");
	refresh();
	Sleep(800);
	mvprintw(14,2,"MANTAP MINNN");
	refresh();
	getch();
	endwin();
	
	return 0;
	
}
