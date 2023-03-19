#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> s1{ 2, 3, 1, 5, 6 };
	std::vector<std::string> names{ "doggy", "kitty", "piggy", "bunny" };
	// 템플릿으로 타입 명시

	std::cout << s1[0] << std::endl;		// 배열이므로 이런 표기도 가능
	for (int i = 0; i < s1.size(); i++)		// vector에도 size 존재
	{
		std::cout << s1[i] << " ";
	}

	// 이터레이터, 알고리즘도 문제없이 작동한다.
	std::vector<int>::iterator itr = s1.begin();
	std::cout << *itr << std::endl;

	std::find(s1.begin(), s1.end(), 3);
	// find를 안다면 string, vector, list 어느곳에도 모두 사용할 수 있게된다.

}