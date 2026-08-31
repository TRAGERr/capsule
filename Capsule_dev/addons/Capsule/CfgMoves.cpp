class CfgMovesBasic
{
	class Default
	{
		idle = "";
	};

	class StandBase;
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class SprintCivilBaseDf;
		class TransAnimBase;

		class AidlPercMstpSrasWpstDnon_G0S;
		class AovrPercMstpSrasWpstDf: AidlPercMstpSrasWpstDnon_G0S
		{
			connectTo[] =
			{
				"AmovPercMstpSrasWpstDnon", 0.04
			};
		};

		class AmovPercMevaSnonWnonDf: SprintCivilBaseDf
		{
			connectTo[] = { };
			interpolateTo[] =
			{
				"AmovPercMsprSnonWnonDf_AmovPpneMstpSnonWnonDnon", 0.02, //change this into interp
				"AmovPercMrunSnonWnonDf", 0.02,
				"AmovPercMstpSnonWnonDnon", 0.06,
				"AmovPercMwlkSnonWnonDf", 0.025,
				"AmovPercMevaSnonWnonDfl", 0.02,
				"AmovPercMevaSnonWnonDfr", 0.02,
				"AmovPknlMevaSnonWnonDf", 0.02,
				"Unconscious", 0.02
			};
		};

		class AmovPercMstpSlowWrflDnon: StandBase
		{
			connectTo[] =
			{
				"AmovPercMstpSlowWrflDnon", 0.02,
				"AmovPercMstpSlowWrflDnon_AmovPknlMstpSlowWrflDnon", 0.02,
				"AmovPercMstpSlowWrflDnon_AmovPpneMstpSrasWrflDnon", 0.02,
				"AmovPercMstpSlowWrflDnon_AmovPercMstpSrasWrflDnon", 0.01,
				"AmovPercMstpSlowWrflDnon_SaluteIn", 0.1,
				"AmovPercMstpSrasWrflDnon_SaluteIn", 0.15,
				"AmovPercMstpSlowWrflDnon_AmovPsitMstpSlowWrflDnon", 0.1,
				"AmovPercMstpSlowWrflDnon_AmovPsitMstpSrasWrflDnon", 0.1,
				"LadderRifleOn", 1,
				"AmovPercMstpSnonWnonDnon_AcinPknlMwlkSnonWnonDb_1", 0.1,
				"Acts_TreatingWounded_in", 10e-5,
				"Acts_SignalToCheck", 0.001,
				"Acts_AidlPercMstpSlowWrflDnon_pissing", 0.001,
				"AmovPercMstpSrasWrflDnon_AmovPercMstpSrasWlnrDnon", 0.02,
				"AmovPercMstpSrasWrflDnon_AmovPercMstpSrasWpstDnon", 0.02,
				"Acts_RifleLowStand_Default", 1
			};
		};

		class AmovPercMstpSrasWpstDnon;
		class AmovPknlMstpSrasWpstDnon: AmovPercMstpSrasWpstDnon
		{
			interpolateTo[] =
			{
				"AidlPknlMstpSrasWpstDnon_AI", 0.02,
				"AinvPknlMstpSlayWpstDnon_medicIn", 0.02,
				"AinvPknlMstpSlayWpstDnon_medicOtherIn", 0.02,
				"AmovPknlMstpSrasWpstDnon_turnL", 0.02,
				"AmovPknlMstpSrasWpstDnon_turnR", 0.02,
				"AmovPknlMwlkSrasWpstDf", 0.02,
				"AmovPknlMwlkSrasWpstDfl", 0.02,
				"AmovPknlMwlkSrasWpstDl", 0.02,
				"AmovPknlMwlkSrasWpstDbl", 0.02,
				"AmovPknlMwlkSrasWpstDb", 0.02,
				"AmovPknlMwlkSrasWpstDbr", 0.02,
				"AmovPknlMwlkSrasWpstDr", 0.02,
				"AmovPknlMwlkSrasWpstDfr", 0.02,
				"AmovPknlMrunSrasWpstDf", 0.02,
				"AmovPknlMrunSrasWpstDfl", 0.02,
				"AmovPknlMrunSrasWpstDl", 0.02,
				"AmovPknlMrunSrasWpstDbl", 0.02,
				"AmovPknlMrunSrasWpstDb", 0.02,
				"AmovPknlMrunSrasWpstDbr", 0.02,
				"AmovPknlMrunSrasWpstDr", 0.02,
				"AmovPknlMrunSrasWpstDfr", 0.02,
				"Unconscious", 0.02,
				"AovrPercMstpSrasWpstDf", 0.02,
				"AmovPercMstpSrasWpstDnon_AcinPknlMwlkSnonWpstDb_2", 0.2,
				"AmovPknlMstpSrasWpstDnon_relax", 0.2,
				"AinvPercMstpSrasWrflDnon", 0.05,
				"AmovPknlMstpSrasWpstDnon_AinvPknlMstpSrasWpstDnon", 0.02,
				"AmovPknlMstpSrasWpstDnon_AinvPknlMstpSrasWpstDnon_Putdown", 0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPercMstpSrasWpstDnon", 0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPercMsprSrasWpstDf", 0.01,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon", 0.02,
				"AfalPknlMstpSrasWpstDnon", 0.025,
				"Campaign_Base", 0.01,
				"AmovPknlMlmpSrasWpstDfl", 0.05,
				"AmovPknlMlmpSrasWpstDf", 0.05,
				"AmovPknlMlmpSrasWpstDl", 0.05,
				"AmovPknlMlmpSrasWpstDbl", 0.05,
				"AmovPknlMlmpSrasWpstDb", 0.05,
				"AmovPknlMlmpSrasWpstDbr", 0.05,
				"AmovPknlMlmpSrasWpstDr", 0.05,
				"AmovPknlMlmpSrasWpstDfr", 0.05,
				"UnconsciousMedicFromPistolKneel", 0.2
			};
		};

		class AmovPknlMstpSlowWrflDnon;
		class AmovPknlMstpSrasWrflDnon: AmovPknlMstpSlowWrflDnon
		{
			connectTo[] =
			{
				"AidlPknlMstpSlowWrflDnon_AI", 0.1,
				"AmovPknlMstpSrasWrflDnon", 0.02,
				"WeaponMagazineReloadKneel", 0.1,
				"AmovPknlMstpSrasWrflDnon_AmovPknlMstpSlowWrflDnon", 0.02,
				"AmovPknlMstpSrasWrflDnon_AmovPknlMstpSrasWpstDnon", 0.02,
				"AmovPknlMstpSrasWrflDnon_AmovPknlMstpSrasWlnrDnon", 0.02,
				"AmovPknlMstpSrasWrflDnon_AwopPknlMstpSoptWbinDnon", 0.02,
				"AmovPknlMstpSrasWrflDnon_AinvPknlMstpSrasWrflDnon", 0.02,
				"AmovPknlMstpSrasWrflDnon_AmovPknlMstpSnonWnonDnon", 0.02, //change
				"AmovPknlMstpSrasWrflDnon_AinvPknlMstpSrasWrflDnon_Putdown", 0.02,
				"AwopPknlMstpSgthWrflDnon_Start", 0.1,
				"AwopPknlMstpSgthWrflDnon_End", 0.1,
				"AmovPknlMstpSrasWrflDnon_AadjPknlMstpSrasWrflDup", 0.02,
				"AmovPknlMstpSrasWrflDnon_AadjPknlMstpSrasWrflDdown", 0.02,
				"AmovPknlMstpSrasWrflDnon_AadjPknlMstpSrasWrflDleft", 0.02,
				"AmovPknlMstpSrasWrflDnon_AadjPknlMstpSrasWrflDright", 0.02,
				"AmovPknlMstpSrasWrflDnon_AmovPknlMstpSrasWrflDnon_gear", 0.02,
				"AmovPknlMstpSrasWrflDnon_AmovPknlMrunSlowWrflDf", 0.01
			};
			interpolateTo[] =
			{
				"AmovPknlMstpSrasWrflDnon_turnL", 0.02,
				"AmovPknlMstpSrasWrflDnon_turnR", 0.02,
				"AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon", 0.02, //change
				"AmovPknlMstpSrasWrflDnon_AmovPpneMstpSrasWrflDnon", 0.02, //change
				"AidlPknlMstpSrasWrflDnon_AI", 0.02,
				"AinvPknlMstpSnonWrflDnon_AinvPknlMstpSnonWrflDnon_medic", 0.02,
				"AmovPknlMwlkSrasWrflDf", 0.02,
				"AmovPknlMwlkSrasWrflDfl", 0.02,
				"AmovPknlMwlkSrasWrflDl", 0.02,
				"AmovPknlMwlkSrasWrflDbl", 0.02,
				"AovrPercMstpSrasWrflDf", 1.02,
				"AmovPknlMwlkSrasWrflDb", 0.02,
				"AmovPknlMwlkSrasWrflDbr", 0.02,
				"AmovPknlMwlkSrasWrflDr", 0.02,
				"AmovPknlMwlkSrasWrflDfr", 0.02,
				"AmovPknlMrunSrasWrflDf", 0.02,
				"AmovPknlMrunSrasWrflDfl", 0.02,
				"AmovPknlMrunSrasWrflDfr", 0.02,
				"AmovPknlMrunSrasWrflDl", 0.02,
				"AmovPknlMrunSrasWrflDbl", 0.02,
				"AmovPknlMrunSrasWrflDb", 0.02,
				"AmovPknlMrunSrasWrflDbr", 0.02,
				"AmovPknlMrunSrasWrflDr", 0.02,
				"AmovPknlMrunSrasWrflDf_ldst", 0.02,
				"AmovPknlMrunSrasWrflDfl_ldst", 0.02,
				"AmovPknlMrunSrasWrflDl_ldst", 0.02,
				"AmovPknlMrunSrasWrflDbl_ldst", 0.02,
				"AmovPknlMrunSrasWrflDb_ldst", 0.02,
				"AmovPknlMrunSrasWrflDbr_ldst", 0.02,
				"AmovPknlMrunSrasWrflDr_ldst", 0.02,
				"AmovPknlMrunSrasWrflDfr_ldst", 0.02,
				"AmovPknlMevaSrasWrflDr", 0.025,
				"AmovPknlMevaSrasWrflDl", 0.025,
				"AmovPknlMtacSrasWrflDf", 0.02,
				"AmovPknlMtacSrasWrflDfl", 0.02,
				"AmovPknlMtacSrasWrflDl", 0.02,
				"AmovPknlMtacSrasWrflDbl", 0.02,
				"AmovPknlMtacSrasWrflDb", 0.02,
				"AmovPknlMtacSrasWrflDbr", 0.02,
				"AmovPknlMtacSrasWrflDr", 0.02,
				"AmovPknlMtacSrasWrflDfr", 0.02,
				"Unconscious", 0.02,
				"AmovPercMstpSlowWrflDnon_AcinPknlMwlkSlowWrflDb_2", 0.2,
				"ReloadGM6", 0.2,
				"DismountOptic", 0.2,
				"MountOptic", 0.2,
				"MountSide", 0.2,
				"DismountSide", 0.2,
				"AmovPknlMstpSlowWrflDnon_relax", 10.2,
				"AinvPknlMstpSnonWrflDnon_medicUp", 0.2,
				"AinvPknlMstpSlayWrflDnon_medic", 0.05,
				"AinvPknlMstpSlayWrflDnon_medicOther", 0.05,
				"AmovPknlMstpSlowWrflDnon_AmovPknlMstpSrasWrflDnon", 0.02,
				"AmovPercMstpSrasWrflDnon_AmovPknlMstpSrasWrflDnon", 0.02,
				"AfalPknlMstpSrasWrflDnon", 0.025,
				"AinvPknlMstpSnonWrflDr_medic1", 0.05,
				"AinvPknlMstpSnonWrflDr_medic2", 0.05,
				"AinvPknlMstpSnonWrflDr_medic3", 0.05,
				"AinvPknlMstpSnonWrflDr_medic4", 0.05,
				"AinvPknlMstpSnonWrflDr_medic5", 0.05,
				"Campaign_Base", 0.01,
				"AmovPknlMlmpSrasWrflDf", 0.05,
				"AmovPknlMlmpSrasWrflDfl", 0.05,
				"AmovPknlMlmpSrasWrflDl", 0.05,
				"AmovPknlMlmpSrasWrflDbl", 0.05,
				"AmovPknlMlmpSrasWrflDb", 0.05,
				"AmovPknlMlmpSrasWrflDbr", 0.05,
				"AmovPknlMlmpSrasWrflDr", 0.05,
				"AmovPknlMlmpSrasWrflDfr", 0.05,
				"Acts_SupportTeam_Front_StartMove", 1,
				"Acts_SupportTeam_Right_StartMove", 1,
				"Acts_SupportTeam_Left_StartMove", 1,
				"Acts_SupportTeam_Back_StartMove", 1,
				"UnconsciousMedicFromRifleKneel", 0.2
			};
		};
		class AmovPknlMrunSrasWrflDf: AmovPknlMstpSrasWrflDnon
		{
			interpolateTo[] =
			{
				"AmovPercMrunSrasWrflDf", 0.03,
				"AmovPknlMwlkSrasWrflDf", 0.025,
				"AmovPknlMrunSrasWrflDfl", 0.025,
				"AmovPknlMrunSrasWrflDfr", 0.025,
				"AmovPknlMrunSlowWrflDf", 0.025,
				"AmovPknlMevaSrasWrflDf", 0.025,
				"Unconscious", 0.02,
				"AmovPknlMtacSrasWrflDf", 0.02,
				"AmovPknlMstpSrasWrflDnon", 0.03,
				"AmovPknlMstpSlowWrflDnon_relax", 0.1,
				"AmovPercMrunSlowWrflDf_AmovPpneMstpSrasWrflDnon", 0.02
			};
		};

		class AmovPercMstpSnonWnonDnon: StandBase
		{
			mask = "weaponSwitching";
		};
		class AmovPercMrunSnonWnonDf: AmovPercMstpSnonWnonDnon
		{
			delete soundEdge;

			interpolateTo[] =
			{
				"AmovPercMstpSnonWnonDnon", 0.025,
				"AmovPercMwlkSnonWnonDf", 0.025,
				"AmovPknlMrunSnonWnonDf", 0.025,
				"AmovPercMrunSnonWnonDfl", 0.025,
				"AmovPercMrunSnonWnonDfr", 0.025,
				"AmovPercMrunSnonWnonDl", 0.025,
				"AmovPercMrunSnonWnonDr", 0.025,
				"AmovPercMevaSnonWnonDf", 0.025,
				"AmovPercMevaSnonWnonDf", 0.025,
				"AmovPercMrunSnonWnonDf_AmovPpneMstpSnonWnonDnon", 0.019,
				"Unconscious", 0.02
			};
		};
		class AmovPercMrunSnonWnonDfl: AmovPercMrunSnonWnonDf
		{
			interpolateTo[] =
			{
				"AmovPercMrunSnonWnonDf", 0.02,
				"AmovPercMstpSnonWnonDnon", 0.025,
				"AmovPercMwlkSnonWnonDfl", 0.025,
				"AmovPercMrunSnonWnonDl", 0.025,
				"AmovPercMrunSnonWnonDfr", 0.025,
				"AmovPknlMrunSnonWnonDfl", 0.03,
				"AmovPercMevaSnonWnonDfl", 0.02,
				"AmovPercMrunSnonWnonDf_AmovPpneMstpSnonWnonDnon", 0.019,
				"Unconscious", 0.02
			};
		};
		class AmovPercMrunSnonWnonDfr: AmovPercMrunSnonWnonDf
		{
			interpolateTo[] =
			{
				"AmovPercMrunSnonWnonDf", 0.025,
				"AmovPercMstpSnonWnonDnon", 0.025,
				"AmovPercMwlkSnonWnonDfr", 0.025,
				"AmovPercMrunSnonWnonDr", 0.025,
				"AmovPercMrunSnonWnonDfl", 0.025,
				"AmovPknlMrunSnonWnonDfr", 0.03,
				"AmovPercMevaSnonWnonDfr", 0.02,
				"AmovPercMrunSnonWnonDf_AmovPpneMstpSnonWnonDnon", 0.019,
				"Unconscious", 0.02
			};
		};

		class AmovPknlMstpSnonWnonDnon: AmovPercMstpSnonWnonDnon
		{
			connectTo[] =
			{
				"AmovPknlMstpSnonWnonDnon_gear", 0.02,
				"AmovPercMstpSnonWnonDnon_gear", 0.02,
				"AmovPknlMstpSnonWnonDnon_AmovPknlMstpSrasWlnrDnon", 0.019,
				"AmovPknlMstpSnonWnonDnon_AmovPknlMstpSrasWpstDnon", 0.02,
				"AmovPknlMstpSnonWnonDnon_AmovPknlMstpSrasWrflDnon", 0.02,
				"AmovPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon", 0.02,
				"AmovPknlMstpSnonWnonDnon_AmovPercMsprSnonWnonDf", 0.01,
				"AmovPknlMstpSnonWnonDnon_AmovPpneMstpSnonWnonDnon", 0.02,
				"AmovPknlMstpSnonWnonDnon_AwopPknlMstpSoptWbinDnon", 0.02,
				"AmovPknlMstpSnonWnonDnon", 0.02
			};
		};
		class AmovPknlMrunSnonWnonDf: AmovPknlMstpSnonWnonDnon
		{
			interpolateTo[] =
			{
				"AmovPercMrunSnonWnonDf", 0.03,
				"AmovPknlMstpSnonWnonDnon", 0.025,
				"AmovPknlMwlkSnonWnonDf", 0.025,
				"AmovPknlMrunSnonWnonDfl", 0.025,
				"AmovPknlMrunSnonWnonDfr", 0.025,
				"AmovPknlMevaSnonWnonDf", 0.025,
				"Unconscious", 0.02,
				"AmovPercMrunSnonWnonDf_AmovPpneMstpSnonWnonDnon", 0.019,
				"AmovPknlMstpSnonWnonDnon_relax", 0.1
			};
		};
		class AmovPknlMrunSnonWnonDfl: AmovPknlMrunSnonWnonDf
		{
			interpolateTo[] =
			{
				"AmovPknlMstpSnonWnonDnon", 0.025,
				"AmovPercMrunSnonWnonDfl", 0.03,
				"AmovPknlMrunSnonWnonDf", 0.025,
				"AmovPknlMwlkSnonWnonDfl", 0.025,
				"AmovPknlMrunSnonWnonDl", 0.025,
				"AmovPknlMevaSnonWnonDfl", 0.025,
				"AmovPknlMstpSnonWnonDnon_AmovPercMsprSnonWnonDf", 0.01,
				"Unconscious", 0.02,
				"AmovPercMrunSnonWnonDf_AmovPpneMstpSnonWnonDnon", 0.019,
				"AmovPknlMstpSnonWnonDnon_relax", 0.1
			};
		};
		class AmovPknlMrunSnonWnonDfr: AmovPknlMrunSnonWnonDf
		{
			interpolateTo[] =
			{
				"AmovPknlMstpSnonWnonDnon", 0.025,
				"AmovPercMrunSnonWnonDfr", 0.03,
				"AmovPknlMrunSnonWnonDf", 0.025,
				"AmovPknlMwlkSnonWnonDfr", 0.025,
				"AmovPknlMrunSnonWnonDr", 0.025,
				"AmovPknlMevaSnonWnonDfr", 0.025,
				"AmovPknlMstpSnonWnonDnon_AmovPercMsprSnonWnonDf", 0.01,
				"Unconscious", 0.02,
				"AmovPercMrunSnonWnonDf_AmovPpneMstpSnonWnonDnon", 0.019,
				"AmovPknlMstpSnonWnonDnon_relax", 0.1
			};
		};

		class AmovPpneMstpSnonWnonDnon: AmovPercMstpSnonWnonDnon
		{
			connectTo[] =
			{
				"AmovPpneMstpSnonWnonDnon", 0.02,
				"AmovPpneMstpSnonWnonDnon_AmovPknlMstpSnonWnonDnon", 0.019, //move this to higher priority
				"AmovPpneMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon", 0.02,
				"AmovPpneMstpSnonWnonDnon_AmovPercMsprSnonWnonDf", 0.05,
				"AmovPpneMstpSnonWnonDnon_AmovPpneMstpSrasWrflDnon", 0.01,
				"AmovPpneMstpSnonWnonDnon_AmovPpneMstpSrasWpstDnon", 0.02,
				"AmovPpneMstpSnonWnonDnon_AwopPpneMstpSoptWbinDnon", 0.02,
				"AmovPpneMstpSnonWnonDnon_AmovPpneMevaSnonWnonDl", 0.02,
				"AmovPpneMstpSnonWnonDnon_AmovPpneMevaSnonWnonDr", 0.02,
				"AmovPpneMstpSnonWnonDnon_AmovPsitMstpSnonWnonDnon_ground", 0.1,
				"AwopPpneMstpSgthWnonDnon_start", 0.1,
				"AmovPpneMstpSnonWnonDnon_healed", 0.02,
				"AmovPpneMstpSnonWnonDnon_injured", 0.1
			};
		};

		class AmovPercMstpSlowWrflDnon_AmovPknlMstpSlowWrflDnon: AmovPknlMstpSlowWrflDnon
		{
			interpolateTo[] +=
			{
				"AmovPknlMstpSlowWrflDnon_AmovPercMstpSlowWrflDnon", 0.0098
			};
			mask = "weaponSwitching";
			soundOverride = "adjust_stand_to_kneel";
			speed = 1.8181;
		};
		class AmovPknlMstpSlowWrflDnon_AmovPercMstpSlowWrflDnon: AmovPercMstpSlowWrflDnon
		{
			interpolateTo[] +=
			{
				"AmovPercMstpSlowWrflDnon_AmovPknlMstpSlowWrflDnon", 0.0098
			};
			mask = "weaponSwitching";
			soundOverride = "adjust_kneel_to_stand";
			speed = 1.8181;
		};

		class AmovPpneMstpSrasWrflDnon_AmovPercMsprSlowWrflDf: TransAnimBase
		{
			connectTo[] = { };
			interpolateTo[] =
			{
				"AmovPpneMstpSrasWrflDnon_AmovPercMsprSlowWrflDf_2", 0.005,
				"Unconscious", 0.02
			};
			interpolationSpeed = 10;
			leftHandIKCurve[] = { 0, 0, 0.25, 0, 1, 1 };
			minPlayTime = 0.7;
			weaponIK = 1;
		};
		class AmovPpneMstpSrasWrflDnon_AmovPercMsprSlowWrflDf_2: AmovPpneMstpSrasWrflDnon_AmovPercMsprSlowWrflDf
		{
			interpolateTo[] =
			{
				"AmovPercMevaSrasWrflDf", 0.005,
				"AmovPercMevaSrasWrflDfl", 0.005,
				"AmovPercMevaSrasWrflDfr", 0.005,
				"Unconscious", 0.02,
				"AmovPercMstpSlowWrflDnon", 0.05,
				"AmovPercMsprSlowWrflDf_AmovPpneMstpSrasWrflDnon", 0.02
			};
			interpolationSpeed = 4;
			leftHandIKCurve[] = { 1 };
			minPlayTime = 0;
			speed = 0.5;
		};

		//adding knl to pne (can't do "from" for some reason...)
		class AmovPknlMstpSrasWlnrDnon: Default
		{
			connectTo[] =
			{
				"AmovPknlMstpSrasWlnrDnon_AmovPercMstpSrasWlnrDnon", 0.02,
				"AmovPknlMstpSrasWlnrDnon_AmovPknlMstpSrasWrflDnon", 0.02,
				"AmovPknlMstpSrasWlnrDnon_AmovPknlMstpSrasWpstDnon", 0.02,
				"AmovPknlMstpSrasWlnrDnon_AwopPknlMstpSoptWbinDnon", 0.02,
				"AmovPknlMstpSrasWlnrDnon_AmovPpneMstpSrasWlnrDnon", 0.02, //add this
				"AmovPknlMstpSrasWlnrDnon_AmovPercMstpSnonWnonDnon", 0.03,
				"AmovPknlMstpSrasWlnrDnon_AmovPpneMstpSnonWnonDnon", 0.02,
				"AmovPknlMstpSrasWlnrDnon_AmovPknlMstpSnonWnonDnon", 0.02,
				"ReloadRPGKneel", 0.5,
				"AmovPknlMstpSrasWlnrDnon", 0.02
			};
		};

		//fix getting up when down
		class AmovPpneMstpSrasWrflDnon_injured;
		class AinjPpneMstpSnonWrflDnon: AmovPpneMstpSrasWrflDnon_injured
		{
			interpolateTo[] =
			{
				"UnconsciousReviveDefault", 0.02,
				"Unconscious", 0.02
			};
		};

		class AmovPpneMstpSnonWnonDnon_injured;
		class AinjPpneMstpSnonWnonDnon: AmovPpneMstpSnonWnonDnon_injured
		{
			interpolateTo[] =
			{
				"Unconscious", 0.02,
				"AinjPpneMrunSnonWnonDb_grab", 0.1,
				"UnconsciousReviveDefault", 0.02
			};
		};

		//change connect to interp
		class AmovPercMsprSnonWnonDf_AmovPpneMstpSnonWnonDnon_2: AmovPpneMstpSnonWnonDnon
		{
			connectTo[] = { };
			interpolateTo[] =
			{
				"AmovPpneMstpSnonWnonDnon", 0.02
			};
			minPlayTime = 0.9;
		};

		class AmovPpneMstpSrasWlnrDnon_AmovPknlMstpSrasWlnrDnon: TransAnimBase
		{
			interpolateTo[] =
			{
				"AmovPknlMstpSrasWlnrDnon_AmovPpneMstpSrasWlnrDnon", 0.02,
				"Unconscious", 0.02
			};
			reverse = "AmovPknlMstpSrasWlnrDnon_AmovPpneMstpSrasWlnrDnon";
		};

		//fix crouched non-pistol looping
		class AmovPknlMstpSrasWpstDnon_AmovPknlMstpSnonWnonDnon;
		class AmovPknlMstpSnonWnonDnon_AmovPknlMstpSrasWpstDnon: AmovPknlMstpSrasWpstDnon_AmovPknlMstpSnonWnonDnon
		{
			actions = "PistolKneelActions";
		};

		class AmovPknlMstpSrasWrflDnon_AmovPknlMstpSnonWnonDnon: AmovPknlMstpSnonWnonDnon
		{
			connectTo[] =
			{
				"AmovPknlMstpSnonWnonDnon", 0.019,
				"AmovPknlMstpSnonWnonDnon_gear", 0.02,
				"AmovPercMstpSnonWnonDnon_gear", 0.02,
				"AmovPknlMstpSnonWnonDnon_AmovPknlMstpSrasWlnrDnon", 0.019,
				"AmovPknlMstpSnonWnonDnon_AmovPknlMstpSrasWpstDnon", 0.02,
				"AmovPknlMstpSnonWnonDnon_AmovPknlMstpSrasWrflDnon", 0.02,
				"AmovPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon", 0.02,
				"AmovPknlMstpSnonWnonDnon_AmovPercMsprSnonWnonDf", 0.02,
				"AmovPknlMstpSnonWnonDnon_AmovPpneMstpSnonWnonDnon", 0.02,
				"AmovPknlMstpSnonWnonDnon_AwopPknlMstpSoptWbinDnon", 0.02
			};
		};
	};
};
