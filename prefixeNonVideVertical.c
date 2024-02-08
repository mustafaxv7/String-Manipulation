#include <stdio.h>
#include <string.h>
int main(){
    char word[100];
    printf("Enter a word >>:  ");
    scanf("%s",&word);

    for(int i = 0; i < strlen(word) ; i++){
        
            printf("%c\n",word[i]);   
    }
}
