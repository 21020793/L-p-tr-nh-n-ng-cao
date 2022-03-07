#include <iostream>
#include <vector>
#include <iomanip>

// 1 2 4 7 9 15
// 6
// 1 2 4 7 9 15
// 1 2 4 6 7 9 15
int main(){
    int n, pos = -1;
    std::cin >> n;
    float arr[n], m;
    
    for (int i = 0; i < n; i++){
    	std::cin >> arr[i];
	}
	std::cin >> m;
	
	
	for (int i = 0; i < n; i++){
		if (m < arr[i]){
			pos++;
			break;
		} else pos++;
	}
	
	
	std::vector <float> storage;
	
	for (int i = 0; i < n; i++){
		if (i < pos || i > pos){
			storage.push_back(arr[i]);
		} else if (i == pos) {
			storage.push_back(std::min(m, arr[i]));
			storage.push_back(std::max(m, arr[i]));
		}
	}
	
	for (float x : storage){
		std::cout << std::fixed << std::setprecision(2) << x << " ";
	}
}
