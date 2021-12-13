#include <iostream>
using namespace std;

const int end_S = 100;    //----------MAX Stack size default

template <class SType> class STACK
{
	int SIZE = 0;
	SType SMass[end_S]; //----------Stack massive
	int upper;


public:
	STACK(int p);
	~STACK();
	void push();
	SType pop();
	void STACK_print();
};
//-------------------------------------------------KONSTRUCTOR
template <class SType> STACK<SType>::STACK(int p)
{
	if (p > 0) SIZE = p;  //----------Stack size YOURS
	else SIZE = end_S;    //----------Stack size default
	upper = 0;


	cout << "-----------------STACK Initialized\n";
}

//-------------------------------------------------DESTRUKTOR
template <class SType> STACK<SType>::~STACK()
{
	//----------destroy stack
	upper = 0;
	cout << "-----------------STACK Destroyed\n";
}
//-------------------------------------------------PUT TO STACK
template <class SType> void STACK<SType>::push()
{

	SType i;
	if (upper == SIZE) {
		cout << "-----------------STACK is full \n";
		return;
	}

	cout << "------->"; cin >> i; //----------print Stack elem
	SMass[upper] = i;
	upper++;
}
//-------------------------------------------------GET FROM STACK
template <class SType> SType STACK<SType>::pop()
{
	if (upper == 0) {
		cout << "-----------------STACK is end \n";
		return 0;
	}
	upper--;
	return SMass[upper];
}


//-------------------------------------------------PRINT STACK
template <typename SType>
void STACK<SType>::STACK_print()
{
	int j = 0;
	cout << "-----------------YOUR STACK --> ";
	if (upper == 0)
	{
		cout << "|EMPTY|" << endl; return;  //----------print if Stack is empty
	}
	cout << "\n";
	for (int i = upper - 1; i >= 0; i--)
	{
		j++;
		cout << "|STACK elem|" << j << "---" << SMass[i] << endl;  //----------print Stack elem
	}
}


int main()
{
	//-------------------------------------------introdutions
	int N = 0;
	cout << "*****************************************\n";
	cout << "*      WELCOME TO STACK!                *\n";
	cout << "*                                       *\n";
	cout << "*     U can use functions:              *\n";
	cout << "*     - push      (void)                *\n";
	cout << "*     - pop       (int)                 *\n";
	cout << "*     - print     (void)                *\n";
	cout << "*     - *delete   (auto)                *\n";
	cout << "*****************************************\n";

	cout << "-----------------PRINT YOUR STEK LENGHT: \n";
	cout << "------->"; cin >> N;  //----------choose Stack size (is u wanna)
	cout << "-----------------TO STACK: \n";


	//---------------------------------------int Stack exaple
	STACK<int> a(N);

	int i = 0;
	while (i++ != N)
	{
		a.push();
	}
	cout << "-----------------STACK IS FULL! \n";

	a.STACK_print();

	cout << "\n-----------------Get:\n";
	while (i-- > 1)
	{
		cout << "pop stek --- " << a.pop() << " \n";
	}

	a.STACK_print();



	//---------------------------------------double Stack exaple (for the same stack size)
	i = 0;
	STACK<double> b(N);
	while (i++ != N)
	{
		b.push();
	}
	b.STACK_print();
	cout << "-----------------STACK IS FULL! \n";

	b.STACK_print();

	cout << "\n-----------------Get:\n";
	while (i-- > 1)
	{
		cout << "pop stack --- " << b.pop() << " \n";
	}

	b.STACK_print();





	cout << "\n";
	return 0;
}