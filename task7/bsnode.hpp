#pragma once
template<typename T>
class bsnode
{
private:
	T data;
	bsnode<T>* left;
	bsnode<T>* right;
public:
	bsnode<T>();
	bsnode<T>(T data);
	bsnode<T>(const bsnode<T>& other);
	T getData();
	void setData(T data);
	bool isLeaf();
	void insert(bsnode<T>* newNode);
	bsnode<T>* search(T val);

};
