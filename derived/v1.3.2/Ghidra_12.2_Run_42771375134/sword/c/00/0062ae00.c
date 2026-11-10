/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0062ae00; name: FUN_0062ae00
 */


int FUN_0062ae00(long param_1,long *param_2)

{
  bool bVar1;
  long lVar2;
  short sVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  ushort *puVar8;
  short *psVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  uint *puVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  ushort *puVar20;
  long lVar21;
  short *psVar22;
  long lVar23;
  ulong local_80;
  uint local_74;
  ulong local_70;
  int local_64;
  
  lVar12 = param_2[7];
  puVar16 = *(uint **)(param_1 + 0x478);
  if ((((puVar16 == (uint *)0x0) || (*(long *)(param_1 + 0x438) == 0)) ||
      (local_64 = (**(code **)(param_1 + 0x340))(param_1,0x63766172,param_2,&local_70),
      local_64 != 0)) || (local_64 = FUN_006081f0(param_2,local_70), local_64 != 0)) {
    lVar15 = 0;
    lVar14 = 0;
    lVar13 = 0;
    local_64 = 0;
  }
  else {
    lVar21 = param_2[8];
    lVar23 = *param_2;
    lVar13 = FUN_00608440(param_2);
    if (lVar13 == 0x10000) {
      lVar13 = FUN_006029c0(lVar12,8,0,*puVar16,0,&local_64);
      if (local_64 == 0) {
        lVar14 = FUN_006029c0(lVar12,8,0,*puVar16,0,&local_64);
        if (local_64 == 0) {
          lVar15 = FUN_006029c0(lVar12,8,0,*puVar16,0,&local_64);
          if (local_64 == 0) {
            uVar5 = FUN_00608400(param_2);
            uVar7 = FUN_00608400(param_2);
            uVar5 = uVar5 & 0xfff;
            if (local_70 < (ulong)(uVar5 << 2) + (uVar7 & 0xffff)) {
              local_64 = 8;
            }
            else if (uVar5 != 0) {
              uVar11 = 0;
              local_80 = (lVar21 - lVar23) + (uVar7 & 0xffff);
              do {
                uVar7 = FUN_00608400(param_2);
                uVar6 = FUN_00608400(param_2);
                uVar17 = uVar6 & 0xffff;
                if ((uVar6 >> 0xf & 1) == 0) {
                  if (((uVar17 >> 0xe & 1) != 0) && ((*puVar16 & 0x7fffffff) != 0)) {
                    uVar17 = 0;
                    do {
                      FUN_00608400(param_2);
                      uVar17 = uVar17 + 1;
                    } while (uVar17 < *puVar16 << 1);
                  }
                }
                else {
                  uVar6 = 0;
                  if (*puVar16 != 0) {
                    uVar18 = 0;
                    do {
                      uVar6 = FUN_00608400(param_2);
                      *(long *)(lVar13 + uVar18 * 8) =
                           (long)(int)(-(uVar6 >> 0xf & 1) & 0xfffc0000 | (uVar6 & 0xffff) << 2);
                      uVar6 = *puVar16;
                      uVar18 = uVar18 + 1;
                    } while (uVar18 < uVar6);
                  }
                  if (((uVar17 >> 0xe & 1) != 0) && (uVar6 != 0)) {
                    uVar18 = 0;
                    do {
                      uVar6 = FUN_00608400(param_2);
                      *(long *)(lVar14 + uVar18 * 8) =
                           (long)(int)(-(uVar6 >> 0xf & 1) & 0xfffc0000 | (uVar6 & 0xffff) << 2);
                      uVar18 = uVar18 + 1;
                    } while (uVar18 < *puVar16);
                    if (*puVar16 != 0) {
                      uVar18 = 0;
                      do {
                        uVar6 = FUN_00608400(param_2);
                        *(long *)(lVar15 + uVar18 * 8) =
                             (long)(int)(-(uVar6 >> 0xf & 1) & 0xfffc0000 | (uVar6 & 0xffff) << 2);
                        uVar18 = uVar18 + 1;
                      } while (uVar18 < *puVar16);
                    }
                  }
                  lVar21 = FUN_0062b280(puVar16,uVar17,lVar13,lVar14,lVar15);
                  if (((uVar17 >> 0xd & 1) != 0) && (lVar21 != 0)) {
                    lVar19 = *param_2;
                    lVar2 = param_2[8];
                    lVar23 = lVar19 + local_80;
                    if ((ulong)(param_2[9] - lVar19) <= local_80) {
                      lVar23 = param_2[9];
                    }
                    param_2[8] = lVar23;
                    puVar8 = (ushort *)FUN_0062b390(param_2,local_70,&local_74);
                    uVar17 = local_74;
                    uVar18 = (ulong)local_74;
                    if (local_74 == 0) {
                      uVar10 = *(ulong *)(param_1 + 0x430);
                    }
                    else {
                      uVar10 = uVar18;
                    }
                    psVar9 = (short *)FUN_0062b530(param_2,local_70,uVar10);
                    if ((puVar8 == (ushort *)0x0) || (psVar9 == (short *)0x0)) {
LAB_0062b20c:
                      if (puVar8 != (ushort *)0xffffffffffffffff) {
LAB_0062b218:
                        FUN_006028c0(lVar12,puVar8);
                      }
                    }
                    else {
                      if (puVar8 != (ushort *)0xffffffffffffffff) {
                        puVar20 = puVar8;
                        psVar22 = psVar9;
                        if (uVar17 != 0) {
                          do {
                            if ((ulong)*puVar20 < *(ulong *)(param_1 + 0x430)) {
                              lVar23 = (ulong)*puVar20 * 2;
                              sVar3 = *(short *)(*(long *)(param_1 + 0x438) + lVar23);
                              sVar4 = FUN_00602580((long)*psVar22,lVar21);
                              *(short *)(*(long *)(param_1 + 0x438) + lVar23) = sVar3 + sVar4;
                            }
                            puVar20 = puVar20 + 1;
                            psVar22 = psVar22 + 1;
                            uVar18 = uVar18 - 1;
                          } while (uVar18 != 0);
                          goto LAB_0062b20c;
                        }
                        goto LAB_0062b218;
                      }
                      if (*(long *)(param_1 + 0x430) != 0) {
                        uVar18 = 0;
                        uVar10 = 1;
                        do {
                          sVar3 = *(short *)(*(long *)(param_1 + 0x438) + uVar18 * 2);
                          sVar4 = FUN_00602580((long)psVar9[uVar18],lVar21);
                          *(short *)(*(long *)(param_1 + 0x438) + uVar18 * 2) = sVar3 + sVar4;
                          bVar1 = uVar10 < *(ulong *)(param_1 + 0x430);
                          uVar18 = uVar10;
                          uVar10 = (ulong)((int)uVar10 + 1);
                        } while (bVar1);
                        goto LAB_0062b20c;
                      }
                    }
                    FUN_006028c0(lVar12,psVar9);
                    lVar21 = *param_2 + (lVar2 - lVar19);
                    if ((ulong)(param_2[9] - *param_2) <= (ulong)(lVar2 - lVar19)) {
                      lVar21 = param_2[9];
                    }
                    param_2[8] = lVar21;
                  }
                }
                local_80 = local_80 + (uVar7 & 0xffff);
                uVar11 = uVar11 + 1;
              } while (uVar11 != uVar5);
            }
          }
        }
        else {
          lVar15 = 0;
        }
      }
      else {
        lVar15 = 0;
        lVar14 = 0;
      }
    }
    else {
      lVar15 = 0;
      lVar14 = 0;
      lVar13 = 0;
      local_64 = 0;
    }
    FUN_00608390(param_2);
  }
  FUN_006028c0(lVar12,lVar13);
  FUN_006028c0(lVar12,lVar14);
  FUN_006028c0(lVar12,lVar15);
  return local_64;
}


