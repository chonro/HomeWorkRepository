#include <iostream>
#include <string>
struct Dimension {
	int height, depth, width;
};

void input(struct Dimension* sizes);
// объявление функции расчета поверхости шкафа
int calculateSquare(struct Dimension sizes);
// расчет объема шкафа
int calculateVolume(struct Dimension sizes);
//расчёт сколько краски нужно на весь шкаф
float calculateDye(struct Dimension sizes, float consumption);
float calculatePaintingCost(struct Dimension sizes, float consumption, float workCost, float paintCost);
float calculateCupboardCost(struct Dimension sizes, float cupboardCost);

float calculateCupboardMass(struct Dimension sizes, float cupboardMassMSq);

float calculateElevationCost(struct Dimension sizes, float cupboardMassMSq,int etaz,float CostEtazKg);

int main() {
	struct Dimension sizes;//структура с размерами шкафа
	float consumption = 0.17;//расход краски на м^2
	float workCost = 560;// стоимость покаски одного кдвадратного метра (рабочим)
	float paintCost = 3.6;// стоимость одного грамма краски
	input(&sizes);// получаем размеры шкафа
	float PW_Cost = calculatePaintingCost(sizes, consumption, workCost, paintCost);//вычисляем полную стоимость покраски шкафа

	std::cout << PW_Cost<<std::endl;
	float cupboardCost = 1000;
	float cupboardCostSum = calculateCupboardCost( sizes,  cupboardCost);
	std::cout << cupboardCostSum << std::endl;
	float cupboardMassMSq = 10.5;
	float CupboardMass = calculateCupboardMass(sizes, cupboardMassMSq);
	std::cout << CupboardMass << std::endl;
	int etaz = 9;
	float CostEtazKg = 1.2;
	float deliveryCost = calculateElevationCost(sizes, cupboardMassMSq, etaz, CostEtazKg);

	std::cout << deliveryCost << std::endl;

	return 0;
}
void input(struct Dimension* sizes) {
	std::cout << "Input height:";
	std::cin >> (*sizes).height;
	std::cout << "Input depth:";
	std::cin >> (*sizes).depth;
	std::cout << "Input width:";
	std::cin >> (*sizes).width;
}
int calculateSquare(struct Dimension sizes) {
	int square_front = sizes.height * sizes.width;
	int square_bok = sizes.height * sizes.depth;
	int square_down = sizes.width * sizes.depth;
	int rezult = 2 * (square_front + square_bok + square_down);
	return rezult;
}
int calculateVolume(struct Dimension sizes) {
	int V = sizes.depth * sizes.height * sizes.width;


		return V;
}
float calculateDye(struct Dimension sizes, float consumption) {
	int square = calculateSquare(sizes);
	float dye_needed = square * consumption;
	
	
	return dye_needed;
}
//1
float calculatePaintingCost(struct Dimension sizes, float consumption, float workCost, float paintCost) {
	int S = calculateSquare(sizes);// вычислили площадь шкафа
	float dye_needed = S * consumption;// масса краски нав весь шкаф
	float dye_cost = dye_needed * paintCost;//затрата на краску
	float workerCost = S * workCost;// сколько нужно заплатить рабочим
	float rezult = workerCost + dye_cost;
	
	return rezult;
}
//2
float calculateCupboardCost(struct Dimension sizes, float cupboardCost) {
	int S= calculateSquare(sizes);
	int cupboardCostSum = S * cupboardCost;

	return cupboardCostSum;
}
//3
float calculateCupboardMass(struct Dimension sizes, float cupboardMassMSq) {
	int S = calculateSquare(sizes);
	float CupboardMass = S * cupboardMassMSq;
	return CupboardMass;
}
//4
float calculateElevationCost(struct Dimension sizes, float cupboardMassMSq, int etaz, float CostEtazKg) {
	float cupboardMass = calculateCupboardMass(sizes, cupboardMassMSq);
	float deliveryCost = CostEtazKg * cupboardMass * etaz;
	return deliveryCost;
}
//5