/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c9b510; name: FUN_00c9b510
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c9b510(long *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  undefined4 uVar13;
  long *plVar14;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  
  (**(code **)(*param_1 + 0x88))();
  FUN_00c97f60(param_1);
  local_68 = 0;
  local_60 = 0;
  local_70 = 0;
  FUN_00c9aa50(param_1,&local_60,&local_68,&local_70);
  lVar6 = local_68;
  if ((param_1[0x1b] != 0) && (*(int *)(param_1[0x1b] + 0x54) != 0)) {
    lVar8 = param_1[0x1b];
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    uVar2 = *(uint *)PTR_DAT_0271c508;
    if (0 < *(int *)(lVar6 + 8)) {
      uVar10 = 0;
      lVar7 = 0x10;
      do {
        if (*(ulong *)(*(long *)(lVar6 + 0x38) + 0x48) <= uVar10) goto LAB_00c9b9a0;
        if (*(long *)(*(long *)(*(long *)(lVar6 + 0x38) + 0x40) + lVar7) == lVar8)
        goto LAB_00c9b5e4;
        uVar10 = uVar10 + 1;
        lVar7 = lVar7 + 0x28;
      } while ((int)uVar10 < *(int *)(lVar6 + 8));
    }
    uVar10 = (ulong)uVar2;
LAB_00c9b5e4:
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
    }
    if ((uint)uVar10 != uVar2) {
      FUN_00c9b9e0(lVar6,uVar10 & 0xffffffff);
    }
    lVar6 = param_1[0x1b];
    param_1[0x1b] = 0;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
    }
  }
  lVar6 = local_70;
  if ((param_1[0x1c] != 0) && (*(int *)(param_1[0x1c] + 0x54) != 0)) {
    lVar8 = param_1[0x1c];
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    uVar2 = *(uint *)PTR_DAT_0271c508;
    if (0 < *(int *)(lVar6 + 8)) {
      uVar10 = 0;
      lVar7 = 0x10;
      do {
        if (*(ulong *)(*(long *)(lVar6 + 0x38) + 0x48) <= uVar10) goto LAB_00c9b9a0;
        if (*(long *)(*(long *)(*(long *)(lVar6 + 0x38) + 0x40) + lVar7) == lVar8)
        goto LAB_00c9b6a8;
        uVar10 = uVar10 + 1;
        lVar7 = lVar7 + 0x28;
      } while ((int)uVar10 < *(int *)(lVar6 + 8));
    }
    uVar10 = (ulong)uVar2;
LAB_00c9b6a8:
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
    }
    if ((uint)uVar10 != uVar2) {
      FUN_00c9b9e0(lVar6,uVar10 & 0xffffffff);
    }
    lVar6 = param_1[0x1c];
    param_1[0x1c] = 0;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
    }
  }
  lVar6 = local_60;
  if ((param_1[0x1a] != 0) && (*(int *)(param_1[0x1a] + 0x54) != 0)) {
    lVar8 = param_1[0x1a];
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    uVar2 = *(uint *)PTR_DAT_0271c508;
    if (0 < *(int *)(lVar6 + 8)) {
      uVar10 = 0;
      lVar7 = 0x10;
      do {
        if (*(ulong *)(*(long *)(lVar6 + 0x38) + 0x48) <= uVar10) {
LAB_00c9b9a0:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (*(long *)(*(long *)(*(long *)(lVar6 + 0x38) + 0x40) + lVar7) == lVar8)
        goto LAB_00c9b76c;
        uVar10 = uVar10 + 1;
        lVar7 = lVar7 + 0x28;
      } while ((int)uVar10 < *(int *)(lVar6 + 8));
    }
    uVar10 = (ulong)uVar2;
LAB_00c9b76c:
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
    }
    if ((uint)uVar10 != uVar2) {
      FUN_00c9b9e0(lVar6,uVar10 & 0xffffffff);
    }
    lVar6 = param_1[0x1a];
    param_1[0x1a] = 0;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
    }
  }
  if ((param_1[0x1d] != 0) && (*(int *)(param_1[0x1d] + 0x54) != 0)) {
    lVar6 = param_1[0xe];
    if ((lVar6 != 0) && (*(int *)(lVar6 + 0x54) != 0)) {
      piVar1 = (int *)(lVar6 + 0x54);
      iVar9 = *(int *)(lVar6 + 0x54);
      do {
        while( true ) {
          uVar10 = FUN_00c953c0(*(undefined8 *)(lVar6 + 0x58));
          if ((uVar10 & 1) == 0) goto LAB_00c9b814;
          iVar3 = *piVar1;
          if (iVar3 != iVar9) break;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar9 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            lVar8 = 0;
            if (*(long *)(lVar6 + 0x60) != 0) {
              lVar8 = *(long *)(lVar6 + 0x60) + -0x50;
            }
            lVar6 = param_1[0x1d];
            uVar13 = _DAT_00000070;
            goto joined_r0x00c9b8d8;
          }
          iVar9 = iVar3;
          if (iVar3 == 0) goto LAB_00c9b814;
        }
        ClearExclusiveLocal();
        iVar9 = iVar3;
      } while (iVar3 != 0);
    }
LAB_00c9b814:
    lVar8 = 0;
    lVar6 = param_1[0x1d];
    uVar13 = _DAT_00000070;
joined_r0x00c9b8d8:
    _DAT_00000070 = uVar13;
    if (lVar6 == 0) {
      lVar7 = 0;
      local_58 = 0;
    }
    else {
      plVar11 = (long *)(lVar6 + 0x48);
      (**(code **)(*plVar11 + 0x10))(plVar11);
      lVar12 = param_1[0x1d];
      if ((lVar12 == 0) || (*(int *)(lVar12 + 0x54) == 0)) {
        lVar7 = 0;
        uVar13 = _DAT_00000070;
      }
      else {
        piVar1 = (int *)(lVar12 + 0x54);
        iVar9 = *(int *)(lVar12 + 0x54);
        do {
          while( true ) {
            plVar14 = *(long **)(lVar12 + 0x58);
            lVar7 = FUN_00c9e3f0();
            for (; plVar14 != (long *)lVar7; plVar14 = (long *)*plVar14) {
            }
            iVar3 = *piVar1;
            if (iVar3 == iVar9) break;
            ClearExclusiveLocal();
            iVar9 = iVar3;
          }
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar9 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          iVar9 = iVar3;
        } while (cVar4 != '\0');
        lVar7 = 0;
        if (*(long *)(lVar12 + 0x60) != 0) {
          lVar7 = *(long *)(lVar12 + 0x60) + -0x50;
        }
        uVar13 = *(undefined4 *)(lVar7 + 0x70);
      }
      local_58 = lVar6;
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))(plVar11);
    }
    FUN_00ca9590(lVar8,0,&local_58,uVar13);
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
    }
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
    }
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
    }
    lVar6 = param_1[0x1d];
    param_1[0x1d] = 0;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
    }
  }
  if (param_1[0x21] != 0) {
    (**(code **)(*(long *)(param_1[0x21] + 0x48) + 0x18))();
    param_1[0x21] = 0;
  }
  return;
}


