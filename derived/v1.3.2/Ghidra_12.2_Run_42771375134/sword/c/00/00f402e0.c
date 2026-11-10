/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f402e0; name: FUN_00f402e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00f402e0(long param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  long local_60;
  long local_58;
  
  lVar4 = *param_2;
  auVar11._0_4_ = *(float *)(lVar4 + 0x1b0) - (float)*(undefined8 *)(param_1 + 0x1a0);
  auVar11._4_4_ =
       *(float *)(lVar4 + 0x1b4) - (float)((ulong)*(undefined8 *)(param_1 + 0x1a0) >> 0x20);
  auVar11._8_4_ = *(float *)(lVar4 + 0x1b8) - (float)*(undefined8 *)(param_1 + 0x1a8);
  auVar11._12_4_ =
       *(float *)(lVar4 + 0x1bc) - (float)((ulong)*(undefined8 *)(param_1 + 0x1a8) >> 0x20);
  auVar12._4_4_ =
       (float)((ulong)*(undefined8 *)(param_1 + 0x1b0) >> 0x20) -
       (float)((ulong)*(undefined8 *)(lVar4 + 0x1a0) >> 0x20);
  auVar12._0_4_ = (float)*(undefined8 *)(param_1 + 0x1b0) - (float)*(undefined8 *)(lVar4 + 0x1a0);
  auVar12._8_4_ = (float)*(undefined8 *)(param_1 + 0x1b8) - (float)*(undefined8 *)(lVar4 + 0x1a8);
  auVar12._12_4_ =
       (float)((ulong)*(undefined8 *)(param_1 + 0x1b8) >> 0x20) -
       (float)((ulong)*(undefined8 *)(lVar4 + 0x1a8) >> 0x20);
  auVar12 = NEON_fmin(auVar11,auVar12,4);
  if (auVar12._8_4_ < 0.0) {
    return 0;
  }
  if (auVar12._4_4_ < 0.0) {
    return 0;
  }
  if (auVar12._0_4_ < 0.0) {
    return 0;
  }
  if (*(long *)(param_1 + 0xe8) == 0) {
    return 0;
  }
  plVar8 = *(long **)(param_1 + 0xe0);
  do {
    if ((*plVar8 == 0) || (lVar4 = *(long *)(*plVar8 + 0x60), lVar4 == 0)) {
      lVar4 = 0;
      lVar5 = *param_2;
      lVar7 = *(long *)(lVar5 + 0xe8);
    }
    else {
      uVar3 = FUN_0156b540(lVar4);
      lVar4 = lVar4 + -0x50;
      if ((uVar3 & 1) == 0) {
        lVar4 = 0;
      }
      lVar5 = *param_2;
      lVar7 = *(long *)(lVar5 + 0xe8);
    }
    if (lVar7 != 0) {
      plVar9 = *(long **)(lVar5 + 0xe0);
      do {
        lVar5 = 0;
        if (*plVar9 == 0) {
LAB_00f403c4:
          if (lVar4 == lVar5) {
LAB_00f40424:
            lVar4 = *param_2;
            if (*(long *)(lVar4 + 0xe8) == 0) goto LAB_00f40578;
            plVar8 = *(long **)(lVar4 + 0xe0);
            goto LAB_00f40434;
          }
        }
        else {
          lVar5 = *(long *)(*plVar9 + 0x60);
          if (lVar5 != 0) {
            uVar3 = FUN_0156b540(lVar5);
            lVar5 = lVar5 + -0x50;
            if ((uVar3 & 1) == 0) {
              lVar5 = 0;
            }
            goto LAB_00f403c4;
          }
          if (lVar4 == 0) goto LAB_00f40424;
        }
        plVar9 = plVar9 + 1;
      } while (plVar9 != (long *)(*(long *)(*param_2 + 0xe0) + *(long *)(*param_2 + 0xe8) * 8));
    }
    plVar8 = plVar8 + 1;
    if (plVar8 == (long *)(*(long *)(param_1 + 0xe0) + *(long *)(param_1 + 0xe8) * 8)) {
      return 0;
    }
  } while( true );
LAB_00f40434:
  if (*plVar8 == 0) {
    plVar9 = (long *)0x0;
    lVar4 = *(long *)(param_1 + 0xe8);
  }
  else {
    plVar9 = *(long **)(*plVar8 + 0x60);
    if (plVar9 != (long *)0x0) {
      uVar3 = FUN_0156b540(plVar9);
      plVar9 = plVar9 + -10;
      if ((uVar3 & 1) == 0) {
        plVar9 = (long *)0x0;
      }
    }
    lVar4 = *(long *)(param_1 + 0xe8);
  }
  if (lVar4 != 0) {
    plVar10 = *(long **)(param_1 + 0xe0);
    do {
      plVar6 = (long *)0x0;
      if (*plVar10 == 0) {
LAB_00f4049c:
        if (plVar9 == plVar6) goto LAB_00f40534;
      }
      else {
        lVar4 = *(long *)(*plVar10 + 0x60);
        if (lVar4 != 0) {
          uVar3 = FUN_0156b540(lVar4);
          plVar6 = (long *)(lVar4 + -0x50);
          if ((uVar3 & 1) == 0) {
            plVar6 = (long *)0x0;
          }
          goto LAB_00f4049c;
        }
        if (plVar9 == (long *)0x0) goto LAB_00f40534;
      }
      plVar10 = plVar10 + 1;
    } while (plVar10 != (long *)(*(long *)(param_1 + 0xe0) + *(long *)(param_1 + 0xe8) * 8));
  }
  (**(code **)(*plVar9 + 0x10))(&local_60,plVar9);
  local_58 = local_60;
  local_60 = 0;
  FUN_00f40c80(param_1 + 0xa0,&local_58);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
LAB_00f40534:
  lVar4 = *param_2;
  lVar5 = *(long *)(lVar4 + 0xe8);
  plVar8 = plVar8 + 1;
  if (plVar8 == (long *)(*(long *)(lVar4 + 0xe0) + lVar5 * 8)) {
    if (lVar5 != 0) {
      plVar8 = *(long **)(lVar4 + 0xe0);
      do {
        lVar5 = lVar5 + -1;
        if (*plVar8 != 0) {
          (**(code **)(*(long *)(*plVar8 + 0x48) + 0x18))();
          *plVar8 = 0;
        }
        plVar8 = plVar8 + 1;
      } while (lVar5 != 0);
    }
LAB_00f40578:
    uVar2 = _UNK_01d4b578;
    uVar1 = _DAT_01d4b570;
    *(undefined8 *)(lVar4 + 0x1a8) = _UNK_01d4b578;
    *(undefined8 *)(lVar4 + 0x1a0) = uVar1;
    *(undefined8 *)(lVar4 + 0x1b8) = uVar2;
    *(undefined8 *)(lVar4 + 0x1b0) = uVar1;
    *(undefined8 *)(lVar4 + 0xe8) = 0;
    return 1;
  }
  goto LAB_00f40434;
}


