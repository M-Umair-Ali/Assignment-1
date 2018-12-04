#include <iostream>
#include "link_list.h"
#include "complex.h"
using namespace std;

int main()
{
    double re1,im1,re2,im2;

    link_list ll;
    complex c;
    cout<<"adding numbers to the link list"<<endl;
 ll.iend(-4,5);
 ll.iend(-3,-3);
 ll.iend(-4,3);
 ll.print();
 cout<<endl;

 // with operator overloading

cout<<"added the first two complex number"<<endl;
 ll.valpos(re1,im1,1);
 ll.valpos(re2,im2,2);
 complex m1(re1,im1);
 complex m2(re2,im2);
 complex m3;
 m3=m1+m2;
 ll.iend(m3.re,m3.im);
 ll.print();
 cout<<endl;

cout<<"sub the first and third complex number"<<endl;
 ll.valpos(re1,im1,1);
 ll.valpos(re2,im2,3);
 complex m4(re1,im1);
 complex m5(re2,im2);
 m3=m4-m5;
 ll.iend(m3.re,m3.im);
 ll.print();
 cout<<endl;


cout<<"mul the second and third complex number"<<endl;
 ll.valpos(re1,im1,2);
 ll.valpos(re2,im2,3);
 complex m6(re1,im1);
 complex m7(re2,im2);
 m3=m6*m7;
 ll.iend(m3.re,m3.im);
 ll.print();
 cout<<endl;

 cout<<"div the first and third complex number"<<endl;
 ll.valpos(re1,im1,1);
 ll.valpos(re2,im2,3);
 complex m8(re1,im1);
 complex m9(re2,im2);
 m3=m8/m9;
 ll.iend(m3.re,m3.im);
 ll.print();
 cout<<endl;

cout<<"deleted the no. present at fourth position in the link list and the added it in the end of the link list"<<endl;
 ll.valpos(re1,im1,4);
 ll.delpos(4);
 ll.iend(re1,im1);
 ll.print();
 cout<<endl;



}
