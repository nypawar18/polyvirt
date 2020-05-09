/*
 * polyvirt.h
 *
 *  Created on: 09-May-2020
 *      Author: nitin
 */

#ifndef POLYVIRT_H_
#define POLYVIRT_H_

class Weapon{
public:
	Weapon(){
		cout<<"Load Weapon...."<<endl;
	}
	 virtual void loadweapon(void){
		cout<<"Loading Weapon....."<<endl;
	}
};

class Gun:public Weapon{
public:
	void loadweapon(void){
		this->Weapon::loadweapon();

			cout<<"Loading Gun....."<<endl;
		}
};

class Bomb:public Weapon{
public:
	void loadweapon(void){
		this->Weapon::loadweapon();
			cout<<"Loading Bomb....."<<endl;
		}
};

class Loader{
public:
	void loadfeature(Weapon *weapon){
		weapon->loadweapon();

	}

};


#endif /* POLYVIRT_H_ */
