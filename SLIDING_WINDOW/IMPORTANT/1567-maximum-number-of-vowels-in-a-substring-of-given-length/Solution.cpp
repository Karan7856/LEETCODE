class Solution {
public:
    int maxVowels(string s, int k) {
        int i=0;
        int j=0;
        int count=0;
        int maxi=INT_MIN;
        int n=s.length();
        while(j<k-1){
            if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'){
                count++;
            }
            j++;
        }
        maxi=max(count,maxi);
        if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'){
            count++;
        }
        maxi=max(count,maxi);
        while(j<n){
            j++;
            if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'){
                count++;
            }
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                count--;
            }
            i++;
            maxi=max(maxi,count);
        }
        return maxi;

    }
};
