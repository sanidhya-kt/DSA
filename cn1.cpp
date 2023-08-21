// #include<iostream>
// using namespace std;

// int check(char a){
// 	if(isupper(a)){
// 		cout << 1;
// 	}else if(islower(a)){
// 		cout << 0;
// 	}else{
// 		cout << -1;
// 	}
// }
// int main() {
// 	// Write your code here
// 	char a;
// 	cin >> a;
//     cout << check('v');
// }


// #include <iostream>

// using namespace std;

// int main()
// {
//       char a;
//   a = cin.get();
// 	int count = 0;
// 	int count1 = 0;
// 	int count2 = 0;
//   while(a != $){
// 	  a = cin.get();
// 	  count++;
//   }
//     cout << count << endl;
// }


#include <iostream>
using namespace std;

int main() {

  int numbers[5];

  cout << "Enter 5 numbers: " << endl;

  //  store input from user to array
  for (int i = 0; i < 5; ++i) {
    cin >> numbers[i];
  }

  cout << "The numbers are: ";

  //  print array elements
  for (int n = 0; n < 5; ++n) {
    cout << numbers[n] << "  ";
  }

  return 0;
}