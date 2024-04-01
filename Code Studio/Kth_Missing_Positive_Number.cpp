int missingK(vector < int > vec, int n, int k) {
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        int diff=vec[mid]-(mid+1);
        if(diff<k)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    int diff=vec[low]-(low+1);
    return (low+k);
}