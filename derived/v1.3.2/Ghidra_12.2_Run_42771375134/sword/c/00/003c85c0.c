/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c85c0; name: FUN_003c85c0
 */


void FUN_003c85c0(undefined8 *param_1)

{
  char *local_68;
  char *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_48 = 1;
  local_50 = 0;
  local_58 = 0x2000000000;
  local_68 = "Dy::ArticulationCore";
  local_60 = (char *)0x0;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "PxU32";
  local_60 = "internalDriveIterations";
  local_48 = 0;
  local_58 = 0x400000000;
  local_50 = 1;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "PxU32";
  local_60 = "externalDriveIterations";
  local_48 = 0;
  local_58 = 0x400000004;
  local_50 = 1;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "PxU32";
  local_60 = "maxProjectionIterations";
  local_48 = 0;
  local_58 = 0x400000008;
  local_50 = 1;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "PxU16";
  local_60 = "solverIterationCounts";
  local_48 = 0;
  local_50 = 1;
  local_58 = 0x20000000c;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "PxReal";
  local_60 = "separationTolerance";
  local_58 = 0x400000010;
  local_48 = 0;
  local_50 = 1;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "PxReal";
  local_60 = "sleepThreshold";
  local_48 = 0;
  local_58 = 0x400000014;
  local_50 = 1;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "PxReal";
  local_60 = "freezeThreshold";
  local_48 = 0;
  local_58 = 0x400000018;
  local_50 = 1;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "PxReal";
  local_60 = "wakeCounter";
  local_48 = 0;
  local_58 = 0x40000001c;
  local_50 = 1;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_50 = 0;
  local_68 = "ArticulationCore";
  local_60 = (char *)0x0;
  local_58 = 0x2800000000;
  local_48 = 1;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "ArticulationSim";
  local_60 = "mSim";
  local_48 = 8;
  local_58 = 0x800000000;
  local_50 = 1;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "Dy::ArticulationCore";
  local_60 = "mCore";
  local_48 = 0;
  local_58 = 0x2000000008;
  local_50 = 1;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  return;
}


