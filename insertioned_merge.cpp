#include<bits/stdc++.h>
using namespace std;
int n;
int cnt=0;
int arr[100000];
void insertion(int p, int q, int r)
{

    int  key, j;
    for (int i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

}

void mergeSort( int p, int r)
{
    int q;
    if(p < r)
    {
        q = (p + r) / 2;
        mergeSort( p, q);
        mergeSort( q+1, r);
        insertion( p, q, r);
    }
}



int main()
{
    time_t start, end;
    ios_base::sync_with_stdio(false);
    time(&start);

    cin>>n;
    for(int i=0; i<n; i++)
        cin>>arr[i];
    mergeSort(0,n-1);

    for(int i=0; i<n; i++)
        cout<<arr[i]<<' ';
    cout<<endl;
    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed
         << time_taken << setprecision(5);
    cout << " sec " << endl;

    // cout<<cnt<<endl;
}
