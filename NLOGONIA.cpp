#include <iostream>

using namespace std;

int dX, dY;

void busca(int X, int Y)
{

	if (X == dX || Y == dY)
	{
		cout << "divisa" << endl;
		return;
	}

	if (Y > dY)
	{ // norte
		cout << "N";
	}
	else
	{
		cout << "S";
	}

	if (X > dX)
	{ // leste
		cout << "E" << endl;
	}
	else
	{
		cout << "O" << endl;
	}
}

int main()
{
	unsigned n;
	int X, Y;

	while ((cin >> n, n) != 0)
	{
		cin >> dX >> dY;
		for (int i = 0; i < n; i++)
		{
			cin >> X >> Y;
			busca(X, Y);
		}
	}

	return 0;
}
