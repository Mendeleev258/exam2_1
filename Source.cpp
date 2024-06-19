#include "FLIST.h"

bool good_row(int* begin, int m)
{
	int cnt{};
	for (int* ptr = begin; ptr != begin + m - 1; ++ptr)
	{
		if ((*ptr % 7 == 0 && *(ptr + 1) % 7 != 0) || (*ptr % 7 != 0 && *(ptr + 1) % 7 == 0))
			cnt++;
	}
	return cnt % 2 == 0 && cnt > 0;
}

int task1(int** matr, int n, int m)
{
	bool flag{};
	int i{};
	while (i < n && !flag)
	{
		if (good_row(matr[i], m))
			flag = true;
		else
			++i;
	}
	if (!flag)
		i = -1;
	return i;
}


int main()
{
	// task 1
	/*std::ifstream fmatrix("matrix_1.txt");
	int n{}, m{};
	fmatrix >> n >> m;

	int** matr = new int* [n];
	for (int i{}; i < m; ++i)
		matr[i] = new int[m];
	
	for (int i{}; i < n; ++i)
		for (int j{}; j < m; ++j)
			fmatrix >> matr[i][j];

	for (int i{}; i < n; ++i)
	{
		for (int j{}; j < m; ++j)
			std::cout << matr[i][j] << ' ';
		std::cout << '\n';
	}
	std::cout << task1(matr, n, m);*/

	// task 2


	
	
	// task 3
	/*std::ifstream fnumbers("numbers_1.txt");
	FLIST list;
	list.create_by_queue(fnumbers);
	list.print("");*/
}