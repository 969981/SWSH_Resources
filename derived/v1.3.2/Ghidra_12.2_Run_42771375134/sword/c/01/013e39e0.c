/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013e39e0; name: FUN_013e39e0
 */


void FUN_013e39e0(long param_1,long *param_2,long param_3,long *param_4,long param_5)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long extraout_x1;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined1 auVar14 [16];
  
  if (param_5 == param_3) {
    lVar13 = 0;
  }
  else {
    lVar13 = ((param_5 - *param_4 >> 3) + ((long)param_4 - (long)param_2) * 0x40) -
             (param_3 - *param_2 >> 3);
  }
  uVar8 = *(ulong *)(param_1 + 0x38);
  lVar6 = *(long *)(param_1 + 8);
  plVar4 = (long *)(lVar6 + (uVar8 >> 6 & 0x3fffffffffffff8));
  plVar3 = plVar4;
  if (*(long *)(param_1 + 0x10) == lVar6) {
    lVar12 = 0;
    if (param_3 != 0) goto LAB_013e3a58;
  }
  else {
    lVar12 = *plVar4 + (uVar8 & 0x1ff) * 8;
    if (param_3 != lVar12) {
LAB_013e3a58:
      uVar2 = (param_3 - *param_2 >> 3) + ((long)param_2 - (long)plVar4) * 0x40;
      uVar11 = uVar2 - (lVar12 - *plVar4 >> 3);
      lVar10 = lVar12;
      if (uVar11 != 0) {
        if ((long)uVar2 < 1) {
          uVar9 = 0x1ff - uVar2;
          uVar2 = 0x3fe - uVar2;
          if (-1 < (long)uVar9) {
            uVar2 = uVar9;
          }
          plVar3 = plVar4 + -((long)uVar2 >> 9);
          lVar10 = plVar4[-((long)uVar2 >> 9)] + ((uVar2 & 0x1ffffffffffffe00) - uVar9) * 8 + 0xff8;
        }
        else {
          plVar3 = (long *)((long)plVar4 + (uVar2 >> 6 & 0x3fffffffffffff8));
          lVar10 = *plVar3 + (uVar2 & 0x1ff) * 8;
        }
      }
      goto joined_r0x013e3acc;
    }
  }
  uVar11 = 0;
  lVar10 = lVar12;
joined_r0x013e3acc:
  if (0 < lVar13) {
    uVar2 = lVar13 + (lVar10 - *plVar3 >> 3);
    if ((ulong)(*(long *)(param_1 + 0x40) - lVar13) >> 1 < uVar11) {
      if ((long)uVar2 < 1) {
        uVar11 = 0x1ff - uVar2;
        uVar2 = 0x3fe - uVar2;
        if (-1 < (long)uVar11) {
          uVar2 = uVar11;
        }
        plVar4 = plVar3 + -((long)uVar2 >> 9);
        lVar12 = *plVar4 + ((uVar2 & 0x1ffffffffffffe00) - uVar11) * 8 + 0xff8;
      }
      else {
        plVar4 = (long *)((long)plVar3 + (uVar2 >> 6 & 0x3fffffffffffff8));
        lVar12 = *plVar4 + (uVar2 & 0x1ff) * 8;
      }
      uVar8 = *(long *)(param_1 + 0x40) + uVar8;
      plVar5 = (long *)(lVar6 + (uVar8 >> 6 & 0x3fffffffffffff8));
      if (*(long *)(param_1 + 0x10) == lVar6) {
        lVar6 = 0;
      }
      else {
        lVar6 = *plVar5 + (uVar8 & 0x1ff) * 8;
      }
      auVar14 = FUN_013e5d20(plVar4,lVar12,plVar5,lVar6,plVar3,lVar10);
      lVar6 = *(long *)(param_1 + 0x10);
      lVar12 = lVar6 - *(long *)(param_1 + 8);
      if (lVar12 == 0) {
        lVar10 = 0;
      }
      else {
        uVar8 = *(long *)(param_1 + 0x38) + *(long *)(param_1 + 0x40);
        lVar10 = *(long *)(*(long *)(param_1 + 8) + (uVar8 >> 6 & 0x3fffffffffffff8)) +
                 (uVar8 & 0x1ff) * 8;
      }
      while( true ) {
        plVar4 = auVar14._0_8_;
        if (lVar10 == auVar14._8_8_) break;
        lVar1 = auVar14._8_8_ + 8;
        auVar14._8_8_ = lVar1;
        auVar14._0_8_ = plVar4;
        if (lVar1 - *plVar4 == 0x1000) {
          auVar14._8_8_ = plVar4[1];
          auVar14._0_8_ = plVar4 + 1;
        }
      }
      lVar13 = *(long *)(param_1 + 0x40) - lVar13;
      *(long *)(param_1 + 0x40) = lVar13;
      lVar10 = 0;
      if (lVar12 != 0) {
        lVar10 = lVar12 * 0x40 + -1;
      }
      uVar8 = lVar10 - (lVar13 + *(long *)(param_1 + 0x38));
      while (0x3ff < uVar8) {
        (**(code **)(**(long **)(param_1 + 0x48) + 0x18))
                  (*(long **)(param_1 + 0x48),*(undefined8 *)(lVar6 + -8),0x1000,8);
        lVar6 = *(long *)(param_1 + 0x10) + -8;
        lVar12 = lVar6 - *(long *)(param_1 + 8);
        lVar13 = 0;
        if (lVar12 != 0) {
          lVar13 = lVar12 * 0x40 + -1;
        }
        *(long *)(param_1 + 0x10) = lVar6;
        uVar8 = lVar13 - (*(long *)(param_1 + 0x40) + *(long *)(param_1 + 0x38));
      }
    }
    else {
      if ((long)uVar2 < 1) {
        uVar11 = 0x1ff - uVar2;
        uVar8 = 0x3fe - uVar2;
        if (-1 < (long)uVar11) {
          uVar8 = uVar11;
        }
        plVar5 = plVar3 + -((long)uVar8 >> 9);
        lVar6 = *plVar5 + ((uVar8 & 0x1ffffffffffffe00) - uVar11) * 8 + 0xff8;
      }
      else {
        plVar5 = (long *)((long)plVar3 + (uVar2 >> 6 & 0x3fffffffffffff8));
        lVar6 = *plVar5 + (uVar2 & 0x1ff) * 8;
      }
      FUN_013e5aa0(plVar4,lVar12,plVar3,lVar10,plVar5,lVar6);
      while (lVar12 != extraout_x1) {
        lVar12 = lVar12 + 8;
        if (lVar12 - *plVar4 == 0x1000) {
          plVar4 = plVar4 + 1;
          lVar12 = *plVar4;
        }
      }
      uVar8 = *(long *)(param_1 + 0x38) + lVar13;
      *(ulong *)(param_1 + 0x38) = uVar8;
      *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) - lVar13;
      if (0x3ff < uVar8) {
        puVar7 = *(undefined8 **)(param_1 + 8);
        do {
          (**(code **)(**(long **)(param_1 + 0x48) + 0x18))
                    (*(long **)(param_1 + 0x48),*puVar7,0x1000,8);
          puVar7 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
          *(undefined8 **)(param_1 + 8) = puVar7;
          uVar8 = *(long *)(param_1 + 0x38) - 0x200;
          *(ulong *)(param_1 + 0x38) = uVar8;
        } while (0x3ff < uVar8);
      }
    }
  }
  return;
}


