class CfgVehicles 
{
	class Man;
	class CAManBase : Man 
	{
		class ACE_SelfActions 
		{
			class NYREX_Nyrex 
			{
				condition = (call NYREX_fnc_haveNotepad || call NYREX_fnc_haveSlateCards || NYREX_fnc_haveOrdersBook || NYREX_fnc_haveTAM);
				displayName = "Nyrex";
				exceptions[] = { "isNotSwiming", "isNotDragging"};
				class NYREX_Notepad 
				{
					displayName = "Notepad";
					//TODO: icon = "";
					condition = true; //TODO
					statement = hintSilent "Opening Notepad"; //TODO
				};
				class NYREX_SlateCards 
				{
					displayName = "Slate Cards";
					//TODO: icon = "";
					condition = true; //TODO
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
					condition = true; //TODO
					statement = hintSilent "Opening Orders Book"; //TODO
				};
				class NYREX_TAM 
				{
					displayName = "TAM";
					//TODO: icon = "";
					condition = true; //TODO
					statement = hintSilent "Opening TAM"; //TODO
				};
			};
		};
	};
};