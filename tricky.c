#include <stdio.h>
#include <string.h>

/*You are given an integer n and three strings a,b,c, each consisting of n lowercase Latin letters.

Let a template be a string t consisting of n lowercase and/or uppercase Latin letters. The string s matches the template t if the following conditions hold for all i from 1 to n
    if the i-th letter of the template is lowercase, then si must be the same as ti
    if the i-th letter of the template is uppercase, then si must be different from the lowercase version of ti.
        For example, if there is a letter 'A' in the template, you cannot use the letter 'a' in the corresponding position of the string. 
Accordingly, the string doesn't match the template if the condition doesn't hold for at least one i.
Determine whether there exists a template t such that the strings a and b match it, while the string c does not.*/

int main(void){
    int quant_casos;
    scanf("%d", &quant_casos);

    for(int i=0; i<quant_casos; i++){
        int match = 1; //true

        int n;
        scanf("%d", &n);

        char a[n], b[n], c[n]; //strings s
        scanf("%s", a);
        scanf("%s", b);
        scanf("%s", c);

        char t[n]; //string template
        scanf("%s", t);

        //going through word characters
        for(int j=0; j<n; j++){
            if((t[j] >= 65) && (t[j] <= 90)){
                //uppercase
                if((a[j] == (t[j]+22)) || (b[j] == (t[j]+22)) || (c[j] != (t[j]+22))){
                    match = 0;
                    break;
                }
            }
            else{
                //lowercase
                if((a[j] != t[j]) || b[j] != t[j] || c[j] == t[j]){
                    match = 0;
                    break;
                }
            }
        }

        if(match == 0){
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
    }

    return 0;
}