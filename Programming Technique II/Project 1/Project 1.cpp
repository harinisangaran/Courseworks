#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Product{
	private:
		string prodID;
		string name;
		double price;
		int quantity;
		string expiryDate;
		string location;
	public:
		Product () {}
		
		Product(string code, string prodName, double prodPrice, int prodQuantity, string prodExpiry, string prodLocation) : 
		prodID(code), name(prodName), price(prodPrice), quantity(prodQuantity), expiryDate(prodExpiry), location(prodLocation) {}
		
		string getProdID () const {
			return prodID;
		}
		
		void display () {
			cout << endl << "Product Name: " << name << endl;
			cout << "Quantity: " << quantity << endl;
			cout << "Price: RM" << price << endl;
			cout << "Expiry Date: " << expiryDate << endl;
			cout << "Location: " << location << endl;
		}
};

int main (){
	const int numProducts = 9;
	
	Product products [numProducts] = {Product("1010", "Milk", 4.50, 500, "11-06-2024", "Aisle 1"), 
									  Product("1011", "Yogurt", 2.50, 500, "12-09-2024", "Aisle 1"), 
									  Product("1012", "Butter", 4.00, 500, "18-08-2025", "Aisle 2"), 
									  Product("2010", "Nuggets", 12.00, 500, "27-09-2025", "Aisle 12"), 
									  Product("2011", "Sausages", 11.50, 500, "15-02-2025", "Aisle 12"),
									  Product("2012", "Hashbrowns", 10.50, 500, "22-05-2025", "Aisle 12"),
									  Product("3010", "Loaf Breads", 3.00, 500, "10-07-2024", "Aisle 9"),
									  Product("3011", "Biscuits", 2.00, 500, "20-03-2024", "Aisle 10"),
									  Product("3012", "Muffins", 2.50, 500, "13-11-2025", "Aisle 9")};
									  
	char userID, preorderAns;
	string productID;
	int preorderedQuantity = 0;
	
	cout << "Are you a Customer (C) or Staff (S): ";
	cin >> userID;
	cout << "Enter product ID: ";
	cin >> productID;
	
	for (int i=0; i<numProducts; i++) {
		if (productID == products[i].getProdID())
			products[i].display();
		else
			continue;
	}
	
	if (userID == 'C' || userID == 'c') {
		cout << "Do you want to order this product? (Y or N) ";
		cin >> preorderAns;
		if (preorderAns == 'Y' || preorderAns == 'y') 
			preorderedQuantity++;
	}
	else if (userID == 'S' || userID == 's')
		cout << "Quantity of preordered product: " << preorderedQuantity << endl;
	
	return 0;
	
}