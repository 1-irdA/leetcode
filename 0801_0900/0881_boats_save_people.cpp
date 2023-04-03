class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int boats = 0, start = 0, end = people.size() - 1;

        sort(people.begin(), people.end());

        while (start <= end) {
            int current = people[start] + people[end];

            if (current <= limit) {
                boats++;
                start++;
                end--;
            } else {
                boats++;
                end--;
            }
        }
        return boats;
    }
};