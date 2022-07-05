#include <iomanip>
#include <iostream>
using namespace std;



class Inventory
{
	private:
		int itemNumber;
		int quantity;
		double cost;
	public:
		Inventory ()
		{
			itemNumber = 0;
			quantity = 0;
			cost = 0;
			
		}
		Inventory (int itemID, int numOfItems, double price)
		{
			itemNumber = itemID;
			quantity = numOfItems;
			cost = price;
		}
		void setItemNumber(int itemID)
		{
			itemNumber = itemID;
		}
		void setQuantity(int numOfItems)
		{
			quantity = numOfItems;
		}
		void setCost(double price)
		{
			cost = price;
		}
		int newItemNumber()
		{
			return itemNumber;
		}
		int newQuantity()
		{
			return quantity;
		}
		double newCost()
		{
			return cost;
		}
};


int main()
{
	int itemNumber;
	int quantity;
	double cost;
	
	Inventory storedData;
	
	cout << "Enter the Item Number: ";
	cin >> itemNumber;
	
	while (itemNumber <= 0)
	{
		cout << "Please enter a positive number: ";
		cin >> itemNumber;
	}
	
	cout << "Enter the Item's Quantity: ";
	cin >> quantity;
	
	while (quantity <= 0)
	{
		cout << "Please Enter A Positive Quantity: ";
		cin >> quantity;
	}
	cout << "Enter the Item's Cost: ";
	cin >> cost;
	cout << endl;
	
	while (cost <= 0)
	{
		cout << "Please Enter A Positive Cost: ";
		cin >> cost;
	}
	
	storedData.setItemNumber(itemNumber);
	storedData.setQuantity(quantity);
	storedData.setCost(cost);
	
	cout << "The Item's Number is " << itemNumber << endl; 
	cout << "The Item's Quantity is " << quantity << endl;
	cout << "The Item's Cost is " << cost << endl;

	return 0;
	
}
