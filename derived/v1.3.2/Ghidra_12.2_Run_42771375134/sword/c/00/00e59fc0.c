/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e59fc0; name: FUN_00e59fc0
 */


void FUN_00e59fc0(long *param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  uint *puVar3;
  long lVar4;
  ulong uVar5;
  
  if ((*(ushort *)((long)param_4 - (long)*param_4) < 5) ||
     (uVar5 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[2], uVar5 == 0)) {
    lVar4 = 0;
  }
  else {
    puVar3 = (uint *)((long)param_4 + uVar5);
    lVar4 = (long)puVar3 + (ulong)*puVar3;
  }
  FUN_00dde190(param_1,param_2,param_3,lVar4);
  puVar1 = PTR_DAT_0271fc00 + 0x1a0;
  puVar2 = PTR_DAT_0271fc00 + 0x1e0;
  *param_1 = (long)(PTR_DAT_0271fc00 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  *(uint *)((long)param_1 + 0x38c) = *(uint *)((long)param_1 + 0x38c) | 0x10000;
  return;
}


