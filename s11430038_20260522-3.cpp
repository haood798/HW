//11430038林豪安
#include <iostream>
#include <vector>
using namespace std;
class MenuItem
{
    protected:
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

class Drink: public MenuItem
{
    private:
        string sugar;
    public:
        Drink(string food, int money, string sugar) : MenuItem(food,money), sugar(sugar){}
        void display()
        {
            cout << food << " : $" << money <<" (" << sugar << ")" << endl;
        }
};

int main() {
    cout << "=== 階段 3 測試：類別繼承與特製屬性 ===" << endl;

    // 建立一個飲料物件
    // 珍珠奶茶繼承了 MenuItem 的名字與價格，並擁有自己專屬的 "半糖"
    Drink boba("珍珠奶茶", 60, "半糖");

    cout << "預期輸出 -> 珍珠奶茶 : $60 (半糖)" << endl;
    cout << "實際輸出 -> ";
    boba.display(); // 執行子類別覆寫後的 display
    cout << "\n====================================\n" << endl;

    return 0;
}