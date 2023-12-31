// find_the_missing_element_in_sorted_array_using_binary_search
#include<iostream>
using namespace std;
int findMissingElement(int arr[] , int n){
    int s = 0; 
    int e = n - 1;
    int ans = -1;
    int mid = s + (e-s)/2;
    while (s<e)
    {
        int diff = arr[mid] - mid;
        if(diff == 1){
            s = mid + 1;
        }
        else{
            ans = mid;
            e = mid - 1 ;
        }
        mid = s + (e-s)/2;
    }
    if(ans+1 == 0){
        return n + 1;
    }
    return ans+1;

    
}
int main()
{
    int n = 4;
    int arr[n] = {1,2,3,4};
    int ans = findMissingElement(arr , n);
    cout<<"missing element is: "<<ans;
    return 0;
}