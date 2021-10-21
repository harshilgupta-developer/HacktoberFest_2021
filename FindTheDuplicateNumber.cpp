#include<iostream>
#include<vector>
using namespace std;

int findDuplicate(vector<int>& nums) {

    int i=0;
    while(i<nums.size()){
        int correctIndex=nums[i]-1;
        if(nums[i]!=nums[correctIndex]){
            swap(nums[i],nums[correctIndex]);
        }
        else{
            i++;
        }
    }
    int ans;
    for(int i=0;i<nums.size();i++){
        if(nums[i]-1!=i){
            ans=nums[i];
        }
    }
    return ans;
}
int main(){

    vector<int> v{1,3,4,2,2};
    cout<<findDuplicate(v)<<endl;

    return 0;
}