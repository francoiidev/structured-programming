#include <stdio.h>
#include <string.h>
 
int main() {
    int num, z = 0, cont = 0;
    char ra[101], senha[19];

    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        scanf("%s", ra);
        z = 0;
        cont = 0;

        if (strlen(ra) != 20) {
            printf("INVALID DATA\n");
            continue;
        } else {
            if(ra[0] != 'R' || ra[1] != 'A') {
                printf("INVALID DATA\n");
                continue;
            } else {
                for(int j = 2; j < 20; j++) {
                    if(ra[j] == '0') {
                        z++;
                    }
                    if(ra[j] != '0') {
                        break;
                    }
                }
                if (z == 18) {
                    printf("INVALID DATA\n");
                    continue;
                } else {
                    for(int w = (z + 2); w < 20; w++) {
                        printf("%c", ra[w]);
                    }
                    printf("\n");
                }
            }
        }
    }

    return 0;
}