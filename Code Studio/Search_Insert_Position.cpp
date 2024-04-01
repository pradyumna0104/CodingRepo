int searchInsert(vector<int>& arr, int m)
{
    int low=0;
    int high=arr.size() -1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]==m)return mid;
        if(arr[mid]>m)high=mid-1;
        else low=mid+1;
    }
    return low;
}