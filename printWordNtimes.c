#include <stdio.h>

int main(){
    char word[100];
    int nbTimes; 
    printf("Enter a word >>:  ");
    scanf("%s",&word);

    printf("Enter the number of times you want it to appear >>: ");
    scanf("%d",&nbTimes);

    for (int i = 0 ; i < nbTimes ; i++){
        printf("%s\n",word);
    }
    return 0;
}