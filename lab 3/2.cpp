#include <iostream>


using namespace std;

void print(int val){
	if(val){
		cout << "T";
	}
	else{
		cout << "F";
	}
}


int main(){

    
    int p[2] = {0, 1};
    int q[2] = {0, 1}, temp = 0;

    cout << "You are a hound dog   = p\nyou howl at the moon  = q\n\n";
    cout << "P\tQ\tP -> Q\n";

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){

            print(p[i]); cout <<"\t";
			print(q[j]); cout << "\t";

            if(p[i] && !q[j]){
                cout << "F\n";
                
            }
            else{
                cout << "T\n";
                if(!q[j]){
                    temp = p[i];
                }
            }
        }
    }


    if(!temp){
        cout <<  "\nTherefore you are not a hound dog.";
    }
    return 0;
}
