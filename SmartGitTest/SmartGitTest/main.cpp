//
//  main.cpp
//  SmartGitTest
//
//  Created by I ce d ra gon 刘 on 2017/12/29.
//  Copyright © 2017年 I ce d ra gon. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;
int gcd(int v1, int v2){
    while (v2) {
        int temp = v2;
        v2 = v1%v2;
        v1 =temp;
    }
    return v1;
}

void reset(int *p){
    *p = 0;
    p = 0;
}
int big(int x,int *p){
    return ((x>*p)?x:*p);
}
void swap0(int *p1, int *p2){
    int temp=*p1;
    *p1 = *p2;
    *p2 = temp;
}

void swap1(int *p1, int *p2){
    int temp = *p1;
    if (*p1>*p2) {
        *p1=*p2;
        *p2=temp;
    }else{
        *p1=*p1;
        *p2=*p2;
    }
}
void swap2(int &x,int &y){
    int temp=x;
    x=y;
    y=temp;
}

vector<int>::const_iterator find_val(vector<int>::const_iterator beg,
                                     vector<int>::const_iterator end,
                                     int value,
                                     vector<int>::size_type &occurs){
    vector<int>::const_iterator res_iter = end;
    occurs = 0;
    for (; beg!=end; ++beg){
        if(*beg==value){
            if(res_iter == end){
                res_iter = beg;
            }
            ++occurs;
        }
    }
    return res_iter;
    
}
int incr(int &val){
    return ++val;
}
//string::size_type findChar(string &s,char c){
//    string::size_type i=0;
//    while (i!=s.size()&&s[i]!=c) {
//        ++i;
//    }
////    for(decltype(i) a=0;a<s.size();a++){
////        if(s[a]==c){
////            i++;
////        }else{
////            i=i;
////        }
////    }
//    return i;
//}
string::size_type findChar(string &s,char c){
    string::size_type i=0;
    for(decltype(i) a=0;a<s.size();a++){
        if (s[a]==c) {
            i++;
        }
    }
    return i;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
//    cout<<"Enter x and y"<<endl;
//    int x,y,z;
//    cin>>x>>y;
//    z =gcd(x, y);
//    cout<<"The gcd number of x and y ="<<z<<endl;
//    int i = 42;
//    int a = 50;
//
//    int *p = &a;
//    int z=big(i, p);
//    cout<<"the bigger one is :"<<z<<endl;
//    swap0(&i, p);
//    cout<<"now i ="<<i<<endl;
//    cout<<"now *p ="<<*p<<endl;
//    cout<<"!!!!!!!!!!!"<<endl;
//    swap1(&i, &a);
//    cout<<"now i ="<<i<<endl;
//    cout<<"now *p ="<<*p<<endl;
//    cout<<"!!!!!!!!!!"<<endl;
//    swap2(i, a);
//    cout<<"now i ="<<i<<endl;
//    cout<<"now *p ="<<*p<<endl;
//
//    vector<int> ac={42,42,0,42,00,32,42};
//    vector<int>::size_type ctr;
//    vector<int>::const_iterator it=find_val(ac.begin(), ac.end(), 42, ctr);
//    cout<<ctr<<endl;
//    cout<<"i= "<<*p<<endl;
//    reset(p);
//    cout<<"i= "<<*p<<endl;
//    short v1=0;
//    const int v2=42;
//    int v3 =43;
//    int v4=incr(v3);
//    cout<<v4<<endl;
    string s="adcddacdcdccd";
    char c='a';
    auto z=findChar(s, c);
    cout<<z<<endl;
    
    return 0;
}
