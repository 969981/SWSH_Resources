/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004b61d0; name: FUN_004b61d0
 */


void FUN_004b61d0(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  ulong uVar7;
  long *plVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  long *plVar13;
  long *plVar14;
  undefined4 *puVar15;
  long *plVar16;
  long lVar17;
  undefined4 local_b8;
  uint uStack_b4;
  undefined4 local_b0;
  undefined8 local_a8;
  byte local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  long local_90;
  ulong local_88;
  long *local_80;
  ulong local_78;
  long *local_70;
  ulong local_68;
  
  plVar13 = (long *)(param_1 + 0x10);
  puVar12 = (undefined4 *)*plVar13;
  uVar1 = *(uint *)(param_1 + 0x18);
  plVar14 = (long *)(param_1 + 0x20);
  puVar11 = (undefined4 *)*plVar14;
  uVar2 = *(uint *)(param_1 + 0x28);
  *plVar13 = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *plVar14 = 0;
  local_70 = (long *)0x0;
  local_68 = 0;
  local_80 = (long *)0x0;
  local_78 = 0;
  local_90 = 0;
  local_88 = 0;
  FUN_0045fa50(param_2,&local_70,&local_80,&local_90,param_3,param_4,param_5);
  puVar6 = PTR_DAT_02712d98;
  uVar7 = local_68 & 0xffffffff;
  if ((int)local_68 != 0) {
    plVar8 = local_70;
    plVar16 = local_70;
    do {
      lVar17 = *plVar16;
      iVar9 = *(int *)(param_1 + 0x18) + -1;
      uVar3 = *(uint *)(lVar17 + 4);
      if (-1 < iVar9) {
        iVar10 = 0;
        do {
          while( true ) {
            iVar5 = iVar9 - iVar10;
            if (iVar5 < 0) {
              iVar5 = iVar5 + 1;
            }
            iVar5 = iVar10 + (iVar5 >> 1);
            uVar4 = *(uint *)(*plVar13 + (long)iVar5 * 4);
            if (uVar3 > uVar4 || uVar4 == uVar3) break;
            iVar9 = iVar5 + -1;
            if (iVar9 < iVar10) goto LAB_004b62e8;
          }
          if (uVar3 <= uVar4) {
            if (*plVar13 + (long)iVar5 * 4 != 0) goto LAB_004b6358;
            break;
          }
          iVar10 = iVar5 + 1;
        } while (iVar10 <= iVar9);
      }
LAB_004b62e8:
      if (*(int *)(lVar17 + 8) != 0) {
        FUN_004b6f90(plVar13,uVar3);
        local_9c = 0xffffffff;
        if ((*(ushort *)(lVar17 + 0xc) & 0x500) == 0) {
          local_9c = *(undefined4 *)(lVar17 + 4);
        }
        local_a0 = (byte)*(ushort *)(lVar17 + 0xc) & 1;
        uStack_b4 = (uint)*(ushort *)(lVar17 + 0x1a);
        local_b8 = 0;
        local_b0 = 0;
        local_a8 = 0;
        local_98 = *(undefined4 *)(lVar17 + 8);
        (**(code **)(**(long **)puVar6 + 0x40))
                  (*(long **)puVar6,uVar3,&local_b8,*(undefined1 *)(param_1 + 0x30));
        uVar7 = local_68 & 0xffffffff;
        plVar8 = local_70;
      }
LAB_004b6358:
      plVar16 = plVar16 + 1;
    } while (plVar16 != plVar8 + uVar7);
  }
  puVar6 = PTR_DAT_02712d98;
  uVar7 = local_78 & 0xffffffff;
  if ((int)local_78 != 0) {
    plVar8 = local_80;
    plVar16 = local_80;
    do {
      lVar17 = *plVar16;
      iVar9 = *(int *)(param_1 + 0x18) + -1;
      uVar3 = *(uint *)(lVar17 + 4);
      if (-1 < iVar9) {
        iVar10 = 0;
        do {
          while( true ) {
            iVar5 = iVar9 - iVar10;
            if (iVar5 < 0) {
              iVar5 = iVar5 + 1;
            }
            iVar5 = iVar10 + (iVar5 >> 1);
            uVar4 = *(uint *)(*plVar13 + (long)iVar5 * 4);
            if (uVar3 > uVar4 || uVar4 == uVar3) break;
            iVar9 = iVar5 + -1;
            if (iVar9 < iVar10) goto LAB_004b63f0;
          }
          if (uVar3 <= uVar4) {
            if (*plVar13 + (long)iVar5 * 4 != 0) goto LAB_004b64c0;
            break;
          }
          iVar10 = iVar5 + 1;
        } while (iVar10 <= iVar9);
      }
LAB_004b63f0:
      iVar9 = *(int *)(param_1 + 0x28) + -1;
      if (-1 < iVar9) {
        iVar10 = 0;
        do {
          while( true ) {
            iVar5 = iVar9 - iVar10;
            if (iVar5 < 0) {
              iVar5 = iVar5 + 1;
            }
            iVar5 = iVar10 + (iVar5 >> 1);
            uVar4 = *(uint *)(*plVar14 + (long)iVar5 * 4);
            if (uVar3 > uVar4 || uVar4 == uVar3) break;
            iVar9 = iVar5 + -1;
            if (iVar9 < iVar10) goto LAB_004b6450;
          }
          if (uVar3 <= uVar4) {
            if (*plVar14 + (long)iVar5 * 4 != 0) goto LAB_004b64c0;
            break;
          }
          iVar10 = iVar5 + 1;
        } while (iVar10 <= iVar9);
      }
LAB_004b6450:
      if (*(int *)(lVar17 + 8) != 0) {
        FUN_004b6f90(plVar14,uVar3);
        local_9c = 0xffffffff;
        if ((*(ushort *)(lVar17 + 0xc) & 0x500) == 0) {
          local_9c = *(undefined4 *)(lVar17 + 4);
        }
        local_a0 = (byte)*(ushort *)(lVar17 + 0xc) & 1;
        uStack_b4 = (uint)*(ushort *)(lVar17 + 0x1a);
        local_b8 = 0;
        local_b0 = 0;
        local_a8 = 0;
        local_98 = *(undefined4 *)(lVar17 + 8);
        (**(code **)(**(long **)puVar6 + 0x40))
                  (*(long **)puVar6,uVar3,&local_b8,*(undefined1 *)(param_1 + 0x31));
        uVar7 = local_78 & 0xffffffff;
        plVar8 = local_80;
      }
LAB_004b64c0:
      plVar16 = plVar16 + 1;
    } while (plVar16 != plVar8 + uVar7);
  }
  puVar6 = PTR_DAT_02712d98;
  if (uVar1 != 0) {
    lVar17 = (ulong)uVar1 << 2;
    puVar15 = puVar12;
    do {
      (**(code **)(**(long **)puVar6 + 0x48))
                (*(long **)puVar6,*puVar15,*(undefined1 *)(param_1 + 0x30));
      lVar17 = lVar17 + -4;
      puVar15 = puVar15 + 1;
    } while (lVar17 != 0);
  }
  puVar6 = PTR_DAT_02712d98;
  if (uVar2 != 0) {
    lVar17 = (ulong)uVar2 << 2;
    puVar15 = puVar11;
    do {
      (**(code **)(**(long **)puVar6 + 0x48))
                (*(long **)puVar6,*puVar15,*(undefined1 *)(param_1 + 0x31));
      lVar17 = lVar17 + -4;
      puVar15 = puVar15 + 1;
    } while (lVar17 != 0);
  }
  if (puVar12 != (undefined4 *)0x0) {
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,puVar12);
  }
  if (puVar11 != (undefined4 *)0x0) {
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,puVar11);
  }
  if ((int)local_88 != 0) {
    lVar17 = local_90;
    do {
      FUN_004b7270(param_1,lVar17);
      lVar17 = lVar17 + 8;
    } while (lVar17 != local_90 + (local_88 & 0xffffffff) * 8);
  }
  if (local_70 != (long *)0x0) {
    local_68 = local_68 & 0xffffffff00000000;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    local_70 = (long *)0x0;
    local_68 = local_68 & 0xffffffff;
  }
  if (local_80 != (long *)0x0) {
    local_78 = local_78 & 0xffffffff00000000;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    local_80 = (long *)0x0;
    local_78 = local_78 & 0xffffffff;
  }
  if (local_90 != 0) {
    local_88 = local_88 & 0xffffffff00000000;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
  }
  return;
}


