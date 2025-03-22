#include <iostream>
using namespace std;

int main(){
    cout<<"This C++ program analyzes product sales and inventory for a store\n";
    cout<<"Reminder: C++ is a compiled language!\n\n";

    string productName;
    int productCategory;
    int initialInventoryQuantity;
    float productPricePerUnit;
    int numOfItemsSold;
    int newInventory;
    float totalSale; 
    string inventoryStatus;

    
    if ( newInventory < 10 ){
        inventoryStatus = "Low inventory";
    } else {
        inventoryStatus = "Sufficient";
    }

    int directMethod= 20;
    int assignAfterDeclaration;
    assignAfterDeclaration = 3;
    int listMethod{11};

    auto autoTotalSale = totalSale;
    decltype(initialInventoryQuantity) decltypedInventory = 50;

    #define taxRateMacro 0.07
    double const taxRate = 0.07;

    cout << "Enter product name: ";
    getline(cin, productName);
    cout << "Enter product category: ";
    cin >> productCategory;
    cout << "Enter initial inventory quantity: ";
    cin >> initialInventoryQuantity;
    cout << "Enter product price per unit: ";
    cin >> productPricePerUnit;
    cout << "Enter number of items sold: ";
    cin >> numOfItemsSold;

    newInventory = initialInventoryQuantity - numOfItemsSold;
    totalSale = numOfItemsSold * productPricePerUnit;
    string newInventoryStatus =  (newInventory < 10) ? "Low inventory" : "Sufficient";

    if (productCategory < 1 || productCategory > 5) {
        cout << "Invalid input!\n";
    } else {
        switch (productCategory) {
            case 1: cout << "Category 1: Electronics\n\n"; break;
            case 2: cout << "Category 2: Groceries\n\n"; break;
            case 3: cout << "Category 3: Clothing\n\n"; break;
            case 4: cout << "Category 4: Stationery\n\n"; break;
            case 5: cout << "Category 5: Miscellaneous\n\n"; break;
        }
    }

    if (numOfItemsSold > 0){
        for (int i = 1; i <= numOfItemsSold; i++){
            cout << "Item " << i << ", price" << productPricePerUnit << "\n\n";
        }
    }

    cout << "Pre processor tax rate is " << taxRateMacro << "\n";
    cout << "Const variable tax rate is " << taxRate << "\n";

    cout << "Summary\n\n";
    cout << "Product name: " << productName << "\n";
    cout << "Product category: " << productCategory << "\n";
    cout << "Initial inventory quantity: " << initialInventoryQuantity << "\n";
    cout << "Number of items sold: " << numOfItemsSold << "\n";
    cout << "New inventory: " << newInventory << "\n";
    cout << "Total sales: $" << totalSale << "\n";
    cout << "Inventory status: " << inventoryStatus << "\n";
    cout << "New inventory status: " << newInventoryStatus << "\n\n";
    cout << "Total sales copy: " << autoTotalSale << "\n";
    cout << "Helper Value : " << decltypedInventory << "\n";

    return 0;
}