/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00463a30; name: FUN_00463a30
 */


int FUN_00463a30(long *param_1,uint *param_2,undefined4 param_3)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  uint *puVar13;
  long lVar14;
  undefined8 uVar15;
  uint uVar16;
  uint uVar17;
  undefined4 local_5c;
  uint *local_58;
  
  local_5c = param_3;
  local_58 = param_2;
  iVar7 = (**(code **)(*param_1 + 0x88))();
  if (iVar7 == 5) {
    local_58 = param_2 + 1;
    iVar7 = FUN_004854e0(param_1,&local_58,&local_5c,0);
    if (iVar7 == 1) {
      puVar13 = local_58 + 1;
      uVar5 = *local_58;
      local_58 = puVar13;
      if (uVar5 != 0) {
        lVar9 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar5 << 3);
        param_1[0x17] = lVar9;
        if (lVar9 == 0) {
          return 0x34;
        }
        uVar16 = 0;
        *(uint *)((long)param_1 + 0xc4) = uVar5;
        do {
          uVar17 = *local_58;
          local_58 = local_58 + 1;
          iVar7 = (**(code **)(*param_1 + 0x58))(param_1,uVar17);
          if (iVar7 != 0xf && iVar7 != 1) {
            return iVar7;
          }
          uVar16 = uVar16 + 1;
        } while (uVar16 < uVar5);
        if (iVar7 != 1) {
          return iVar7;
        }
      }
      puVar13 = local_58 + 1;
      uVar5 = *local_58;
      local_58 = puVar13;
      if (uVar5 == 0) {
LAB_00463d10:
        iVar7 = 1;
      }
      else {
        plVar10 = (long *)FUN_00466330(*puVar13);
        puVar6 = PTR_DAT_02712a90;
        if (plVar10 != (long *)0x0) {
          uVar16 = 0;
          do {
            FUN_004676e0(plVar10,param_1);
            iVar7 = FUN_00466e40(plVar10,&local_58,&local_5c);
            if (iVar7 != 1) {
              (**(code **)(*plVar10 + 0x18))(plVar10);
              goto LAB_00463d2c;
            }
            uVar3 = *(uint *)(param_1 + 0x1c);
            uVar17 = *(uint *)((long)param_1 + 0xe4);
            if (uVar17 <= uVar3) {
              uVar17 = uVar17 + 4;
              puVar11 = (undefined8 *)FUN_00404690(*(undefined4 *)puVar6,(ulong)uVar17 << 3);
              if (puVar11 != (undefined8 *)0x0) {
                puVar12 = (undefined8 *)param_1[0x1b];
                if ((puVar12 != (undefined8 *)0x0) && (puVar12 != puVar11)) {
                  uVar4 = *(uint *)(param_1 + 0x1c);
                  if (uVar4 != 0) {
                    *puVar11 = *puVar12;
                    if (uVar4 != 1) {
                      uVar2 = uVar4 + 3 & 3;
                      if ((ulong)uVar4 - 2 < 3) {
                        lVar14 = 1;
                      }
                      else {
                        lVar9 = 0;
                        do {
                          lVar14 = lVar9;
                          lVar9 = lVar14 * 8;
                          puVar11[lVar14 + 1] = *(undefined8 *)(param_1[0x1b] + lVar9 + 8);
                          puVar11[lVar14 + 2] = *(undefined8 *)(param_1[0x1b] + lVar9 + 0x10);
                          puVar11[lVar14 + 3] = *(undefined8 *)(param_1[0x1b] + lVar9 + 0x18);
                          puVar11[lVar14 + 4] = *(undefined8 *)(param_1[0x1b] + lVar9 + 0x20);
                          lVar9 = lVar14 + 4;
                        } while (((ulong)uVar4 - 1) - (ulong)uVar2 != lVar14 + 4);
                        lVar14 = lVar14 + 5;
                      }
                      if (uVar2 != 0) {
                        lVar14 = lVar14 << 3;
                        lVar9 = -(ulong)uVar2;
                        do {
                          *(undefined8 *)((long)puVar11 + lVar14) =
                               *(undefined8 *)(param_1[0x1b] + lVar14);
                          lVar14 = lVar14 + 8;
                          lVar9 = lVar9 + 1;
                        } while (lVar9 != 0);
                      }
                    }
                    puVar12 = (undefined8 *)param_1[0x1b];
                  }
                  FUN_00404870(*(undefined4 *)puVar6,puVar12);
                }
                param_1[0x1b] = (long)puVar11;
                *(uint *)((long)param_1 + 0xe4) = uVar17;
                goto LAB_00463c68;
              }
LAB_00463d18:
              (**(code **)(*plVar10 + 0x18))(plVar10);
              break;
            }
LAB_00463c68:
            if (uVar17 <= uVar3) goto LAB_00463d18;
            plVar1 = (long *)(param_1[0x1b] + (ulong)*(uint *)(param_1 + 0x1c) * 8);
            *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) + 1;
            if (plVar1 == (long *)0x0) goto LAB_00463d18;
            uVar16 = uVar16 + 1;
            *plVar1 = (long)plVar10;
            if (uVar5 <= uVar16) goto LAB_00463d10;
            plVar10 = (long *)FUN_00466330(*local_58);
          } while (plVar10 != (long *)0x0);
        }
        iVar7 = 2;
      }
LAB_00463d2c:
      *(bool *)(param_1 + 0x1e) = (char)*local_58 != '\0';
    }
  }
  else {
    uVar15 = *(undefined8 *)PTR_DAT_02712ae0;
    lVar9 = param_1[2];
    uVar8 = (**(code **)(*param_1 + 0x88))(param_1);
    FUN_00449c90(uVar15,(int)lVar9,5,uVar8);
    iVar7 = 0x5a;
  }
  return iVar7;
}


