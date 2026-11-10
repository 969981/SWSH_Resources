/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012bf370; name: FUN_012bf370
 */


void FUN_012bf370(undefined1 *param_1,long *param_2,int *param_3)

{
  uint *puVar1;
  ulong uVar2;
  int iVar3;
  byte bVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int *piVar15;
  ulong uVar16;
  ulong *puVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  byte *pbVar21;
  ulong uVar22;
  ulong uVar23;
  uint uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  int *piVar28;
  int *piVar29;
  long local_b0;
  uint local_a4;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  long *local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_70;
  int local_64;
  
  iVar3 = *param_3;
  param_2 = (long *)*param_2;
  piVar15 = (int *)FUN_012bfad0();
  lVar26 = *param_2;
  local_88 = *(long **)(lVar26 + 8);
  piVar28 = (int *)0x0;
  piVar29 = piVar15 + 0x100;
  local_98 = (undefined8 *)0x0;
  local_90 = (undefined8 *)0x0;
  local_a0 = (undefined8 *)0x0;
  local_78 = 0;
  uStack_80 = 0;
  do {
    local_70 = piVar28;
    local_64 = iVar3;
    uVar16 = (**(code **)param_2[1])((undefined8 *)param_2[1] + 4,&local_64,&local_70);
    if ((((uVar16 & 1) != 0) &&
        (iVar10 = FUN_0087d3e0(*(undefined8 *)(lVar26 + 0x58)), *piVar15 <= iVar10)) &&
       (iVar10 <= piVar15[1])) {
      uVar11 = FUN_0087d530(*(undefined8 *)(lVar26 + 0x58));
      if ((piVar15[2] <= (int)(uVar11 & 0xff)) && ((int)(uVar11 & 0xff) <= piVar15[3])) {
        uVar11 = FUN_00878ac0(*(undefined8 *)(lVar26 + 0x58));
        if ((piVar15[4] <= (int)(uVar11 & 0xff)) && ((int)(uVar11 & 0xff) <= piVar15[5])) {
          if (iVar3 == 5) {
            FUN_012ba360(&local_70);
            iVar10 = FUN_012c3620(local_70);
            if (local_70 != (int *)0x0) {
              (**(code **)(*(long *)(local_70 + 0x12) + 0x18))();
              local_70 = (int *)0x0;
            }
            FUN_012ba510(&local_70);
            iVar12 = FUN_012f7310(local_70);
            if (local_70 != (int *)0x0) {
              (**(code **)(*(long *)(local_70 + 0x12) + 0x18))();
              local_70 = (int *)0x0;
            }
            bVar4 = *(byte *)(piVar15 + 6);
            if (bVar4 != 0) {
              lVar19 = 0x19;
              uVar16 = 0xcbf29ce484222645;
              do {
                uVar16 = (uVar16 ^ bVar4) * 0x100000001b3;
                bVar4 = *(byte *)((long)piVar15 + lVar19);
                lVar19 = lVar19 + 1;
              } while (bVar4 != 0);
              if ((long)uVar16 < -0x15611abd55cfde14) {
                if (uVar16 == 0xea9ee142aa301b20) {
                  if (iVar10 == 4) {
                    uVar13 = FUN_0087eca0(*(undefined8 *)(lVar26 + 0x58));
                    uVar14 = FUN_0087ed40(*(undefined8 *)(lVar26 + 0x58));
                    uVar16 = FUN_012c3630(4,uVar13,uVar14);
                    goto joined_r0x012bf714;
                  }
                }
                else if (uVar16 == 0xea9ee342aa301e86) {
                  if (iVar10 == 5) {
                    uVar13 = FUN_0087eca0(*(undefined8 *)(lVar26 + 0x58));
                    uVar14 = FUN_0087ed40(*(undefined8 *)(lVar26 + 0x58));
                    uVar16 = FUN_012c3630(5,uVar13,uVar14);
                    goto joined_r0x012bf714;
                  }
                }
                else if (uVar16 == 0xea9ee442aa302039) {
                  cVar9 = FUN_0087eca0(*(undefined8 *)(lVar26 + 0x58));
                  if (cVar9 == '\a') {
                    bVar8 = true;
                  }
                  else {
                    cVar9 = FUN_0087ed40(*(undefined8 *)(lVar26 + 0x58));
                    bVar8 = cVar9 == '\a';
                  }
                  if ((iVar12 - 5U < 2) && (bVar8)) goto LAB_012bf740;
                }
              }
              else if ((long)uVar16 < -0x156118bd55cfdaae) {
                if (uVar16 == 0xea9ee542aa3021ec) {
                  if (iVar10 == 0) {
                    uVar13 = FUN_0087eca0(*(undefined8 *)(lVar26 + 0x58));
                    uVar14 = FUN_0087ed40(*(undefined8 *)(lVar26 + 0x58));
                    uVar16 = FUN_012c3630(0,uVar13,uVar14);
                    goto joined_r0x012bf714;
                  }
                }
                else if ((uVar16 == 0xea9ee642aa30239f) && (iVar10 == 1)) {
                  uVar13 = FUN_0087eca0(*(undefined8 *)(lVar26 + 0x58));
                  uVar14 = FUN_0087ed40(*(undefined8 *)(lVar26 + 0x58));
                  uVar16 = FUN_012c3630(1,uVar13,uVar14);
                  goto joined_r0x012bf714;
                }
              }
              else if (uVar16 == 0xea9ee742aa302552) {
                if (iVar10 == 2) {
                  uVar13 = FUN_0087eca0(*(undefined8 *)(lVar26 + 0x58));
                  uVar14 = FUN_0087ed40(*(undefined8 *)(lVar26 + 0x58));
                  uVar16 = FUN_012c3630(2,uVar13,uVar14);
                  goto joined_r0x012bf714;
                }
              }
              else if ((uVar16 == 0xea9ee842aa302705) && (iVar10 == 3)) {
                uVar13 = FUN_0087eca0(*(undefined8 *)(lVar26 + 0x58));
                uVar14 = FUN_0087ed40(*(undefined8 *)(lVar26 + 0x58));
                uVar16 = FUN_012c3630(3,uVar13,uVar14);
joined_r0x012bf714:
                if ((uVar16 & 1) != 0) goto LAB_012bf740;
              }
            }
          }
          else {
LAB_012bf740:
            plVar7 = local_88;
            puVar6 = local_98;
            local_70 = piVar15;
            if (local_98 < local_90) {
              lVar19 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
              if (0xf < *(ulong *)(lVar19 + 0x80)) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              *(long **)(lVar19 + *(ulong *)(lVar19 + 0x80) * 8) = plVar7;
              *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + 1;
              *puVar6 = local_70;
              *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + -1;
              local_98 = local_98 + 1;
            }
            else {
              FUN_012bb870(&local_a0,&local_70);
            }
          }
        }
      }
    }
    piVar15 = piVar15 + 0x20;
    piVar28 = (int *)((long)piVar28 + 1);
  } while (piVar15 != piVar29);
  if (local_a0 == local_98) {
    *param_1 = 0;
  }
  else {
    lVar19 = (long)local_98 - (long)local_a0;
    if (lVar19 == 8) {
      uVar16 = 0;
    }
    else {
      puVar17 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
      if (lVar19 == 0) {
        uVar18 = *puVar17;
        uVar16 = puVar17[1] + uVar18;
        uVar20 = puVar17[1] ^ uVar18;
        *puVar17 = uVar20 ^ (uVar18 >> 0x28 | uVar18 << 0x18) ^ uVar20 << 0x10;
        puVar17[1] = uVar20 >> 0x1b | uVar20 << 0x25;
      }
      else {
        uVar18 = lVar19 >> 3;
        uVar20 = (0x40 - LZCOUNT(uVar18)) -
                 (ulong)((0xffffffffffffffffU >> (0x41U - (0x40 - LZCOUNT(uVar18)) & 0x3f) & uVar18)
                        == 0);
        uVar16 = uVar20 >> 6;
        if ((uVar20 & 0x3f) != 0) {
          uVar16 = uVar16 + 1;
        }
        uVar22 = 0;
        if (uVar16 != 0) {
          uVar22 = uVar20 / uVar16;
        }
        uVar2 = 0;
        if (uVar16 <= uVar20) {
          uVar2 = 0xffffffffffffffff >> (-uVar22 & 0x3f);
        }
        uVar20 = *puVar17;
        uVar22 = puVar17[1];
        do {
          uVar23 = uVar20 ^ uVar22;
          uVar16 = uVar20 + uVar22;
          uVar22 = uVar23 >> 0x1b | uVar23 << 0x25;
          uVar20 = uVar23 ^ (uVar20 >> 0x28 | uVar20 << 0x18) ^ uVar23 << 0x10;
          uVar16 = uVar16 & uVar2;
        } while (uVar18 <= uVar16);
        *puVar17 = uVar20;
        puVar17[1] = uVar22;
      }
    }
    puVar5 = PTR_DAT_02727478;
    lVar19 = local_a0[uVar16];
    if (*(int *)(lVar19 + 0x78) < 1) {
      local_a4 = 0x55;
      local_b0 = 1;
    }
    else {
      local_a4 = 0x55;
      local_b0 = 1;
      lVar27 = 0;
      piVar29 = (int *)(lVar19 + 0x5c);
      do {
        uVar11 = *(uint *)(puVar5 + (long)piVar29[-1] * 4);
        if ((uVar11 == 0x24) || (uVar24 = uVar11, uVar11 == 0x22)) {
          lVar25 = *(long *)param_2[2];
          uVar16 = FUN_0131acf0(*(undefined8 *)(lVar25 + 0xc0));
          uVar24 = 0x23;
          if ((uVar16 & 1) == 0) goto LAB_012bf964;
          lVar25 = *(long *)(lVar25 + 0xc0);
          if (lVar25 != 0) {
            FUN_0131acf0(lVar25);
            piVar15 = *(int **)(lVar25 + 0x130);
            puVar1 = (uint *)((long)piVar15 +
                             (ulong)*(ushort *)((long)piVar15 + (4 - (long)*piVar15)));
            uVar24 = 0x23;
            if (*(char *)((long)puVar1 + (ulong)uVar11 + (ulong)*puVar1 + 4) != '\0') {
              uVar24 = uVar11;
            }
            goto LAB_012bf964;
          }
          uVar24 = 0x23;
          uVar16 = FUN_0131acf0(*(undefined8 *)(lVar26 + 0xc0));
        }
        else {
LAB_012bf964:
          uVar16 = FUN_0131acf0(*(undefined8 *)(lVar26 + 0xc0));
        }
        if ((uVar16 & 1) != 0) {
          lVar25 = *(long *)(lVar26 + 0xc0);
          if (lVar25 != 0) {
            if (uVar24 < 0x55) {
              FUN_0131acf0(lVar25);
              piVar15 = *(int **)(lVar25 + 0x130);
              puVar1 = (uint *)((long)piVar15 +
                               (ulong)*(ushort *)((long)piVar15 + (4 - (long)*piVar15)));
              if (*(char *)((long)puVar1 + (ulong)uVar24 + (ulong)*puVar1 + 4) == '\0')
              goto LAB_012bf9bc;
            }
            local_b0 = (long)*piVar29;
            local_a4 = uVar24;
          }
        }
LAB_012bf9bc:
        lVar27 = lVar27 + 1;
        piVar29 = piVar29 + 2;
      } while (lVar27 < *(int *)(lVar19 + 0x78));
    }
    bVar4 = *(byte *)(lVar19 + 0x18);
    uVar16 = 0xcbf29ce484222645;
    if (bVar4 != 0) {
      pbVar21 = (byte *)(lVar19 + 0x19);
      do {
        uVar16 = (uVar16 ^ bVar4) * 0x100000001b3;
        bVar4 = *pbVar21;
        pbVar21 = pbVar21 + 1;
      } while (bVar4 != 0);
    }
    *(undefined4 *)(param_1 + 0x20) =
         *(undefined4 *)(PTR_DAT_02727480 + (long)*(int *)(lVar19 + 0x7c) * 4);
    *(ulong *)(param_1 + 8) = uVar16;
    *(uint *)(param_1 + 0x10) = local_a4;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(long *)(param_1 + 0x18) = local_b0;
    param_1[0x24] = 0;
    *(undefined2 *)(param_1 + 0x25) = (undefined2)local_70;
    param_1[0x27] = local_70._2_1_;
    *param_1 = 1;
  }
  if (local_a0 != (undefined8 *)0x0) {
    local_98 = local_a0;
    (**(code **)(*local_88 + 0x18))(local_88,local_a0,(long)local_90 - (long)local_a0,8);
  }
  return;
}


