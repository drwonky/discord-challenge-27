//============================================================================
// Name        : discord-challenge-27.cpp
// Author      : Perry Harrington
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct {
	const char *s;
	int d;
} clubs[] = {{"1W",200},{"3W",150}, {"7I",90}, {"9I",60}, {"PW",10}, {"PT",5}};

#define ad(x) a=a<d?a+x:a-x
#define clu(x) cout<<x<<" "<<a<<c
int d,a,n,k=1,r;
int main() {
	const char *b,*c=", ";

	cin >> d;

	a+=200;
	clu("1W");

	do {
		n=abs(d-a);
		r=0;
		if (k < 2 && n < 15 ){
			r=10;
			b="PW";
		} else if (k < 3 && n < 10){
			r=5;
			b="PT";
		} else {
			for (auto s : clubs) {
				if (n > s.d) {
					r=s.d;
					b=s.s;
					break;
				} else if (s.d==5 && n<=5) {
					r=n;
					b=s.s;
					c="\n";
					break;
				}
			}
		}
		ad(r);
		clu(b);
		k++;
	} while(d != a);

	return 0;
}
