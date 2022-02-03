#ifndef BOOKSTORE_H
#define BOOKSTORE_H

#include "Employee.h"
#include "Book.h"

class BOOKSTORE
{
	private:
		string Emri;
		string Adresa;
		string Tel;
		vector<Employee> punonjesit;
		vector<Book> librat;
		vector<Client> klientet;
		vector<Vouchers> kuponat;
	public:
		// setters dhe getters per variablat e instances

};

#endif
