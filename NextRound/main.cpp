#include <bits/stdc++.h>

using namespace std;
int main()
{
	int n , k ; 
    cin >> n >> k;
    int scores[n];
    int answer = 0; 
    for (int i = 0 ; i < n ; i++)
     {
        cin >> scores[i];
     
     }
    for(int i = 0 ; i < n ; i++)
      {
          if (scores[k-1] <= scores[i] && scores[i]> 0 ){
              
              answer++;
              }
          
        
         
    }
    cout << answer;
    
  
         

	return 0;
}
