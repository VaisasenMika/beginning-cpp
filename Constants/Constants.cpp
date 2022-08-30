#include <iostream>

using namespace std;

int main()
{
	cout << "Hello, welcome to Frank´s Carpet Cleaning Service" << endl << endl;
	
	int small_rooms{ 0 };
	cout << "Number of small rooms: ";
	cin >> small_rooms;

	int large_rooms{ 0 };
	cout << "Number of large rooms: ";
	cin >> large_rooms;

	const int small_room_price{ 25 };
	cout << "Price per small room: $" << small_room_price << endl;

	const int large_room_price{ 35 };
	cout << "Price per large room: $" << large_room_price << endl;

	int cost{ 0 };
	cost = (small_rooms * small_room_price) + (large_rooms * large_room_price);
	cout << "Cost : $" << cost << endl;

	const double tax_rate{ 0.06 };
	double tax = (small_rooms * small_room_price * tax_rate) + (large_rooms * large_room_price * tax_rate);
	cout << "Tax : $" << tax << endl;

	cout << "=================================================" << endl;
	double total_estimate = cost + tax;
	cout << "Total estimate : $" << total_estimate << endl;
	cout << "This estimate is valid for 30 days" << endl;

	return 0;
}