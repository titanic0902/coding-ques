#include<iostream>

#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

void  maxlength(int arr[],int n,int &start,int &end){
unordered_map<int,int> mpp;
int sum =0;
int maxi=0;
 start =-1;
 end =-1;

for(int i=0;i<n;i++){
    sum  += arr[i];
    if(sum==0){
        maxi = i+1;
        start =0;
        end =i;
    }
    else{
        if(mpp.find(sum)!= mpp.end()){
            maxi = max(maxi,i - mpp[sum]);
            start = mpp[sum]+1;
             end =i;
        }
        else{
                  mpp[sum] = i;
        }
    }


}

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    int start ;
    int end;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    maxlength(arr,n,start,end);
   // cout<<ans;
    if(start!=-1 && end!=-1){
        for(int i=start;i<=end;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
