// base code file
#include "./hfiles/poole.h"
///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
char symb;
cout<<"Enter a snowflake"<<endl;
cin >> symb;

for(int i = 0; i<5; i++){
	gotoxy(4,i+5);
	cout << symb << endl;
    sleep(1);
    gotoxy(4,i+5);
    cout<<' ';
	
}



}
