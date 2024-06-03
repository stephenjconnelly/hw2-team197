#include <stdio.h>
#include <stdlib.h>

void print_binary(unsigned int x) {
    int binary[32] = {0};
    int i = 0;
    while (x > 0) {
        int temp = x;
        x = (x >> 1);
        int remainder = temp & 1;
        binary[i++] = remainder;
    }

    int k = 0;
    for (int j = 31; j >= 0; j--) {
        char bin =(char) binary[j]+'0';
	putc(bin, stdout);
        k++;
        if (k >= 4) {
            printf(" ");
            k = 0;
        }
    }
    printf("\n");
}

int main(){
    int x;
    printf("Enter an integer : ");
    (int)scanf("%d", &x);
    //signed decimal
    printf("\nsigned decimal   : ");
    printf("%d\n", x);
    //unsigned decimal 
    unsigned int b = (unsigned int)x;
    printf("unsigned decimal : ");
    printf("%u\n", b);
    //hexadecimal 
    printf("hexadecimal      : ");
    printf("%x\n", x);
    //binary
    printf("binary           : ");
    print_binary(b);
    return EXIT_SUCCESS;	
}
