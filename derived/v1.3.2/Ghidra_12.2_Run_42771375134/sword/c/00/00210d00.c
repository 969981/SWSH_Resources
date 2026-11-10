/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00210d00; name: FUN_00210d00
 */


void FUN_00210d00(undefined8 *param_1)

{
  char *local_68;
  char *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_68 = "ScbType::Enum";
  local_60 = "PxU32";
  local_48 = 4;
  local_58 = 0;
  local_50 = 0;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "Scb::Base";
  local_60 = (char *)0x0;
  local_50 = 0;
  local_58 = 0x1800000000;
  local_48 = 1;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "Scb::Scene";
  local_60 = "mScene";
  local_58 = 0x800000000;
  local_50 = 1;
  local_48 = 8;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "PxU32";
  local_60 = "mControlState";
  local_48 = 0;
  local_58 = 0x400000008;
  local_50 = 1;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "PxU8*";
  local_60 = "mStreamPtr";
  local_50 = 1;
  local_58 = 0x800000010;
  local_48 = 8;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  return;
}


