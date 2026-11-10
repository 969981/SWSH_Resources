/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e57fd0; name: FUN_00e57fd0
 */


void FUN_00e57fd0(long *param_1,undefined8 param_2,undefined8 param_3,int *param_4)

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
  FUN_00ddf1c0(param_1,param_2,param_3,lVar3);
  puVar2 = PTR_DAT_0271fb88;
  *(undefined2 *)((long)param_1 + 0x594) = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[9] = (long)(puVar2 + 0x250);
  param_1[10] = (long)(puVar2 + 0x290);
  FUN_00dc07c0(param_1,&DAT_02160bb0,0xffffffff);
  FUN_00dc07c0(param_1,&DAT_02160bb8,0xffffffff);
  *(uint *)((long)param_1 + 0x38c) = *(uint *)((long)param_1 + 0x38c) | 0x20;
  return;
}


