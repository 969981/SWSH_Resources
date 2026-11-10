/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010508a0; name: FUN_010508a0
 */


void FUN_010508a0(long param_1,long *param_2,long param_3,undefined8 param_4,long *param_5,
                 long param_6,undefined8 param_7)

{
  int *piVar1;
  char cVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  byte *pbVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  undefined8 *puVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  
  lVar18 = *param_2;
  if (lVar18 == 0) {
LAB_0105092c:
    lVar17 = *(long *)(param_1 + 0xf8);
    *(undefined8 *)(param_1 + 0xf8) = 0;
    if (lVar17 != 0) {
      (**(code **)(*(long *)(lVar17 + 0x48) + 0x18))();
    }
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
    if (lVar18 != 0) goto LAB_01050984;
  }
  else {
    plVar16 = (long *)(lVar18 + 0x48);
    (**(code **)(*plVar16 + 0x10))(plVar16);
    if ((param_3 == 0) || (*(int *)(lVar18 + 0x54) == 0)) goto LAB_0105092c;
    lVar17 = *(long *)(param_3 + 0x350);
    iVar5 = FUN_00722fb0(lVar17,param_4);
    if (iVar5 < 0) {
      lVar17 = 0;
    }
    else {
      lVar17 = *(long *)(lVar17 + 0x1b8) + (long)iVar5 * 0x130;
    }
    (**(code **)(*(long *)(lVar18 + 0x48) + 0x10))(plVar16);
    lVar7 = *(long *)(param_1 + 0xf8);
    *(long *)(param_1 + 0xf8) = lVar18;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
    }
    *(long *)(param_1 + 0x100) = param_3;
    *(long *)(param_1 + 0x108) = lVar17;
LAB_01050984:
    (**(code **)(*(long *)(lVar18 + 0x48) + 0x18))((long *)(lVar18 + 0x48));
  }
  lVar18 = *param_5;
  if (lVar18 == 0) {
LAB_010509e4:
    lVar17 = *(long *)(param_1 + 0x110);
    *(undefined8 *)(param_1 + 0x110) = 0;
    if (lVar17 != 0) {
      (**(code **)(*(long *)(lVar17 + 0x48) + 0x18))();
    }
    *(undefined8 *)(param_1 + 0x118) = 0;
    *(undefined8 *)(param_1 + 0x120) = 0;
    if (lVar18 == 0) goto LAB_01050a4c;
  }
  else {
    plVar16 = (long *)(lVar18 + 0x48);
    (**(code **)(*plVar16 + 0x10))(plVar16);
    if ((param_6 == 0) || (*(int *)(lVar18 + 0x54) == 0)) goto LAB_010509e4;
    lVar17 = *(long *)(param_6 + 0x350);
    iVar5 = FUN_00722fb0(lVar17,param_7);
    if (iVar5 < 0) {
      lVar17 = 0;
    }
    else {
      lVar17 = *(long *)(lVar17 + 0x1b8) + (long)iVar5 * 0x130;
    }
    (**(code **)(*(long *)(lVar18 + 0x48) + 0x10))(plVar16);
    lVar7 = *(long *)(param_1 + 0x110);
    *(long *)(param_1 + 0x110) = lVar18;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
    }
    *(long *)(param_1 + 0x118) = param_6;
    *(long *)(param_1 + 0x120) = lVar17;
  }
  (**(code **)(*(long *)(lVar18 + 0x48) + 0x18))((long *)(lVar18 + 0x48));
