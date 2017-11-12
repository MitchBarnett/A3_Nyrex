/*
Author: Frogman

Description: Holds the base classes for dialogs
*/

#define CT_STATIC 0
#define ST_PICTURE 48

class NYREX_imageBackground
{
	idc = -1;
	type = CT_STATIC;
	style = ST_PICTURE;

	colorBackground[] = { 1, 1, 1, 0 };	// Not used for image
	colorText[] = { 1, 1, 1, 1 };		// Sets color filter of image 1,1,1,1 for all chanels and fully opaque
	font = TahomaB;						// Not used for image		
	sizeEx = 0.1;						// Not used for image
	text = "";							// To be change in child -  Path to image in format nyrex\textures\file.paa
	x = 0;								// To be change in child
	y = 0;								// To be change in child
	w = 1;								// To be change in child
	h = 1;								// To be change in child
	moving = 1;							// Set as the item to allow dragging of the dialog
};

class Nyrex_editBox
{
	idc = -1;
	type = 2;
	style = "16 + 512"; // multi line + no border
	x = 0;
	y = 0;
	h = 0.2;
	w = 1;
	font = "ShadowsIntoLight";
	sizeEx = 0.0442;
	autocomplete = "";
	canModify = true;
	maxChars = 10000;
	forceDrawCaret = false;
	colorSelection[] = { 0,0,0,0.2 };
	colorText[] = { 0.1,0.1,0.1,1 };
	colorDisabled[] = { 1,0,0,1 };
	colorBackground[] = { 1,1,1,0 };
	text = "";
};