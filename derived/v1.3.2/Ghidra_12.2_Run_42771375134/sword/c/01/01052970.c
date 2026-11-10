/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01052970; name: FUN_01052970
 */


void FUN_01052970(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x148);
  iVar1 = *(int *)(lVar3 + 0xe8);
  if (*(int *)(lVar3 + 0xe0) != iVar1) {
    *(int *)(lVar3 + 0xe0) = iVar1;
    *(int *)(*(long *)(lVar3 + 0x148) + 0x1f8) = iVar1;
    iVar1 = *(int *)(*(long *)(lVar3 + 0x148) + 0x2e8);
    if ((iVar1 != 0) &&
       (FUN_00745b40(*(long *)(lVar3 + 0x148),0,0 < *(int *)(lVar3 + 0xe0)), iVar1 != 1)) {
      iVar2 = 1;
      do {
        FUN_00745b40(*(undefined8 *)(lVar3 + 0x148),iVar2,iVar2 < *(int *)(lVar3 + 0xe0));
        iVar2 = iVar2 + 1;
      } while (iVar1 != iVar2);
    }
    *(undefined1 *)(lVar3 + 0xec) = 1;
  }
  return;
}


