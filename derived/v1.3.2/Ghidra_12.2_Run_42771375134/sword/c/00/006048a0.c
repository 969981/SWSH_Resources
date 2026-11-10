/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006048a0; name: FUN_006048a0
 */


undefined8 FUN_006048a0(long param_1,int *param_2,char param_3,ulong *param_4)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  
  if ((*(byte *)(param_1 + 0x10) >> 1 & 1) == 0) {
    return 0x23;
  }
  if (*param_2 != 0) {
    return 7;
  }
  lVar7 = *(long *)(param_2 + 2);
  if (param_2[6] == 0) {
    uVar3 = param_2[7];
    lVar9 = *(long *)(param_2 + 4);
    lVar5 = lVar7;
  }
  else {
    lVar5 = (long)(lVar7 * (ulong)(uint)param_2[6] + 0x24) / 0x48;
    uVar3 = param_2[7];
    lVar9 = *(long *)(param_2 + 4);
  }
  if (uVar3 == 0) {
    lVar11 = lVar9;
  }
  else {
    lVar11 = (long)(lVar9 * (ulong)uVar3 + 0x24) / 0x48;
  }
  lVar2 = lVar5;
  if (lVar9 != 0) {
    lVar2 = lVar11;
  }
  lVar9 = lVar2;
  if (lVar7 != 0) {
    lVar9 = lVar5;
  }
  if (lVar7 != 0) {
    lVar11 = lVar2;
  }
  uVar1 = lVar9 + 0x20U & 0xffffffffffffffc0;
  if ((uVar1 != 0) && (uVar8 = lVar11 + 0x20U & 0xffffffffffffffc0, uVar8 != 0)) {
    iVar4 = *(int *)(param_1 + 0x38);
    if (iVar4 < 1) {
      return 0x17;
    }
    if (param_3 == '\0') {
      uVar6 = 0;
      plVar10 = (long *)(*(long *)(param_1 + 0x40) + 0x18);
      do {
        if ((uVar8 == (*plVar10 + 0x20U & 0xffffffffffffffc0)) &&
           (uVar1 == (plVar10[-1] + 0x20U & 0xffffffffffffffc0))) goto LAB_00604a08;
        uVar6 = uVar6 + 1;
        plVar10 = plVar10 + 4;
      } while ((long)uVar6 < (long)iVar4);
    }
    else {
      uVar6 = 0;
      plVar10 = (long *)(*(long *)(param_1 + 0x40) + 0x18);
      do {
        if (uVar8 == (*plVar10 + 0x20U & 0xffffffffffffffc0)) {
LAB_00604a08:
          if (param_4 == (ulong *)0x0) {
            return 0;
          }
          *param_4 = uVar6 & 0xffffffff;
          return 0;
        }
        uVar6 = uVar6 + 1;
        plVar10 = plVar10 + 4;
      } while ((long)uVar6 < (long)iVar4);
    }
  }
  return 0x17;
}


