#include <iostream>
using namespace std;

class IntArr
{
private:
	int count;
	int* values;
public:
	IntArr();
	IntArr(int size);
	IntArr(int size, int init);
	IntArr(const IntArr& arr);

	IntArr& operator= (const IntArr& arr);
	IntArr concat(const IntArr& arr);
	void push(int val);
	friend istream& operator>>(istream& is, IntArr& arr);
	friend ostream& operator<<(ostream& os, IntArr& arr);
	~IntArr();
};

IntArr::~IntArr() {
	cout << "Destructor has been called" << endl;
	delete[] values;
}

IntArr::IntArr()
{
	count = 0;
	values = NULL;
}

IntArr::IntArr(int size)
{
	count = size;
	values = new int[count];
	for (int i = 0; i < size; ++i)
	{
		values[i] = 0;
	}
}

IntArr::IntArr(int size, int init)
{
	count = size;
	values = new int[count];
	for (int i = 0; i < size; ++i)
	{
		values[i] = init;
	}
}

IntArr::IntArr(const IntArr& arr)
{
	count = arr.count;
	values = new int[count];
	for (int i = 0; i < count; ++i)
	{
		values[i] = arr.values[i];
	}
}

IntArr& IntArr::operator= (const IntArr& arr)
{
	delete[] this->values;
	count = arr.count;
	values = new int[count];
	for (int i = 0; i < count; i++)
	{
		values[i] = arr.values[i];
	}
	return *this;
}

IntArr IntArr::concat(const IntArr& arr)
{
	IntArr ret(this->count + arr.count);
	int iRet = 0;
	for (int i = 0; i < this->count; ++i)
	{
		ret.values[iRet] = this->values[i];
		++iRet;
	}

	for (int i = 0; i < arr.count; ++i)
	{
		ret.values[iRet] = arr.values[i];
		++iRet;
	}
}

void IntArr::push(int val)
{
	IntArr temp(1, val);
	*this = this->concat(temp);
}

istream& operator>>(istream& is, IntArr& arr) {
	delete[] arr.values;
	cout << "Nhap so luong: ";
	is >> arr.count;
	arr.values = new int[arr.count];
	cout << "Nhap cac phan tu :\n";
	for (int i = 0; i < arr.count; ++i) {
		is >> arr.values[i];
	}
	return is;
}
ostream& operator<<(ostream& os, const IntArr& arr) {
	for (int i = 0; i < arr.count; ++i) {
		os << arr.values[i] << " ";
	}
	return os;
}

int main()
{
	IntArr l1;//tạo mảng không chứa bất kì phần tử nào
	IntArr l2(3, 2);// tạo một mảng với 3 phần tử, tất cả phần tử đều có giá trị là 2
	IntArr l3(2);//tạo một mảng với 2 phần tử, tất cả phần tử đều có giá trị là 0
	IntArr l4 = l2.concat(l3);//tạo ra một IntArr mới có nội dung là kết quả của việc nối các
	l2.push(3);//thêm số 3 vào cuối danh sách trong đối tượng l2
	cin >> l2;//Xoá các giá trị hiện có trong l2 và cho phép người dùng nhập số lượng phần tử
	cout << l2;//in ra các số nguyên có trong danh sách
	//Khi vượt quá phạm vi sử dụng cần huỷ tất cả các vùng nhớ được cấp phát cho các values
	return 0;
}
