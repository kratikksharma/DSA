class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int first = 0;
        int last = arr.size() - 1;

        while (first < last) {
            int mid = (first + last) / 2;

            if (arr[mid]<arr[mid+1]) {
                first=mid+1;
            }
            
            else{
                last=mid;
            }

            
        }
        return first;
    }
    
};
        
 