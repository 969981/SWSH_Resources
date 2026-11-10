/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c8ff0; name: FUN_003c8ff0
 */


void FUN_003c8ff0(undefined8 *param_1)

{
  char *local_68;
  char *pcStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  FUN_003c91f0();
  local_68 = "Sc::ClothFabricCore";
  pcStack_60 = (char *)0x0;
  local_50 = 0;
  local_58 = 0x2000000000;
  local_48 = 1;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_58 = 0x800000000;
  local_50 = 1;
  local_68 = "void";
  pcStack_60 = "mLowLevelFabric";
  local_48 = 8;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "void";
  pcStack_60 = "mLowLevelGpuFabric";
  local_58 = 0x800000008;
  local_50 = 1;
  local_48 = 8;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_48 = 8;
  local_68 = "void";
  pcStack_60 = "mPhaseTypes.mData";
  local_58 = 0x800000010;
  local_50 = 1;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_48 = 0;
  local_68 = "PxU32";
  pcStack_60 = "mPhaseTypes.mSize";
  local_58 = 0x400000018;
  local_50 = 1;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "PxU32";
  pcStack_60 = "mPhaseTypes.mCapacity";
  local_58 = 0x40000001c;
  local_50 = 1;
  local_48 = 0x800;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "PxU32";
  pcStack_60 = (char *)0x0;
  local_58 = 0x400000018;
  local_50 = 0;
  local_48 = 0x10;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "Sc::ClothFabricBulkData";
  pcStack_60 = (char *)0x0;
  local_58 = 0x7800000000;
  local_50 = 0x800000000;
  local_48 = 0x30;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  return;
}


