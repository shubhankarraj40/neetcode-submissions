class Solution {
public:
    int guessNumber(int n) {
        int st = 1;
        int end = n;

        while(st <= end) {
            int mid = st + (end - st) / 2;

            int result = guess(mid);

            if(result == 0) {
                return mid;
            }
            else if(result == -1) {
                end = mid - 1;
            }
            else {
                st = mid + 1;
            }
        }

        return -1;
    }
};