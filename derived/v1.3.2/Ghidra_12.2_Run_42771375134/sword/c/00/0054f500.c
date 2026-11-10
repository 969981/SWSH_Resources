/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0054f500; name: FUN_0054f500
 */


undefined8 FUN_0054f500(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  uint uVar11;
  long lVar12;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x10;
  ulong extraout_x10_00;
  long *plVar13;
  uint unaff_w20;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long *plVar16;
  long *unaff_x22;
  ulong uVar17;
  long lVar18;
  long *plVar19;
  ulong uVar20;
  ulong uVar21;
  uint unaff_w27;
  long lVar22;
  ulong uVar23;
  int local_6c;
  
  plVar13 = *(long **)(param_1 + 0x78);
  plVar16 = *(long **)(param_1 + 0x80);
  if (plVar13 == (long *)0x0 || plVar16 == (long *)0x0) {
    uVar7 = 0xffffffff;
  }
  else {
    lVar18 = *(long *)(param_1 + 0x88);
    lVar22 = *(long *)(lVar18 + 0x88);
    cVar5 = *(char *)(lVar18 + 0xc0);
    uVar2 = *(uint *)(lVar22 + 0x2c);
    uVar3 = (ulong)uVar2;
    uVar4 = *(uint *)(lVar22 + 0x30);
    uVar20 = (ulong)uVar4;
    iVar9 = *(int *)(lVar22 + 0x38);
    if (uVar2 != 0 && *(int *)(lVar22 + 0x34) != 0) {
      if (cVar5 == '\0') {
        unaff_x22 = (long *)(**(code **)(*plVar16 + 0xd8))(plVar16,1,0,0);
        (**(code **)(*unaff_x22 + 0x40))(unaff_x22,1,0);
        uVar11 = 0;
        iVar8 = 0;
        uVar21 = extraout_x9;
        uVar23 = extraout_x10;
        do {
          lVar12 = *(long *)(lVar22 + (long)(int)uVar11 * 8 + 0x40);
          if (lVar12 != 0) {
            uVar21 = (ulong)*(uint *)(lVar12 + 0x2c);
            uVar23 = (ulong)*(uint *)(lVar12 + 0x24);
          }
          iVar1 = (int)uVar21 + (int)uVar23;
          uVar11 = uVar11 + 1;
          if (iVar8 <= iVar1) {
            iVar8 = iVar1;
          }
        } while (uVar2 != uVar11);
        (**(code **)(*unaff_x22 + 0x50))(unaff_x22);
        uVar11 = 0;
        uVar21 = uVar3;
        do {
          lVar12 = *(long *)(lVar22 + (long)(int)uVar11 * 8 + 0x40);
          if (lVar12 != 0) {
            uVar21 = (ulong)*(uint *)(lVar12 + 0x2c);
          }
          lVar12 = *(long *)(lVar22 + (long)(int)uVar11 * 8 + 0x240);
          if (lVar12 != 0) {
            local_6c = *(int *)(lVar12 + 0x2c);
            unaff_w20 = *(uint *)(lVar12 + 0x24);
          }
          if (0 < (int)unaff_w20) {
            uVar23 = (ulong)unaff_w20;
            puVar14 = (undefined8 *)(param_1 + 0x240 + (long)local_6c * 8);
            uVar17 = uVar21;
            puVar15 = (undefined8 *)(param_1 + 0x90 + (long)(int)uVar21 * 8);
            do {
              (**(code **)(*(long *)*puVar15 + 0x100))((long *)*puVar15,*puVar14);
              (**(code **)(*plVar13 + 0xf0))(plVar13,*puVar15,0x10,0x100);
              (**(code **)(*unaff_x22 + 0x60))(unaff_x22,uVar17,*puVar15);
              uVar17 = (ulong)((int)uVar17 + 1);
              uVar23 = uVar23 - 1;
              puVar14 = puVar14 + 1;
              puVar15 = puVar15 + 1;
            } while (uVar23 != 0);
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 != uVar2);
      }
      else {
        unaff_x22 = *(long **)(lVar18 + 0xa0);
        uVar11 = 0;
        uVar21 = uVar3;
        do {
          lVar12 = *(long *)(lVar22 + (long)(int)uVar11 * 8 + 0x40);
          if (lVar12 != 0) {
            uVar21 = (ulong)*(uint *)(lVar12 + 0x2c);
          }
          lVar12 = *(long *)(lVar22 + (long)(int)uVar11 * 8 + 0x240);
          if (lVar12 != 0) {
            local_6c = *(int *)(lVar12 + 0x2c);
            unaff_w27 = *(uint *)(lVar12 + 0x24);
          }
          if (0 < (int)unaff_w27) {
            uVar23 = (ulong)unaff_w27;
            puVar14 = (undefined8 *)(param_1 + 0x240 + (long)local_6c * 8);
            puVar15 = (undefined8 *)(param_1 + 0x90 + (long)(int)uVar21 * 8);
            uVar17 = uVar21;
            do {
              (**(code **)(*(long *)*puVar15 + 0x100))((long *)*puVar15,*puVar14);
              (**(code **)(*plVar13 + 0xf0))(plVar13,*puVar15,0x10,0x100);
              (**(code **)(*unaff_x22 + 0xd8))(unaff_x22,uVar17,*puVar15);
              uVar17 = (ulong)((int)uVar17 + 1);
              uVar23 = uVar23 - 1;
              puVar14 = puVar14 + 1;
              puVar15 = puVar15 + 1;
            } while (uVar23 != 0);
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 != uVar2);
      }
      if (cVar5 == '\0') {
        (**(code **)(*unaff_x22 + 0x48))(unaff_x22);
        *(long **)(lVar18 + 0xa0) = unaff_x22;
      }
      (**(code **)(*plVar13 + 0x2f8))(plVar13,1,0x10,4,param_1 + 0x2e0);
    }
    if (uVar4 != 0 && iVar9 != 0) {
      if (cVar5 == '\0') {
        plVar16 = (long *)(**(code **)(*plVar16 + 0xd8))(plVar16,1,0,0);
        (**(code **)(*plVar16 + 0x40))(plVar16,1,0);
        uVar11 = 0;
        iVar9 = 0;
        uVar21 = extraout_x9_00;
        uVar23 = extraout_x10_00;
        do {
          lVar12 = *(long *)(lVar22 + (long)(int)uVar11 * 8 + 0x140);
          if (lVar12 != 0) {
            uVar21 = (ulong)*(uint *)(lVar12 + 0x2c);
            uVar23 = (ulong)*(uint *)(lVar12 + 0x24);
          }
          iVar8 = (int)uVar23 + (int)uVar21;
          uVar11 = uVar11 + 1;
          if (iVar9 <= iVar8) {
            iVar9 = iVar8;
          }
        } while (uVar4 != uVar11);
        (**(code **)(*plVar16 + 0x50))(plVar16);
      }
      else {
        plVar16 = *(long **)(lVar18 + 0xa8);
      }
      uVar11 = 0;
      uVar21 = uVar3;
      do {
        lVar12 = *(long *)(lVar22 + (long)(int)uVar11 * 8 + 0x140);
        if (lVar12 != 0) {
          uVar21 = (ulong)*(uint *)(lVar12 + 0x2c);
        }
        lVar12 = *(long *)(lVar22 + (long)(int)uVar11 * 8 + 0x340);
        if (lVar12 != 0) {
          local_6c = *(int *)(lVar12 + 0x2c);
          unaff_x22 = (long *)(ulong)*(uint *)(lVar12 + 0x24);
        }
        if (0 < (int)unaff_x22) {
          if (cVar5 == '\0') {
            puVar14 = (undefined8 *)(param_1 + 0x260 + (long)local_6c * 8);
            plVar19 = (long *)(param_1 + 0xb0 + (long)(int)uVar21 * 8);
            uVar23 = (ulong)unaff_x22 & 0xffffffff;
            uVar17 = uVar21;
            do {
              plVar10 = (long *)*plVar19;
              lVar12 = 0;
              if (plVar10 != (long *)0x0) {
                (**(code **)(*plVar10 + 0x100))(plVar10,*puVar14);
                (**(code **)(*plVar13 + 0xf0))(plVar13,*plVar19,0x10,0x200);
                lVar12 = *plVar19;
              }
              (**(code **)(*plVar16 + 0x60))(plVar16,uVar17,lVar12);
              puVar14 = puVar14 + 1;
              uVar17 = (ulong)((int)uVar17 + 1);
              plVar19 = plVar19 + 1;
              uVar23 = uVar23 - 1;
            } while (uVar23 != 0);
          }
          else {
            plVar19 = (long *)(param_1 + 0xb0 + (long)(int)uVar21 * 8);
            puVar14 = (undefined8 *)(param_1 + 0x260 + (long)local_6c * 8);
            uVar23 = (ulong)unaff_x22 & 0xffffffff;
            uVar17 = uVar21;
            do {
              plVar10 = (long *)*plVar19;
              lVar12 = 0;
              if (plVar10 != (long *)0x0) {
                (**(code **)(*plVar10 + 0x100))(plVar10,*puVar14);
                (**(code **)(*plVar13 + 0xf0))(plVar13,*plVar19,0x10,0x200);
                lVar12 = *plVar19;
              }
              (**(code **)(*plVar16 + 0xd8))(plVar16,uVar17,lVar12);
              plVar19 = plVar19 + 1;
              uVar17 = (ulong)((int)uVar17 + 1);
              puVar14 = puVar14 + 1;
              uVar23 = uVar23 - 1;
            } while (uVar23 != 0);
          }
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar4);
      if (cVar5 == '\0') {
        (**(code **)(*plVar16 + 0x48))(plVar16);
        *(long **)(lVar18 + 0xa8) = plVar16;
      }
    }
    plVar13 = *(long **)(lVar18 + 0x98);
    iVar9 = *(int *)(*(long *)(lVar18 + 0x88) + 0x28);
    if (cVar5 == '\0') {
      iVar8 = uVar4 + uVar2;
      if (iVar9 != 0) {
        iVar8 = iVar8 + 1;
      }
      (**(code **)(*plVar13 + 0x40))(plVar13,*(undefined8 *)(lVar18 + 0x90));
      (**(code **)(*plVar13 + 0x48))(plVar13,iVar8);
    }
    uVar11 = (uint)(iVar9 != 0);
    uVar6 = uVar11;
    if (uVar2 != 0) {
      uVar21 = 0;
      do {
        (**(code **)(*plVar13 + 0x68))
                  (plVar13,uVar11 + (int)uVar21,uVar11,*(undefined8 *)(lVar18 + 0xa0 + uVar21 * 8));
        uVar21 = uVar21 + 1;
      } while (uVar3 != uVar21);
      uVar11 = uVar2 + uVar11;
      uVar6 = 1;
      if (iVar9 != 0) {
        uVar6 = 2;
      }
    }
    if (uVar4 != 0) {
      puVar14 = (undefined8 *)(lVar18 + 0xa8);
      do {
        (**(code **)(*plVar13 + 0x68))(plVar13,uVar11,uVar6,*puVar14);
        uVar11 = uVar11 + 1;
        uVar20 = uVar20 - 1;
        puVar14 = puVar14 + 1;
      } while (uVar20 != 0);
    }
    if (cVar5 == '\0') {
      (**(code **)(*plVar13 + 0x80))(plVar13);
    }
    uVar7 = 0;
    *(undefined1 *)(lVar18 + 0xc0) = 1;
  }
  return uVar7;
}


