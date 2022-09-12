class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size(), n2 = nums2.size();
        map<int, int> m;
        vector<int> res;
        vector<int> t = n1 < n2 ? nums2 : nums1;
        
        for (int elt : t) {
            m[elt]++;
        }
        
        for (int elt : n1 < n2 ? nums1 : nums2) {
            if (m[elt] > 0) {
                res.push_back(elt);
                m[elt]--;
            }
        }
        return res;
    }
};