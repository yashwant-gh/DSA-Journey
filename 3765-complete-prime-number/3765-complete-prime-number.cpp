class Solution {
public:

bool ispr(long long n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (long long i = 5; i * i <= n; i = i + 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}
    bool completePrime(int num) {
        if(!ispr(num)) return false;
        // num=num/10;
        int i=0;
        int numu=0;
        while(num){
            numu+=num%10*pow(10,i);
            if(!ispr(numu)) return false;
            i++;
            num=num/10;
            if(!ispr(num) && num!=0) return false;
        }
        return true;
    }
};