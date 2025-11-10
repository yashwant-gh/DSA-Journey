class Solution {
public:
//VECTOR approach
// bool isPalindrome(string a){
//     vector<char>st;
//     transform(a.begin(), a.end(), a.begin(), ::tolower);
//     for(int i=0;i<a.length();i++){
//         st.push_back(a[i]);
//     }
//     int i=0;
//     while(i<st.size()){
//         if(!isalnum(st[i])){
//             st.erase(st.begin()+i);
//             i--;
//         }
//         i++;
//     }
//     for(int i=0;i<st.size();i++){
//         cout<<st[i]<<"";
//     }
//     int left=0;;
//     int right=st.size()-1;
//     while(left<right){
//         if(st[left]!=st[right]) return false;
//         left++;
//         right--;
//     }
//     return true;
// }

bool isPalindrome(string a){
    int left=0;
    int right=a.length()-1;
    bool pal=true;
    while(left<right){
        if(!isalnum(a[left])&&!isalnum(a[right])){
            left++;
            right--;
            continue;
        }
        else if(!isalnum(a[left])){
            left++;
            continue;
        }
        else if(!isalnum(a[right])){
            right--;
            continue;
        }
        if(tolower(a[left])!=tolower(a[right])){
            pal= false;
            break;
        }
        left++;
        right--;
    }
    return pal;
}
};