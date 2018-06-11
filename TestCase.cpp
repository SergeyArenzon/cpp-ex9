#include "TestCase.hpp"



TestCase::TestCase(string s,ostream& os){
this->s=s;
this->os=&os;
this->passed = 0;
this->failed = 0;
}
void TestCase::print(){
*os<<s<<": "<<failed<<" "<<"failed"<<", "<<passed<<" "<<"passed"<<", "<<failed+passed<<" total."<<endl;
cout<< "---"<<endl;

}
