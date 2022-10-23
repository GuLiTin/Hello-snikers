#include<vector>
#include<iostream>
using namespace std;
int main()
{
    cout<<"Kirill LOX";
    return 0;
}
 void comb(std::vector<int> &data) // data — название вектора  (передаём по ссылке, чтобы вызов comb(array) менял вектор array)
    {
		double factor = 1.2473309; // фактор уменьшения
		int step = data.size() - 1; // шаг сортировки
        
        //Последняя итерация цикла, когда step==1 эквивалентна одному проходу сортировки пузырьком
		while (step >= 1)
		{
			for (int i = 0; i + step < data.size(); i++)
			{
				if (data[i] > data[i + step])
				{
					std::swap(data[i], data[i + step]);
				}
			}
			step /= factor;
		}
	}