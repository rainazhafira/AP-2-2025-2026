#include <stdio.h>   //header standar untuk input output
#include <conio.h>   //untuk getch() <opsional, tergantung compiler>

int main () {
  
    char nama[50];
    int nim;
    char kom[10];
    float ip;

    printf("hello world\n");

    //input nama
    printf("masukan nama : ");
    fgets(nama, sizeof(nama), stdin);

    //input nim
    printf("masukan nim : ");
    scanf("%d", &nim);
    getchar(); //membersihkan enter dari buffer

    //input kom
    printf("masukan kom : ");
    fgets(kom, sizeof(kom), stdin);

    //input ip
    printf("masukan ip : ");
    scanf("%f", &ip);

    //output
    printf("nama : ");
    puts(nama);

    printf("nim : %d\n", nim);

    printf("kom : ");
    puts(kom);

    printf("IP  : %.2f\n", ip);

    getch(); //pause layar <opsional>
    return 0;
}