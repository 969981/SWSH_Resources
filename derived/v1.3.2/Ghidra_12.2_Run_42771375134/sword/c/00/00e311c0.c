/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e311c0; name: FUN_00e311c0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00e311c0(ulong param_1,undefined4 *param_2,undefined4 *param_3,ulong param_4)

{
  char cVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  short sVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  ulong uVar12;
  undefined1 uVar13;
  ulong *puVar14;
  int iVar15;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  uint uVar23;
  long lVar24;
  long *plVar25;
  undefined1 auStack_178 [80];
  undefined8 local_128 [25];
  
  puVar4 = PTR_DAT_02710848;
  lVar21 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  uVar12 = param_1;
  if (lVar21 != 0) {
    uVar12 = (**(code **)(*(long *)(lVar21 + 0x48) + 0x10))();
  }
  lVar22 = *(long *)(lVar21 + 0x7b0);
  if (lVar22 != 0) {
    uVar12 = (**(code **)(*(long *)(lVar22 + 0x48) + 0x10))();
  }
  if ((param_4 & 1) == 0) {
LAB_00e313d8:
    iVar7 = 0;
    cVar1 = *(char *)((long)param_2 + 0x4a);
  }
  else {
    if ((*(byte *)(param_1 + 0x2a8) >> 1 & 1) == 0) {
LAB_00e31238:
      iVar7 = 0;
    }
    else {
      local_128[0] = *(undefined8 *)(lVar22 + 0x90);
      iVar7 = FUN_00e05ab0(lVar22,local_128);
      if (iVar7 < 0x19) {
        if (iVar7 < 0xf) {
          if (iVar7 < 7) {
            if (iVar7 < 3) goto LAB_00e31238;
            lVar24 = 3;
          }
          else {
            lVar24 = 2;
          }
        }
        else {
          lVar24 = 1;
        }
      }
      else {
        lVar24 = 0;
      }
      iVar7 = (&DAT_02160af8)[lVar24 * 3];
    }
    puVar3 = PTR_DAT_02710798;
    puVar14 = *(ulong **)(*(long *)puVar4 + 0x98);
    uVar12 = *puVar14;
    uVar17 = puVar14[1];
    do {
      uVar19 = uVar12 ^ uVar17;
      iVar16 = (int)uVar17;
      iVar15 = (int)uVar12;
      uVar17 = uVar19 >> 0x1b | uVar19 << 0x25;
      uVar12 = uVar19 ^ (uVar12 >> 0x28 | uVar12 << 0x18) ^ uVar19 << 0x10;
      uVar11 = iVar15 + iVar16 & 0x3ff;
    } while (999 < uVar11);
    *puVar14 = uVar12;
    puVar14[1] = uVar17;
    lVar24 = *(long *)(*(long *)puVar3 + 0x1f8);
    if (lVar24 != 0) {
      plVar25 = (long *)(lVar24 + 0x48);
      (**(code **)(*plVar25 + 0x10))(plVar25);
      (**(code **)(*plVar25 + 0x18))(plVar25);
    }
    uVar12 = FUN_01534810(lVar24,*param_2);
    uVar8 = (uint)uVar12;
    if (uVar8 < 500) {
      if (uVar8 < 300) {
        if (uVar8 < 200) {
          if (uVar8 < 100) {
            if (uVar8 < 0x32) {
              if (uVar8 < 0x14) {
                if (uVar8 == 0) goto LAB_00e313d8;
                uVar13 = 1;
                lVar24 = 6;
              }
              else {
                uVar13 = 2;
                lVar24 = 5;
              }
            }
            else {
              uVar13 = 3;
              lVar24 = 4;
            }
          }
          else {
            uVar13 = 4;
            lVar24 = 3;
          }
        }
        else {
          uVar13 = 5;
          lVar24 = 2;
        }
      }
      else {
        uVar13 = 6;
        lVar24 = 1;
      }
    }
    else {
      lVar24 = 0;
      uVar13 = 7;
    }
    if ((uint)((&DAT_02160aa4)[lVar24 * 3] + iVar7) <= uVar11) goto LAB_00e313d8;
    *(undefined1 *)((long)param_2 + 0x4a) = uVar13;
    iVar7 = (&DAT_02160aa8)[lVar24 * 3];
    cVar1 = *(char *)((long)param_2 + 0x4a);
  }
  if (cVar1 != '\0') {
    *(char *)((long)param_2 + 6) = (char)*param_3;
  }
  if (param_2[2] == 0) {
    bVar2 = *(byte *)((long)param_2 + 6);
    uVar12 = FUN_014ae360();
    if ((((uint)uVar12 & 0xff) < (uint)bVar2) ||
       (uVar11 = iVar7 + (*(uint *)(param_1 + 0x2a8) >> 2 & 2) + 1 & 0xff, uVar11 == 0)) {
      param_2[2] = 2;
      iVar7 = param_2[4];
    }
    else {
      uVar23 = 0;
      uVar8 = 1;
      do {
        puVar14 = *(ulong **)(*(long *)puVar4 + 0x98);
        uVar12 = *puVar14;
        uVar17 = puVar14[1];
        uVar19 = uVar17 ^ uVar12;
        *puVar14 = uVar19 ^ (uVar12 >> 0x28 | uVar12 << 0x18) ^ uVar19 << 0x10;
        puVar14[1] = uVar19 >> 0x1b | uVar19 << 0x25;
        uVar12 = FUN_00877350(*(undefined4 *)(param_1 + 0x2a0),(int)uVar17 + (int)uVar12);
        uVar23 = uVar23 | (uint)uVar12;
        if (uVar11 <= uVar8) break;
        uVar8 = uVar8 + 1;
      } while ((uVar12 & 1) == 0);
      uVar9 = 1;
      if ((uVar23 & 1) == 0) {
        uVar9 = 2;
      }
      param_2[2] = uVar9;
      iVar7 = param_2[4];
    }
  }
  else {
    iVar7 = param_2[4];
  }
  if (iVar7 != 0) {
    sVar6 = *(short *)(param_2 + 3);
    goto joined_r0x00e314ec;
  }
  if ((*(byte *)(param_1 + 0x2ac) >> 5 & 1) != 0) {
    uVar11 = -(uint)(*(int *)(param_1 + 0x298) != 1);
    if (*(int *)(param_1 + 0x298) == 0) {
      uVar11 = 1;
    }
    if (uVar11 == 0) {
      param_2[4] = 1;
      sVar6 = *(short *)(param_2 + 3);
      goto joined_r0x00e314ec;
    }
    if ((uVar11 & 0xff) == 1) {
      param_2[4] = 2;
      sVar6 = *(short *)(param_2 + 3);
      goto joined_r0x00e314ec;
    }
  }
  puVar14 = *(ulong **)(*(long *)puVar4 + 0x98);
  uVar17 = *puVar14;
  uVar19 = puVar14[1];
  uVar18 = uVar19 ^ uVar17;
  *puVar14 = uVar18 ^ (uVar17 >> 0x28 | uVar17 << 0x18) ^ uVar18 << 0x10;
  puVar14[1] = uVar18 >> 0x1b | uVar18 << 0x25;
  uVar9 = 1;
  if (((int)uVar19 + (int)uVar17 & 1U) == 0) {
    uVar9 = 2;
  }
  param_2[4] = uVar9;
  sVar6 = *(short *)(param_2 + 3);
joined_r0x00e314ec:
  if (sVar6 == -1) {
    puVar14 = *(ulong **)(*(long *)puVar4 + 0x98);
    uVar17 = *puVar14;
    uVar19 = puVar14[1];
    do {
      uVar18 = uVar17 ^ uVar19;
      iVar15 = (int)uVar19;
      iVar7 = (int)uVar17;
      uVar19 = uVar18 >> 0x1b | uVar18 << 0x25;
      uVar17 = uVar18 ^ (uVar17 >> 0x28 | uVar17 << 0x18) ^ uVar18 << 0x10;
      uVar11 = iVar7 + iVar15 & 0x1f;
    } while (0x18 < uVar11);
    *puVar14 = uVar17;
    puVar14[1] = uVar19;
    *(short *)(param_2 + 3) = (short)uVar11;
    iVar7 = param_2[5];
  }
  else {
    iVar7 = param_2[5];
  }
  if (iVar7 == 0) {
    puVar14 = *(ulong **)(*(long *)puVar4 + 0x98);
    uVar17 = *puVar14;
    uVar19 = puVar14[1];
    uVar18 = uVar19 ^ uVar17;
    *puVar14 = uVar18 ^ (uVar17 >> 0x28 | uVar17 << 0x18) ^ uVar18 << 0x10;
    puVar14[1] = uVar18 >> 0x1b | uVar18 << 0x25;
    uVar9 = 1;
    if (((int)uVar19 + (int)uVar17 & 1U) == 0) {
      uVar9 = 2;
    }
    param_2[5] = uVar9;
    iVar7 = param_2[6];
  }
  else {
    iVar7 = param_2[6];
  }
  if (iVar7 == 0) {
    sVar6 = FUN_00e317f0(uVar12,*param_2,*(undefined2 *)(param_2 + 1),param_1 + 0x2a8);
    uVar9 = 1;
    if (sVar6 == 0) {
      uVar9 = 2;
    }
    param_2[6] = uVar9;
    *(short *)(param_2 + 7) = sVar6;
    cVar1 = *(char *)((long)param_2 + 0x4a);
  }
  else {
    cVar1 = *(char *)((long)param_2 + 0x4a);
  }
  if (cVar1 != '\0') {
    puVar14 = *(ulong **)(*(long *)puVar4 + 0x98);
    uVar12 = *puVar14;
    uVar17 = puVar14[1];
    uVar19 = uVar17 ^ uVar12;
    *puVar14 = uVar19 ^ (uVar12 >> 0x28 | uVar12 << 0x18) ^ uVar19 << 0x10;
    puVar14[1] = uVar19 >> 0x1b | uVar19 << 0x25;
    *(byte *)((long)param_2 + 0x35) = (char)uVar17 + (char)uVar12 & 1U | 2;
    if (*(char *)((long)param_2 + 0x4a) != '\0') {
      FUN_0087f4c0(local_128);
      FUN_0087f540(local_128,*param_2,*(undefined2 *)(param_2 + 1));
      uVar9 = FUN_0087f680(local_128,0x31);
      uVar10 = FUN_0087f680(local_128,0x32);
      FUN_00880350(auStack_178);
      FUN_008803b0(auStack_178,uVar9,uVar10);
      uVar11 = FUN_008806a0(auStack_178);
      if (uVar11 != 0) {
        if (uVar11 == 1) {
          uVar19 = 0;
        }
        else {
          uVar17 = (0x20 - LZCOUNT(uVar11)) -
                   (ulong)((0xffffffffU >> (ulong)(0x21U - (int)(0x20 - LZCOUNT(uVar11)) & 0x1f) &
                           uVar11) == 0);
          uVar12 = uVar17 >> 6;
          if ((uVar17 & 0x3f) != 0) {
            uVar12 = uVar12 + 1;
          }
          uVar19 = 0;
          if (uVar12 != 0) {
            uVar19 = uVar17 / uVar12;
          }
          puVar14 = *(ulong **)(*(long *)puVar4 + 0x98);
          uVar18 = 0;
          if (uVar12 <= uVar17) {
            uVar18 = 0xffffffffffffffff >> (-uVar19 & 0x3f);
          }
          uVar12 = *puVar14;
          uVar17 = puVar14[1];
          do {
            uVar20 = uVar12 ^ uVar17;
            uVar19 = uVar12 + uVar17;
            uVar17 = uVar20 >> 0x1b | uVar20 << 0x25;
            uVar12 = uVar20 ^ (uVar12 >> 0x28 | uVar12 << 0x18) ^ uVar20 << 0x10;
            uVar19 = uVar19 & uVar18;
          } while (uVar11 <= (uint)uVar19);
          *puVar14 = uVar12;
          puVar14[1] = uVar17;
        }
        uVar9 = FUN_008806c0(auStack_178,uVar19);
        param_2[8] = uVar9;
      }
      FUN_00880390(auStack_178);
      FUN_0087f510(local_128);
    }
  }
  puVar14 = *(ulong **)(*(long *)puVar4 + 0x98);
  uVar11 = 1;
  uVar12 = *puVar14;
  uVar17 = puVar14[1];
  uVar19 = uVar17 ^ uVar12;
  *puVar14 = uVar19 ^ (uVar12 >> 0x28 | uVar12 << 0x18) ^ uVar19 << 0x10;
  puVar14[1] = uVar19 >> 0x1b | uVar19 << 0x25;
  *(undefined1 *)((long)param_2 + 0x4b) = 1;
  *(ulong *)(param_2 + 0x14) = (ulong)(uint)((int)uVar17 + (int)uVar12);
  uVar8 = *(uint *)(param_1 + 0x2a8);
  do {
    sVar6 = FUN_00e32cd0(param_1);
    if (sVar6 != 0xff) break;
    bVar5 = uVar11 < (uVar8 >> 6 & 2 | 1);
    uVar11 = uVar11 + 1;
  } while (bVar5);
  *(short *)(param_2 + 0x12) = sVar6;
  if (lVar22 != 0) {
    (**(code **)(*(long *)(lVar22 + 0x48) + 0x18))((long *)(lVar22 + 0x48));
  }
  if (lVar21 != 0) {
    (**(code **)(*(long *)(lVar21 + 0x48) + 0x18))((long *)(lVar21 + 0x48));
  }
  return;
}


