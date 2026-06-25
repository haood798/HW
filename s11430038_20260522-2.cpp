//11430038林豪安
#include <iostream>
#include <vector>
using namespace std;
class MenuItem
{
    private:
        string food;
        int money;
    public:
        MenuItem(string food, int money)
        {
            this->food = food;
            if(money<0)
            {
                this->money=0;
            }
            else
            {
                this->money = money;
            }
            
        }
    void display()
    {
        cout<< this->food << " : $" << this->money << endl;
    }

    int funsum()
    {
        return money;
    }
};

class Order
{
    private:
        vector<MenuItem> items;
    public:
        void addItem(MenuItem item)
        {
            items.push_back(item);
        }
        
        void showOrder(bool st)
        {
            int sum=0;
            for(int i=0; i<items.size(); i++)
            {
                items[i].display();
                sum = sum+items[i].funsum();
            }
            if(st == true)
            {
                sum = sum*0.9;
            }
            cout<< "總金額:" << sum <<endl;
        }
};

int main() {
    cout << "=== 階段 2 測試：Vector 訂單與折扣邏輯 ===" << endl;

    Order myOrder;

    MenuItem item1("麥香魚", 45);
    MenuItem item2("大包薯條", 55);
    MenuItem item3("蘋果派", 35);


    myOrder.addItem(item1);
    myOrder.addItem(item2);
    myOrder.addItem(item3);

    //顯示訂單的內容與總金額。
    //true 表示為學生，需要打9折，然後輸出總金額。
    myOrder.showOrder(true); 
    
    cout << "====================================\n" << endl;

    return 0;
}