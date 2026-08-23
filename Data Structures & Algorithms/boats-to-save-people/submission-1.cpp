class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size();
        int st = 0;
        int end = n-1;
        int count = 0;
        sort(people.begin(),people.end());
        while(st <= end){
            int sum = people[st] + people[end];
            // case where the weight of people is equals to or less the limit of weight
            if(sum <= limit){ 
                count++;
                st++;
                end--;
            }
            else if(sum > limit){ // case where the weight is heavier
                end--;
                count++;
            }
            
        }
        return count;
    }
};