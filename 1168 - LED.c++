#include <iostream>
using namespace std;

int main() {
      int n,l;
    char num[100];
    long long leds;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>num;
        l=0;
        leds=0;
        while(true)
        {
            if(num[l] == '\0') break;
            if(num[l] == '1') leds += 2;
            if(num[l] == '2') leds += 5;
            if(num[l] == '3') leds += 5;
            if(num[l] == '4') leds += 4;
            if(num[l] == '5') leds += 5;
            if(num[l] == '6') leds += 6;
            if(num[l] == '7') leds += 3;
            if(num[l] == '8') leds += 7;
            if(num[l] == '9') leds += 6;
            if(num[l] == '0') leds += 6;
            l++;
        }
        cout<<leds<<" leds"<<endl;
}
    return 0;
}
