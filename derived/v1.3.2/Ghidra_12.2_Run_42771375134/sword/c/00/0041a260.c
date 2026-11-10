/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0041a260; name: FUN_0041a260
 */


void FUN_0041a260(undefined8 param_1,long param_2,int param_3,int param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  *(int *)(param_2 + 0x48) = *(int *)(param_2 + 0x48) + 1;
  if ((*(byte *)(param_2 + 0x5a) >> 1 & 1) != 0) {
    if (*(int *)(param_2 + 0x54) != -1) {
      param_4 = *(int *)(param_2 + 0x54);
    }
  }
  FUN_0041a310(param_2,param_3,param_4);
  iVar1 = FUN_0040eaa0(*(undefined8 *)(param_2 + 0x78));
  if (*(long *)(param_2 + 0x30) != 0) {
    lVar2 = *(long *)(param_2 + 0x30);
    do {
      lVar3 = *(long *)(lVar2 + 8);
      if (((*(byte *)(lVar2 + 0x5a) >> 4 & 1) == 0) && ((*(byte *)(lVar2 + 0x5a) & 3) != 0)) {
        FUN_0041d590(param_1,lVar2,iVar1 + param_3,param_4);
      }
      lVar2 = lVar3;
    } while (lVar3 != 0);
  }
  FUN_00408b50(param_2);
  return;
}


