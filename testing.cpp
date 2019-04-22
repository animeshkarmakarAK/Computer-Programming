#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int n, m;
long long int  q;
string str1, str2;
vector <int> v;

void sub_set() {
    for (int i = 0; i <= n-m; i++) {
        if (str1.compare(i, m, str2) == 0)
           v.push_back(i+1);
    }
}

int main() {
    ios_base :: sync_with_stdio(0);
     cin.tie(0);

	cin >> n >> m >> q >> str1 >> str2;
	sub_set();
	while (q--) {
		int l, r, cnt = 0;
		scanf("%d %d", &l, &r);
		for (int i = 0; i < v.size(); i++) {
            if (v[i] < l) continue;
            else if (v[i] + m - 1 <= r) cnt++;
            else break;
		}
		printf("%d\n", cnt);
	}
}
