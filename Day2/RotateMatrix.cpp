#include <bits/stdc++.h>

using namespace std;
void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
        for(int i=0;i<n;i++){
            int start = 0,end = n-1;
            while(start<end){
                swap(matrix[i][start],matrix[i][end]);
                start++;
                end--;
            }
            
        }
}
void print(vector<vector<int>> matrix)
{
    cout << "*********Output Start**************************\n";
    int n = matrix.size();
    int m = matrix[0].size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "*********Output End**************************";
}
int main()
{

    int n;
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    rotate(matrix);
    print(matrix);
    return 0;
}