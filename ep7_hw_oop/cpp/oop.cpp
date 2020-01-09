#include <iostream>

using namespace std;

class Car
{
	public:
		Car()
		{
			cout << "Car created." << endl;
		}

		~Car()
		{
			cout << "Car destroyed." << endl;
		}

		void openAshtray()
		{
			cout << "Ashtray opened." << endl;
		}
};

class SpyCar : public Car
{
	public:
		SpyCar()
		{
			cout << "SpyCar created." << endl;
		}

		~SpyCar()
		{
			cout << "SpyCar destroyed." << endl;
		}

		void openAshtray()
		{
			Car::openAshtray();
			cout << "Ejector seat deployed." << endl;
		}
};


int main()
{
	Car car;
	SpyCar spyCar;

	car.openAshtray();

	spyCar.openAshtray();
}
