#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	Tree T;
	address temp;

	initTree(&T);
	
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
	
	insertNode(&T,98,"Michael");
	insertNode(&T,11,"Carreon");
	insertNode(&T,33,"Ban");
	insertNode(&T,28,"Sung Joon");
	insertNode(&T,26,"Sung Taehoon");
	insertNode(&T,63,"Minwoo");
	insertNode(&T,42,"Hong Yubin");
	insertNode(&T,66,"Hong Jay");
	insertNode(&T,94,"Ghani");
	
	inOrder(Root(T));
	printf("==============================================\n");
	insertPegawai(&T,111,"Seok Woo");
	insertPegawai(&T,111,"Jahyun");
	printf("==============================================\n");

	inOrder(Root(T));
	
	printf("==============================================\n");
	deletePegawai(&T, 66);
	printf("==============================================\n");
	
	inOrder(Root(T));
	return 0;
}
