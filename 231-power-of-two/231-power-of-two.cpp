class Solution {
public:
    double divideByTwo(double n){
        if(n <= 1){
            return n;
        }else{
            return divideByTwo(n / 2);
        }
    }
    bool isPowerOfTwo(int n) {
        double num = divideByTwo((double)n);
        
        if(num == 1){
            return true;
        }else{
            return false;
        }
              
    }
};