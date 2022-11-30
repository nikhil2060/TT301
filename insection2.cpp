#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int>ans;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int m;
    cin>>m;

    int arr2[m];

    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }


    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i]==arr2[j]){
                ans.push_back(arr[i]);
                break;
            }
        }
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    cout<<endl;

    return 0;
}