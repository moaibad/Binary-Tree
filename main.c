#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void showMenu();
int pilih;
int valid=1;

int main(int argc, char *argv[]) {
	Tree T;
 	address temp;

 	initTree(&T);
 
 	showMenu();
 	char nama[20];
 	int id;
 	do{
 		switch(pilih){
  		case 1:
   			printf("Masukkan Nama Pegawai : ");
   			getchar();
   			gets(nama);
   			printf("Masukkan ID Pegawai : ");
   			scanf("%d",&id);
   			insertPegawai(&T,id,nama);
   			printf("\nDAFTAR PEGAWAI:\n\n");
   			printPegawai(Root(T));
   			printf("\n");
   			system("pause");
   			showMenu();
   			break;
  		case 2:
  			printf("\nDAFTAR PEGAWAI:\n\n");
   			printPegawai(Root(T));
   			printf("\n");
  		 	printf("Masukkan ID Pegawai yang Akan Dihapus: ");
   			scanf("%d",&id);
   			deletePegawai(&T, id);
   			printf("\n");
   			system("pause");
   			printf("\nDAFTAR PEGAWAI SEKARANG:\n\n");
   			printPegawai(Root(T));
   			printf("\n");
   			system("pause");
   			showMenu();
   			break;
   		case 3:
   			printf("Masukkan ID Pegawai yang Akan Dicari: ");
   			scanf("%d",&id);
   			searchPegawai(T, id);
   			printf("\n");
   			system("pause");
   			showMenu();
   			break;
   		case 4:
   			printf("\nDAFTAR PEGAWAI:\n\n");
   			printPegawai(Root(T));
   			printf("\n");
   			system("pause");
   			showMenu();
   			break;
   		case 5:
   			if(valid==1){
   				valid=0;
   				printf("\nData pegawai berhasil dimasukan\n");
	   			insertPegawai(&T,45,"Dhika Putra");
	 			insertPegawai(&T,87,"Chandra Diva");
	 			insertPegawai(&T,65,"Abdullah Ahugrah");
	 			insertPegawai(&T,39,"Bayu Virani");
	 			insertPegawai(&T,92,"Chaerul Ardina");
	 			insertPegawai(&T,88,"Fikri Syabantika");
	 			insertPegawai(&T,73,"Christian Dayanti");
	 			insertPegawai(&T,58,"Haris Anjani");
	 			insertPegawai(&T,47,"Aprian Amalina");
	 			insertPegawai(&T,62,"Doni Assodiqin");
	 			insertPegawai(&T,59,"Marvel Tilasnuari");
		 		insertPegawai(&T,64,"Hilman Ardiansyah");
	 			insertPegawai(&T,11,"Izhar Subekti");
	 			insertPegawai(&T,41,"Mustofa Sabri");
	 			printf("\nDAFTAR PEGAWAI SEKARANG:\n\n");
				printPegawai(Root(T));
			}
			else{
				printf("Data pegawai tidak berhasil dimasukan, data sudah dimasukan sebelumnya!\n");
			}
			printf("\n");
   			system("pause");
   			showMenu();
   			break;
   		case 6:
   			valid=1;
   			deleteTree(&T);
   			printf("\nSeluruh data pegawai berhasil dihapus\n");
   			printf("\n");
   			system("pause");
   			printf("\nDAFTAR PEGAWAI SEKARANG:\n\n");
			printPegawai(Root(T));
			printf("\n");
   			system("pause");
   			showMenu();
   			break;
 		}
	 }while(pilih<7);
 	return 0;
}

void showMenu() {
	system("cls");
 	printf("============= PROGRAM DATA PEGAWAI =============\n");
 	printf("1] Menambah Data Pegawai Baru dan Menampilkan\n");
 	printf("   Seluruh Data Pegawai\n\n");
 	printf("2] Menghapus Data Pegawai berdasarkan ID dan\n");
 	printf("   Menampikan Seluruh Data Pegawai\n\n");
 	printf("3] Mencari Data Pegawai berdasarkan ID\n\n");
 	printf("4] Menampikan Seluruh Data Pegawai\n\n");
 	printf("5] Menambah 14 Data Pegawai Dari Deskripsi Kasus\n\n");
 	printf("6] Hapus Seluruh Data Pegawai\n\n");
 	printf("7] Quit\n");
 	printf("================================================\n");
 	printf("Masukkan Pilihanmu : ");
 	scanf("%d",&pilih);
}
