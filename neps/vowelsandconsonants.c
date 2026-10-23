#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){    	
    char str[51], vog[51], con[51];

    scanf("%s", str);

    int vogc = 0, conc = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            vog[vogc] = str[i];
            vogc++;
        } else {
            con[conc] = str[i];
            conc++;
        }
    }
    vog[vogc] = '\0';
    con[conc] = '\0';

    printf("Vogais: %s\n", vog);
    printf("Consoantes: %s\n", con);

    return 0;
}
