/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00930170; name: FUN_00930170
 */


void FUN_00930170(undefined8 param_1,long param_2,ulong param_3)

{
  int *piVar1;
  uint *puVar2;
  long lVar3;
  ulong uVar4;
  char acStack_120 [256];
  
  piVar1 = *(int **)(param_2 + 8);
  puVar2 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
  puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
  if (*puVar2 <= ((uint)param_3 & 0xff)) {
    FUN_00930240(param_1,&DAT_01d38550);
    return;
  }
  puVar2 = puVar2 + (param_3 & 0xff) + 1;
  piVar1 = (int *)((long)puVar2 + (ulong)*puVar2);
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0xd) ||
     (uVar4 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[6], uVar4 == 0)) {
    lVar3 = 0;
  }
  else {
    puVar2 = (uint *)((long)piVar1 + uVar4);
    lVar3 = (long)puVar2 + (ulong)*puVar2;
  }
  snprintf(acStack_120,0x100,"bin/battle/waza/sequence/%s.bseq",(char *)(lVar3 + 4));
  FUN_008801a0(param_1,acStack_120);
  return;
}


