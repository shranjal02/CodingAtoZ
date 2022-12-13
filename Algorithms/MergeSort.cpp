#include <iostream>
using namespace std;

void merge(int arr[], int s, int mid, int e)
{

    int n1 = mid - s + 1;
    int n2 = e - mid;

    int arr1[n1];
    int arr2[n2];

    int k = s;

    for (int i = 0; i < n1; i++)
    {
        arr1[i] = arr[k++];
    }
    
    k = mid+1;
    for (int i = 0; i < n2; i++)
    {
        arr2[i] = arr[k++];
    }

    // Merge both arrays
    int i = 0; // n1 array
    int j = 0; // n2 array
     k = s;

    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            arr[k] = arr1[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = arr2[j];
            k++;
            j++;
        }
    }

    while (i < n1)
    {
        arr[k] = arr1[i];
        k++;
        i++;
    }

    while (j < n2)
    {
        arr[k] = arr2[j];
        k++;
        j++;
    }
}

void mergeSort(int arr[], int s, int e)
{

    if (s < e)
    {
        int mid = (s + e)/2;

        mergeSort(arr, s, mid);
        mergeSort(arr, mid + 1, e);

        merge(arr, s, mid, e);
    }
}

int main()
{
   int arr[5] = {1,2,4,3,5};
   mergeSort(arr, 0, 4);
   for(int i=0; i<5; i++){
    cout << arr[i] << " ";
   }cout << endl;

    return 0;
}