#include<iostream>
using namespace std;

class Baker {
  private:
      int m = 50; // here m is a private variable
  public:
      string message = "Nothing!";
      void bakeCake(string s){
        m = 40;
        //cout << m << endl;
        cout << s << endl;
      }
      void privateM(){
        m = 400;
        cout << m << endl;
      }
};

int main(){
    Baker cakeMan;
//    cakeMan.bakeCake("Your Chocolate Cake is Ready!");
//    cakeMan.bakeCake(cakeMan.message);
//    cakeMan.message = "Everything!!";
//    cakeMan.bakeCake(cakeMan.message);
//    cakeMan.m = 100; // as m is a private variable this can not be changed from here
    cakeMan.privateM();
    return 0;
}
