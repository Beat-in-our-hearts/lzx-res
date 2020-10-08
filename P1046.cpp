#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<ctime>
#include<cmath>
#include <iomanip>
using namespace std;

int arr[10];
int flag, ans;

int main()
{
	for (int i = 0; i < 10; ++i)
		cin >> arr[i];
	sort(arr, arr + 10);
	cin >> flag;
	flag += 30;
	for (int i = 0; i < 10; ++i)
		if (arr[i] > flag)
		{
			ans = i;
			break;
		}
	cout << ans;
	return 0;
}