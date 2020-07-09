// this is a direct initialization test
#include <iostream> 

int main()
{
	int teste(5);
	int zero{};
	teste >> zero;
	std::cout << zero;
	return 0;
}
