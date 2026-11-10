/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002117c0; name: FUN_002117c0
 */


void FUN_002117c0(undefined8 *param_1)

{
  char *local_58;
  char *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_40 = 0;
  local_48 = 0x3000000000;
  local_58 = "Scb::Aggregate";
  local_50 = (char *)0x0;
  local_38 = 1;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_38 = 1;
  local_58 = "Scb::Aggregate";
  local_50 = "Scb::Base";
  local_48 = 0x3000000000;
  local_40 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxAggregate";
  local_50 = "mPxAggregate";
  local_48 = 0x800000018;
  local_40 = 1;
  local_38 = 8;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxU32";
  local_50 = "mAggregateID";
  local_48 = 0x400000020;
  local_38 = 0;
  local_40 = 1;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxU32";
  local_50 = "mMaxNbActors";
  local_38 = 0;
  local_48 = 0x400000024;
  local_40 = 1;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "bool";
  local_50 = "mSelfCollide";
  local_38 = 0;
  local_40 = 1;
  local_48 = 0x100000028;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  return;
}


