#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	int n, m, i, j, value, value1;
	char x;

	int a[105];

	for(int tc = 1; tc <= t; tc++)
    {
		cin >> n >> m;
		for(i = 0; i < n; i++)
			cin >> a[i];

		while(m--){
			cin >> x;

			if(x == 'S'){
				cin >> value;
				for(i = 0; i < n; i++)
					a[i] = a[i] + value;
			}
			else if(x == 'M'){
				cin >> value;
				for(i = 0; i < n; i++)
					a[i] = a[i]*value;
			}
			else if(x == 'D'){
				cin >> value;
				for(i = 0; i < n; i++)
					a[i] = a[i]/ value;
			}
			else if(x == 'R'){
				for(i = 0; i < n/2; i++)
					swap(a[i],a[n-i-1]);
			}
			else if(x == 'P'){
				cin >> value >> value1;
				swap(a[value],a[value1]);
			}
		}

		cout << "Case " << tc << ":" << endl;
		for(i = 0; i < n - 1; i++)
			cout << a[i] << " ";
        cout << a[n-1];
		cout << endl;
	}
	return 0;
}