#include <iostream>

using namespace std;

class House
{
	private:
		string color = "";
		int year = 0;
		int carPorts = 0;
		int windows = 0;
		int doors = 0;
		int estimatedAppraisal = 0;
	public:
		string getColor()
		{
			return color;
		}
		int getYear()
		{
			return year;
		}
		int getCarPorts()
		{
			return carPorts;
		}
		int getWindows()
		{
			return windows;
		}
		int getDoors()
		{
			return doors;
		}						

		void setColor(string inputColor)
		{
			color = inputColor;
		}
		void setYear(int inputYear)
		{
			year = inputYear;
		}
		void setCarPorts(int inputCarPorts)
		{
			carPorts = inputCarPorts;
		}
		void setWindows(int inputWindows)
		{
			windows = inputWindows;
		}
		void setDoors(int inputDoors)
		{
			doors = inputDoors;
		}					
		int PrintHouseInfo()
		{
			

			if(year > 0)
			{
				estimatedAppraisal += (year);
			}

			if(carPorts > 0)
			{
				estimatedAppraisal += (carPorts * 3265);
			}

			if(windows > 0)
			{
				estimatedAppraisal += (windows * 1820);
			}


			if(doors > 0)
			{
				estimatedAppraisal += (doors * 2000);
			}

			while(estimatedAppraisal < 20000)
			{
				estimatedAppraisal += 1000;
			}
			return estimatedAppraisal;
		}

};

int main()
{
	House house;

	string userColor = "";
	int userYear = 0;
	int userCarPorts = 0;
	int userWindows = 0;
	int userDoors = 0;

	cout << "Let's create a house together\n";
	cout << "\nPlease enter the color you would like your house to be: ", cin >> userColor;
	house.setColor(userColor);
	cout << "\nPlease enter the year you would like your house to be built in: ", cin >> userYear;
	house.setYear(userYear);
	cout << "\nPlease enter the number of car ports in a garage you want: ", cin >> userCarPorts;
	house.setCarPorts(userCarPorts);
	cout << "\nPlease enter the number of windows you want your house to have: ", cin >> userWindows;
	house.setWindows(userWindows);
	cout << "\nPlease enter the number of doors you would like you house to have: ", cin >> userDoors;
	house.setDoors(userDoors);

	cout << "\n\nYour house is estimated to be priced: " << house.PrintHouseInfo() << ".";

	return 0;
}


