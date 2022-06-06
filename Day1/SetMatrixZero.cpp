#include <bits/stdc++.h>
using namespace std;
class SetZeros
{
private:
    vector<vector<int>> matrix;
public:
    SetZeros()
    {
        cout<<"*********Input Start**************************\n";
        int n, m;
        cin >> n >> m;
        matrix.resize(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> matrix[i][j];
            }
        }
        cout<<"*********Input End**************************\n";
    }
    void operation(){
        //Tc: O(n*m*)
        //Sc: O(1)
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }
        for(int i=n-1;i>=0;i--){
            for(int j= m-1;j>=0;j--){
                if(matrix[i][0]==0 || matrix[0][j]==0){
                    matrix[i][j] = 0;
                }
            }
        }
    }
    void operation()
    {
        //Tc: O(n*m*(n+m))
        //Sc: O(n*m)
        vector<pair<int, int>> vp;
        int n = matrix.size();
        int m = matrix[0].size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (matrix[i][j] == 0)
                {
                    vp.push_back({i, j});
                }
            }
        }
        for (auto t : vp)
        {
            for (int i = 0; i < m; i++)
            {
                matrix[t.first][i] = 0;
            }
            for (int i = 0; i < n; i++)
            {
                matrix[i][t.second] = 0;
            }
        }
    }
    void print()
    {
        cout<<"*********Output Start**************************\n";
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<matrix[i][j]<<" ";
            }
            cout<<"\n";
        }
        cout<<"*********Output End**************************";
    }
};
int main()
{
    SetZeros obj;
    obj.operation();
    obj.print();
}