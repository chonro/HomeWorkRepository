#include <iostream>
#include <string>
struct Dimension {
	int height, depth, width;
};

void input(struct Dimension* sizes);
// ���������� ������� ������� ���������� �����
int calculateSquare(struct Dimension sizes);
// ������ ������ �����
int calculateVolume(struct Dimension sizes);
//������ ������� ������ ����� �� ���� ����
float calculateDye(struct Dimension sizes, float consumption);
float calculatePaintingCost(struct Dimension sizes, float consumption, float workCost, float paintCost);
float calculateCupboardCost(struct Dimension sizes, float cupboardCost);

float calculateCupboardMass(struct Dimension sizes, float cupboardMassMSq);

float calculateElevationCost(struct Dimension sizes, float cupboardMassMSq,int etaz,float CostEtazKg);

int main() {
	struct Dimension sizes;//��������� � ��������� �����
	float consumption = 0.17;//������ ������ �� �^2
	float workCost = 560;// ��������� ������� ������ ������������ ����� (�������)
	float paintCost = 3.6;// ��������� ������ ������ ������
	input(&sizes);// �������� ������� �����
	float PW_Cost = calculatePaintingCost(sizes, consumption, workCost, paintCost);//��������� ������ ��������� �������� �����

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
	int S = calculateSquare(sizes);// ��������� ������� �����
	float dye_needed = S * consumption;// ����� ������ ��� ���� ����
	float dye_cost = dye_needed * paintCost;//������� �� ������
	float workerCost = S * workCost;// ������� ����� ��������� �������
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