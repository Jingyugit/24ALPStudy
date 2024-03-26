#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <map>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b, c;
	cin >> a >> b >> c;

	int d = a * b * c;

	int arr[10] = {0, };
	
	string k = to_string(d);

	for (int i = 0; i < k.length(); i++) {
		int q = k[i] - 48;
		arr[q]++;
	}
	
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << "\n";
	}

	return 0;
}
