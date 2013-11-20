#include <iostream>

using namespace std;

//Polymorphism:
//Say u wanted to make a computer with different enemies
//and lets say they all have an attack function
//But they attack in different ways (Ninja throws sai, Monster Claws)
//Polymorphism is calling the attack function on differnt objects
//Calling the same function on different attacks
//Same functions different outcomes


class Enemy{

	protected:
		int attackPower;
		
	public:
		void setAttackPower(int a){
			attackPower = a;
		}


};

class Ninja: public Enemy{

	public:
		void attack(){
			cout<< "i am a ninja, ninja chop -" << attackPower << endl;
			//REMEMBER NINJA IS AN ENEMY, ENEMIES HAVE ATTACK POWER
		}
};


class Monster: public Enemy{

	public:
		void attack(){
			cout<< "monster eat -" << attackPower << endl;
		}
};





int main(){


	Ninja n;
	Monster m;
	//REMEMBER ALL NINJAS ARE ENEMIES SO ARE MONSTERS
	//SO THE ADDRESS OF NINJA, IS ALSO A ENEMY PTR
	//ANYTHING AN ENEMY CAN DO A NINJA CAN DO
	Enemy *enemy1 = &n;
	Enemy *enemy2 = &m;
	
	//NINJA GETS 29 ATTACK POWER
	enemy1->setAttackPower(29);
	enemy2->setAttackPower(99);
	
	n.attack();
	m.attack();

}
