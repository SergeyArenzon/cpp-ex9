#include <iostream>
using namespace std;
#include <sstream>
#include <string>

class TestCase{
private:
      string s;
     ostream* os;
     int failed;
     int passed;
public:
void print();
TestCase(string s,ostream& os);


template <typename T>
TestCase check_equal(const T &t, const T &u){
if((T)t==(T)u)passed++;
else{
failed++;
*os<<s+": Failure in test #"<<(failed+passed)<<":"<<t<<" should equal "<<u<<"!"<<endl;
}
return *this;
}


 template<typename T>
TestCase check_different(const T &t, const T &u){
if((T)t!=(T)u){
passed++;
} else{
    failed++;
    *os<<s+": Failure in test #"<<(failed+passed)<<":"<<t<<" should equal "<<u<<"!"<<endl;
}
return *this;
}


template<typename T>
TestCase check_output(const T &t, string st){
ostringstream ss;
ss<<t;
if(ss.str()==st){
passed++;
} else{
failed++;
*os<<s+": Failure in test #"<<(failed+passed)<<": string value should be "<<t<<" but is "<<st<<endl;
}
return *this;
}


template<typename T,typename U,typename Z>
TestCase check_function(  Z func, const T before,const U expected){
    U after=func((T)before);
if((U)expected==(U)after){
    passed++;
}
else{
    failed++;
*os<<s+": Failure in test #"<<(failed+passed)<<": Function should return "<<expected<<" but returned "<< after<<"!"<<endl;
}
return *this;
}
};
