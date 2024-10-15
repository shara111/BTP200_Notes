// Modular Example
// Transaction.h
struct Transaction {
	int acct;
	char type;
	double amount;
};
void enter(Transaction* tr);
void display(const Transaction* tr);
