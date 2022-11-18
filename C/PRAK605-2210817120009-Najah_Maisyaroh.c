#include <stdio.h>
int main(){
    int bil1[50][50], bil2[50][50], bil3[50][50];
    int i, j, c, d, hasil=0;
    scanf("%d", &d);
    printf("Matriks A\n");
    for(i=0;i<d;i++){
        for(j=0;j<d;j++){
            scanf("%d", &bil1[i][j]);}}
    printf("Matriks B\n");
    for(i=0;i<d;i++){
        for(j=0;j<d;j++){
            scanf("%d", &bil2[i][j]);}}
    for(i=0;i<d;i++){
        for(j=0;j<d;j++){
            for(c=0;c<d;c++){
                hasil = hasil+bil1[i][c]*bil2[c][j];}
            bil3[i][j]=hasil;
            hasil=0;}}
    printf("Matriks AXB\n");
    for(i=0;i<d;i++){
        for(j=0;j<d;j++){
            printf("%d ", bil3[i][j]);}
        printf("\n");}
}