/*
Author: Frogman

Description:  Contains definition of dialogs to be displayed through "createDialog"
*/

#include "DialogBaseClasses.hpp"
class NYREX_notepadDialog {
	idd = -1;                     // set to -1, because we don't require a unique ID
	movingEnable = true;          // the dialog can be moved with the mouse (see "moving" below)
	enableSimulation = true;      // continue the game
	controlsBackground[] = {};    // no background controls needed
	objects[] = {};               // no objects needed
	controls[] = { NYREX_notepadBackground, RscEdit_1400 };  // our "Hello world" text as seen below:

	class NYREX_notepadBackground : NYREX_imageBackground
	{
		text = "\nyrex\Data\notepad.paa";				// To be change in child -  Path to image in format nyrex\textures\file.paa
		x = -0.0723438 * safezoneW + safezoneX;
		y = 0.346 * safezoneH + safezoneY;
		w = 0.381563 * safezoneW;
		h = 0.671 * safezoneH;
	};

	class RscEdit_1400 : Nyrex_editBox
	{
		idc = 1400;
		x = 0.00499997 * safezoneW + safezoneX;
		y = 0.4447 * safezoneH + safezoneY;
		w = 0.226875 * safezoneW;
		h = 0.517 * safezoneH;
	};
};

/*
/* #Jyqega
$[
1.063,
["notepad",[[0,0,1,1],0.025,0.04,"GUI_GRID"],0,0,0],
[1200,"",[2,"nyrex/\nyrex\Data/notepad.paa",["21.01 * GUI_GRID_W + GUI_GRID_X","15.36 * GUI_GRID_H + GUI_GRID_Y","4 * GUI_GRID_W","2.5 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
[1201,"",[2,"nyrex\\nyrex\Data\notepad.paa",["-35.5 * GUI_GRID_W + GUI_GRID_X","5.5 * GUI_GRID_H + GUI_GRID_Y","37 * GUI_GRID_W","30.5 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
[1400,"",[2,"",["-28 * GUI_GRID_W + GUI_GRID_X","9.5 * GUI_GRID_H + GUI_GRID_Y","22 * GUI_GRID_W","23.5 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]]
]
*/
