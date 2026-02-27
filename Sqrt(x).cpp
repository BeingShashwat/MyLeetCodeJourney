1class Solution {
2public:
3    int mySqrt(int x) {
4        int lo = 1;
5        int hi = x;
6
7        while(lo <= hi){
8            int mid = lo + (hi - lo)/2;
9
10            if(mid == x / mid) return mid;
11            else if(mid > x/mid) hi = mid-1;
12            else lo = mid+1;
13        }
14
15        return hi;
16    }
17};