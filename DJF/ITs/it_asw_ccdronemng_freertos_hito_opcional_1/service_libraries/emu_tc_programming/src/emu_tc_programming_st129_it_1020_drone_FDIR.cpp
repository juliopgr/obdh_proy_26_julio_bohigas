/*
 * emu_tc_programming.cpp
 *
 *  Created on: Jan 13, 2017
 *
 *  Created on: Oct 26, 2024
 *      Author: Oscar Rodriguez Polo
 */

/****************************************************************************
 *
 *   This program is free software; you can redistribute it and/or
 *   modify it under the terms of the GNU General Public License
 *   as published by the Free Software Foundation; either version 2
 *   of the License, or (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307,USA.
 *
 *
 ****************************************************************************/


#include <public/emu_hw_timecode_drv_v1.h>
#include <public/emu_sc_channel_drv_v1.h>
#include <public/emu_gss_v1.h>


#define IT_UAH_DRONE_FDIR_1020


#ifdef IT_UAH_DRONE_FDIR_1020

#define FT_1020_TIME_step7 (OBT_AFTER_POWER_ON + 1)
#define FT_1020_TIME_step0 (OBT_AFTER_POWER_ON + 3)
#define FT_1020_TIME_step1 (OBT_AFTER_POWER_ON + 4)
#define FT_1020_TIME_step2 (OBT_AFTER_POWER_ON + 5)
#define FT_1020_TIME_step3 (OBT_AFTER_POWER_ON + 6)
#define FT_1020_TIME_step4 (OBT_AFTER_POWER_ON + 10)
#define FT_1020_TIME_step5 (OBT_AFTER_POWER_ON + 12)
#define FT_1020_TIME_step6 (OBT_AFTER_POWER_ON + 14)

#define FDIR_WIND_FLOAT_LIMIT 22.0
#define FDIR_WIND_UINT32_LIMIT ((4096.0/60.0)*FDIR_WIND_FLOAT_LIMIT)



EmuGSS_TCProgram5_5 prog_FT_00X1_stepy(FT_1020_TIME_step7
,"FT_SOLO_EPD_ICU_SERV_05_00XX_StepY, Habilita EvID  0X4004 "
    ,0x4004);



EmuGSS_TCProgram12_5_Limit_UINT32 prog_FT_1020_step_0(FT_1020_TIME_step0,
		"IT_UAH_DRONE_FDIR_1020 step 0, Config PMODID 0 for monitoring PID UAH_DRONE_Wind ",
			0, UAH_DRONE_Wind, 1, 2 ,0 , 0x4001, FDIR_WIND_UINT32_LIMIT, 0x4004);

EmuGSS_TCProgram19_1_Action_129_4 prog_FT_1020_step_1(FT_1020_TIME_step1,
					"IT_UAH_DRONE_FDIR_1020 step 1, 0x4004 Action is Abort Flight",
					0x4004);


//TODO Complete steps 2, 3, 4, 5 & 6 to implement the Drone FDIR test 

EmuGSS_TCProgram19_4 prog_FT_1020_step2(FT_1020_TIME_step2,
		"IT_UAH_DRONE_FDIR_1020 step 2, 0x4004 Action enabled",
		0x4004);


EmuGSS_TCProgram12_1 prog_FT_1020_step3(FT_1020_TIME_step3,
		"IT_UAH_DRONE_FDIR_1020 step 3, Enable Monitoring PMODID 0", 0);


EmuGSS_TCProgram129_2 prog_FT_1020_step4(FT_1020_TIME_step4,
		"IT_UAH_DRONE_1010 step 4, Set PID Params to 0.2, 0.15, 0.05",0.2,0.15,0.05);

EmuGSS_TCProgram129_1 prog_FT_1020_step5(FT_1020_TIME_step5,
		"IT_UAH_DRONE_1010 step 5, Set Flight Plan x=150.5, y=90.5, z=30.2",150.5,90.5,30.2);


EmuGSS_TCProgram129_3 prog_FT_1020_step6(FT_1020_TIME_step6,
		"IT_UAH_DRONE_1010 step 6, Exec Flight Plan");




/*
EmuGSS_TCProgram129_2 prog_IT_1010_step_0(FT_1020_TIME_step0,
		"IT_UAH_DRONE_1010 step 0, Set PID Params to 0.15, 0.1, 0.05",0.15,0.1,0.05);

EmuGSS_TCProgram129_1 prog_IT_1010_step_1(FT_1020_TIME_step1,
		"IT_UAH_DRONE_1010 step 1, Set Flight Plan x=-40.0, y=-120.5, z=18.3",-40.0,-120.5,18.3);

EmuGSS_TCProgram129_3 prog_IT_1010_step_2(FT_1020_TIME_step2,
		"IT_UAH_DRONE_1010 step 2, Exec Flight Plan");

EmuGSS_TCProgram129_4 prog_IT_1010_step_3(FT_1020_TIME_step3,
		"IT_UAH_DRONE_1010 step 3, Abort Flight Plan");


		*/




#endif
