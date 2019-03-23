#import <iostream>
#define t(x) a=a<d?a+x:a-x
#define p(x) std::cout<<x<<" "<<a<<c
int d,a,n,k=1,r,cd[]={200,150,90,60,10,5};const char*b,*c=", ",*cs[]={"1W","3W","7I","9I","PW","PT"};
int main(){std::cin>>d;a+=200;p("1W");do{n=abs(d-a);if(k<2&&n<15)r=4;else if(k<3&&n<10)r=5;else if(n<=5)t(n+5),r=5,c="\n";else for(k=0;k<6;k++)if(n>cd[k]){r=k;break;}t(cd[r]);p(cs[r]);k++;}while(d!=a);}
