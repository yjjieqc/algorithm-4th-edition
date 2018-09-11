/*
 * @Author: yjjieqc 
 * @Date: 2018-09-11 16:11:06 
 * @Last Modified by: yjjieqc
 * @Last Modified time: 2018-09-11 16:32:53
 * @Description:  
 */
#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

class selectsort{
public:
    selectsort ():size(0){}
    void sort(){
        int i;
        for(i = 0; i < size; i++){
            for(int j = i; j < size; j++){
                if(nums[i] > nums[j])
                    swap(nums[i], nums[j]);
            }
        }
    }
    void pushback(int num){
        nums.push_back(num);
        size++;
    }
    void pop(int num){
        auto it = nums.begin();
        if (it != nums.end()){
            nums.earse(it);
            size--;
        }
    }
    void popback(){
        auto it = nums.end()-1;
        if(it != nums.rend()){
            nums.earse(it);
            size--;
        }
    }
    void print(){
        auto it = nums.begin();
        while(it != nums.end()){
            std::cout << *it++<< " ";
        }
        std::cout << endl;
    }
private:
    std::vector<int> nums;
    int size;
}

int main(){
    int temp;
    selectsort Sort;
    while(std::cin >> temp){
        Sort.pushback(temp);
    }
}