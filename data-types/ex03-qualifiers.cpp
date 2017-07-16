/*
    Qualifiers are used to modify or adjust quality of object
    or variable

    There are two types of qualifiers

     CV(Constant Volatile) Qualifier - define if can change(mutable)/can not change (immutable)
     -------------------------------
        -> const     -  for read only
        -> volatile  -  for changing variable usual for thread
        -> mutable   -  used on a data member to make it writeable
                        from a const qualified member function

    Storage duration Quatifier - define duration/lifetime of a variable
    --------------------------
        -> static  - lifetime beyond execution of block of class/member function
                     *it lives for the DURATION OF THE PROGRAM
                     *they are stored GLOBALLY if when stored in a class
                     *by default a variable declared outside of a block is static
        -> register- they are stored in processor register and easier to access and op on
        -> extern  - They are define in a translation unit that are separate and
                     are linked with the code by linker step of compiler

*/

//Examples ex03


#include <cstdio>
using namespace std;

class S{
public:
    int s_value(){
        static int y =7;
        return ++y;
    }
};

int sfunc_value(){
    int x = 7;
    return ++x;
}

int y = 4; // variable declared outside block

int main(int argc, char ** argv)
{
    S a;
    const int i = 42;

   printf("the value of i is %d\n", i);
   printf("the value of x is %d\n", sfunc_value());
   printf("the value of x is %d\n", sfunc_value());
   printf("the value of x is %d\n", sfunc_value());
   printf("the value of y outside block is %d\n", ++y);
   printf("the value of y outside block is %d\n", ++y);
   printf("the value of y in class is %d\n", a.s_value());
   printf("the value of y in class is %d\n", a.s_value());
}
