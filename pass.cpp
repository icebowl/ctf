#include <iostream>
//#include <conio.h>
using namespace std;

int main(){

char* password = "jU5t_a_sna_31pm13gc49_u_4_m0rf41";
char buffer[32];
int i = 0;

for (i=0; i <8; i++){
	buffer[i] = password[i];
}
for (;i<16;i++){
	buffer[i] = password[23-i];
}
for (;i<32;i+=2){
	buffer[i] = password[46-i];
}
for (i=31;i>17;i-=2){
	buffer[i] = password[i];
}

cout << buffer;

return 0;
}
+