LAB_01050a4c:
  bVar4 = false;
  if ((((*(long *)(param_1 + 0xf8) != 0) &&
       (bVar4 = false, *(int *)(*(long *)(param_1 + 0xf8) + 0x54) != 0)) &&
      (bVar4 = false, *(long *)(param_1 + 0x100) != 0)) &&
     (bVar4 = false, *(long *)(param_1 + 0x108) != 0)) {
    bVar4 = false;
    if (((*(long *)(param_1 + 0x110) != 0) &&
        (bVar4 = false, *(int *)(*(long *)(param_1 + 0x110) + 0x54) != 0)) &&
       (bVar4 = false, *(long *)(param_1 + 0x118) != 0)) {
      bVar4 = *(long *)(param_1 + 0x120) != 0;
    }
  }
  *(bool *)(param_1 + 0xf1) = bVar4;
  puVar3 = PTR_DAT_02715080;
  if (*(long *)(param_1 + 0x1b0) == 0) {
    lVar18 = *param_2;
    if ((lVar18 == 0) || (*(int *)(lVar18 + 0x54) == 0)) {
      lVar17 = 0;
    }
    else {
      piVar1 = (int *)(lVar18 + 0x54);
      pbVar11 = PTR_DAT_02715078;
      iVar5 = *(int *)(lVar18 + 0x54);
      do {
        while( true ) {
          puVar15 = *(undefined8 **)(lVar18 + 0x58);
          if ((*pbVar11 & 1) == 0) {
            iVar6 = __cxa_guard_acquire(pbVar11);
            pbVar11 = PTR_DAT_02715078;
            if (iVar6 != 0) {
              uVar8 = FUN_00a87090();
              *(undefined8 *)puVar3 = uVar8;
              __cxa_guard_release(PTR_DAT_02715078);
              pbVar11 = PTR_DAT_02715078;
            }
          }
          lVar17 = 0;
          if (puVar15 == (undefined8 *)0x0) goto LAB_01050b64;
          while (puVar15 != (undefined8 *)puVar3) {
            puVar15 = (undefined8 *)*puVar15;
            if (puVar15 == (undefined8 *)0x0) {
              lVar17 = 0;
              goto LAB_01050b64;
            }
          }
          iVar6 = *piVar1;
          if (iVar6 != iVar5) break;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar17 = 0;
            if (*(long *)(lVar18 + 0x60) != 0) {
              lVar17 = *(long *)(lVar18 + 0x60) + -0x50;
            }
            goto LAB_01050b64;
          }
          lVar17 = 0;
          iVar5 = iVar6;
          if (iVar6 == 0) goto LAB_01050b64;
        }
        ClearExclusiveLocal();
        lVar17 = 0;
        iVar5 = iVar6;
      } while (iVar6 != 0);
    }
LAB_01050b64:
    lVar18 = FUN_00c750c0(&local_80,*(undefined8 *)(lVar17 + 8));
    if (lVar18 != 0) {
      (**(code **)(*(long *)(lVar18 + 0x48) + 0x10))();
    }
    local_80 = lVar18;
    FUN_006d9640(lVar17,&local_80);
    if (local_80 != 0) {
      (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
      local_80 = 0;
    }
    if (lVar18 != 0) {
      (**(code **)(*(long *)(lVar18 + 0x48) + 0x10))();
    }
    lVar7 = *(long *)(param_1 + 0x1b0);
    *(long *)(param_1 + 0x1b0) = lVar18;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
    }
    if (lVar17 != 0) {
      (**(code **)(*(long *)(lVar17 + 0x48) + 0x18))((long *)(lVar17 + 0x48));
    }
  }
  if ((param_3 != 0) && (param_6 != 0)) {
    FUN_006dbb10(*(undefined8 *)(param_1 + 0x1b0),param_6,param_7,param_3,param_4);
    lVar13 = *(long *)(param_3 + 0x350);
    plVar16 = (long *)(param_1 + 0x1b8);
    lVar7 = *(long *)(param_6 + 0x350);
    uVar10 = (ulong)((int)((ulong)(*(long *)(lVar13 + 0x1c0) - *(long *)(lVar13 + 0x1b8)) >> 4) *
                    0x286bca1b);
    lVar17 = *(long *)(param_1 + 0x1b8);
    lVar18 = *(long *)(param_1 + 0x1c0);
    uVar12 = lVar18 - lVar17 >> 1;
    if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
      if (uVar10 < uVar12) {
        lVar18 = lVar17 + uVar10 * 2;
        *(long *)(param_1 + 0x1c0) = lVar18;
      }
      if (lVar18 == lVar17) {
        return;
      }
    }
    else {
      FUN_006a2cd0(plVar16,uVar10 - uVar12);
      if (*(long *)(param_1 + 0x1c0) == *(long *)(param_1 + 0x1b8)) {
        return;
      }
    }
    uVar10 = 0;
    uVar14 = 1;
    do {
      plVar9 = *(long **)(*(long *)(lVar13 + 0x1b8) + (long)(int)(uVar14 - 1) * 0x130 + 0x128);
      local_80 = *plVar9;
      local_78 = plVar9[1];
      local_70 = plVar9[2];
      local_68 = plVar9[3];
      if (local_68 != 0) {
        (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
      }
      iVar5 = FUN_00722fb0(lVar7,&local_80);
      if (iVar5 < 0) {
        *(undefined2 *)(*plVar16 + uVar10 * 2) = 0xffff;
      }
      else {
        if (*(long *)(lVar7 + 0x1b8) + (long)iVar5 * 0x130 == 0) {
          iVar5 = -1;
        }
        *(short *)(*plVar16 + uVar10 * 2) = (short)iVar5;
      }
      if (local_68 != 0) {
        (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      }
      uVar10 = (ulong)uVar14;
      uVar14 = uVar14 + 1;
    } while (uVar10 < (ulong)(*(long *)(param_1 + 0x1c0) - *(long *)(param_1 + 0x1b8) >> 1));
  }
  return;
}


