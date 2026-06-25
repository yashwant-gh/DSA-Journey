class Solution {
public:
    int thirdMax(vector<int>& arr) {
        long long largest=LLONG_MIN;
        long long s_largest=LLONG_MIN;
        long long t_largest=LLONG_MIN;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>largest){
                t_largest=s_largest;
                s_largest=largest;
                largest=arr[i];
            }
            else if(arr[i]>s_largest && arr[i]<largest){
                t_largest=s_largest;
                s_largest=arr[i];
            }
            else if(arr[i]>t_largest && arr[i]<s_largest)t_largest=arr[i];
        }
        if(t_largest==LLONG_MIN)return largest;
        return t_largest;
    }
};