#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct {
    char judul[50];
    char pengarang[50];
    char penerbit[50];
    int tahun;
}
data;
data perpus[50];
int tahun, x, i, pil,cuy,j;
char jd[50];
void input (){
    FILE*fp;
    fp=fopen("daftar buku.txt", "a");
    x=x+1;
    printf("        Input Buku      \n");
    printf("=========================\n");
    printf("judul\t:");fflush(stdin); gets(perpus[x].judul);
    fprintf(fp,"judul %s\n", perpus[x].judul);
    printf("pengarang\t:");fflush(stdin); gets(perpus[x].pengarang);
    fprintf(fp,"pengarang %s\n", perpus[x].pengarang);
    printf("penerbit\t:");fflush(stdin); gets(perpus[x].penerbit);
    fprintf(fp,"penerbit %s\n", perpus[x].penerbit);
    printf("tahun terbit\t:");
    scanf("%d", &perpus[x].tahun);
    fprintf(fp,"tahun terbit %d\n", perpus[x].tahun);
    fclose(fp);
}

void lihat(){
    for (i=1; i<=x; i++)
    {
        printf("        Daftar Buku      \n");
        printf("=========================\n");
        printf("\tjudul\t : %s\n", perpus[i].judul);
        printf("\tpengarang\t : %s\n", perpus[i].pengarang);
        printf("\tpenerbit\t : %s\n", perpus[i].penerbit);
        printf("\ttahun terbit\t : %d\n", perpus[i].tahun);
    }
}

int main(){
    do{
        printf("======================================\n");
        printf("|        program peminjaman buku     |\n");
        printf("=====================================\n");
        printf("1.melihat data buku\n");
        printf("2.menginput data\n");
        printf("3.keluar\n");
        printf("pilihan :");
        scanf("%d", &pil);
        switch(pil){
            case 1 :
                lihat();
                break;
            case 2 :
                input();
                break;
             case 3:
                printf("keluar");
                break;
        }
    }while(pil!=3);
}

