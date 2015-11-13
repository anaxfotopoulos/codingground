#include <stdio.h>
#define SPM 60
main( )
{
    int sec, min, left;
    printf ("Δώστε αριθμό δευτερολέπτων: ");
    scanf("%d", &sec);
    min = sec / SPM; /* Λεπτά */
    left = sec % SPM;
    printf ("%d δευτερόλεπτα είναι %d λεπτά και "
    "%d δευτερόλεπτα\n", sec, min, left);
    return 0;
}