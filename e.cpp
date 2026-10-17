#include <iostream>
#include <string>
using namespace std;

class product {
private:
    string productname;
    double price;

public:
    // 1. Default Constructor
    product() {
        productname = "unknown";
        price = 0.0;
    }

    // 2. Parameterized Constructor
    product(string productname, double price) {
        this->productname = productname;
        this->price = price;
    }


    // Single line functions jo private data ko return karte hain
    string getProductName() {
        return productname;
    }

    double getPrice() {
        return price;
    }
};

int main() {
    product p1("laptop", 245.43);
    product p2(p1); // Automatic copy constructor


    cout << p1.getProductName() << " " << p1.getPrice() << endl;
    cout << p2.getProductName() << " " << p2.getPrice() << endl;

    return 0;
}