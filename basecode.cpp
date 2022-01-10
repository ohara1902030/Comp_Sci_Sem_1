// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	char symb1;
	char symb2;
	int layers;
	int length;
	int xc;
	int yc;
	int lingth;
	int wedth;
	
	
	
cout << "Please enter a symbol" << endl;
	cin >> symb1;
cout << "How wide do you want the present to be" << endl;
	cin >> wedth;
cout << "How tall do you want the present to be" << endl;
    cin >> lingth;
cout << "Where do you want the present to be (xcord)" << endl;
   cin >> xc;
cout << "Where do you want the present to be ( ycord)" << endl;
   cin >> yc;
//cout << "How many layers of leaves would you like the christmas tree to have?" << endl;
 //   cin >> layers;
//cout << "Where do you want the tree to be[x coord]" << endl;
//    cin >> xc;
//cout << "Where do you want the tree to be[y coord]" << endl;
//	cin >> yc;
       
 
for(int x = 0; x<wedth; x++){
	for(int y = 0; y<lingth; y++){
		gotoxy(xc,yc);
		cout << symb1 << endl;
		gotoxy(xc + wedth, yc);
		cout << symb1 << endl;
	}
	gotoxy(xc,yc);
	cout<<symb1 << symb1 << symb1;
	
} 
 
 
 
 
    //   gotoxy(xc + 1, yc + 1);
//for(int c = 2; c<= layers; c++){//hehe c++ lol!1!
//   cout << symb1 << symb1;
//   gotoxy (xc -2, yc+c);
 //  cout << " " ;
 //  gotoxy (xc + 2, yc+c);
 //  cout << " ";

		
//gotoxy(xc + 1, yc + 1);	
	//cout << "^" << endl;
//gotoxy(xc + 1, yc + 1);
//	cout << symb1 << symb1 << endl;
//gotoxy(xc-1, yc) ;
//cout << symb1 << endl;
//gotoxy(xc + 1, yc + 1);
//	cout << symb1 << symb1 << symb1 << symb1 << endl;
//gotoxy(xc + 1, yc + 1);	
//	cout << symb1 << symb1 << symb1 << symb1 << symb1 << symb1 << endl;
//gotoxy(xc + 1, yc + 1);
//	cout<< "||" << endl;


//Merry Christmas!
	
	
	





}










