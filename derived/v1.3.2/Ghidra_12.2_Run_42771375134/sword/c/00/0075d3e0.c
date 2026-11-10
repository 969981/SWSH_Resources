/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0075d3e0; name: FUN_0075d3e0
 */


void FUN_0075d3e0(undefined8 *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar1 = *(uint *)(param_1 + 2);
  if (0 < (int)uVar1) {
    uVar4 = *param_1;
    iVar3 = *(int *)(param_1 + 1);
    iVar2 = FUN_0175ef10(uVar4);
    if (0 < iVar2) {
      if ((iVar3 + uVar1 == 0) || (iVar2 == iVar3)) {
        FUN_0175ef30(uVar4,~uVar1);
        return;
      }
      iVar3 = FUN_0175eed0(uVar4,iVar3);
      if (iVar3 < 0) {
        iVar2 = FUN_0175ef10(uVar4);
        iVar3 = iVar3 + iVar2 + 1;
      }
      iVar2 = iVar3;
      do {
        FUN_0175ef90(uVar4,iVar3,0xffffffff);
        FUN_0175ef30(uVar4,0xfffffffe);
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)(iVar3 + uVar1));
    }
  }
  return;
}


