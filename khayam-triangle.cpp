#include <iostream>

using namespace std;

int main() {
    int temp, n, s;
    cout<<"enter a number : ";
    cin>>n;
    int nums [n+1]={0};
    s=n-1;
    nums[s] = 1;
    for( int i=0; i<n; i++){
        cout<<"\n";
      
        for( int j=0; j<=i; j++){
            temp = nums[s+j] + nums[s+j+1];
            cout<<temp;
            nums[s+j] = temp;
        }
        s--;
    }
    return 0;
}