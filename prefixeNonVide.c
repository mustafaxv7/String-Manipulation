#include <stdio.h>
#include <string.h>
int main(){
    char word[100];
    int nbTimes; 
    printf("Enter a word >>:  ");
    scanf("%s",&word);

    for(int i = 0; i < strlen(word) ; i++){
        for(int j = 0 ; j <= i; j++){
            printf("%c",word[j]);
        }
        printf("\n");
    }
    

   
    return 0;
}