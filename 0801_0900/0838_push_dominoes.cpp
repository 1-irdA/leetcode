class Solution {
public:
    string pushDominoes(string dominoes) {
        int force = 0, n = dominoes.size();
        vector<int> forces(n, 0);
        
        for (int i = 0; i < n; i++){
            if (dominoes[i] == 'R') {
                force = n;
            } else if (dominoes[i] == 'L') {
                force = -n;
            } else {
                force = max(force - 1, 0);
            }
            forces[i] += force;
        }
        force = 0;
        
        for (int i = n - 1; i >= 0; i--) {
            if (dominoes[i] == 'L') {
                force = n;
            } else if (dominoes[i] == 'R') { 
                force = -n;
            } else {
                force = max(force - 1, 0);
            }
            forces[i] -= force;
        }
        
        string res;
        
        for (int f : forces) {
            res.push_back(f > 0 ? 'R' : f < 0 ? 'L' : '.');
        }
        return res;
    }
};