#include <iostream>

using namespace std;

int main() {
    int arr[5][7] = {
    { 1, 2, 3, 4, 5, 6, 7 },
    { 8, 9, 10, 11, 12, 13, 14 },
    { 15, 16, 17, 18, 19, 20, 21 },
    { 22, 23, 24, 25, 26, 27, 28 },
    { 29,30,31,32,33,34,35 }};
    int available, x, z, letter;
   

    cout << "\t******<<SEAT RESERVATION PROGRAM>>*****\t";
    cout << "\n";
    for(int a = 0; a < 5; a++){
    for(int b = 0; b < 7; b++){

        cout << arr[a][b] << "\t";
    }
    cout << "\n";
    }
    cout << "\n*If the seat is available, you can proceed to the reservation! \t";
    cout << "\n*If the seat is taken, the system will display SEAT IS TAKEN!\t";
    cout << "\n*If the seatnumber is invalid, an error message will be displayed.\t" << endl;
    
    while (1) {
    cout << "\n    CHECK THE AVAILABLITY OF THE SEAT!\t "   ;
    cout << "\nPlease enter a number between 1 to 35: \t";
    cin >> z;
    if (z < 4) {      
        cout << "\t***Seat is available!***" << endl;  // assume that 1, 2 and 3 are the only available seats //
        cout << "\n" << "Enter seat number to reserve: ";
         cin >> available;
         cout << "\n";
         for(int a = 0; a < 5; a++){
             for(int b = 0; b < 7; b++){
                if(available == arr[a][b]){
                cout << " 0 " << "\t";
           }  else 
           {
               cout << arr[a][b] << "\t";
           }
    }
    cout << "\n";
    }
    {
        cout << "\nSeat successfully reserved!" << endl;
    }
    } else if (z < 35) {      //***This will include all the seats that are previously reserved***//
        cout << "\t***SEAT IS TAKEN!***";
        cout <<  endl;
        cout << "\n" << "Enter seat number to reserve: ";
    cin >> x;
    cout << "\n";
    for(int a = 0; a < 5; a++){
       for(int b = 0; b < 7; b++){
           if(x == arr[a][b]){
               cout << " NA " << "\t";           //**to display seat is Not Available**//
        }  else       
        { 
             cout << arr[a][b] << "\t";
        } 
    }
    cout << "\n";
    }
    cout << "\nSEAT IS TAKEN! Please choose another seat\t";
    cout << endl;
    
    } else if(z > 35) {
        cout << "\t***You've entered an invalid seat number!***\t";  //numbers beyond 35 are invalid //
        cout << endl;   // to show the space  //
    } 
    }
   
    system("PAUSE");
    return 0;
}


// In this program, once the seat was checked as available, it will automatically direct you to reservation //
// if the seat is already taken and you still reserved it, NA will appear as (Not Available) instead of 0 //
// Once you've entered a character instead of number, the program will go on an error//
//Previously reserved seat, will be considered taken once the first checked seat was also taken.
// I will try to enter 3 available seat, 3 taken seats and 3 invalid numbers //
// The loop will continue because the command was within the WHILE LOOP //
//the end.!//
