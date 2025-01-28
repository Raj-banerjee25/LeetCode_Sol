class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        map<int,int> mpp;
        for(int i=0; i<n; i++){
            if(mpp[nums1[i]]==0) mpp[nums1[i]]++;
        }
        for(int i=0; i<m; i++){
            if(mpp[nums2[i]]==1)mpp[nums2[i]]++;
        }
        vector<int> v;
        for(auto &pr : mpp){
            if(pr.second>1) v.push_back(pr.first);
        }
        return v;
    }
};
