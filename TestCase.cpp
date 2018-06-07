
#include "TestCase.hpp"



TestCase::TestCase(string s,ostream& os){
this->s=s;
this->os=&os;
this->passed = 0;
this->failed = 0;
}
void TestCase::print(){
*os<<s<<":"<<failed<<", "<<passed<<", "<<failed+passed<<" total.";


}




// int main(){
// TestCase sergey("testing",cerr);





// sergey.check_equal(6,5);
// sergey.check_output(5,"6");
// //sergey.check_function(foo,2,8);
// return 0;
// }