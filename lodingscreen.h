#include <ncurses/ncurses.h>
#include <windows.h>

void load(){
	int maxX, maxY;
	
	initscr();
	curs_set(0);
	
	getmaxyx(stdscr,maxY,maxX);
	start_color();
	init_pair(1, COLOR_BLUE, COLOR_BLACK);
	init_pair(2, COLOR_WHITE, COLOR_BLACK);

 	mvprintw(maxY/2, maxX/2 - 13,     "GAME TETRIS AKAN DIMULAI DALAM");
	
	mvprintw(maxY/2 + 1, maxX/2 - 13, "          5           ");
	
	attron(COLOR_PAIR(1));
	mvprintw(3 , 10,"?????   ???   ????? ?????????? ?????         ?????????     ???????     ???????? ?????? ??????????? ");
	refresh();
	Sleep(100);
	mvprintw(4 , 10, "?????   ????  ????? ????????????????         ???????????  ???????????   ??????????????  ????  ? ? ");
	refresh();
	Sleep(100);
	mvprintw(5 , 10, " ????   ????   ????  ????  ? ?  ????        ???     ???  ???     ?????  ??????????????  ????  ? ?    ");
	refresh();
	Sleep(100);
	mvprintw(6 , 10, " ????   ????   ????  ???????    ????       ????         ????      ????  ????????? ????  ???????  ");
	refresh();
	Sleep(100);
	mvprintw(7 , 10, " ?????  ?????  ???   ???????    ????       ????         ????      ????  ???? ???  ????  ???????  ");
	refresh();
	Sleep(100);
	mvprintw(8 , 10, "  ???????????????    ???? ?   ? ????      ??????     ????????     ???   ????      ????  ???? ?   ? ");
	refresh();
	Sleep(100);
	mvprintw(9 , 10, "    ????? ?????      ?????????? ??????????? ???????????  ???????????    ?????     ????? ??????????  ");
	refresh();
	Sleep(100);
	mvprintw(10, 10, "     ???   ???      ?????????? ???????????   ?????????     ???????     ?????     ????? ??????????  ");
	refresh();
	attroff(COLOR_PAIR(1));
   
   int sec=5;

	for(int i=0 ; i<5 ; i++){
	
   		for(int j=3 ; j<=10 ;j++){
			mvprintw(j, 10, "                                                                                                   ");
  		}
  		sec-=1;
  		
  		refresh();
  		Sleep(300);
  		mvprintw(maxY/2 + 1, maxX/2 - 13,"          %d          ",sec);
  		
  		attron(COLOR_PAIR(1));
		mvprintw(3 , 10, "?????   ???   ????? ?????????? ?????         ?????????     ???????     ???????? ?????? ??????????? ");
		mvprintw(4 , 10, "?????   ????  ????? ????????????????         ???????????  ???????????   ??????????????  ????  ? ? ");
		mvprintw(5 , 10, " ????   ????   ????  ????  ? ?  ????        ???     ???  ???     ?????  ??????????????  ????  ? ?    ");
		mvprintw(6 , 10, " ????   ????   ????  ???????    ????       ????         ????      ????  ????????? ????  ???????  ");
		mvprintw(7 , 10, " ?????  ?????  ???   ???????    ????       ????         ????      ????  ???? ???  ????  ???????  ");
		mvprintw(8 , 10, "  ???????????????    ???? ?   ? ????      ??????     ????????     ???   ????      ????  ???? ?   ? ");
		mvprintw(9 , 10, "    ????? ?????      ?????????? ??????????? ???????????  ???????????    ?????     ????? ??????????  ");
		mvprintw(10, 10, "     ???   ???      ?????????? ???????????   ?????????     ???????     ?????     ????? ??????????  ");
		attroff(COLOR_PAIR(4));
  		refresh();
  		Sleep(300);
  		
  		
  		  
  		
  		
	}

}
