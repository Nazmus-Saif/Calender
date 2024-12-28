#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main(){
    string Months[] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
    int Days[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int Year, TotalDays, WeekDay = 0, SC = 0; // SC=SpaceCounter

    cout << "\t\t\t\t\t\t       ------------\n";
    cout << "\t\t\t\t\t\t       | Calendar |\n";
    cout << "\t\t\t\t\t\t       ------------\n\n\n";
    cout << " Enter Year : ";
    cin >> Year;

    // Leap year check
    if((Year % 4 == 0) && (Year % 400 == 0 || Year % 100 != 0)){
        Days[1] += 1;
    }

    // Calculate the first weekday of the year
    WeekDay = ((Year * 365) + ((Year - 1) / 4) - ((Year - 1) / 100) + ((Year - 1) / 400)) % 7;

    // Print calendar
    for(int i = 0; i < 12; i++){
        cout << "\n\n\n\n\t\t  " << Months[i] << "\n\n";
        cout << "   Sun   Mon   Tue   Wed   Thu   Fri   Sat\n\n";

        // Print spaces for the first weekday
        for(SC = 1; SC <= WeekDay; SC++){
            cout << "      ";
        }

        TotalDays = Days[i];

        // Print days of the month
        for(int j = 1; j <= TotalDays; j++){
            cout << setw(6) << j;
            WeekDay++;

            if(WeekDay > 6){
                WeekDay = 0;
                cout << "\n";
            }
        }
    }

    return 0;
}
