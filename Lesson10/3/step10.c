int minmax(int arr[], int n, int fl)
{
    int result;
    int min=arr[0], max=arr[0];
    for (int i = 1; i < n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
        else if(arr[i] > max) {
            max = arr[i];
        }
    }
    if (fl == 0){
        result = min;}
    else if(fl == 1){
        result = max;}
    return result;
}




