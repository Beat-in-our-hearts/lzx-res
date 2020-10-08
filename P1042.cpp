#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<ctime>
#include<cmath>
#include <iomanip>
using namespace std;


int mat[62500];


class Match
{
public:
	int a;
	int b;
	int score;
	int arr[62500];

	Match(int s,int* t)
	{
		a = b = 0;
		score = s;
		memset(arr, 0, sizeof(arr));
		memcpy(arr, t, 62500);
	}
	void Clear()
	{
		a = b = 0;
	}
	void Check()
	{
		if ((a >= score && a > b + 1) || (b >= score && b > a + 1) )
		{
			cout << a << ":" << b << endl;
			Clear();
		}
	}
	void Run()
	{
		for (int i = 0; 1; ++i)
		{
			if (arr[i] == 0)
			{
				cout << a << ":" << b << endl << endl;
				Clear();
				break;
			}
			arr[i] == 1 ? ++a : ++b;
			Check();
		}

	}
};

int main()
{
	char s;
	for (int i = 0; cin >> s && s != 'E'; i++)
		s == 'W' ? mat[i] = 1 : mat[i] = 2;
	Match m11(11,mat), m21(21,mat);
	m11.Run();
	m21.Run();
	return 0;
}