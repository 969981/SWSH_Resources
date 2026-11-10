/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00de2220; name: FUN_00de2220
 */


void FUN_00de2220(long *param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  uint *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  
  if ((*(ushort *)((long)param_4 - (long)*param_4) < 5) ||
     (uVar3 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[2], uVar3 == 0)) {
    lVar4 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_4 + uVar3);
    lVar4 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_00dbc9a0(param_1,param_2,param_3,lVar4);
  puVar2 = PTR_DAT_0271ec50;
  *param_1 = (long)(PTR_DAT_0271ec50 + 0x10);
  param_1[9] = (long)(puVar2 + 0x248);
  param_1[10] = (long)(puVar2 + 0x288);
  if (*(ushort *)((long)param_4 - (long)*param_4) < 7) {
    param_1[0x98] = 0;
    return;
  }
  uVar3 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[3];
  lVar4 = 0;
  if (uVar3 != 0) {
    lVar4 = *(long *)((long)param_4 + uVar3);
  }
  param_1[0x98] = lVar4;
  return;
}


