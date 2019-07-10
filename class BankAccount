
//Class for a Bank Account
class BankAccount{
    public:
        BankAccount(double rands, double rate);
        //Initializes the account balance to ZAR.cents (i.e. 101.35) and
        //initialiazes the interest rate to rate percent.

        BankAccount();
        //Initializes the account balance to ZAR0.00
        //and the interest to 0.0%

        void set(double rands, double rate);
        //Postcondition: The account balance has been set to Rand.cents;
        //The interest rate has been set to rate percent.

        void update();
        //Postcondition: One year of simple interest has been
        //added to the account balance.

        double get_balance();
        //Returns the current account balance.

        double get_rate();
        //Returns the current account interest rate as a percentage.

        void output(std::ostream& outs);
        //Precondtion: If outs is a file output stream, then
        //outs has already been connected to a file.
        //Postcondition: Account balance and interest rate have
        //been written to the stream outs.

        private:
            double balance;
            double interest_rate;

            double fraction(double percent);
            //Converts a percentage to a fraction,
            //For example, fraction(50.0) returns 0.503.
};

class SavingsAccount : public BankAccount{
    public:
        SavingsAccount(double rands, double rate);
        void deposit(double rands);
        void withdraw(double rands);

        private:
};

BankAccount::BankAccount(double rands, double rate){
    if (rands < 0 || rate < 0)
    {
        std::cout << "Values entered not valid.\n";
        std::cout << "Rand amount/interest is less then 0.\n" << std::endl;
        exit(1);
    }
    balance = rands;
    interest_rate = rate;
}

BankAccount::BankAccount() : balance(0), interest_rate(0.0){
    //Intenionally left empty
}

void BankAccount::set(double rands, double rate){
     if (rands < 0 || rate < 0)
     {
        std::cout << "Values entered not valid.\n";
        std::cout << "Rand amount/interest is less then 0.\n" << std::endl;
        exit (1);
     }
     balance = rands;
     interest_rate = rate;
}

double BankAccount::fraction(double percent_value){
    return percent_value / 100.0;
}

void BankAccount::update(){         

//In the definition of a member function you call another member function like this                 
    balance = balance + fraction(interest_rate) * balance;
    std::cout << "New account balance ZAR_" << balance
    << " with an interest rate of " << interest_rate << "%" << std::endl; 
}

double BankAccount::get_balance() {
        return balance;      
}

double BankAccount::get_rate(){
    return interest_rate;
}

//The SavingsAccount constructor invokes the BankAccount constructor.
//Note the preceding colon ------------------------------|
//                                                       |
//                                                       V
SavingsAccount::SavingsAccount(double rands, double rate):
        BankAccount(rands, rate){
            //Blank
        }

//The deposit function adds the new amount to the balance and changes the 
//member variables via the set function
void SavingsAccount::deposit(double rands){
        double balance = get_balance();
        balance += rands;
        double new_rands = balance;
        set(new_rands, get_rate());
}

//The withdraw function subrracts the amount form the balance and changes the
//member variables via the set function
void SavingsAccount::withdraw(double rands){
        double balance = get_balance();
        balance -= rands;
        double new_rands = balance;
        set(new_rands, get_rate());
}

//Stream parameter that can be replaced with cout or with the output stream
void BankAccount::output(std::ostream& outs){
    outs.setf(std::ios::fixed);
    outs.setf(std::ios::showpoint);
    outs.precision(2);
    outs << "Opening balance ZAR_" << get_balance() << std::endl;
}
