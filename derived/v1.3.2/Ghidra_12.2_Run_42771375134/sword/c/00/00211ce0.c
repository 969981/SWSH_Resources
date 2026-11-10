/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00211ce0; name: FUN_00211ce0
 */


void FUN_00211ce0(undefined8 param_1,long param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_d0 [28];
  undefined2 local_b4;
  undefined2 local_32;
  
  local_b4 = 0;
  local_32 = 0;
  lVar1 = FUN_003bd8b0(param_2 + 0x80,auStack_d0);
  uVar2 = lVar1 - param_2;
  (**(code **)(*param_3 + 0x10))(param_3,param_2,uVar2 & 0xffffffff);
  (**(code **)(*param_3 + 0x10))(param_3,auStack_d0,0xa0);
  (**(code **)(*param_3 + 0x10))(param_3,param_2 + (uVar2 & 0xffffffff) + 0xa0,0xe0 - (int)uVar2);
  return;
}


