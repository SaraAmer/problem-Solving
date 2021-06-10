#include <bits/stdc++.h>

using namespace std;
int main()
{
double n , m , a; 
cin >> n >> m >> a;
long long answer = ceil(m/a) * ceil(n/a);
cout << answer; 


	return 0;
}
