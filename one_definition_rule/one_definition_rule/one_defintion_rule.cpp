// One Definition Rule
 // one_defintion_rule.cpp
#include <iostream>
#include "main.h"        // prototype for add()
#include "Transaction.h" // prototypes for enter() and display() 
using namespace std;

int main() {
	int i;
	double balance = 0.0;
	Transaction tr;
	
    for (i = 0; i < NO_TRANSACTIONS; i++) {
        enter(&tr);
        display(&tr);
        add(&balance, &tr);
    }
    cout << "Balance " << balance << endl;
}

void add(double* bal, const Transaction* tr) {
    *bal += (tr->type == 'd' ? -tr->amount : tr->amount);
}