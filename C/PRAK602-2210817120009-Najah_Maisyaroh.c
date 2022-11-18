#include <stdio.h>
int main(){
    int bil, i, a=1;
    scanf("%d", &bil);
    int angka[bil];
    for(i=0;i<bil;i++){
        scanf("%d", &angka[i]);}
    for(i=0;i<bil;i++){
        printf("%d ", angka[i]*a);
        a++;}
    return 0;
}