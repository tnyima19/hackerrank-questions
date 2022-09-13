#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string first_string;
    string second_string;
    
    cin>>first_string;
    cin>>second_string;
    
    cout<<first_string.size()<<" "<<second_string.size()<<endl;
    
    string new_string = first_string + second_string;
    
    cout<<new_string<<endl;
    
    string modified_first;
    string modified_second;
    int total= 0;
    if(second_string.size()<first_string.size()){
        total = second_string.size();
    }
    for(int i=0;i<total; ++i){
        if(i==0){
            char temp = second_string[i];
            second_string[i] = first_string[i];
            first_string[i] = temp;
        }
    }
    string final_string = first_string + " "+ second_string;
    
    cout<<final_string<<endl;
  
    return 0;
}