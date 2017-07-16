#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main(int argc, char ** argv)
{
	vector <int> va = {45, 7, 9, 88, 44};
	vector <float> vb = { 34.3f, 44.5f, 0.03f, 4.0f };

	for (vector<int>::iterator it = va.begin(); it != va.end(); ++it)
	{
		printf("list of %d\n", *it);
	}
	return 0;
}
