/*Thutsaneeya Chanrong*/
#include<iostream>
#include<iomanip>
using namespace std;
class  BOOK{
	private:
		string bookname;
		string bookid;
		string status;
	public:
		BOOK(){
			bookname = " ";
			bookid = " ";
			status = "on";
		}
		BOOK(string n,string id){
			bookname = n;
			bookid = id;
		}
		void setBOOK(string n,string id){
			bookname = n;
			bookid = id;
		}
		void Borrowing(){
			status = "Brrow";
		}
		void Return(){
			status = "on";
		}
		string getBOOKname(){
			return bookname;
		}
		string getBOOKid(){
			return bookid;
		}
		string getStatus(){
			return status;			
		}
};
class Library{
	protected:
		BOOK book[100];
		int numofBook;
		int index;
		string name;
	public:
		Library(){
			numofBook = 0;
			index = 0;
			name = " ";
		}
		Library(int n,int i,string s){
			numofBook = n;
			index = i;
			name = s;
		}
		void setBook(BOOK b,int index){
			book[index] = b;
			numofBook++;
		}
		void setIndex(int i){
			index = i;
		}
		void setName(string s){
			name = s;
		}
		void showeMenu(){
			cout << setfill(' ') << setw(40);
			cout << "*****************************" << endl;
			cout << setfill(' ') << setw(30);
			cout << " Welcome " << endl; 
			cout << setfill(' ') << setw(27);
			cout << "to" << endl; 
			cout << setfill(' ') << setw(35);
			cout << "HOGWARTS LIBRARY" << endl;
			cout << setfill(' ') << setw(40);
			cout << "*****************************" << endl;
			cout << setfill(' ') << setw(40);
			cout << "_____________________________" << endl;
			cout << endl;
			cout << setfill(' ') << setw(40);
			cout << "_____________________________" << endl;
			cout << endl;
			cout << setfill(' ') << setw(30);
			cout << "> press 1 Login " << endl;
			cout << setfill(' ') << setw(38);	
			cout << "> press 2 Create account" << endl;
			cout << setfill(' ') << setw(28);
			cout << "> press 0 Quit" << endl;
			cout << setfill(' ') << setw(40);
			cout << "_____________________________" << endl;
		}
		void MemberMenu(){
			cout << setfill(' ') << setw(40);
			cout << "_____________________________" << endl;
			cout << setfill(' ') << setw(25);
			cout << endl;
			cout << "MENU" << endl;
			cout << setfill(' ') << setw(40);
			cout << "_____________________________" << endl;
			cout << endl;
			cout << setfill(' ') << setw(33);
			cout << "> press 1 View book" << endl;
			cout << setfill(' ') << setw(34);
			cout << "> press 2 Seach book" << endl;
			cout << setfill(' ') << setw(38);
			cout << "> press 3 Borrowing book" << endl;
			cout << setfill(' ') << setw(35);
			cout << "> press 4 Return book" << endl;
			cout << setfill(' ') << setw(40);
			cout << "_____________________________" << endl;
		}
		void ViewBook(){
			cout << setfill(' ') << setw(40);
			cout << "_____________________________" << endl;
			cout << setfill(' ') << setw(30);
			cout << endl;
			cout << "BOOK List" << endl;
			cout << setfill(' ') << setw(40);
			cout << "_____________________________" << endl;
			cout << endl;
			for(int i = 0;i < numofBook;i++){
				cout << setfill(' ') << setw(17);
				cout << book[i].getStatus() << " " << book[i].getBOOKid() << "  " << book[i].getBOOKname()  
					  << endl;
			}
			cout << setfill(' ') << setw(40);
			cout << "_____________________________" << endl;
		}	
		void BorrowingBook(int index){
			book[index].Borrowing();
		}
		void ReturnBook(int index){
			book[index].Return();
		}
		void seachBook(string name){
			cout << setfill(' ') << setw(40);
			cout << "_____________________________" << endl;
			cout << setfill(' ') << setw(30);
			cout << endl;
			cout << "BOOK SEACH" << endl;
			cout << setfill(' ') << setw(40);
			cout << "_____________________________" << endl;
			cout << endl;
			for(int i = 0;i < numofBook;i++){
				if(book[i].getBOOKname() == name){
					cout << setfill(' ') << setw(17);
					cout << book[i].getStatus() << " " << book[i].getBOOKid() << "  " << book[i].getBOOKname()  
					  	 << endl;
				}
			}
			cout << setfill(' ') << setw(40);
			cout << "_____________________________" << endl;
		}	
		int getIndex(){
			return index;
		}
		string getName(){
			return name;
		}
};
class Librarian : public Library{
	private:
		string firstname;
		string lastname;
	public:
		Librarian(){
			firstname = " ";
			lastname = " ";
		}
		Librarian(string n,string l){
			firstname = n;
			lastname = l;
		}
		void setLibrarian(string n,string l){
			firstname = n;
			lastname = l;
		}
		void print(){
			cout << setfill(' ') << setw(40);
			cout << "_____________________________" << endl;
			cout << setfill(' ') << setw(40) << endl;
			cout << "========== Librarian ==========" << endl;
			cout << setfill(' ') << setw(40);
			cout << "_____________________________" << endl;
			cout << setfill(' ') << setw(21);
			cout << "Name: " <<	firstname << " " << lastname << endl;
			cout << setfill(' ') << setw(40);
			cout << "_____________________________" << endl;	
		}
};
class Date{
		private:
		int day;
		int month;
		int year;
	public:
		Date(){
			day = 0;
			month = 0;
			year = 0;	
		}
		Date(int d,int m,int y){
			day = d;
			month = m;
			year = y;
		}
		void setDate(int d,int m,int y){
			day = d;
			month = m;
			year = y;
		}
		int getDay(){
			return day;
		}
		int getMonth(){
			return month;
		}
		int getYear(){
			return year;
		}
};
class Person{
	protected:
		string firstname;
		string lastname;
	public:
		Person(){
			firstname = " ";
			lastname = " ";
		}
		Person(string n,string l){
			firstname = n;
			lastname = l;
		}
		void setPerson(string n,string l){
			firstname = n;
			lastname = l;
		}
		string getFirstname(){
			return firstname;
		}
		string getLastname(){
			return lastname;
		}
		
};
class Member : public Person,public Library{
	private:
		Date day;
	public:
		Member(){
			firstname = " ";
			lastname = " ";
		}
		Member(string n,string l){
			firstname = n;
			lastname = l;
		}
		void setMember(string n,string l){
			firstname = n;
			lastname = l;
		}
		void setDate(Date d){
			day = d;
		}
		void print(){
			cout << setfill(' ') << setw(40);
			cout << "_____________________________" << endl;
			cout << setfill(' ') << setw(40) << endl;
			cout << "========== BILL ==========" << endl;
			cout << setfill(' ') << setw(40);
			cout << "_____________________________" << endl;
			cout << setfill(' ') << setw(21);
			cout << "Name: " << getFirstname() << " " << getLastname() << endl;
			cout << setfill(' ') << setw(40);
			cout << "_____________________________" << endl;
			cout << setfill(' ') << setw(40);
			cout << "_____________________________" << endl;
			cout << setfill(' ') << setw(23);
			cout << "Return: " << day.getDay() << "/" << day.getMonth() << "/" 
				 << day.getYear() << endl;
			cout << setfill(' ') << setw(40);
			cout << "_____________________________" << endl;
	}
};
main (){
	BOOK book;
	Library li;
	Date day;
	Member me;
	Librarian B;
	
 	int choic;
 	int a,b,c;
	
	B.setLibrarian("Justin","Chan");
	B.print();
	
	book.setBOOK("Harry Potter","000011");
	me.setBook(book,0);
	book.setBOOK("Little Pricne","000012");
	me.setBook(book,1);
	book.setBOOK("Fifty shades of grey 1","000013");
	me.setBook(book,2);
	book.setBOOK("Fifty shades of grey 2","000014");
	me.setBook(book,3);
	book.setBOOK("Fifty shades freed","000015");
	me.setBook(book,4);
	book.setBOOK("HOKKAIDO","000021");
	me.setBook(book,5);
	book.setBOOK("BEIJING","000022");
	me.setBook(book,6);
	book.setBOOK("HONG KONG","000023");
	me.setBook(book,7);
	book.setBOOK("HTML","000031");
	me.setBook(book,8);
	book.setBOOK("OOP","000032");
	me.setBook(book,9);
	book.setBOOK("C++","000033");
	me.setBook(book,10);
	book.setBOOK("HCT","000034");
	me.setBook(book,11);
	book.setBOOK("PSP","000035");
	me.setBook(book,12);
	book.setBOOK("History","000041");
	me.setBook(book,13);
	book.setBOOK("Crime","000042");
	me.setBook(book,14);
	book.setBOOK("English","000071");
	me.setBook(book,15);
	book.setBOOK("Chinese","000072");
	me.setBook(book,16);
	book.setBOOK("Korean","000073");
	me.setBook(book,17);
	book.setBOOK("Candy","000081");
	me.setBook(book,18);
	book.setBOOK("I like","000082");
	me.setBook(book,19);

	li.showeMenu();
	cin >> choic;	
	switch(choic){
		case 1://login
			me.setMember("Jackson","wang");
			cout << "Fristname: " << me.getFirstname() << endl;
			cout << "Lastname: " << me.getLastname() << endl;
			li.MemberMenu();
			cin >> a;
			switch(a){
				case 1://view book
					me.ViewBook();
					cout << setfill(' ') << setw(34);
					cout << "> press 1 Seach book" << endl;
					cout << setfill(' ') << setw(38);
					cout << "> press 2 Borrowing book" << endl;
					cout << setfill(' ') << setw(35);
					cout << "> press 3 Return book" << endl;
					cout << setfill(' ') << setw(40);
					cout << "_____________________________" << endl;
					cin >> c;
					switch(c){
						case 1:
							me.setName("OOP");
							cout << "Seach: " << me.getName() << endl;
							me.seachBook("OOP");
							break;
						case 2:
							me.setIndex(1);
							me.BorrowingBook(1);
							cout << "Borrowing: " << me.getIndex() << endl;
							me.print();
							break;
						case 3:
							me.setIndex(1);
							me.ReturnBook(1);	
							cout << "Return: " << me.getIndex() << endl;
							cout << "Thank you" ;
							break;	
					}
					break;
				case 2://seachbook
					me.setName("OOP");
					cout << "Seach: " << me.getName() << endl;
					me.seachBook("OOP");
					break;
				case 3://borrowing
					me.setIndex(1);
					me.BorrowingBook(1);
					cout << "Borrowing: " << me.getIndex() << endl;
					me.print();
					break;
				case 4://return	
					me.setIndex(1);
					me.ReturnBook(1);
					cout << "Return: " << me.getIndex() << endl;
					cout << "Thank you" ;
					break;
			break;		
			}
			break;
		case 2://creataccount
			me.setMember("William","chan");	
			cout << "Fristname: " << me.getFirstname() << endl;
			cout << "Lastname: " << me.getLastname() << endl;
			li.showeMenu();
			cin >> b;
			switch(b){
				case 1:
					me.setMember("William","chan");
					cout << "Fristname: " << me.getFirstname() << endl;
					cout << "Lastname: " << me.getLastname() << endl;
					li.MemberMenu();
					cin >> a;
					switch(a){
						case 1://view book
							me.ViewBook();
							cout << setfill(' ') << setw(34);
							cout << "> press 1 Seach book" << endl;
							cout << setfill(' ') << setw(38);
							cout << "> press 2 Borrowing book" << endl;
							cout << setfill(' ') << setw(35);
							cout << "> press 3 Return book" << endl;
							cout << setfill(' ') << setw(40);
							cout << "_____________________________" << endl;
							cin >> c;
							switch(c){
								case 1:
									me.setName("History");
										cout << "Seach: " << me.getName() << endl;
									me.seachBook("History");
									break;
								case 2:
									me.setIndex(1);
									me.BorrowingBook(1);
									day.setDate(7,6,2018);
									me.setDate(day);
									cout << "Borrowing: " << me.getIndex() << endl;
									me.print();
									break;
								case 3:
									me.setIndex(1);
									me.ReturnBook(1);
									cout << "Return: " << me.getIndex() << endl;
									cout << "Thank you" ;
									break;	
							}
						break;
				case 2://seachbook
					me.setName("PSP");
					cout << "Seach: " << me.getName() << endl;
					me.seachBook("PSP");
					break;
				case 3://borrowing
					me.setIndex(1);
					me.BorrowingBook(1);
					cout << "Borrowing: " << me.getIndex() << endl;
					me.print();
					break;
				case 4://return
					me.setIndex(1);
					me.ReturnBook(1);
					cout << "Return: " << me.getIndex() << endl;
					cout << "Thank you" << endl;
					break;
				}	
			}
	}
	return 0;
}
