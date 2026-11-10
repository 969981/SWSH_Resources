/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002183d0; name: FUN_002183d0
 */


void FUN_002183d0(undefined8 *param_1)

{
  char *local_58;
  char *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_58 = "PtrTable";
  local_50 = (char *)0x0;
  local_40 = 0;
  local_48 = 0x1000000000;
  local_38 = 1;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "void";
  local_50 = "mSingle";
  local_38 = 8;
  local_48 = 0x800000000;
  local_40 = 1;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxU16";
  local_50 = "mCount";
  local_38 = 0;
  local_40 = 1;
  local_48 = 0x200000008;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "bool";
  local_50 = "mOwnsMemory";
  local_48 = 0x10000000a;
  local_38 = 0;
  local_40 = 1;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "bool";
  local_50 = "mBufferUsed";
  local_38 = 0;
  local_48 = 0x10000000b;
  local_40 = 1;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  memcpy(&local_58,&PTR_DAT_025e42e8,0x28);
  (**(code **)*param_1)(param_1,&local_58,0x28);
  return;
}


