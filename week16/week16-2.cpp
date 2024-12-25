//week16-2.cpp
class Solution {
public:
    double myPow(double x, long long int n) {
        if(n==0) return 1; // 1 *x  *x *x *x
        if(n<0){ //遇到負的n 那就負負得正 同時把x變分母
            n=-n;
            x=1/x; //因為 x 的-1次方 是1/x
        }
        if(n%2==0){
            double now =myPow(x,n/2); //一半的x在相乘
            return now *now; //左一半 右一半 再相乘
        }
        else{ //奇數個相乘
            double now =myPow(x,n/2);
            return now * now *x;
        }

        double ans=1;
        if(n>0){ //用瘋狂程設的寫法 但是n<0會失敗
            for(int i=0;i<n;i++){
                ans*=x;
            }
        }
        else if(n<0){ //特別針對 n<0 用 負負得正 換成倒過來的形式
            for(int i=0;i<-n;i++){
                ans*=1/x;

            }
        }
        return ans;


    }
};