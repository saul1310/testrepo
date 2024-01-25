#include <stdio.h>

int main() {
    char input[256] ;
	
    while (1) {
        printf(">>> ") ;
        fgets(input, sizeof(input), stdin) ;
        printf("%s", input) ;
    }
    return 0 ;
}