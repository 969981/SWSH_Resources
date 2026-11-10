/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cada30; name: FUN_00cada30
 */


ulong FUN_00cada30(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  iVar4 = *(int *)(param_1 + 8);
  uVar3 = *(uint *)PTR_DAT_0271c508;
  if (iVar4 < 1) {
    return (ulong)uVar3;
  }
  uVar6 = (ulong)uVar3;
  lVar8 = 0;
  uVar7 = 0;
  do {
    if (*(ulong *)(*(long *)(param_1 + 0x38) + 0x48) <= uVar7) goto LAB_00cadb88;
    lVar10 = *(long *)(*(long *)(param_1 + 0x38) + 0x40);
    if (((*(long *)(lVar10 + lVar8) != 0) && (lVar10 = lVar10 + lVar8, *(long *)(lVar10 + 8) != 0))
       && (*(char *)(lVar10 + 0x18) == '\0')) {
      if ((uVar3 != (uint)uVar7) || (iVar4 < 1)) {
        return uVar7 & 0xffffffff;
      }
      goto LAB_00cadad0;
    }
    uVar7 = uVar7 + 1;
    lVar8 = lVar8 + 0x28;
  } while ((int)uVar7 < iVar4);
  if (iVar4 < 1) {
    return (ulong)uVar3;
  }
LAB_00cadad0:
  uVar9 = *(ulong *)(*(long *)(param_1 + 0x38) + 0x48);
  lVar8 = 0;
  uVar7 = 0;
  while (uVar7 < uVar9) {
    lVar10 = *(long *)(*(long *)(param_1 + 0x38) + 0x40);
    if (((*(long *)(lVar10 + lVar8) != 0) && (lVar1 = lVar10 + lVar8, *(long *)(lVar1 + 8) != 0)) &&
       (*(int *)(lVar1 + 0x1c) < 1)) {
      uVar5 = (uint)uVar6;
      if (uVar5 == uVar3) {
        uVar6 = uVar7 & 0xffffffff;
      }
      else {
        if (uVar9 <= (ulong)(long)(int)uVar5) break;
        uVar2 = (uint)uVar7;
        if (*(int *)(lVar1 + 0x20) <= *(int *)(lVar10 + (long)(int)uVar5 * 0x28 + 0x20)) {
          uVar2 = uVar5;
        }
        uVar6 = (ulong)uVar2;
      }
    }
    lVar8 = lVar8 + 0x28;
    uVar7 = uVar7 + 1;
    if ((long)iVar4 <= (long)uVar7) {
      return uVar6;
    }
  }
LAB_00cadb88:
                    /* WARNING: Subroutine does not return */
  abort();
}


