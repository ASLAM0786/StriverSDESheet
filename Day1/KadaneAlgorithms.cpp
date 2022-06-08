#include<bits/stdc++.h>

using namespace std;

int maxSubArraySum(vector<int> arr,int n){
    int currSum = arr[0];
    int maxSum = arr[0];
    int start = 0,end = 0;
    for(int i=1;i<n;i++){
        currSum += arr[i];
        if(currSum > arr[i]){
            end++;
        }
        else{
            currSum = arr[i];
            start= i;
            end = i;   
        }

        if(maxSum<currSum){
            maxSum = currSum;
        }
    }
    cout<<start<<" "<<end<<"\n";
    return maxSum;
}
int main(){

    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res = maxSubArraySum(arr,n);
    cout<<res<<"\n";
    return 0;
}