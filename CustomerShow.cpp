//
// Created by 서동호 on 2022/06/17.
//

#include "CustomerShow.h"

CustomerShow::CustomerShow(vector<Customer *> &CustomerList) : CustomerList(CustomerList){}

void CustomerShow::showCustomerListForAdmin() {
    cout << endl;
    cout << "   Customer List for Administrator   " << endl << endl;
    cout << "-------------------------------------" << endl;
    for (int i = 0; i < CustomerList.size(); i++) {
        cout << i + 1 << "th Customer " << endl;
        cout << "Customer Name : " << CustomerList[i]->getName() << endl;
        cout << "Customer Age : " << CustomerList[i]->getAge() << endl;
        cout << "Customer Id : " << CustomerList[i]->getId() << endl;
        cout << "Customer Password : "<< CustomerList[i]->getPw() << endl;
        cout << endl << endl;
    }
}
