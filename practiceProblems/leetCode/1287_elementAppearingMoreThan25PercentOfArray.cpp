class Solution {
    public int findSpecialInteger(int[] arr) {
        int e = arr.length < 4 ? 1 : arr.length/4;
        int pos = e;
        for(int i=0; i<3; pos+=e) {
            int val = arr[pos-1];
            if(findCount(arr, val) > arr.length/4) {
                return val;
            }
        }
        return -1;
    }
    
    
    private int findCount(int[] arr, int val) {
        return findRightIndex(arr, val) - findLeftIndex(arr, val) + 1;
    }
    
    private int findLeftIndex(int[] arr, int val) {
        int left = 0;
        int right = arr.length-1;
        while(left < right) {
            int mid = left + ((right-left)>>1);
            if(arr[mid] < val) {
                left = mid + 1;
            } else {
                right = mid;
            }
        } 
        return left;
    }
    
    private int findRightIndex(int[] arr, int val) {
        int left = 0;
        int right = arr.length-1;
        while(left < right) {
            int mid = left + ((right-left)>>1)+1;
            if(val < arr[mid]) {
                right = mid-1;
            } else {
                left = mid;
            }
        } 
        return left;
    }
    
}
