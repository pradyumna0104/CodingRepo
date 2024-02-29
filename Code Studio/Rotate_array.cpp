vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.
    int n = arr.size();
    vector<int> temp;
    for(int i=k;i<n;i++){
        temp.push_back(arr[i]);
    }
    for(int i =0;i<k;i++){
        temp.push_back(arr[i]);
    }
    return temp;
}