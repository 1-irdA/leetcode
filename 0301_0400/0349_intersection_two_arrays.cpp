class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int, bool> m;
        vector<int> res;
        
        for (int elt : nums1) {
            m[elt] = true;
        }
        
        for (int elt : nums2) {
            if (m[elt]) {
                res.push_back(elt);
                m.erase(elt);
            }
        }
        return res;
    }
};