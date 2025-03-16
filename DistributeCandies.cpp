class Solution {
public:
    int distributeCandies(vector<int>& candyType) {

        int result = 0;
        int n= candyType.size();
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[candyType[i]]++;
        }
        int c=mp.size();
        result = min(c,n/2);

        return result;
        
    }
};

