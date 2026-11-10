/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004bbbc0; name: FUN_004bbbc0
 */


int FUN_004bbbc0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                long param_5,uint param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  
  lVar7 = FUN_004bb880();
  if (lVar7 == 0) {
    return 0x34;
  }
  if (*(int *)(lVar7 + 0x20) != 0) {
    FUN_0049b960(*(undefined8 *)PTR_DAT_02712b50,lVar7);
    *(undefined4 *)(lVar7 + 0x20) = 0;
    if (*(long *)(lVar7 + 0x10) != 0) {
      *(undefined4 *)(lVar7 + 0x18) = 0;
      FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
      *(undefined8 *)(lVar7 + 0x10) = 0;
      *(undefined4 *)(lVar7 + 0x1c) = 0;
    }
  }
  if (param_6 == 0) {
    return 1;
  }
  if (param_6 == 0) {
    uVar14 = 0;
LAB_004bbce4:
    *(undefined4 *)(lVar7 + 0x20) = param_3;
    *(undefined4 *)(lVar7 + 0x24) = param_4;
    puVar5 = PTR_DAT_02712a90;
    lVar8 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,uVar14 * 0xc);
    if (lVar8 != 0) {
      if (param_6 != 0) {
        uVar15 = 0;
        do {
          puVar1 = (undefined4 *)(param_5 + uVar15 * 0xc);
          puVar9 = (undefined4 *)(lVar8 + uVar15 * 0xc);
          *puVar9 = *puVar1;
          puVar9[1] = (float)(uVar15 & 0xffffffff);
          puVar9[2] = puVar1[2];
          uVar3 = *(uint *)(lVar7 + 0x18);
          uVar13 = *(uint *)(lVar7 + 0x1c);
          if (uVar3 < uVar13) {
LAB_004bbe48:
            if (uVar3 < uVar13) {
              puVar9 = (undefined4 *)(*(long *)(lVar7 + 0x10) + (ulong)*(uint *)(lVar7 + 0x18) * 4);
              *(uint *)(lVar7 + 0x18) = *(uint *)(lVar7 + 0x18) + 1;
              if (puVar9 != (undefined4 *)0x0) {
                *puVar9 = puVar1[1];
              }
            }
          }
          else {
            uVar13 = uVar13 + 1;
            puVar9 = (undefined4 *)FUN_00404690(*(undefined4 *)puVar5,(ulong)uVar13 << 2);
            if (puVar9 != (undefined4 *)0x0) {
              puVar10 = *(undefined4 **)(lVar7 + 0x10);
              if ((puVar10 != (undefined4 *)0x0) && (puVar10 != puVar9)) {
                uVar4 = *(uint *)(lVar7 + 0x18);
                if (uVar4 != 0) {
                  *puVar9 = *puVar10;
                  if (uVar4 != 1) {
                    uVar2 = uVar4 + 3 & 3;
                    if ((ulong)uVar4 - 2 < 3) {
                      lVar12 = 1;
                    }
                    else {
                      lVar11 = 0;
                      do {
                        lVar12 = lVar11;
                        lVar11 = lVar12 * 4;
                        puVar9[lVar12 + 1] = *(undefined4 *)(*(long *)(lVar7 + 0x10) + lVar11 + 4);
                        puVar9[lVar12 + 2] = *(undefined4 *)(*(long *)(lVar7 + 0x10) + lVar11 + 8);
                        puVar9[lVar12 + 3] = *(undefined4 *)(*(long *)(lVar7 + 0x10) + lVar11 + 0xc)
                        ;
                        puVar9[lVar12 + 4] =
                             *(undefined4 *)(*(long *)(lVar7 + 0x10) + lVar11 + 0x10);
                        lVar11 = lVar12 + 4;
                      } while (((ulong)uVar4 - 1) - (ulong)uVar2 != lVar12 + 4);
                      lVar12 = lVar12 + 5;
                    }
                    if (uVar2 != 0) {
                      lVar12 = lVar12 << 2;
                      lVar11 = -(ulong)uVar2;
                      do {
                        *(undefined4 *)((long)puVar9 + lVar12) =
                             *(undefined4 *)(*(long *)(lVar7 + 0x10) + lVar12);
                        lVar12 = lVar12 + 4;
                        lVar11 = lVar11 + 1;
                      } while (lVar11 != 0);
                    }
                  }
                  puVar10 = *(undefined4 **)(lVar7 + 0x10);
                }
                FUN_00404870(*(undefined4 *)puVar5,puVar10);
              }
              *(undefined4 **)(lVar7 + 0x10) = puVar9;
              *(uint *)(lVar7 + 0x1c) = uVar13;
              goto LAB_004bbe48;
            }
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 != uVar14);
      }
      iVar6 = FUN_0049b8f0(*(undefined8 *)PTR_DAT_02712b50,lVar7,param_3,param_4,lVar8,param_6);
      FUN_00404870(*(undefined4 *)puVar5,lVar8);
      if (iVar6 == 1) {
        return 1;
      }
      lVar8 = *(long *)(lVar7 + 0x10);
      *(undefined4 *)(lVar7 + 0x20) = 0;
      goto joined_r0x004bbec0;
    }
  }
  else {
    uVar14 = (ulong)param_6;
    lVar8 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,uVar14 << 2);
    *(long *)(lVar7 + 0x10) = lVar8;
    if (lVar8 != 0) {
      *(uint *)(lVar7 + 0x1c) = param_6;
      goto LAB_004bbce4;
    }
  }
  iVar6 = 0x34;
  lVar8 = *(long *)(lVar7 + 0x10);
  *(undefined4 *)(lVar7 + 0x20) = 0;
joined_r0x004bbec0:
  if (lVar8 != 0) {
    *(undefined4 *)(lVar7 + 0x18) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    *(undefined8 *)(lVar7 + 0x10) = 0;
    *(undefined4 *)(lVar7 + 0x1c) = 0;
  }
  return iVar6;
}


