#include "A.h"

A::A(int x, int y)
:a(x),b(y)
{

}

std::pair<int, int> A::GetValue()
{
	return std::make_pair(a, b);
}
