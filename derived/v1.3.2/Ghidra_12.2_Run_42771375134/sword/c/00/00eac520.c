/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eac520; name: FUN_00eac520
 */


void FUN_00eac520(long *param_1,undefined8 param_2,undefined8 param_3,int *param_4)

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
  FUN_00e36b10(param_1,param_2,param_3,lVar4);
  puVar2 = PTR_DAT_02720190;
  param_1[0xac] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[9] = (long)(puVar2 + 0x250);
  param_1[10] = (long)(puVar2 + 0x290);
  lVar4 = 0;
  if ((10 < *(ushort *)((long)param_4 - (long)*param_4)) &&
     (uVar3 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[5], lVar4 = 0, uVar3 != 0)) {
    lVar4 = *(long *)((long)param_4 + uVar3);
  }
  param_1[0xac] = lVar4;
  *(uint *)((long)param_1 + 0x38c) = *(uint *)((long)param_1 + 0x38c) | 0x40000;
  return;
}


