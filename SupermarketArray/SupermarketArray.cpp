#include <iostream>
using namespace std;

int main()
{
    string item[10], tempItem;
    float price[10], tempPrice;
    int i,j, x;

    for (i = 0; i < 10; i++) {
        cout << "Enter item name and price: ";
        cin >> item[i] >> price[i];
    }

    // arranging arrays in order of price value in an ascending order

    for (i = 0; i < 10; i++) {
        for (j = i + 1; j < 10; j++) {
            if (price[i] > price[j]) {
                tempPrice = price[i];
                price[i] = price[j];
                price[j] = tempPrice;

                tempItem = item[i];
                item[i] = item[j];
                item[j] = tempItem;
            }
        }
    }

    // displaying arranged array 
    cout << "\n\n[ ITEMS IN ORDER OF LOWEST TO HIGHEST ]\n";
    for (i = 0; i < 10; i++) {
        cout << i + 1 << ". " << item[i] << " - $" << price[i] << endl;
    }

    // displaying arranged array of items under $10
    cout << "\n\n[ ITEMS IN ORDER OF LOWEST TO HIGHEST - ONLY TO $10 ]\n";
    for (i = 0; i < 10; i++) {
        if (price[i] <= 10) {
            cout << i + 1 << ". " << item[i] << " - $" << price[i] << endl;
        }
    }

    return 0;
}