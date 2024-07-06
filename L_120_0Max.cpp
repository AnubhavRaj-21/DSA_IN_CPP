#include<iostream>
using namespace std;

class MaxHeap
{
    int *arr;
    int size;
    int total_size;

    public:
    MaxHeap(int n)
    {
        arr = new int[n];
        size=0;
        total_size=n;
    }
    
    //insert in heap
    void insert(int value)
    {
        //if heap size is available or not
        if(size==total_size)
        {
            cout<<"heap overflow\n";
            return;
        }
        arr[size]=value;
        int index=size;
        size++;

        //compare it with it's parent
        while(index>0&&arr[(index-1)/2]<arr[index])
        {
            swap(arr[(index-1)/2],arr[index]);
            index=(index-1)/2;
        }

        cout<<arr[index]<<" is inserted into the heap\n";
    }
    
    void print()
    {
        for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";

        cout<<endl;
    }


    void heapify(int index)
    {
        int largest=index;
        int left=2*index+1;
        int right=2*index+2;

        /*
        largest will store the index of the biggest element between 
        largest,left and right.
        */

       if(left<size&&arr[left]>arr[largest])    largest=left;
       if(right<size&&arr[right]>arr[largest])  largest=right;

       if(largest!=index)
       {
            swap(arr[largest],arr[index]);
            heapify(largest);
       }
    }
    void Delete()
    {
        if(size==0)
        {
            cout<<"Heap underflow\n";
            return;
        }
        cout<<arr[0]<<" deleled from the heap";
        arr[0]=arr[size-1];

        heapify(0);
    }
};

int main()
{
    MaxHeap H1(6);
    H1.insert(34);
    H1.insert(4);
    H1.insert(124);
    H1.insert(24);

    H1.print();
}