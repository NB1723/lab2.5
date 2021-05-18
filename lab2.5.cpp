#include "Lorry.h"

using namespace std;

int main()
{
	Lorry s1;

	Lorry s4("MAN", 8, 320, 20000);
	cout << s4 << endl;

	s1 = ++s4;
	cout << s4 << endl;

	cout << --s1 << endl;

	s1 = s4++;
	cout << s4 << endl;

	s1--;
	cout << s1 << endl;

	return 0;
}