#include <ncurces.h>

int screenSetUp();

int main () 
{
	screenSetUp();
	
	return 0;
}

int screenSetUp() 
{
	initscr();
	printw("Mehdi");
	noecho();
	refresh();
	
	return 0;
}