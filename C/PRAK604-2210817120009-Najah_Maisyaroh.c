#include <stdio.h>
#include <string.h>
int main(){
    char kata1[50], kata2[50];
    scanf(" %[^\n]%*c", &kata1);
    scanf(" %[^\n]%*c", &kata2);
    int len1, len2, i, c=0, d=0;
    len1 = strlen(kata1);
    len2 = strlen(kata2);
    if(len1!=len2){
        printf("Panjang kalimat berbeda, pesan palsu");}
    else{
        for(i=0;i<len1;i++){
            if(kata1[i]==kata2[i]){
                printf("*");
                c++;}
            else{
                printf("#");
                d++;}}
        printf("\n* = %d", c);
        printf("\n# = %d", d);
        if(c>=d){
            printf("\nPesan Asli");}
        else{
            printf("\nPesan Palsu");}}
}