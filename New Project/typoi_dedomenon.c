#include <stdio.h>
main()
{
    int a; /* simple integer type */
    long int b; /* long integer type */
    short int c; /* short integer type */
    unsigned int d; /* unsigned integer type */
    char e; /* character type */
    float f; /* floating point type */
    double g; /* double precision floating point */
    a = 1023;
    b = 2222;
    c = 123;
    d = 1234;
    e = 'X';
    f = 3.14159;
    g = 3.1415926535898;
    printf("a = %d\n",a); /* decimal output */
    printf("a = %x\n",a); /* hexadecimal output */
    printf("b = %ld\n",b); /* decimal long output */
    printf("c = %d\n",c); /* decimal short output */
    printf("d = %u\n",d); /* unsigned output */
    printf("e = %c\n",e); /* character output */
    printf("f = %f\n",f); /* floating output */
    printf("g = %f\n",g); /* double float output */
    printf("\n");
    return 0;
}