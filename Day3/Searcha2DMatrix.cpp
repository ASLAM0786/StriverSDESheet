#include<bits/stdc++.h>

using namespace std;
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int n= matrix.size();
    int m = matrix[0].size();
    int i = 0;
    int j  =m-1;
    while(i<n && j>=0){
        if(matrix[i][j]==target) return true;
        else if(matrix[i][j]>target){
            j--;
        }
        else{
            i++;
        }
    }
    return false;
}
int main(){

    int n,m;
    cin>>n>>m;
    vector<vector<int>> vec(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>vec[i][j];
        }
    }
    int target;
    cin>>target;
    cout<<searchMatrix(vec,target);
    return 0;
}

/*
Test Cases::
3 4
1 3 5 7
10 11 16 20
23 30 34 60
target : 3 output = 1
target : 13 output = 0;
*/