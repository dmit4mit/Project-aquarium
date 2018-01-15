#pragma once

#include "Aquarium.h";
#include "Visualizer.h"

class Controller
{
	int timer; //������ ������� � �����
	int frequency; //������� ���������� ��������� ������������� ������� (���������� ����� � �������)
	int tickDuration; //������������ ����
	std::string background;
	Visualizer visualizer;
	Aquarium aquarium;

	void FillAquarium(int planktonNumber, int fishNumber, int sharkNumber);
	void Update();

public:
	int planktonLifetime;
	int fishLifetime;
	int sharkLifetime;

	int planktonReproductionPeriod;
	int fishReproductionPeriod;
	int sharkReproductionPeriod;

	int planktonSpeed;
	int fishSpeed;
	int sharkSpeed;

	int fishHungerLifetime;
	int sharkHungerLifetime;

	int fishViewDistance;
	int sharkViewDistance;

<<<<<<< HEAD
	
=======
	int fishEatingDistance;
	int sharkEatingDistanse;

	int planktonMoveRange;
	int fishMoveRange;
	int sharkMoveRange;

	Controller(int frequency, std::string background, int planktonNumber, int fishNumber, int sharkNumber,
>>>>>>> 8d6e9a0e26ada58d5cc068dc4826b6a64426edec
				int windowWidth, int windowHeight, 
				int aquariumWidth, int aquariumHeight);
	~Controller();

	void SetParametres(int planktonLifetime_, int fishLifetime_, int sharkLifetime_, 
		int planktonReproductionPeriod_, int fishReproductionPeriod_, int sharkReproductionPeriod_, 
		int planktonSpeed_, int fishSpeed_, int sharkSpeed_, int fishHungerLifetime_, 
		int sharkHungerLifetime_, int fishViewDistance_, int sharkViewDistance_);

	
	void Start();
	

};
