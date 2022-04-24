#include <iostream>
using namespace std;

//24. Long-Distance Calls

int main() {

	float calltime;
	float starttime;
	float chargerate;
	float check;
	bool stop;
	float totalcharge;
	float total_call_time_in_minutes, total_start_time_in_minutes;


		do {
			stop = 0;
			cout << "Please enter the start time of the call: ";
			cin >> starttime;
			cout << "Please enter the number of hours and minutes spent on a call in this format 'HH.MM'(ex. 2.20): ";
			cin >> calltime;
			check = calltime - static_cast<int>(calltime);
			if (0.59 < check && 23.59 < calltime) {
				cout << "Please enter realistc hours and minutes. (anything bellow 23.59)\n\n";
				stop = 1;
			}
			if (stop == 0 && 0.59 < check) {
				cout << "Please enter minutes between 0 and 59.\n\n";
			}

		} while (0.59 < check || 23.59 < calltime);

		total_start_time_in_minutes = ((starttime - static_cast<int>(starttime)) * 100) + ((static_cast<int>(starttime) * 60));

		total_call_time_in_minutes = ((calltime - static_cast<int>(calltime)) * 100) + ((static_cast<int>(calltime) * 60));

		//cout << total_start_time_in_minutes << endl;
		//cout << total_call_time_in_minutes << endl;

		//calltime - (calltime - static_cast<int>(calltime));

		//419 minutes is 6:59 (six hours and fifty nine minutes from the morning 0:00 AM)
		//1141 minutes is 19:01 (ninteen hours and one minute from the morning 0:00 AM)
		//1439 minutes is 23:59 (twenty three hours and 59 minutes from the morning 0:00 AM)

		if (total_start_time_in_minutes >= 0 && total_start_time_in_minutes <= 419) {// This is the time of 0:00 AM - 6:59 AM in minutes
			chargerate = 0.05; // charge rate for the time period of 0:00 AM - 6:59 AM;
			if (total_call_time_in_minutes + total_start_time_in_minutes > 419) { // Checking to see if the call continues past 6:59;
				if (total_call_time_in_minutes + total_start_time_in_minutes > 1141) { // Checking to see if the call continues past 19.01
					if (total_call_time_in_minutes + total_start_time_in_minutes > 1439) { // Checking to see if the call continues past 23.59
						int charge1 = (419 - total_start_time_in_minutes) * chargerate; //This is the amount charged for the call during the time period 0:00 and 6.59
						chargerate = 0.45;
						int charge2 = (1141 - 419) * chargerate;
						chargerate = 0.20;
						int charge3 = (1439 - 1141) * chargerate;
						chargerate = 0.05;
						int charge4 = ((total_start_time_in_minutes + 1439) - total_call_time_in_minutes) * chargerate; //This is the amount charged for the call during the time period 7:00 and 19.00

						totalcharge = charge1 + charge2 + charge3 + charge4;
						cout << "The total charged for call is: $" << totalcharge << endl;
					}
					else { //this outputs the charge for a call that begins from the hours of 0:00 - 6.59 and 19:01 23.59
						int charge1 = (419 - total_start_time_in_minutes) * chargerate;
						chargerate = 0.45;
						int charge2 = (1141 - 419) * chargerate;
						chargerate = 0.20;
						int charge3 = (total_call_time_in_minutes - ((1141 - 419) + (419 - total_start_time_in_minutes))) * chargerate;

						totalcharge = charge1 + charge2 + charge3;
						cout << "The total charged for call is: $" << totalcharge << endl;
						return 0;

					}
				}
				else { //This else statement is for a call that is during the periods of 0:00 - 6.59 AND 7.00 - 19.00
					int charge1 = (419 - total_start_time_in_minutes) * chargerate; //This is the amount charged for the call during the time period 0:00 and 6.59
					chargerate = 0.45; //changing the charge rate for the time period of 7:00 - 19:00
					int charge2 = (total_call_time_in_minutes - (419 - total_start_time_in_minutes)) * chargerate; //This is the amount charged for the call during the time period 7:00 and 19.00

					totalcharge = charge1 + charge2; //this adds the minutes charged from the time between 0:00 - 6.59 AND 7.00 - 19.00

					cout << "The total charged for call is: $" << totalcharge << endl;
				}

			}
			else { //This else statement is for a call that is during the periods of 0:00 - 6:59
				int charge1 = total_call_time_in_minutes * chargerate; //This is the amount charged for the call during the time period 0:00 and 6.59
				cout << "The charges for this call are: $" << charge1 << endl;
			}
	}
	//420 minutes is 7.00 hours
	//1140 minutes is 19.00 hours
	else if (starttime >= 420 && starttime <= 1140) {
			chargerate = 0.45;
		if ((total_call_time_in_minutes + total_start_time_in_minutes) > 1140) {
			if ((total_call_time_in_minutes + total_start_time_in_minutes) > 1439) {
				if ((total_call_time_in_minutes+total_start_time_in_minutes) >= 1860) {

				}
			}
			
		}


	}
	else if (starttime >= 19.01 && starttime <= 23.59) {
		chargerate = 0.20;
	}

	return 0;
}