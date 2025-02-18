class Solution {
public:
    int fib(int n) {
        int i0 =0, i1= 1;
        int res=1;

        while(n>1){
            res += i0 + i1;
            i0 = i1;
            i1 = res;
            n--;
        }
        return res;
    }
};
