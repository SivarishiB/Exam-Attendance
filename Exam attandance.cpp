#include<iostream>
using namespace std;

int main()
{
    float a,b;
    cout<<"\nNumber of classes attended:";
    cin>>a;
    cout<<"\nNumber of classes held:";
    cin>>b;

    float percentage;
    percentage = (a/b)*100;

    if(percentage >= 75)
    {
        cout<<"\nYour Percentage is "<<percentage<<" you are eligible for the exam";
    }
    else{
        cout<<"\nYour Percentage is "<<percentage<<" you are not eligible for the exam";
    }
    return 0;
}
