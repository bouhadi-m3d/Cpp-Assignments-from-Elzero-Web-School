
#include <iostream>
#include <string>

using namespace std;

int main()
{
	// Friends Array
	string friends[] = {"Ahmed", "Osama", "Ameer"};
	int friendsCount = size(friends);

	// Output Needed
	/*
	=========
	= Ahmed =
	==================
	== A, h, m, e, d =
	==================

	=========
	= Osama =
	==================
	== O, s, a, m, a =
	==================

	=========
	= Ameer =
	==================
	== A, m, e, e, r =
	==================
	*/

	for (int i = 0; i < friendsCount; i++)
	{
		if (i != 0)
			cout << '\n';

		cout
			<< "=========\n"
			<< "= " << friends[i] << " =\n"
			<< "==================\n"
			<< "== ";

		for (int j = 0; j < friends[i].size(); j++)
		{
			cout << (j == 0 ? "" : ", ") << friends[i][j];
		}

		cout
			<< " =\n"
			<< "==================\n";
	}

	return 0;
}