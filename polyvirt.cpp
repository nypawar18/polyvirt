/*
 * polyvirt.cpp
 *
 *  Created on: 09-May-2020
 *      Author: nitin
 */

#include<iostream>
using namespace std;
#include"polyvirt.h"
int main(void)
{
	//Weapon *w=new Weapon;
	//Gun *g=new Gun;
	//Bomb *b=new Bomb;
	Loader *l=new Loader;
	Weapon *w=new Weapon;
	Gun g;
	Bomb b;
	w=&g;
	l->loadfeature(w);
	w=&b;
	l->loadfeature(w);
	return 1;
}


