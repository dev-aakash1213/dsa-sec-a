/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
    int low=1, high = n;

    while (low <= high) {
        int mid = (1ll*low+1ll*high) / 2;
        int g = guess(mid);
        if(g == 0) return mid;
        else if(g == 1) low = mid+1;
        else high=mid-1;
    }
 return 0;
    };
};
