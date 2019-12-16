class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(n == 0) return true;
        if(flowerbed.size() < 2) {
            if(flowerbed.size() == 1)
                return flowerbed[0] == 0 && n <= 1;
            else
                return flowerbed[0] == 0 && flowerbed[1] == 0 && n<=1;
        }
        if(flowerbed[0]  == 0 && flowerbed[1] == 0 ) {
            flowerbed[0] = 1;
            n--;
        }   
        // cout<<n;
     if(flowerbed[flowerbed.size() - 1]  == 0 && flowerbed[flowerbed.size() - 2] == 0 ) {
            flowerbed[flowerbed.size() - 1] = 1;
            n--;
        }  
        // cout<<n;
        for(int i=1;i<flowerbed.size()-2;i++) {
            if(flowerbed[i-1] ==0 && flowerbed[i] ==0 && flowerbed[i+1]==0) {
                flowerbed[i] = 1;
                n--;
            }
        }
        cout << n;
        return n<=0;
    }
};
