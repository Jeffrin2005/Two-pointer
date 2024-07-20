class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
         sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
    //  |arr1[i]-arr2[j]| <= d equal to arr1[i] - d <= arr2[j] <= arr1[i] + d
    // we need to check > arr1[i] + d if it is count it 
    int i = 0, j = 0;
    int count = 0;
    // we are lookng for there [ is not any element ]  arr2[j] where |arr1[i]-arr2[j]| <= d.
   for (int i = 0; i < arr1.size(); i++) {
        while(j < arr2.size() && arr2[j] < arr1[i] - d){
            j++; //  satisfying this condtino  => arr1[i] - d <= arr2[j] <= arr1[i] + d
        }
        if(j == arr2.size() || arr2[j] > arr1[i] + d){// not satisfyies conditon so count it 
            count++;
        }

        /*
Use of j == arr2.size():
End of arr2 Reached: When j equals arr2.size(), 
it indicates that all elements in arr2 have been considered and none of them are within the distance d from arr1[i]. 
There are no elements left in arr2 to check against the current arr1[i].
The current arr1[i] is valid for the distance value count because no elements in arr2 meet the condition 
|arr1[i] - arr2[j]| <= d.

        */
        
     
    }
    
    return count;
    }
};
