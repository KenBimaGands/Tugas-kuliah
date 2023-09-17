#include <iostream>
#include <cmath>

using namespace std;
int main(int argc, char const *argv[])
{
    float a, b, c, D, X1, X2;

    // fill the function
    cout<<"please enter the number to fill ax²+bx+c"<<endl;
    cin>>a>>b>>c;

    // determine the determinan
    D = ((pow(b,2))-4*a*c);

    // find the zeros
    if (D>0){
        X1= (((-b+(sqrt(D)))/(2*a)));
        X2= (((-b-(sqrt(D)))/(2*a)));

        cout<<X1<<" "<<X2<<endl;
    } else if (D==0){
        X1 = -b/2*a;
        X2 = X1;

        cout<<X1<<" "<<X2<<endl;
    } else if (D<0){
        X1 = ((-b/(2*a))+(sqrt(abs(D))/(2*a)));
        X2 = ((-b/(2*a))-(sqrt(abs(D))/(2*a)));

        cout<<X1<<" i "<<X2<<" i "<<endl;
    }

    
}
