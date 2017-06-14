/**
    Demonstration of integer types
*/

#include <cstdio>
using namespace std;

int main(int argc, char ** argv)
{
    //This will show the size of integer type
    printf("---Demonstration of integer types ---\n");
    printf("size of char       is  -> %ld bits\n", sizeof(char)*8);
    printf("size of short int  is  -> %ld bits\n", sizeof(short int)*8);
    printf("size of int        is  -> %ld bits\n", sizeof(int)*8);
    printf("size of long int   is  -> %ld bits\n", sizeof(long int)*8);
    printf("size of long long  is  -> %ld bits\n", sizeof(long long)*8);

    //integer types in octal and hexadecimal
    printf("\n=== integer types in octal and hexadecimal ===\n");

    long int octX = 0234; //octal no
    long int hexY = 0x453ff; //hexadecimal no
    long int binZ = 0b1000; //binary no

    printf("octX %o   is %ld in decimal\n", octX, octX);
    printf("hexY %x   is %ld in decimal\n", hexY, hexY);
    printf("binZ %lb  is %ld in decimal\n", binZ, binZ);
    return 0;
}
