/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00417540; name: FUN_00417540
 */


/* WARNING: Removing unreachable block (ram,0x004176b0) */

ulong FUN_00417540(long *param_1,undefined4 param_2)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  ulong unaff_x23;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *local_70;
  ulong local_68;
  char local_54 [4];
  
  if ((int)param_1[7] != 0) {
    plVar12 = (long *)param_1[6];
    do {
      plVar8 = plVar12 + 2;
      lVar9 = *plVar12;
      unaff_x23 = plVar12[1];
      (**(code **)(**(long **)(lVar9 + 0x38) + 0x10))();
      *(ulong *)(lVar9 + 0x38) = unaff_x23;
      plVar12 = plVar8;
    } while (plVar8 != (long *)(param_1[6] + (ulong)*(uint *)(param_1 + 7) * 0x10));
  }
  uVar6 = *(uint *)(param_1 + 3);
  *(undefined4 *)(param_1 + 7) = 0;
  if (uVar6 != 0) {
    plVar8 = (long *)param_1[2];
    plVar12 = plVar8;
    do {
      if (((*(uint *)(*plVar12 + 0x30) | 2) == 2) && ((long *)plVar12[2] != (long *)0x0)) {
        (**(code **)(*(long *)plVar12[2] + 0x10))();
        plVar8 = (long *)param_1[2];
        uVar6 = *(uint *)(param_1 + 3);
      }
      plVar12 = plVar12 + 3;
    } while (plVar12 != plVar8 + (ulong)uVar6 * 3);
  }
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  local_70 = (undefined8 *)0x0;
  local_68 = 0;
  local_54[0] = '\0';
  iVar3 = FUN_00417880(param_1,*param_1 + 0xf8,param_2,&local_70,local_54);
  puVar10 = local_70;
  puVar2 = PTR_DAT_02712a90;
  uVar11 = 2;
  if ((iVar3 == 1) && (local_54[0] != '\0')) {
    uVar13 = local_68 & 0xffffffff;
    if ((int)local_68 == 0) {
      uVar11 = 2;
    }
    else {
      uVar11 = 1;
      puVar14 = local_70;
      do {
        plVar12 = (long *)*puVar14;
        uVar4 = (**(code **)(*plVar12 + 0x10))(plVar12);
        if ((uVar4 & 1) != 0) break;
        iVar3 = FUN_00416b70(param_1,plVar12);
        if (iVar3 != 1) {
          FUN_00416d00(param_1);
          iVar3 = 3;
          uVar11 = 2;
          iVar7 = 3;
LAB_00417738:
          if (iVar7 != 3) {
            if (iVar3 == 0) goto joined_r0x004177f4;
            goto LAB_00417854;
          }
          break;
        }
        puVar14 = puVar14 + 1;
        if (puVar14 == puVar10 + uVar13) {
          uVar11 = FUN_004172f0(param_1);
          uVar11 = uVar11 & 0xffffffff;
          unaff_x23 = uVar11;
          if (puVar10 == (undefined8 *)0x0) {
            iVar3 = 1;
            iVar7 = 1;
          }
          else {
            local_68 = local_68 & 0xffffffff00000000;
            FUN_00404870(*(undefined4 *)puVar2,puVar10);
            puVar10 = (undefined8 *)0x0;
            iVar3 = 1;
            local_70 = (undefined8 *)0x0;
            local_68 = 0;
            iVar7 = 1;
          }
          goto LAB_00417738;
        }
        FUN_00417a70(param_1,*puVar14);
      } while (puVar14 != puVar10 + uVar13);
      if ((int)uVar11 == 1) {
        if (plVar12 == (long *)0x0) {
          uVar11 = 2;
        }
        else {
          lVar9 = plVar12[4];
          *(int *)(param_1 + 4) = (int)lVar9;
          *(bool *)(param_1 + 5) = (int)lVar9 != 0;
          *(int *)((long)param_1 + 0x24) = (int)plVar12[2];
          sVar5 = *(short *)((long)plVar12 + 0x14);
          if (sVar5 == 0) {
            sVar5 = 0;
          }
          else if ((short)plVar12[3] != 0 || *(short *)((long)plVar12 + 0x16) != 0) {
            iVar3 = (int)*(short *)((long)plVar12 + 0x16) + (int)sVar5;
            iVar1 = (int)(short)iVar3;
            iVar7 = (int)(short)((short)plVar12[3] + sVar5);
            if (iVar3 < 1) {
              iVar1 = 1;
            }
            if (iVar7 != iVar1) {
              lVar9 = *(long *)PTR_DAT_02712b80 * 0x5851f42d4c957f2d + 1;
              *(long *)PTR_DAT_02712b80 = lVar9;
              iVar7 = (1 - iVar1) + iVar7;
              sVar5 = 0;
              uVar11 = (ulong)lVar9 >> 0x21;
              if (iVar7 != 0) {
                sVar5 = (short)((int)(uint)uVar11 / iVar7);
              }
              *(short *)((long)param_1 + 0x42) =
                   ((short)uVar11 - sVar5 * (short)iVar7) + (short)iVar1;
              uVar11 = 1;
              goto joined_r0x004177f4;
            }
          }
          *(short *)((long)param_1 + 0x42) = sVar5;
          uVar11 = 1;
        }
      }
    }
  }
joined_r0x004177f4:
  unaff_x23 = uVar11;
  if (puVar10 != (undefined8 *)0x0) {
    local_68 = local_68 & 0xffffffff00000000;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,puVar10);
  }
LAB_00417854:
  return unaff_x23 & 0xffffffff;
}


