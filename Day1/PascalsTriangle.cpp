#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> createPascalTriangle(int n){
    vector<vector<int>> ans;
    for(int i=0;i<n;i++){
        ans[i].resize(i+1);
        ans[i][0] = 1;
        ans[i][i] = 1;
        for(int j=1;j<i;j++){
            ans[i][j] = ans[i-1][j]+ans[i-1][j-1];
        }
    }
    return ans;
}

void print(vector<vector<int>> res){
    cout<<"*********Output Start**************************\n";
        int n = res.size();
        
        for(int i=0;i<n;i++){
            int m = res[i].size();
            for(int j=0;j<m;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<"\n";
        }
    cout<<"*********Output End**************************";
}

int main(){
    cout<<"Input";
    int n;
    cin>>n;
    vector<vector<int>> res = createPascalTriangle(n);
    cout<<"P";
    cout<<res.size()<<"Ji\n";
    print(res);
    return 0;
}