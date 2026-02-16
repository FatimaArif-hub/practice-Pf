//Programming Fundamentals Problem solving practice:

//No 1:
// #include <iostream>
// using namespace std;
// int main() {
//    int num;
//    cout<<"Enter number to check it is even or odd :";
//    cin>>num;
//    if (num%2==0){
//     cout<<"The number is even.";
//    }
// else{
//     cout<<"The number is odd.";
// }
// return 0;
// }
// No 2 :
//  #include <iostream>
//  using namespace std;
//  int main(){
//     int num;
//     cout<<"Enter any number to check it is positive ,negative ,or zero";
//     cin>>num;
//     if(num>0){
//          cout<<"Number is positive ";
//     }
//     else if(num<0){
//         cout<<"Number is negative ";
//     }
//     else{
//         cout<<"Number is zero ";
//     }
//  }
// No 3:
// #include <iostream>
// using namespace std;
// int main(){
//     int num[3];
//     int largest=0;
//     cout<<"Enter three numbers to find which is largest:";
//     for(int i=0;i<3;i++)
//     {
//     cin>>num[i];
//     }
//     for(int i=0;i<3;i++)
//     {
//     if(num[i]>largest)
//     {
//        largest=num[i];
//     }
//     }
//      cout<<"The largest of three numbers is "<<largest;
// }
// No 4:
// #include <iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<<"Enter any number to check it is divisible by both 5 and 11 or not ";
//     cin>>num;
//     if(num%5==0 && num%11==0){
//         cout<<"The number is divisible by 5 and 11";
//     }
//     else{
//        cout<<"The number is not divisible by 5 and 11"; 
//     }
// }
// No 5:
// #include <iostream>
// using namespace std;
// int main(){
//     char ch;
//     cout<<"Enter any letter to check its vowel or consonent :";
//     cin>>ch;
//     if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
//         cout<<"It is vowel ";
//     }
//     else {
//         cout<<"It is consonet ";
//     }
// }
//No 6:
//#include <iostream>
//using namespace std;
//int main() {
//	int marks;
//	char grade;
//	cout << "Enter the marks of the subjects  to calculate grades :";
//	cin >> marks;
//	if (marks > 85) {
//		grade = 'A';
//	}
//	else if (marks > 75) {
//		grade = 'B';
//	}
//	else if (marks > 60) {
//		grade = 'C';
//	}
//	else if (marks > 40) {
//		grade = 'D';
//	}
//	else {
//		grade = 'F';
//	}
//	cout << "Your grade for this subject is : " << grade;
//}