/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013e3250; name: FUN_013e3250
 */


void FUN_013e3250(long param_1,long *param_2,long param_3)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  
  uVar9 = *(ulong *)(param_1 + 0x38);
  lVar4 = *(long *)(param_1 + 8);
  plVar2 = (long *)(lVar4 + (uVar9 >> 6 & 0x3fffffffffffff8));
  if (*(long *)(param_1 + 0x10) == lVar4) {
    lVar3 = 0;
    if (param_3 != 0) goto LAB_013e3298;
LAB_013e32f0:
    uVar13 = 0;
  }
  else {
    lVar3 = *plVar2 + (uVar9 & 0x1ff) * 8;
    if (param_3 == lVar3) goto LAB_013e32f0;
LAB_013e3298:
    uVar7 = (param_3 - *param_2 >> 3) + ((long)param_2 - (long)plVar2) * 0x40;
    uVar13 = uVar7 - (lVar3 - *plVar2 >> 3);
    if (uVar13 != 0) {
      if ((long)uVar7 < 1) {
        uVar11 = 0x1ff - uVar7;
        uVar7 = 0x3fe - uVar7;
        if (-1 < (long)uVar11) {
          uVar7 = uVar11;
        }
        bVar1 = false;
        plVar6 = plVar2 + -((long)uVar7 >> 9);
        lVar8 = plVar2[-((long)uVar7 >> 9)] + ((uVar7 & 0x1ffffffffffffe00) - uVar11) * 8 + 0xff8;
      }
      else {
        plVar6 = (long *)((long)plVar2 + (uVar7 >> 6 & 0x3fffffffffffff8));
        bVar1 = false;
        lVar8 = *plVar6 + (uVar7 & 0x1ff) * 8;
      }
      goto LAB_013e333c;
    }
  }
  bVar1 = true;
  plVar6 = plVar2;
  lVar8 = lVar3;
LAB_013e333c:
  lVar12 = lVar8 - *plVar6;
  lVar10 = lVar12 >> 3;
  uVar7 = lVar10 + 1;
  if (*(long *)(param_1 + 0x40) - 1U >> 1 < uVar13) {
    if (lVar12 < -7) {
      uVar11 = 0x1fe - lVar10;
      uVar7 = 0x3fd - lVar10;
      if (-1 < (long)uVar11) {
        uVar7 = uVar11;
      }
      plVar2 = plVar6 + -((long)uVar7 >> 9);
      lVar3 = *plVar2 + ((uVar7 & 0x1ffffffffffffe00) - uVar11) * 8 + 0xff8;
    }
    else {
      plVar2 = (long *)((long)plVar6 + (uVar7 >> 6 & 0x3fffffffffffff8));
      lVar3 = *plVar2 + (uVar7 & 0x1ff) * 8;
    }
    uVar9 = *(long *)(param_1 + 0x40) + uVar9;
    plVar5 = (long *)(lVar4 + (uVar9 >> 6 & 0x3fffffffffffff8));
    if (*(long *)(param_1 + 0x10) == lVar4) {
      lVar4 = 0;
    }
    else {
      lVar4 = *plVar5 + (uVar9 & 0x1ff) * 8;
    }
    FUN_013e5d20(plVar2,lVar3,plVar5,lVar4,plVar6,lVar8);
    uVar9 = *(ulong *)(param_1 + 0x38);
    lVar8 = *(long *)(param_1 + 0x40) + -1;
    *(long *)(param_1 + 0x40) = lVar8;
    lVar3 = *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8);
    lVar4 = 0;
    if (lVar3 != 0) {
      lVar4 = lVar3 * 0x40 + -1;
    }
    if (0x3ff < lVar4 - (lVar8 + uVar9)) {
      (**(code **)(**(long **)(param_1 + 0x48) + 0x18))
                (*(long **)(param_1 + 0x48),*(undefined8 *)(*(long *)(param_1 + 0x10) + -8),0x1000,8
                );
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -8;
      uVar9 = *(ulong *)(param_1 + 0x38);
    }
  }
  else {
    if (lVar12 < -7) {
      uVar7 = 0x1fe - lVar10;
      uVar9 = 0x3fd - lVar10;
      if (-1 < (long)uVar7) {
        uVar9 = uVar7;
      }
      plVar5 = plVar6 + -((long)uVar9 >> 9);
      lVar4 = *plVar5 + ((uVar9 & 0x1ffffffffffffe00) - uVar7) * 8 + 0xff8;
    }
    else {
      plVar5 = (long *)((long)plVar6 + (uVar7 >> 6 & 0x3fffffffffffff8));
      lVar4 = *plVar5 + (uVar7 & 0x1ff) * 8;
    }
    FUN_013e5aa0(plVar2,lVar3,plVar6,lVar8,plVar5,lVar4);
    uVar9 = *(long *)(param_1 + 0x38) + 1;
    *(ulong *)(param_1 + 0x38) = uVar9;
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + -1;
    if (0x3ff < uVar9) {
      (**(code **)(**(long **)(param_1 + 0x48) + 0x18))
                (*(long **)(param_1 + 0x48),**(undefined8 **)(param_1 + 8),0x1000,8);
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
      uVar9 = *(long *)(param_1 + 0x38) - 0x200;
      *(ulong *)(param_1 + 0x38) = uVar9;
    }
  }
  plVar2 = (long *)(*(long *)(param_1 + 8) + (uVar9 >> 6 & 0x3fffffffffffff8));
  if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 8)) {
    lVar4 = 0;
  }
  else {
    lVar4 = *plVar2 + (uVar9 & 0x1ff) * 8;
  }
  if (bVar1) {
    return;
  }
  if ((long)(uVar13 + (lVar4 - *plVar2 >> 3)) < 1) {
    return;
  }
  return;
}


