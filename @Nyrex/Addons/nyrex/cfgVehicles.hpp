/*
Author: Frogman

Description:  CfgVehicles class to be included into config.cpp

Used for: vehicles, modules, men and buildings.
*/

class CfgVehicles 
{
	class Man;
	class CAManBase : Man 
	{
		class ACE_SelfActions 
		{
			class NYREX_Nyrex 
			{
				condition = (call NYREX_fnc_canUseNotepad || call NYREX_fnc_canUseSlateCards ||call NYREX_fnc_canUseOrdersBook ||call NYREX_fnc_canUseTAM);
				displayName = "Nyrex";
				exceptions[] = { "isNotSwiming", "isNotDragging"};
				class NYREX_Notepad 
				{
					displayName = "Notepad";
					icon = "\nyrex\Data\notepad.paa";
					condition = call NYREX_fnc_canUseNotepad;
					statement = call NYREX_fnc_openNotepad;
				};
				class NYREX_SlateCards 
				{
					displayName = "Slate Cards";
					//TODO: icon = "";
					condition = call NYREX_fnc_canUseSlateCards;
					statement = call NYREX_fnc_openSlateCards;
					class NYREX_ECAS
					{
						displayName = "Emergency close air support";
						//TODO: icon = "";
						condition = true; //TODO
						statement = hintSilent "Opening ECAS Card"; //TODO
					};
					class NYREX_ContactRep
					{
						displayName = "Contact Report";
						//TODO: icon = "";
						condition = true; //TODO
						statement = hintSilent "Opening Contact Report Card"; //TODO
					};
					class NYREX_SITREP
					{
						displayName = "SITREP";
						//TODO: icon = "";
						condition = true; //TODO
						statement = hintSilent "Opening SITREP Card"; //TODO
					};
				};
				class NYREX_OrdersBook 
				{
					displayName = "Orders Book";
					//TODO: icon = "";
					condition = call NYREX_fnc_canUseOrdersBook; 
					statement = call NYREX_fnc_openOrdersBook; //TODO
				};
				class NYREX_TAM 
				{
					displayName = "TAM";
					//TODO: icon = "";
					condition = call NYREX_fnc_canUseTam;
					statement = call NYREX_fnc_openTAM; //TODO
				};
			};
		};
	};
};