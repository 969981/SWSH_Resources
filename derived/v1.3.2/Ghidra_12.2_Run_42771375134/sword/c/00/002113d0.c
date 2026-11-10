/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002113d0; name: FUN_002113d0
 */


void FUN_002113d0(undefined8 *param_1)

{
  char *local_58;
  char *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_40 = 0;
  local_48 = 0x4800000000;
  local_58 = "Scb::Articulation";
  local_50 = (char *)0x0;
  local_38 = 1;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_38 = 1;
  local_58 = "Scb::Articulation";
  local_50 = "Scb::Base";
  local_48 = 0x4800000000;
  local_40 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "ArticulationCore";
  local_50 = "mArticulation";
  local_38 = 0;
  local_40 = 1;
  local_48 = 0x2800000018;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxReal";
  local_50 = "mBufferedWakeCounter";
  local_38 = 0;
  local_40 = 1;
  local_48 = 0x400000040;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxU8";
  local_50 = "mBufferedIsSleeping";
  local_38 = 0;
  local_40 = 1;
  local_48 = 0x100000044;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  return;
}


