class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int k) {
        vector<int> ans;
    int n=arr.size();
    map<int,int> m;
    
    for(int i=0;i<n;i++){
        if(m.find(k-arr[i])!=m.end()){
            ans.push_back(m[k-arr[i]]);
            ans.push_back(i);
            return ans;
        }
        m[arr[i]]=i;
    }
    return ans;
    }
};
