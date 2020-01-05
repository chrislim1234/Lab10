#include <string>
#include <vector>

// importing a whole namespace in a header is frowned upon
// this will at least let us write 'string'/'vector' below
using std::string;
using std::vector;

class BigInt {
   public:
      BigInt(string s);   // convert string to BigInt
      string to_string(); // get string representation
      void add(BigInt b); // add another BigInt to this one
   private:
      vector<int> num; //number
      int d; //digit
      int l; //length
      int size; //size
      string stringNumber; //string number
      int sum;  //sum
      int carryOn; //carryOn

};
