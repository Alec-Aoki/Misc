#include <stdio.h>
#include <string.h>

int main(void){
    char string[100];
    //lendo a string S:
    scanf("%s", string);
    
    int tipos[2] = {0, 0}; //[0] = quant. de < e [1] = quant. de >
    for(int i=0; i<strlen(string); i++){
        if(string[i] == '<') tipos[0]++;
        else if(string[i] == '>') tipos[1]++;
    }

    if((tipos[0] == 1) && (tipos[1] == 1)){
        printf("Yes\n");
        return 0;
    }
    //else
    printf("No\n");
    return 0;
}