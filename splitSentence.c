#include <stdio.h>
#include <string.h>
int main(){
    char sentence[1000];
    printf("Enter a word >>:  ");
    gets(sentence);
    int letter = 0;
    for(int letter = 0 ; letter < strlen(sentence); letter++){
        printf("%c",sentence[letter]);
        if(sentence[letter] == ' '){
            printf("\n");
        }

    }
}
