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
	int q[2] = {0, 1};
	int r[2] = {0, 1};
	
	
	cout << "P\tQ\tR\t" << "(p n (~q v r)) -> (~p v r)\n";
	
	for(int i = 0; i < 2; i++){        
		for(int j = 0; j <2; j++){     
			for(int k = 0; k < 2;k++){ 
				
				print(p[i]); cout <<"\t";
				print(q[j]); cout << "\t";
				print(r[k]); cout << "\t";

				if(p[i] && !q[j] || r[k]){ 
				
					if(!(!p[i] || r[k])){
						cout << "F\n";  
					}
					else{
						cout << "T\n";
					}
				}
				else{
					
					cout << "T\n";
				}
				
			}
		}
	}
	
	return 0;
}
