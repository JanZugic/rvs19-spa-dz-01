#pragma once
#include <SFML/Graphics.hpp>
class Flower
{
private:

	//flower instance:
	int petal_num;			//num of petals
	float petal_size;		//size of petals
	float stem_size;		//size of stem
	float center_size;		//size of center
	int leaves_num;			//number of leaves
	float leaf_size;		//size of leaves
	int flower_num;			//number of flowers
	
	//seasons:
	int season;				// 0 for summer, 1 for winter, 2 for spring
	float spring_intensity;	//intensity of spring
	float summer_intensity;	//intensity of summer
	float winter_intensity;	//intensity of winter
	
	//universal modifier:
	float wind_intensity;		//intensity of wind

	//flower position:
	float x;			//x position of the flower
	float y;			//y position of the flower

	//colors:
	sf::Color petal_color;
	sf::Color center_color;
	sf::Color stem_color;
	sf::Color leaf_color;

public:
	
	//put getters, setter and constructors 

	//default flower constructor 
	Flower();

	//set the position of the flower
	void setPosition(float x, float y);

	//draw the flower
	void draw(sf::RenderWindow& window);



};


/*

seasons explained:
only one season can be active at the time. the seasons have an intenisty modifier. 

wind modifier affects all seasons and flowers.
wind only has one direction.

summer intensity will add a warm yellow filter over the image and introduce bees as small round particles flying around.

winter will add a cold blue filter over the image and introduce falling round snow particles

spring will add fast falling droplet particles.

wind will set the intenisty of the waving animation for the flower and the particeles (bees will be slower)

*/

//note: make the functions here