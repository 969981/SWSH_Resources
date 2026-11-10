/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002d3660; name: FUN_002d3660
 */


void FUN_002d3660(undefined8 *param_1)

{
  char *local_78;
  char *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  local_78 = "MaterialIndicesStruct";
  local_70 = (char *)0x0;
  local_60 = 0;
  local_68 = 0x1000000000;
  local_58 = 1;
  (**(code **)*param_1)(param_1,&local_78,0x28);
  local_68 = 0x800000000;
  local_60 = 1;
  local_78 = "PxU16";
  local_70 = "indices";
  local_58 = 8;
  (**(code **)*param_1)(param_1,&local_78,0x28);
  local_58 = 0;
  local_78 = "PxU16";
  local_70 = "numIndices";
  local_68 = 0x200000008;
  local_60 = 1;
  (**(code **)*param_1)(param_1,&local_78,0x28);
  local_78 = "PxU16";
  local_70 = "pad";
  local_68 = 0x20000000a;
  local_60 = 1;
  local_58 = 0x200;
  (**(code **)*param_1)(param_1,&local_78,0x28);
  local_78 = "PxU32";
  local_70 = "pad64";
  local_60 = 1;
  local_68 = 0x40000000c;
  local_58 = 0x200;
  (**(code **)*param_1)(param_1,&local_78,0x28);
  local_78 = "PxU16";
  local_70 = (char *)0x0;
  local_68 = 0x800000000;
  local_60 = 0x200000008;
  local_58 = 0x1000000050;
  (**(code **)*param_1)(param_1,&local_78,0x28);
  return;
}


