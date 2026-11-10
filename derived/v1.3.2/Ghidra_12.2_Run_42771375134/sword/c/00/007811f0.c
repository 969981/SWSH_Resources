/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007811f0; name: FUN_007811f0
 */


void FUN_007811f0(long param_1,int *param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ushort uVar4;
  long lVar5;
  undefined4 uVar6;
  ushort *puVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  undefined4 local_68;
  
  plVar10 = (long *)(param_1 + 8);
  lVar12 = *plVar10;
  lVar14 = *(long *)(param_1 + 0x10);
  while (lVar15 = lVar14, lVar15 != lVar12) {
    if (*(long *)(lVar15 + -0x10) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar15 + -0x10) + 0x48) + 0x18))();
      *(undefined8 *)(lVar15 + -0x10) = 0;
    }
    lVar14 = lVar15 + -0x50;
    if (*(long *)(lVar15 + -0x30) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar15 + -0x30) + 0x48) + 0x18))();
      *(undefined8 *)(lVar15 + -0x30) = 0;
    }
  }
  plVar11 = (long *)(param_1 + 0x38);
  lVar15 = *plVar11;
  *(long *)(param_1 + 0x10) = lVar12;
  lVar14 = *(long *)(param_1 + 0x40);
  while (lVar12 = lVar14, lVar12 != lVar15) {
    if (*(long *)(lVar12 + -0x10) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar12 + -0x10) + 0x48) + 0x18))();
      *(undefined8 *)(lVar12 + -0x10) = 0;
    }
    lVar14 = lVar12 + -0x50;
    if (*(long *)(lVar12 + -0x30) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar12 + -0x30) + 0x48) + 0x18))();
      *(undefined8 *)(lVar12 + -0x30) = 0;
    }
  }
  plVar13 = (long *)(param_1 + 0x68);
  lVar12 = *plVar13;
  *(long *)(param_1 + 0x40) = lVar15;
  lVar14 = *(long *)(param_1 + 0x70);
  while (lVar15 = lVar14, lVar15 != lVar12) {
    if (*(long *)(lVar15 + -0x10) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar15 + -0x10) + 0x48) + 0x18))();
      *(undefined8 *)(lVar15 + -0x10) = 0;
    }
    lVar14 = lVar15 + -0x50;
    if (*(long *)(lVar15 + -0x30) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar15 + -0x30) + 0x48) + 0x18))();
      *(undefined8 *)(lVar15 + -0x30) = 0;
    }
  }
  *(long *)(param_1 + 0x70) = lVar12;
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (param_2 != (int *)0x0) {
    puVar7 = (ushort *)((long)param_2 - (long)*param_2);
    if ((4 < *puVar7) && (uVar17 = (ulong)puVar7[2], uVar17 != 0)) {
      puVar1 = (uint *)((long)param_2 + uVar17);
      uVar16 = (ulong)*puVar1;
      if (*(int *)((long)puVar1 + uVar16) != 0) {
        if ((*puVar7 < 0xd) || ((ulong)puVar7[6] == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined4 *)((long)param_2 + (ulong)puVar7[6]);
        }
        FUN_00781760(plVar10,uVar6);
        if ((*(ushort *)((long)param_2 - (long)*param_2) < 0xf) ||
           (uVar8 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[7], uVar8 == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined4 *)((long)param_2 + uVar8);
        }
        FUN_00781760(plVar11,uVar6);
        if ((*(ushort *)((long)param_2 - (long)*param_2) < 0x11) ||
           (uVar8 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[8], uVar8 == 0)) {
          FUN_00781760(plVar13,0);
          iVar3 = *(int *)((long)puVar1 + uVar16);
        }
        else {
          FUN_00781760(plVar13,*(undefined4 *)((long)param_2 + uVar8));
          iVar3 = *(int *)((long)puVar1 + uVar16);
        }
        if (iVar3 != 0) {
          uVar8 = 0;
          lVar14 = (long)param_2 + uVar16 + uVar17 + 0x10;
          do {
            uVar17 = (ulong)*(uint *)(lVar14 + -0xc);
            lVar15 = uVar17 - (long)*(int *)(lVar14 + uVar17 + -0xc);
            lVar12 = lVar14 + lVar15;
            uVar4 = *(ushort *)(lVar12 + -0xc);
            if (uVar4 < 0x11) {
              if (0xc < uVar4) goto LAB_007815f8;
LAB_00781620:
              FUN_00782720(&local_b0);
              puVar2 = *(undefined8 **)(param_1 + 0x10);
              if (puVar2 < *(undefined8 **)(param_1 + 0x18)) {
                uVar18 = *(undefined8 *)(param_1 + 0x20);
                lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
                lVar15 = local_70;
                lVar12 = local_90;
                if (0xf < *(ulong *)(lVar5 + 0x80)) {
LAB_00781750:
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar18;
                *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
                *puVar2 = local_b0;
                puVar2[1] = local_a8;
                puVar2[2] = local_a0;
                puVar2[3] = local_98;
                local_90 = 0;
                puVar2[4] = lVar12;
                puVar2[5] = local_88;
                puVar2[6] = local_80;
                puVar2[7] = local_78;
                local_70 = 0;
                puVar2[8] = lVar15;
                *(undefined4 *)(puVar2 + 9) = local_68;
                *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
                *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x50;
              }
              else {
                FUN_00782060(plVar10,&local_b0);
joined_r0x007815ac:
                if (local_70 != 0) {
                  (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
                  local_70 = 0;
                }
              }
LAB_00781704:
              if (local_90 != 0) {
                (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
                local_90 = 0;
              }
            }
            else {
              uVar9 = (ulong)*(ushort *)(lVar12 + 4);
              if ((uVar9 == 0) || (*(char *)(lVar14 + uVar17 + uVar9 + -0xc) == '\0')) {
LAB_007815f8:
                uVar9 = (ulong)*(ushort *)(lVar14 + lVar15);
                if (uVar9 == 0) goto LAB_00781620;
                iVar3 = *(int *)(lVar14 + uVar17 + uVar9 + -0xc);
                if (iVar3 == 2) {
                  FUN_00782720(&local_b0);
                  puVar2 = *(undefined8 **)(param_1 + 0x70);
                  if (*(undefined8 **)(param_1 + 0x78) <= puVar2) {
                    FUN_00782060(plVar13,&local_b0);
                    goto joined_r0x007815ac;
                  }
                  uVar18 = *(undefined8 *)(param_1 + 0x80);
                  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
                  lVar15 = local_70;
                  lVar12 = local_90;
                  if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_00781750;
                  *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar18;
                  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
                  *puVar2 = local_b0;
                  puVar2[1] = local_a8;
                  puVar2[2] = local_a0;
                  puVar2[3] = local_98;
                  local_90 = 0;
                  puVar2[4] = lVar12;
                  puVar2[5] = local_88;
                  puVar2[6] = local_80;
                  puVar2[7] = local_78;
                  local_70 = 0;
                  puVar2[8] = lVar15;
                  *(undefined4 *)(puVar2 + 9) = local_68;
                  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
                  *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + 0x50;
                }
                else {
                  if (iVar3 != 1) {
                    if (iVar3 != 0) goto LAB_0078171c;
                    goto LAB_00781620;
                  }
                  FUN_00782720(&local_b0);
                  puVar2 = *(undefined8 **)(param_1 + 0x40);
                  if (*(undefined8 **)(param_1 + 0x48) <= puVar2) {
                    FUN_00782060(plVar11,&local_b0);
                    goto joined_r0x007815ac;
                  }
                  uVar18 = *(undefined8 *)(param_1 + 0x50);
                  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
                  lVar15 = local_70;
                  lVar12 = local_90;
                  if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_00781750;
                  *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar18;
                  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
                  *puVar2 = local_b0;
                  puVar2[1] = local_a8;
                  puVar2[2] = local_a0;
                  puVar2[3] = local_98;
                  local_90 = 0;
                  puVar2[4] = lVar12;
                  puVar2[5] = local_88;
                  puVar2[6] = local_80;
                  puVar2[7] = local_78;
                  local_70 = 0;
                  puVar2[8] = lVar15;
                  *(undefined4 *)(puVar2 + 9) = local_68;
                  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
                  *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + 0x50;
                }
                goto LAB_00781704;
              }
            }
LAB_0078171c:
            uVar8 = uVar8 + 1;
            lVar14 = lVar14 + 4;
          } while (uVar8 < *(uint *)((long)puVar1 + uVar16));
        }
      }
    }
  }
  return;
}


