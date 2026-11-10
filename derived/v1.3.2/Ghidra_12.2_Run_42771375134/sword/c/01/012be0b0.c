/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012be0b0; name: FUN_012be0b0
 */


void FUN_012be0b0(undefined1 *param_1,long *param_2,int param_3,int *param_4)

{
  uint *puVar1;
  ulong uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  ulong uVar14;
  ulong *puVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  byte *pbVar19;
  ulong uVar20;
  ulong uVar21;
  uint uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  int *piVar26;
  int *piVar27;
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
  
  lVar25 = *param_2;
  local_88 = *(long **)(lVar25 + 8);
  piVar26 = (int *)0x0;
  piVar27 = param_4 + 0x1a0;
  local_98 = (undefined8 *)0x0;
  local_90 = (undefined8 *)0x0;
  local_a0 = (undefined8 *)0x0;
  local_78 = 0;
  uStack_80 = 0;
  do {
    local_70 = piVar26;
    local_64 = param_3;
    uVar14 = (**(code **)param_2[1])((undefined8 *)param_2[1] + 4,&local_64,&local_70);
    if ((((uVar14 & 1) != 0) &&
        (iVar9 = FUN_0087d3e0(*(undefined8 *)(lVar25 + 0x58)), *param_4 <= iVar9)) &&
       (iVar9 <= param_4[1])) {
      uVar10 = FUN_0087d530(*(undefined8 *)(lVar25 + 0x58));
      if ((param_4[2] <= (int)(uVar10 & 0xff)) && ((int)(uVar10 & 0xff) <= param_4[3])) {
        uVar10 = FUN_00878ac0(*(undefined8 *)(lVar25 + 0x58));
        if ((param_4[4] <= (int)(uVar10 & 0xff)) && ((int)(uVar10 & 0xff) <= param_4[5])) {
          if (param_3 == 5) {
            FUN_012ba360(&local_70);
            iVar9 = FUN_012c3620(local_70);
            if (local_70 != (int *)0x0) {
              (**(code **)(*(long *)(local_70 + 0x12) + 0x18))();
              local_70 = (int *)0x0;
            }
            FUN_012ba510(&local_70);
            iVar11 = FUN_012f7310(local_70);
            if (local_70 != (int *)0x0) {
              (**(code **)(*(long *)(local_70 + 0x12) + 0x18))();
              local_70 = (int *)0x0;
            }
            bVar3 = *(byte *)(param_4 + 6);
            if (bVar3 != 0) {
              lVar17 = 0x19;
              uVar14 = 0xcbf29ce484222645;
              do {
                uVar14 = (uVar14 ^ bVar3) * 0x100000001b3;
                bVar3 = *(byte *)((long)param_4 + lVar17);
                lVar17 = lVar17 + 1;
              } while (bVar3 != 0);
              if ((long)uVar14 < -0x15611abd55cfde14) {
                if (uVar14 == 0xea9ee142aa301b20) {
                  if (iVar9 == 4) {
                    uVar12 = FUN_0087eca0(*(undefined8 *)(lVar25 + 0x58));
                    uVar13 = FUN_0087ed40(*(undefined8 *)(lVar25 + 0x58));
                    uVar14 = FUN_012c3630(4,uVar12,uVar13);
                    goto joined_r0x012be450;
                  }
                }
                else if (uVar14 == 0xea9ee342aa301e86) {
                  if (iVar9 == 5) {
                    uVar12 = FUN_0087eca0(*(undefined8 *)(lVar25 + 0x58));
                    uVar13 = FUN_0087ed40(*(undefined8 *)(lVar25 + 0x58));
                    uVar14 = FUN_012c3630(5,uVar12,uVar13);
                    goto joined_r0x012be450;
                  }
                }
                else if (uVar14 == 0xea9ee442aa302039) {
                  cVar8 = FUN_0087eca0(*(undefined8 *)(lVar25 + 0x58));
                  if (cVar8 == '\a') {
                    bVar7 = true;
                  }
                  else {
                    cVar8 = FUN_0087ed40(*(undefined8 *)(lVar25 + 0x58));
                    bVar7 = cVar8 == '\a';
                  }
                  if ((iVar11 - 5U < 2) && (bVar7)) goto LAB_012be47c;
                }
              }
              else if ((long)uVar14 < -0x156118bd55cfdaae) {
                if (uVar14 == 0xea9ee542aa3021ec) {
                  if (iVar9 == 0) {
                    uVar12 = FUN_0087eca0(*(undefined8 *)(lVar25 + 0x58));
                    uVar13 = FUN_0087ed40(*(undefined8 *)(lVar25 + 0x58));
                    uVar14 = FUN_012c3630(0,uVar12,uVar13);
                    goto joined_r0x012be450;
                  }
                }
                else if ((uVar14 == 0xea9ee642aa30239f) && (iVar9 == 1)) {
                  uVar12 = FUN_0087eca0(*(undefined8 *)(lVar25 + 0x58));
                  uVar13 = FUN_0087ed40(*(undefined8 *)(lVar25 + 0x58));
                  uVar14 = FUN_012c3630(1,uVar12,uVar13);
                  goto joined_r0x012be450;
                }
              }
              else if (uVar14 == 0xea9ee742aa302552) {
                if (iVar9 == 2) {
                  uVar12 = FUN_0087eca0(*(undefined8 *)(lVar25 + 0x58));
                  uVar13 = FUN_0087ed40(*(undefined8 *)(lVar25 + 0x58));
                  uVar14 = FUN_012c3630(2,uVar12,uVar13);
                  goto joined_r0x012be450;
                }
              }
              else if ((uVar14 == 0xea9ee842aa302705) && (iVar9 == 3)) {
                uVar12 = FUN_0087eca0(*(undefined8 *)(lVar25 + 0x58));
                uVar13 = FUN_0087ed40(*(undefined8 *)(lVar25 + 0x58));
                uVar14 = FUN_012c3630(3,uVar12,uVar13);
joined_r0x012be450:
                if ((uVar14 & 1) != 0) goto LAB_012be47c;
              }
            }
          }
          else {
LAB_012be47c:
            plVar6 = local_88;
            puVar5 = local_98;
            local_70 = param_4;
            if (local_98 < local_90) {
              lVar17 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
              if (0xf < *(ulong *)(lVar17 + 0x80)) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              *(long **)(lVar17 + *(ulong *)(lVar17 + 0x80) * 8) = plVar6;
              *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + 1;
              *puVar5 = local_70;
              *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + -1;
              local_98 = local_98 + 1;
            }
            else {
              FUN_012bb870(&local_a0,&local_70);
            }
          }
        }
      }
    }
    param_4 = param_4 + 0x20;
    piVar26 = (int *)((long)piVar26 + 1);
  } while (param_4 != piVar27);
  if (local_a0 == local_98) {
    *param_1 = 0;
  }
  else {
    lVar17 = (long)local_98 - (long)local_a0;
    if (lVar17 == 8) {
      uVar14 = 0;
    }
    else {
      puVar15 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
      if (lVar17 == 0) {
        uVar16 = *puVar15;
        uVar14 = puVar15[1] + uVar16;
        uVar18 = puVar15[1] ^ uVar16;
        *puVar15 = uVar18 ^ (uVar16 >> 0x28 | uVar16 << 0x18) ^ uVar18 << 0x10;
        puVar15[1] = uVar18 >> 0x1b | uVar18 << 0x25;
      }
      else {
        uVar16 = lVar17 >> 3;
        uVar18 = (0x40 - LZCOUNT(uVar16)) -
                 (ulong)((0xffffffffffffffffU >> (0x41U - (0x40 - LZCOUNT(uVar16)) & 0x3f) & uVar16)
                        == 0);
        uVar14 = uVar18 >> 6;
        if ((uVar18 & 0x3f) != 0) {
          uVar14 = uVar14 + 1;
        }
        uVar20 = 0;
        if (uVar14 != 0) {
          uVar20 = uVar18 / uVar14;
        }
        uVar2 = 0;
        if (uVar14 <= uVar18) {
          uVar2 = 0xffffffffffffffff >> (-uVar20 & 0x3f);
        }
        uVar18 = *puVar15;
        uVar20 = puVar15[1];
        do {
          uVar21 = uVar18 ^ uVar20;
          uVar14 = uVar18 + uVar20;
          uVar20 = uVar21 >> 0x1b | uVar21 << 0x25;
          uVar18 = uVar21 ^ (uVar18 >> 0x28 | uVar18 << 0x18) ^ uVar21 << 0x10;
          uVar14 = uVar14 & uVar2;
        } while (uVar16 <= uVar14);
        *puVar15 = uVar18;
        puVar15[1] = uVar20;
      }
    }
    puVar4 = PTR_DAT_02727478;
    lVar17 = local_a0[uVar14];
    if (*(int *)(lVar17 + 0x78) < 1) {
      local_a4 = 0x55;
      local_b0 = 1;
    }
    else {
      local_a4 = 0x55;
      local_b0 = 1;
      lVar24 = 0;
      piVar27 = (int *)(lVar17 + 0x5c);
      do {
        uVar10 = *(uint *)(puVar4 + (long)piVar27[-1] * 4);
        if ((uVar10 == 0x24) || (uVar22 = uVar10, uVar10 == 0x22)) {
          lVar23 = *(long *)param_2[2];
          uVar14 = FUN_0131acf0(*(undefined8 *)(lVar23 + 0xc0));
          uVar22 = 0x23;
          if ((uVar14 & 1) == 0) goto LAB_012be6a0;
          lVar23 = *(long *)(lVar23 + 0xc0);
          if (lVar23 != 0) {
            FUN_0131acf0(lVar23);
            piVar26 = *(int **)(lVar23 + 0x130);
            puVar1 = (uint *)((long)piVar26 +
                             (ulong)*(ushort *)((long)piVar26 + (4 - (long)*piVar26)));
            uVar22 = 0x23;
            if (*(char *)((long)puVar1 + (ulong)uVar10 + (ulong)*puVar1 + 4) != '\0') {
              uVar22 = uVar10;
            }
            goto LAB_012be6a0;
          }
          uVar22 = 0x23;
          uVar14 = FUN_0131acf0(*(undefined8 *)(lVar25 + 0xc0));
        }
        else {
LAB_012be6a0:
          uVar14 = FUN_0131acf0(*(undefined8 *)(lVar25 + 0xc0));
        }
        if ((uVar14 & 1) != 0) {
          lVar23 = *(long *)(lVar25 + 0xc0);
          if (lVar23 != 0) {
            if (uVar22 < 0x55) {
              FUN_0131acf0(lVar23);
              piVar26 = *(int **)(lVar23 + 0x130);
              puVar1 = (uint *)((long)piVar26 +
                               (ulong)*(ushort *)((long)piVar26 + (4 - (long)*piVar26)));
              if (*(char *)((long)puVar1 + (ulong)uVar22 + (ulong)*puVar1 + 4) == '\0')
              goto LAB_012be6f8;
            }
            local_b0 = (long)*piVar27;
            local_a4 = uVar22;
          }
        }
LAB_012be6f8:
        lVar24 = lVar24 + 1;
        piVar27 = piVar27 + 2;
      } while (lVar24 < *(int *)(lVar17 + 0x78));
    }
    bVar3 = *(byte *)(lVar17 + 0x18);
    uVar14 = 0xcbf29ce484222645;
    if (bVar3 != 0) {
      pbVar19 = (byte *)(lVar17 + 0x19);
      do {
        uVar14 = (uVar14 ^ bVar3) * 0x100000001b3;
        bVar3 = *pbVar19;
        pbVar19 = pbVar19 + 1;
      } while (bVar3 != 0);
    }
    *(undefined4 *)(param_1 + 0x20) =
         *(undefined4 *)(PTR_DAT_02727480 + (long)*(int *)(lVar17 + 0x7c) * 4);
    *(ulong *)(param_1 + 8) = uVar14;
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


