#include <stdio.h>
#include "encrypt.h"

int main(){
    char msg[80];
    scanf("%s", msg);
    encrypt(msg);
    printf("%s\n", msg);
    encrypt(msg);
    printf("%s\n", msg);
    return 0;
}

