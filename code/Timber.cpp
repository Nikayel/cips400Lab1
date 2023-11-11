// Include important C++ libraries here
#include <SFML/Graphics.hpp>
#include <iostream>

// Make code easier to type with "using namespace"
using namespace sf;
using namespace std;

int main()
{
	// Create a vidaeo mode object
	VideoMode vm(1920, 1080);

	// Create and open a window for the game
	RenderWindow window(vm, "Timber!!!", Style::Default);

	// Create a texture to hold a graphic on the GPU
	Texture textureBackground;

	// Load a graphic into the texture
	textureBackground.loadFromFile("graphics/background.png");

	// Create a sprite
	Sprite spriteBackground;

	// Attach the texture to the sprite
	spriteBackground.setTexture(textureBackground);

	// Set the spriteBackground to cover the screen
	spriteBackground.setPosition(0, 0);

	Texture textureCloud;
	textureCloud.loadFromFile("graphics/cloud.png");

	//Creating the sprite
	Sprite spriteCloud;
	spriteCloud.setTexture(textureCloud);
	spriteCloud.setPosition(100,100);

	Texture textureBee;
	spriteBee.loadFromFile("graphics/bee.png");
	spriteBee.setPosition(500,500);

	Clock clock;


	while (window.isOpen())
	{

		

		if (Keyboard::isKeyPressed(Keyboarsd::Escape))
		{
			window.close();
		}

		spriteCloud.move(0.1f, 0.0f);
		spriteBee.move(-0.2f, 0.0f);

		Time dt = clock.restart();




		/*
		****************************************
		Update the scene
		****************************************
		*/


		/*
		****************************************
		Draw the scene
		****************************************
		*/

		// Clear everything from the last frame
		window.clear();

		// Draw our game scene here
		window.draw(spriteBackground);

		window.draw(spriteCloud);
		window.draw(spriteBee);

		// Show everything we just drew
		window.display();


	}

	return 0;


