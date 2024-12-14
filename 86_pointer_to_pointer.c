#include <stdio.h>

int main(void)
{
    int iNo = 10;
    
    int * p = &iNo;

    int ** q = &p;

    int *** r = &q;

    int **** s = &r;

    int ***** x = &s;

    int ****** y = &x;

    int ******* z = &y;

    printf("&iNo : %d\n", &iNo);                // 14219280 
    printf("&p : %d\n", &p);                    // 14219292
    printf("&q : %d\n", &q);                    // 14219272
    printf("&r : %d\n", &r);                    // 14219264
    printf("&s : %d\n", &s);                    // 14219276
    printf("&x : %d\n", &x);                    // 14219284
    printf("&y : %d\n", &y);                    // 14219288
    printf("&z : %d\n", &z);                    // 14219268

    printf("* p : %d\n", * p);                        // 10
    printf("** q : %d\n", ** q);                       // 10
    printf("*** r : %d\n", *** r);                       // 10
    printf("**** s : %d\n", **** s);                       // 10
    printf("***** x : %d\n", ***** x);                       // 10
    printf("****** y : %d\n", ****** y);                       // 10
    printf("******* z : %d\n", ******* z);                       // 10
    
    printf("%d\n", *** y);                      // 14219272
    
    printf("%d\n", ****** z);                   // 14219280
    
    // printf("%d\n", **** r);                  // error C2100: illegal indirection
    
    printf("%d\n", &(*** x));                   // 14219272
    
    printf("%d\n", &(**** z));                  // 14219264
    
    printf("%d\n", *(&(**** z)));               // 14219272
    
    printf("%d\n", &(* p));                     // 14219280
    
    printf("%d\n", *(&(* p)));                  // 10
    
    printf("%d\n", &iNo);                       // 14219280
    
    printf("%d\n", *(&iNo));                    // 10

    return 0;
}

