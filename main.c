#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	Tree T,U;
	address temp;

	initTree(&T);
	initTree(&U);
	
	/*insertNode(&T,45,"Dhika Putra");
	insertNode(&T,87,"Chandra Diva");
	insertNode(&T,65,"Abdullah Ahugrah");
	insertNode(&T,39,"Bayu Virani");
	insertNode(&T,92,"Chaerul Ardina");
	insertNode(&T,88,"Fikri Syabantika");
	insertNode(&T,73,"Christian Dayanti");
	insertNode(&T,58,"Haris Anjani");
	insertNode(&T,47,"Aprian Amalina");
	insertNode(&T,62,"Doni Assodiqin");
	insertNode(&T,59,"Marvel Tilasnuari");
	insertNode(&T,64,"Hilman Ardiansyah");
	insertNode(&T,11,"Izhar Subekti");
	insertNode(&T,41,"Mustofa Sabri");*/
	
	insertNode(&T,98,"Dhika Putra");
	insertNode(&T,11,"Chandra Diva");
	insertNode(&T,33,"Abdullah Ahugrah");
	insertNode(&T,28,"Bayu Virani");
	insertNode(&T,26,"Chaerul Ardina");
	insertNode(&T,63,"Fikri Syabantika");
	insertNode(&T,42,"Christian Dayanti");
	insertNode(&T,66,"Izhar Subekti");
	insertNode(&T,94,"Mustofa Sabri");
	
	inOrder(Root(T));
	printf("==============================================\n");
	preOrder(Root(T));
	
	temp = searchNode(&T,42);

	return 0;
}
