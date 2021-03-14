
#include "Real.h"

using namespace std;
int main()
{
	Real k;
	Real::Number s;
	s.Read();
	s.Display();
	k.set_l(s);
	k.Read();
	k.Display();
	return 0;
}