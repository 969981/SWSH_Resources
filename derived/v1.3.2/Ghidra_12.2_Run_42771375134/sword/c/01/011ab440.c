/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011ab440; name: FUN_011ab440
 */


int FUN_011ab440(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  
  iVar3 = *(int *)(param_1 + 0x20);
  if (0 < iVar3) {
    lVar5 = 0;
    do {
      lVar6 = *(long *)(*(long *)(param_1 + 0x28) + lVar5 * 8 + 8);
      if (*(long *)(lVar6 + 0x18) == 0) {
        uVar4 = 0;
        uVar1 = *(uint *)(lVar6 + 0x20);
        if (uVar1 == 0) goto LAB_011ab4b8;
LAB_011ab48c:
        if (0x7f < uVar1) {
          iVar2 = FUN_0080e440();
          uVar4 = iVar2 + 1 + uVar4;
          *(uint *)(lVar6 + 0x24) = uVar4;
          goto joined_r0x011ab4c0;
        }
        uVar4 = uVar4 + 2;
        *(uint *)(lVar6 + 0x24) = uVar4;
        if (uVar4 < 0x80) goto LAB_011ab4c4;
LAB_011ab4e4:
        iVar2 = FUN_0080e440(uVar4);
      }
      else {
        iVar2 = FUN_0080e480();
        uVar4 = iVar2 + 1;
        uVar1 = *(uint *)(lVar6 + 0x20);
        if (uVar1 != 0) goto LAB_011ab48c;
LAB_011ab4b8:
        *(uint *)(lVar6 + 0x24) = uVar4;
joined_r0x011ab4c0:
        if (0x7f < uVar4) goto LAB_011ab4e4;
LAB_011ab4c4:
        iVar2 = 1;
      }
      iVar3 = uVar4 + iVar3 + iVar2;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x20));
  }
  *(int *)(param_1 + 0x30) = iVar3;
  return iVar3;
}


