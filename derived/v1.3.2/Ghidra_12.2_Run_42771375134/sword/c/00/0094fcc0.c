/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0094fcc0; name: FUN_0094fcc0
 */


/* WARNING: Removing unreachable block (ram,0x0094fce8) */
/* WARNING: Removing unreachable block (ram,0x0094fd50) */

undefined8 FUN_0094fcc0(long param_1)

{
  int *piVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  
  if (*(char *)(param_1 + 0x18) == '\0') {
    return 2;
  }
  uVar2 = *(uint *)(param_1 + 0x14);
  uVar3 = (ulong)uVar2;
  if (uVar2 == 0) {
    return 2;
  }
  if (uVar2 == 1) {
    lVar5 = 0;
    iVar4 = 0;
LAB_0094fd20:
    if (*(int *)(param_1 + lVar5 * 4) == 1) {
      iVar4 = iVar4 + 1;
    }
  }
  else {
    lVar5 = 0;
    iVar4 = 0;
    do {
      piVar1 = (int *)(param_1 + lVar5 * 4);
      lVar5 = lVar5 + 2;
      if (*piVar1 == 1) {
        iVar4 = iVar4 + 1;
      }
      if (piVar1[1] == 1) {
        iVar4 = iVar4 + 1;
      }
    } while (uVar3 - (uVar3 & 1) != lVar5);
    if ((uVar2 & 1) != 0) goto LAB_0094fd20;
  }
  if (iVar4 != 0) {
    return 0;
  }
  if (uVar2 == 1) {
    lVar5 = 0;
    iVar4 = 0;
  }
  else {
    lVar5 = 0;
    iVar4 = 0;
    do {
      piVar1 = (int *)(param_1 + lVar5 * 4);
      lVar5 = lVar5 + 2;
      if (*piVar1 == 3) {
        iVar4 = iVar4 + 1;
      }
      if (piVar1[1] == 3) {
        iVar4 = iVar4 + 1;
      }
    } while (uVar3 - (uVar3 & 1) != lVar5);
    if ((uVar2 & 1) == 0) goto LAB_0094fd94;
  }
  if (*(int *)(param_1 + lVar5 * 4) == 3) {
    iVar4 = iVar4 + 1;
  }
LAB_0094fd94:
  if (iVar4 == 0) {
    return 2;
  }
  return 1;
}


