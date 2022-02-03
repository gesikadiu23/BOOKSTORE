#ifndef BOOK_H
#define BOOK_H

class Book
{
	private:
		int nrIFaqeve;
		string vellimi;
		string gjuha;
		int vitiIProdhimit;
		double cmimi;
		vector<Author> autoret;
		vector<BookCategory> kategorite;
	protected:
	
		void setNrIFaqeve(int);
		void setVellimi(string);
		void setGjuha(string);
		void setvitiProdhimit(int);
		void setAutoret(vector<Author>);
		void setKategorite(vector<BookCategory>);
		void setCmimi(double);
		//get per te gjitha variablat e instances
		
		
};

#endif
