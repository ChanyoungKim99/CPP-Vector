#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> s1{ 2, 3, 1, 5, 6 };
	std::vector<std::string> names{ "doggy", "kitty", "piggy", "bunny" };
	// ���ø����� Ÿ�� ���

	std::cout << s1[0] << std::endl;		// �迭�̹Ƿ� �̷� ǥ�⵵ ����
	for (int i = 0; i < s1.size(); i++)		// vector���� size ����
	{
		std::cout << s1[i] << " ";
	}

	// ���ͷ�����, �˰��� �������� �۵��Ѵ�.
	std::vector<int>::iterator itr = s1.begin();
	std::cout << *itr << std::endl;

	std::find(s1.begin(), s1.end(), 3);
	// find�� �ȴٸ� string, vector, list ��������� ��� ����� �� �ְԵȴ�.

}