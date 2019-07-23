#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll arr[41] = {1, 1, 5};
    for(int i = 3; i <= 40; i++){
     	arr[i] = arr[i - 1] + 4 * arr[i - 2] + 2 * arr[i - 3];
    }
    int t, n;
    scanf("%d", &t);
    while(t--){
     	scanf("%d", &n);
     	printf("%lld\n", arr[n]);
    }
}	