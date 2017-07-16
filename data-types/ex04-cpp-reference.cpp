/**
 * Demonstration of cpp reference/pointer type
 *
 * Whenever you use a reference you ALWAYS! want to make they constant
 *
 */



#include <cstdio>
using namespace std;

int main(int argc, char ** argv)
{
    int i = 344;

    int &r_i = i;
    int *p_i = &i;

    printf(" The value i using ref{r_i} is %d\n", r_i);
    printf(" The value i using ptr{*p_i} is %d\n", *p_i);

    printf("\nThe addr value of i using ref{&r_i} is %d\n", &r_i);
    printf("The addr value of i using ptr{p_i} is %d\n", p_i);
}
