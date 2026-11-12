#include<iostream>
using namespace std;

    int sumf(int arr[], int size){
        int sum=0;
      for(int i=0;i<size;i++){
        sum=sum+arr[i];
        }
    return sum;
}


    int productf(int arr[],int size){
         int product=1;
         for(int i=0;i<size;i++){
        
         product*=arr[i];
         
        }
        return product;
    }

        double totalf(int arr[],int size){
            int total=0;
            for(int i=0;i<size;i++){
                total=total+arr[i];

            }
            return total;
        }

        double averagef(int arr[],int size ){
            
           int sum=0;
      for(int i=0;i<size;i++){
        sum=sum+arr[i];
        }
             return sum/size;
            }

            int minf(int arr[],int size){
                int min=arr[0];
                for(int i=0;i<5;i++){
                    if(arr[i]<arr[0]) 
                    min=arr[i];
                }
                return min;
            }
            int maxf(int arr[],int size){
                int max=arr[0];
                for(int i=0;i<5;i++){
                    if(arr[i]>arr[0]) 
                   max=arr[i];
                }
                return max;
            }
         

    int main(){
    int numbers[5];
    for(int i=0;i<5;i++){
        cout<<"Enter number"<<i+1<<": "<<endl;
    cin>>numbers[i];
}
 cout<<"the sum is: ";
  cout<<sumf(numbers,5)<<endl;
   cout<<"the product is: ";
  cout<<productf(numbers,5)<<endl;
   cout<<"the average is: ";
  cout<<averagef(numbers,5)<<endl;
   cout<<"the min is: ";
  cout<<minf(numbers,5)<<endl;
   cout<<"the max is: ";
  cout<<maxf(numbers,5)<<endl;

 }



