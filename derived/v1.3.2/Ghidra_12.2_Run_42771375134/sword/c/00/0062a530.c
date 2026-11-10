/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0062a530; name: FUN_0062a530
 */


uint FUN_0062a530(long param_1,uint param_2,void *param_3,char param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ushort uVar5;
  int iVar6;
  void *pvVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  long lVar20;
  long *plVar21;
  uint *puVar22;
  ushort *puVar23;
  uint *puVar24;
  undefined1 uVar25;
  uint uVar26;
  uint local_9c;
  long local_98;
  ushort local_90;
  ushort local_8e;
  long local_88;
  ushort local_80;
  byte local_7e;
  long local_78;
  ulong local_70;
  uint local_64;
  
  local_9c = 0;
  *(undefined1 *)(param_1 + 0x471) = 0;
  uVar19 = *(undefined8 *)(param_1 + 0xb8);
  puVar24 = *(uint **)(param_1 + 0x478);
  if (puVar24 == (uint *)0x0) {
    iVar6 = FUN_00629640(param_1,0);
    if (iVar6 != 0) {
      return iVar6;
    }
    puVar24 = *(uint **)(param_1 + 0x478);
  }
  local_9c = 0;
  puVar22 = *(uint **)(puVar24 + 6);
  uVar26 = *puVar22;
  if (param_2 <= *puVar22) {
    uVar26 = param_2;
  }
  if (uVar26 == 0) {
    uVar25 = 1;
    cVar3 = *(char *)(param_1 + 0x470);
  }
  else {
    lVar10 = 0;
    uVar25 = 1;
    do {
      lVar14 = *(long *)((long)param_3 + lVar10 * 8);
      if (0x20000 < lVar14 + 0x10000U) {
        return 6;
      }
      lVar10 = lVar10 + 1;
      if (lVar14 != 0) {
        uVar25 = 0;
      }
    } while ((uint)lVar10 < uVar26);
    cVar3 = *(char *)(param_1 + 0x470);
  }
  if ((cVar3 == '\0') && (*(long *)(puVar24 + 0x20) == 0)) {
    lVar10 = *(long *)(param_1 + 0xc0);
    uVar11 = *(undefined8 *)(lVar10 + 0x38);
    local_64 = (**(code **)(param_1 + 0x340))(param_1,0x67766172,lVar10,&local_70);
    if (local_64 == 0) {
      lVar14 = FUN_00607fe0(lVar10);
      local_64 = FUN_00608530(lVar10,&DAT_021358e4,&local_98);
      if (local_64 == 0) {
        if (((local_98 == 0x10000) && (local_90 == **(ushort **)(puVar24 + 6))) &&
           ((ulong)local_8e * (ulong)local_90 <= local_70 >> 1)) {
          lVar16 = 2;
          if ((local_7e & 1) != 0) {
            lVar16 = 4;
          }
          if (lVar16 * (ulong)local_80 <= local_70) {
            *(ulong *)(puVar24 + 0x22) = local_70;
            puVar24[0x1a] = (uint)local_8e;
            puVar24[0x1e] = (uint)local_80;
            uVar8 = FUN_006029c0(uVar11,8,0,(ulong)local_80 + 1,0,&local_64);
            *(undefined8 *)(puVar24 + 0x20) = uVar8;
            if (local_64 == 0) {
              if ((local_7e & 1) == 0) {
                local_64 = FUN_006081f0(lVar10,(ulong)(puVar24[0x1e] + 1) << 1);
                if (local_64 == 0) {
                  uVar15 = 0;
                  do {
                    uVar5 = FUN_00608400(lVar10);
                    *(ulong *)(*(long *)(puVar24 + 0x20) + uVar15 * 8) =
                         local_78 + lVar14 + (ulong)uVar5 * 2;
                    uVar9 = (int)uVar15 + 1;
                    uVar15 = (ulong)uVar9;
                  } while (uVar9 <= puVar24[0x1e]);
                  goto LAB_0062abf0;
                }
              }
              else {
                local_64 = FUN_006081f0(lVar10,(ulong)(puVar24[0x1e] + 1) << 2);
                if (local_64 == 0) {
                  uVar15 = 0;
                  do {
                    lVar16 = FUN_00608440(lVar10);
                    *(long *)(*(long *)(puVar24 + 0x20) + uVar15 * 8) = lVar16 + local_78 + lVar14;
                    uVar9 = (int)uVar15 + 1;
                    uVar15 = (ulong)uVar9;
                  } while (uVar9 <= puVar24[0x1e]);
LAB_0062abf0:
                  FUN_00608390(lVar10);
                  if (puVar24[0x1a] != 0) {
                    uVar11 = FUN_006029c0(uVar11,8,0,puVar24[0x1a] * (uint)local_90,0,&local_64);
                    *(undefined8 *)(puVar24 + 0x1c) = uVar11;
                    if (((local_64 != 0) ||
                        (local_64 = FUN_006069e0(lVar10,local_88 + lVar14), local_64 != 0)) ||
                       (local_64 = FUN_006081f0(lVar10,(ulong)(puVar24[0x1a] * (uint)local_90) << 1)
                       , local_64 != 0)) goto LAB_0062a688;
                    uVar9 = puVar24[0x1a];
                    if (uVar9 != 0) {
                      uVar13 = (uint)local_90;
                      uVar2 = 0;
                      do {
                        if (uVar13 == 0) {
                          uVar13 = 0;
                        }
                        else {
                          uVar9 = 0;
                          do {
                            uVar13 = FUN_00608400(lVar10);
                            *(long *)(*(long *)(puVar24 + 0x1c) +
                                     (ulong)(uVar9 + uVar2 * local_90) * 8) =
                                 (long)(int)(-(uVar13 >> 0xf & 1) & 0xfffc0000 |
                                            (uVar13 & 0xffff) << 2);
                            uVar13 = (uint)local_90;
                            uVar9 = uVar9 + 1;
                          } while (uVar9 < uVar13);
                          uVar9 = puVar24[0x1a];
                        }
                        uVar2 = uVar2 + 1;
                      } while (uVar2 < uVar9);
                    }
                    FUN_00608390(lVar10);
                  }
                  local_9c = local_64;
                  if (local_64 != 0) {
                    return local_64;
                  }
                  goto LAB_0062a6c0;
                }
              }
            }
            goto LAB_0062a688;
          }
        }
        local_64 = 8;
      }
    }
LAB_0062a688:
    if (local_64 != 0) {
      return local_64;
    }
    local_9c = 0;
  }
LAB_0062a6c0:
  if (*(long *)(puVar24 + 2) == 0) {
    uVar11 = FUN_006029c0(uVar19,8,0,*puVar22,0,&local_9c);
    *(undefined8 *)(puVar24 + 2) = uVar11;
    if (local_9c != 0) {
      return local_9c;
    }
    bVar4 = true;
    pvVar7 = *(void **)(puVar24 + 4);
    if (pvVar7 != (void *)0x0) goto LAB_0062a6d4;
  }
  else {
    bVar4 = false;
    pvVar7 = *(void **)(puVar24 + 4);
    if (pvVar7 != (void *)0x0) {
LAB_0062a6d4:
      uVar15 = 0;
      if (uVar26 != 0) {
        do {
          if (*(long *)((long)pvVar7 + uVar15 * 8) != *(long *)((long)param_3 + uVar15 * 8)) {
            iVar6 = 2;
            uVar9 = *puVar22;
            if (uVar9 <= (uint)uVar15) goto LAB_0062a7cc;
            goto LAB_0062a7ac;
          }
          uVar9 = (uint)uVar15 + 1;
          uVar15 = (ulong)uVar9;
        } while (uVar9 < uVar26);
      }
      iVar6 = 0;
      uVar9 = *puVar22;
      if ((uint)uVar15 < uVar9) {
LAB_0062a7ac:
        do {
          if (*(long *)((long)pvVar7 + uVar15 * 8) != 0) {
            iVar6 = 2;
            break;
          }
          uVar15 = uVar15 + 1;
        } while ((uint)uVar15 < uVar9);
      }
      goto LAB_0062a7cc;
    }
  }
  pvVar7 = (void *)FUN_006029c0(uVar19,8,0,*puVar22,0,&local_9c);
  *(void **)(puVar24 + 4) = pvVar7;
  if (local_9c != 0) {
    return local_9c;
  }
  uVar9 = *puVar22;
  iVar6 = 1;
LAB_0062a7cc:
  *puVar24 = uVar9;
  memcpy(pvVar7,param_3,(ulong)uVar26 << 3);
  if (param_4 != '\0') {
    if (bVar4) {
      uVar26 = *puVar24;
    }
    puVar22 = *(uint **)(param_1 + 0x478);
    uVar2 = *puVar22;
    pvVar7 = *(void **)(puVar24 + 2);
    uVar9 = uVar2;
    if (uVar26 <= uVar2) {
      uVar9 = uVar26;
    }
    if (*(char *)(param_1 + 0x471) == '\0') {
      if (uVar9 != 0) {
                    /* WARNING: Subroutine does not return */
        memset(pvVar7,0,(ulong)uVar9 << 3);
      }
    }
    else if (uVar9 != 0) {
      lVar10 = *(long *)(puVar24 + 4);
      uVar15 = (ulong)uVar9;
      if (uVar15 - 1 < 3) {
        lVar14 = 0;
      }
      else {
        lVar14 = 0;
        puVar12 = (undefined8 *)(lVar10 + 0x10);
        puVar17 = (undefined8 *)((long)pvVar7 + 0x10);
        do {
          puVar17[-2] = puVar12[-2];
          puVar17[-1] = puVar12[-1];
          *puVar17 = *puVar12;
          puVar1 = puVar12 + 1;
          lVar14 = lVar14 + 4;
          puVar12 = puVar12 + 4;
          puVar17[1] = *puVar1;
          puVar17 = puVar17 + 4;
        } while (uVar15 - (uVar15 & 3) != lVar14);
      }
      if ((uVar9 & 3) != 0) {
        lVar16 = -(uVar15 & 3);
        puVar12 = (undefined8 *)(lVar10 + lVar14 * 8);
        puVar17 = (undefined8 *)((long)pvVar7 + lVar14 * 8);
        do {
          lVar16 = lVar16 + 1;
          *puVar17 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar17 = puVar17 + 1;
        } while (lVar16 != 0);
      }
    }
    if (uVar2 < uVar26) {
                    /* WARNING: Subroutine does not return */
      memset((void *)((long)pvVar7 + (ulong)uVar9 * 8),0,(ulong)(uVar26 + ~uVar9) * 8 + 8);
    }
    if ((uVar9 != 0) && (puVar23 = *(ushort **)(puVar22 + 0xe), puVar23 != (ushort *)0x0)) {
      uVar15 = 0;
      do {
        if (1 < (ulong)*puVar23) {
          lVar14 = *(long *)((long)pvVar7 + uVar15 * 8);
          lVar10 = 0;
          uVar18 = 1;
          do {
            plVar21 = (long *)(*(long *)(puVar23 + 4) + lVar10);
            if (lVar14 < plVar21[3]) {
              lVar14 = FUN_006024c0(lVar14 - plVar21[1],plVar21[2] - *plVar21,
                                    plVar21[3] - plVar21[1]);
              *(long *)((long)pvVar7 + uVar15 * 8) =
                   *(long *)(*(long *)(puVar23 + 4) + lVar10) + lVar14;
              break;
            }
            uVar18 = uVar18 + 1;
            lVar10 = lVar10 + 0x10;
          } while (uVar18 < *puVar23);
        }
        puVar23 = puVar23 + 8;
        uVar15 = uVar15 + 1;
      } while (uVar15 < uVar9);
    }
    if (uVar9 != 0) {
      uVar15 = 0;
      plVar21 = (long *)(*(long *)(*(long *)(puVar22 + 6) + 0x10) + 0x10);
      do {
        lVar10 = *(long *)((long)pvVar7 + uVar15 * 8);
        if (lVar10 < 0) {
          lVar14 = plVar21[-1];
          lVar16 = *plVar21;
          lVar20 = lVar16;
LAB_0062a9bc:
          lVar14 = FUN_00602580(lVar10,lVar16 - lVar14);
          lVar14 = lVar14 + lVar20;
        }
        else {
          lVar14 = *plVar21;
          if (lVar10 != 0) {
            lVar16 = plVar21[1];
            lVar20 = lVar14;
            goto LAB_0062a9bc;
          }
        }
        *(long *)((long)pvVar7 + uVar15 * 8) = lVar14;
        uVar15 = uVar15 + 1;
        plVar21 = plVar21 + 6;
      } while (uVar15 < uVar9);
    }
  }
  *(undefined1 *)(param_1 + 0x471) = 1;
  if (*(long *)(param_1 + 0x438) != 0) {
    if (iVar6 == 1) {
      local_9c = FUN_0062ae00(param_1,*(undefined8 *)(param_1 + 0xc0));
    }
    else if (iVar6 == 2) {
      FUN_006028c0(uVar19);
      *(undefined8 *)(param_1 + 0x438) = 0;
      local_9c = FUN_0062ad00(param_1,*(undefined8 *)(param_1 + 0xc0));
    }
  }
  if ((*(uint *)(*(long *)(puVar24 + 6) + 8) == 0) || (uVar26 = *puVar24, uVar26 == 0)) {
    uVar15 = 0;
  }
  else {
    uVar18 = 0;
    uVar15 = 0;
    do {
      lVar10 = 0;
      do {
        if (*(long *)(*(long *)(puVar24 + 10) + uVar18 * 8 + lVar10 * 8) !=
            *(long *)(*(long *)(puVar24 + 4) + lVar10 * 8)) break;
        lVar10 = lVar10 + 1;
      } while ((uint)lVar10 < uVar26);
      if ((uint)lVar10 == uVar26) break;
      uVar15 = uVar15 + 1;
      uVar18 = (ulong)((int)uVar18 + uVar26);
    } while (uVar15 < *(uint *)(*(long *)(puVar24 + 6) + 8));
  }
  uVar5 = *(ushort *)(param_1 + 8);
  *(ulong *)(param_1 + 8) = (ulong)uVar5;
  if ((uint)uVar15 < *(uint *)(*(long *)(puVar24 + 6) + 8)) {
    *(ulong *)(param_1 + 8) = (ulong)uVar5 | (ulong)((uint)uVar15 * 0x10000 + 0x10000);
  }
  *(undefined1 *)(param_1 + 0x480) = uVar25;
  FUN_006028c0(uVar19,*(undefined8 *)(param_1 + 0x458));
  *(undefined8 *)(param_1 + 0x458) = 0;
  return local_9c;
}


