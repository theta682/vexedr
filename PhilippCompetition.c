#pragma config(Motor,  port2,           LeftF,         tmotorVex393_MC29, openLoop, driveLeft)
#pragma config(Motor,  port3,           LeftB,         tmotorVex393_MC29, openLoop, driveLeft)
#pragma config(Motor,  port4,           RightF,        tmotorVex393_MC29, openLoop, reversed, driveRight)
#pragma config(Motor,  port5,           RightB,        tmotorVex393_MC29, openLoop, reversed, driveRight)
#pragma config(Motor,  port6,           ClawLU,        tmotorVex393_MC29, openLoop, reversed, driveLeft)
#pragma config(Motor,  port7,           ClawLD,        tmotorVex393_MC29, openLoop, reversed, driveLeft)
#pragma config(Motor,  port8,           ClawRU,        tmotorVex393_MC29, openLoop, driveRight)
#pragma config(Motor,  port9,           ClawRD,        tmotorVex393_MC29, openLoop, reversed, driveRight)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#pragma competitionControl(Competition)

#include "Vex_Competition_Includes.c"
#include "PhilippVEX.h"

void pre_auton()
{
	bStopTasksBetweenModes = true;
}

task autonomous()
{
/*
	AllForward();
	wait1Msec(3050);
	AllBackward();
	wait1Msec(1000);
*/
	allMotorsOff();
}

task usercontrol()
{
	UserLoop();
}
