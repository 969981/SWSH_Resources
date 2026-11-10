/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e53420; name: FUN_00e53420
 */


void FUN_00e53420(long *param_1,undefined8 param_2,undefined8 param_3,int *param_4)

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
  FUN_00ddccd0(param_1,param_2,param_3,lVar4);
  puVar1 = PTR_DAT_0271fab0 + 0x248;
  puVar2 = PTR_DAT_0271fab0 + 0x288;
  *param_1 = (long)(PTR_DAT_0271fab0 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  return;
}


