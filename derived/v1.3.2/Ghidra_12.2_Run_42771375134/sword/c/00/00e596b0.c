/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e596b0; name: FUN_00e596b0
 */


void FUN_00e596b0(long *param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  uint *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  
  if ((*(ushort *)((long)param_4 - (long)*param_4) < 5) ||
     (uVar4 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[2], uVar4 == 0)) {
    lVar3 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_4 + uVar4);
    lVar3 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_00dc3840(param_1,param_2,param_3,lVar3);
  puVar2 = PTR_DAT_0271fbf8;
  param_1[0x8c] = 0;
  *(undefined2 *)(param_1 + 0x8d) = 0;
  param_1[9] = (long)(puVar2 + 0x1a0);
  param_1[10] = (long)(puVar2 + 0x1e0);
  *param_1 = (long)(puVar2 + 0x10);
  *(uint *)((long)param_1 + 0x38c) = *(uint *)((long)param_1 + 0x38c) | 0x2000;
  return;
}


