// TimberL.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <SFML/Graphics.hpp>
// Make code easier to type with "using namespace"
using namespace sf;

int main()
{
	//Create a video mode object
	VideoMode vm(1920, 1080);

	// Create and open a window for the game Timber
	RenderWindow window(vm, "Timber!!", Style::Default);
	// Create a texture to a hold a graphic on the GPU
	Texture textureBackground;

	//Load a graphic into the texture
	textureBackground.loadFromFile("graphics/hell.jpg");
	// Create a sprite
	Sprite spriteBackground;
	//Attach the texture to the sprite
	spriteBackground.setTexture(textureBackground);
	//Set the spriteBackground to cover the screen
	spriteBackground.setPosition(0, 0);
	//Main Game loop
	while (window.isOpen())
	{
		/*
		*************************************************
		Handle the player input
		*************************************************
		*/
		if (Keyboard::isKeyPressed(Keyboard::Escape))
		{
			window.close();
		}
		/*
		*************************************************
		Update the scene
		*************************************************
		*/
		/*
		*************************************************
		Draw the scene
		*************************************************
		*/
		//clear everything from the last frame
		window.clear();

		//Draw our game scene here
		window.draw(spriteBackground);
		//Show everything we just drew
		window.display();


		/*
		*************************************************
		
		*************************************************
		*/
		/*
		*************************************************
		*************************************************
		*/
	}

    return 0;
}

