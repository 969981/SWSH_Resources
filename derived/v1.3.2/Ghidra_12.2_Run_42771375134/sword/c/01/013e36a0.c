/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013e36a0; name: FUN_013e36a0
 */


void FUN_013e36a0(long param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  undefined1 *local_150;
  code *local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  long *local_130;
  long *local_128;
  long local_d0;
  long local_c8;
  undefined *local_c0;
  code *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined1 *local_a0 [12];
  
  local_c8 = param_2;
  uVar5 = FUN_013e1c30();
  lVar13 = *(long *)(param_1 + 0x60);
  plVar6 = (long *)(*(code *)**(undefined8 **)(lVar13 + 0x50))((undefined8 *)(lVar13 + 0x50));
  lVar7 = FUN_0132d9a0();
  for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
    if (plVar6 == (long *)lVar7) goto LAB_013e3708;
  }
  lVar13 = 0;
LAB_013e3708:
  lVar7 = *(long *)(param_1 + 0x220);
  iVar4 = FUN_012ceb10(uVar5);
  if (iVar4 < 2) {
    lVar7 = *(long *)(lVar13 + 0x358);
    local_d0 = lVar7;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    local_130 = &local_c8;
    local_128 = &local_d0;
    local_140 = &LAB_013e7040;
    local_138 = &LAB_013e7050;
    local_150 = &LAB_013e6e60;
    local_148 = FUN_013e6f70;
    local_c0 = PTR_LAB_02729438;
    local_b8 = (code *)PTR_FUN_02729440;
    local_b0 = PTR_LAB_02729448;
    local_a8 = PTR_LAB_02729450;
    local_a0[0] = (undefined1 *)&local_150;
    FUN_01307340(lVar7,&local_c0);
    pcVar3 = local_b8;
    if (local_b8 != (code *)0x0) {
      local_b0 = (undefined *)0x0;
      local_a8 = (undefined *)0x0;
      local_c0 = (undefined *)0x0;
      local_b8 = (code *)0x0;
      (*pcVar3)(local_a0);
    }
    pcVar3 = local_148;
    if (local_148 != (code *)0x0) {
      local_140 = (undefined1 *)0x0;
      local_138 = (undefined1 *)0x0;
      local_150 = (undefined1 *)0x0;
      local_148 = (code *)0x0;
      (*pcVar3)(&local_130);
    }
    if (local_d0 != 0) {
      (**(code **)(*(long *)(local_d0 + 0x48) + 0x18))();
    }
  }
  else {
    uVar12 = *(ulong *)(lVar7 + 0x38);
    lVar13 = *(long *)(lVar7 + 8);
    plVar6 = (long *)(lVar13 + (uVar12 >> 6 & 0x3fffffffffffff8));
    if (*(long *)(lVar7 + 0x10) != lVar13) {
      uVar1 = *(long *)(lVar7 + 0x40) + uVar12;
      plVar9 = (long *)(*plVar6 + (uVar12 & 0x1ff) * 8);
      plVar2 = (long *)(*(long *)(lVar13 + (uVar1 >> 6 & 0x3fffffffffffff8)) + (uVar1 & 0x1ff) * 8);
      if (plVar2 != plVar9) {
        do {
          if (*plVar9 == param_2) break;
          plVar9 = plVar9 + 1;
          if ((long)plVar9 - *plVar6 == 0x1000) {
            plVar6 = plVar6 + 1;
            plVar9 = (long *)*plVar6;
          }
        } while (plVar2 != plVar9);
        plVar10 = plVar9;
        plVar8 = plVar6;
        if (plVar9 != plVar2) {
          while( true ) {
            plVar9 = plVar9 + 1;
            if ((long)plVar9 - *plVar6 == 0x1000) {
              plVar6 = plVar6 + 1;
              plVar9 = (long *)*plVar6;
            }
            if (plVar2 == plVar9) break;
            if (*plVar9 != local_c8) {
              plVar11 = plVar10 + 1;
              *plVar10 = *plVar9;
              plVar10 = plVar11;
              if ((long)plVar11 - *plVar8 == 0x1000) {
                plVar10 = (long *)plVar8[1];
                plVar8 = plVar8 + 1;
              }
            }
          }
        }
      }
    }
    FUN_013e39e0(lVar7);
    lVar13 = *(long *)(lVar7 + 0x68);
    if (*(long *)(lVar7 + 0x70) != lVar13) {
      uVar1 = *(ulong *)(lVar7 + 0x98);
      uVar12 = *(long *)(lVar7 + 0xa0) + uVar1;
      plVar9 = (long *)(lVar13 + (uVar1 >> 6 & 0x3fffffffffffff8));
      plVar6 = (long *)(*plVar9 + (uVar1 & 0x1ff) * 8);
      while (plVar6 != (long *)(*(long *)(lVar13 + (uVar12 >> 6 & 0x3fffffffffffff8)) +
                               (uVar12 & 0x1ff) * 8)) {
        if (local_c8 == *plVar6) {
          return;
        }
        plVar6 = plVar6 + 1;
        if ((long)plVar6 - *plVar9 == 0x1000) {
          plVar9 = plVar9 + 1;
          plVar6 = (long *)*plVar9;
        }
      }
    }
    FUN_013e35c0(lVar7 + 0x60,&local_c8);
  }
  return;
}


