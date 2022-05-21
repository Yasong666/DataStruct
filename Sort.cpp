//分为两种一种是从小到大
//一种是从大到小这里是从小到大，就要
int partition1(int *arr, int l,int r)
{//以左边为基准，先找右边后找左边
    int p = arr[l];
    int i = l;
    int j = r;
    while (i<j)
    {
        while (arr[j]>=p&&i<j)
        {
            --j;
        }
        while(arr[i] <= p&&i<j)
        {
            ++i;
        } 
        if(i<j)
        {
            int tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
        } 
    }
    int tmp = arr[l];
    arr[l] = arr[i];
    arr[i] = tmp;
    return i;
}
int partition2(int *arr,int l,int r)//从大到小
{//以右边为基准，先找左边后找右边
    int p = arr[r];
    int i = l;
    int j = r;
    while (i<j)
    {
        while (arr[i]<=p&&i<j)
        {
            ++i;
        }
        while (arr[j>=p&&i<j])
        {
            --j;
        }
        if(i<j)
        {
            int tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
        }
        int tmp = arr[r];
        arr[r] = arr[j];
        arr[j] = tmp;
        return j;
    }
}
void QuickSort(int *arr, int start,int end)
{
    if(start<end)
    {
        int p = partition1(arr,start,end);
        QuickSort(arr,start,p-1);
        QuickSort(arr,p+1,end);
    }   
}