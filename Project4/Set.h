#ifndef SET_H
#define SET_H
#include<iostream>
#include<vector>
using namespace std;
class Set {
	vector<char> m_elems;
public:
	Set() = default;
	Set(const vector<char>& elem);//

	bool is_elem(char);
	bool is_elem1(char);
	void insert(char);
	void erase(char);
	void erase1(vector<char> j);
	Set common(const Set& s);
	Set sum(const Set& s);
	Set(const Set& s);
	Set& operator=(const Set& s) {
		if (&s == this)return *this;
		m_elems = s.m_elems;
		return *this;
	}
	friend ostream& operator<<(ostream& os, const Set& s);
	
	

	
	
};


#endif
