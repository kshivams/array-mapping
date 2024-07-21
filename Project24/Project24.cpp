#include<iostream>
#include<vector>
#include<map>
std::map<int, int> mp(std::vector<int> vec) {
	std::map<int, int>mp;
	for (int i = 0; i < vec.size(); i++) {
		mp[vec[i]] += 1;

	}

	return mp;
}
void occurance(std::map<int, int>mp) {
	std::cout << " enter the array element : ";
	int a;
	std::cin >> a;
	for (auto x : mp) {
		if (x.first == a) {
			std::cout << x.first << " = " << x.second; return;
	}

	}
	std::cout << "invalid array element";


}
int main() {
	std::vector<int>vec = { 1,2,3,1,3,2,1,2,3,4,6,7,7,56,4,56,7,5,54,43,3,3,5,7,8,54,3,32,5,67,7,54,4,4,4,3,2,2,22 };
	std::map<int,int>hash=mp(vec);
	for (auto x : hash) {
		std::cout << x.first << " : " << x.second<<'\n';
	}
	occurance(hash);

}