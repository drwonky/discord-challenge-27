#import <iostream>
struct {const char *s;int d;}l[]={{"1W",200},{"3W",150},{"7I",90},{"9I",60},{"PW",10},{"PT",5}};
#define t(x) a=a<d?a+x:a-x
#define q(x) std::cout<<x<<" "<<a<<c
int d,a,n,k=1,r;const char *b,*c=", ";main(){std::cin>>d;a+=200;q("1W");do{n=abs(d-a);if(k<2&&n<15)r=10,b="PW";else if(k<3&&n<10)r=5,b="PT";else for(auto s:l)if(n>s.d){r=s.d,b=s.s;break;}else if(s.d==5&&n<=5){r=n,b=s.s,c="\n";break;}t(r);q(b);k++;}while(d!=a);}
