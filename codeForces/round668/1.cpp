#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(t;t>0;t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++)    cin >> arr[i];
        for(int i=n-1;i>=0;i--) cout << arr[i] << ' ';
        cout<<'\n';
    }
    return 0;
}
