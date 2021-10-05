#include"Set.h"
#include<algorithm>
Set::Set(const vector<char>& elem) {
	m_elems = elem;
}
Set::Set(const Set& s) {
	m_elems = s.m_elems;
}
bool Set::is_elem1(char c) {
	int n = m_elems.size();
	for (int i = 0; i < n; i++) {
		if (c == m_elems[i])
		{
			cout << "有该字符" << endl;
			return true;
		}
	}
	cout << "无该字符" << endl;
	return false;
}

bool Set::is_elem(char c) {
	int n = m_elems.size();
	for (int i = 0; i < n; i++) {
		if (c == m_elems[i])
		{
			//cout << "有该字符" << endl;
			return true;
		}
	}
	//cout << "无该字符" << endl;
	return false;
}

void Set::insert(char j) {
	if (is_elem(j) == false)
	{
		m_elems.push_back(j);
	}
	//cout << "无重复字符" << endl;
}
void Set::erase(char j) {
	int n = m_elems.size();
	for (int i = 0; i < n; i++) {
		if (m_elems[i] == j)
		{
			//cout << "存在该字符，已删除" << endl;
			m_elems.erase(m_elems.begin() + i);
			n--;
			cout << "有相同字符可删除" << endl;
			break;
		}
	}
}
void Set::erase1(vector<char> j) {
	vector<char> a;
	a = j;
	int n = m_elems.size();
	int n1 = a.size();
	for (int i = 0; i < n1; i++) {
		for (int j = 0; j < n; j++) {
			if (m_elems[j] == a[i])
			{
				m_elems.erase(m_elems.begin() + j);
				n--;
				cout << "111有相同字符可删除" << endl;
				break;
			}
		}
	}
	
}
Set Set::common(const Set& s) {
	vector<char> a, b,c;
	a = s.m_elems;
	b = m_elems;
	int n1 = a.size(); int n2 = b.size();
	for (int i = 0; i < n1; i++) {
		for (int j = 0; j < n2; j++) {
			if (a[i] == b[j]) {
				c.push_back(a[i]);
			}
		}
	}
	Set t(c);
	return t;
}
Set Set::sum(const Set& s) {
	vector<char> a, b;
	
	a = s.m_elems;
	b = m_elems;
	vector<char> c(b);
	Set t(c);
	int n1 = a.size(); 
	
	for (int i = 0; i < n1; i++) {
		t.insert(a[i]);
	}

	
	return t;
}

ostream& operator<<(ostream& os, const Set& s) {
	vector<char> a;
	a = s.m_elems;
	int n = a.size();
	for (int i = 0; i < n; i++)
	{
		os << a[i] << ',';

	}
	return os;
}