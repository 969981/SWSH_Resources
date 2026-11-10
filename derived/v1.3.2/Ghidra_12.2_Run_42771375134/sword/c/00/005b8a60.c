/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005b8a60; name: FUN_005b8a60
 */


int FUN_005b8a60(long param_1)

{
  int iVar1;
  int unaff_w19;
  int iVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 0x40);
  if ((*(long *)(lVar3 + 0x20) == 0) || (*(float *)(lVar3 + 0x74) < 0.0)) {
    iVar2 = -3;
  }
  else {
    if (0 < *(int *)(lVar3 + 0x3c)) {
      lVar4 = 0;
      do {
        iVar1 = (**(code **)(**(long **)(lVar3 + 0x40 + lVar4 * 8) + 0x38))();
        iVar2 = iVar1;
        if (-1 < iVar1) {
          iVar2 = unaff_w19;
        }
        if (iVar1 < 0) {
          return iVar2;
        }
        lVar4 = lVar4 + 1;
        unaff_w19 = iVar2;
      } while (lVar4 < *(int *)(lVar3 + 0x3c));
    }
    iVar2 = 0;
  }
  return iVar2;
}


