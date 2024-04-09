#include <iostream>
#include <random>
using namespace std;
int main() {
    int array = {78, 65, 31, 7, 86, 54, 1, 45, 66, 99, 58, 29, 89, 75, 37, 6, 79, 42, 94, 87, 50, 17, 90, 41, 12, 48, 13, 74, 18, 73, 91, 38, 57, 2, 81, 14, 60, 95, 72, 23, 92, 70, 69, 8, 84, 40, 36, 67, 10, 96, 21, 83, 26, 5, 68, 19, 76, 53, 32, 61, 30, 51, 56, 98, 15, 3, 85, 64, 80, 49, 34, 25, 39, 63, 71, 11, 62, 46, 27, 77, 20, 55, 97, 88, 35, 47, 9, 33, 4, 82, 16, 24, 28, 43, 59, 44, 52};
    int sum1=0;
    for(int i=0;i<100;i++){
        sum1+=array[i];
    }
    cout<<sum1<<endl;
    int arr1[100];
    int sum2=0;
    for(int i=1;i<=100;i++){
        sum2+=i;
    }
    cout<<sum2<<endl;
    int sum=sum2-sum1;
    cout<<"The missing element is "<<sum;

    return 0;
}
