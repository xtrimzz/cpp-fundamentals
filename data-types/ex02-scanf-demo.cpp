/* scanf example */
#include <cstdio>
using namespace std;

int main ( int argc, char ** argv)
{
  char name[80];
  int age;
  int hex;

//input data
  printf ("Enter your family name: ");
  scanf ("%79s",name);
  printf ("Enter your age: ");
  scanf ("%d",&age);
  printf ("Enter a hexadecimal number: ");
  scanf ("%x",&hex);

//Output the input data
  printf ("Mr. %s , %d years old.\n\n",name,age);

  printf ("You have entered %#x (%d).\n\n",hex,hex);
  return 0;
}
