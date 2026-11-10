/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e9c040; name: FUN_00e9c040
 */


void FUN_00e9c040(long param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  
  iVar2 = FUN_00ecec10();
  if (iVar2 != 6) {
    plVar1 = *(long **)(*(long *)PTR_DAT_02717c48 + 0x148);
    if (*(long **)(*(long *)PTR_DAT_02717c48 + 0x150) == plVar1) {
      return;
    }
    lVar3 = *plVar1;
    if (lVar3 == 0) {
      return;
    }
    uVar4 = FUN_00ebaaa0(lVar3,iVar2);
    if ((uVar4 & 1) != 0) {
      FUN_00ea1d20(param_1);
      if (*(char *)(param_1 + 0x6ce) == '\0') {
        FUN_00dc04c0(param_1,&DAT_02160e40,1,0,0);
        *(undefined1 *)(param_1 + 0x6ce) = 1;
        return;
      }
      return;
    }
  }
  if (*(char *)(param_1 + 0x6ce) == '\0') {
    return;
  }
  FUN_00dc0720(param_1,&DAT_02160e40);
  *(undefined1 *)(param_1 + 0x6ce) = 0;
  return;
}


