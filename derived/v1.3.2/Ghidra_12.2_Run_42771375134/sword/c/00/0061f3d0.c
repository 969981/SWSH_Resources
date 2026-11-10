/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0061f3d0; name: FUN_0061f3d0
 */


undefined8 FUN_0061f3d0(long param_1,char *param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  ushort uVar8;
  int iVar9;
  size_t sVar10;
  void *pvVar11;
  undefined4 uVar12;
  undefined1 *puVar13;
  long *plVar14;
  ulong uVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined8 uVar18;
  ulong __n;
  uint uVar19;
  ulong uVar20;
  byte *pbVar21;
  long lVar22;
  ulong uVar23;
  undefined1 *puVar24;
  
  lVar22 = *(long *)(param_1 + 0xa0);
  *param_3 = 0;
  if (*(char *)(param_1 + 0x544) != '\0') {
    uVar20 = (ulong)*(uint *)(param_1 + 0x540);
    puVar24 = (undefined1 *)(*(long *)(param_1 + 0x520) + 8);
joined_r0x0061f740:
    if (param_2 == (char *)0x0) {
      return 6;
    }
    if (lVar22 == 0) {
      return 6;
    }
    sVar10 = strlen(param_2);
    if ((int)uVar20 == 0) {
      return 6;
    }
    if (sVar10 == 0) {
      return 6;
    }
    puVar13 = puVar24 + (uint)((int)uVar20 << 2);
    while( true ) {
      uVar23 = (ulong)CONCAT11(puVar24[2],puVar24[3]);
      if (CONCAT11(*puVar24,puVar24[1]) == *(short *)(lVar22 + 0x1a)) break;
      puVar13 = puVar13 + uVar23 * 10;
      uVar19 = (int)uVar20 - 1;
      uVar20 = (ulong)uVar19;
      puVar24 = puVar24 + 4;
      if (uVar19 == 0) {
        return 6;
      }
    }
    if (CONCAT11(puVar24[2],puVar24[3]) == 0) {
      return 6;
    }
    pbVar21 = puVar13 + 5;
    do {
      bVar3 = *pbVar21;
      if ((bVar3 >> 4 & 1) != 0) {
        __n = *(ulong *)(param_1 + 0x538);
        uVar20 = (ulong)pbVar21[-5] << 0x18 | (ulong)pbVar21[-4] << 0x10 | (ulong)pbVar21[-3] << 8 |
                 (ulong)pbVar21[-2];
        uVar15 = __n - uVar20;
        if ((uVar20 <= __n && uVar15 != 0) && (sVar10 < uVar15)) {
          lVar22 = *(long *)(param_1 + 0x530);
          bVar4 = pbVar21[4];
          bVar5 = pbVar21[1];
          bVar6 = pbVar21[2];
          bVar7 = pbVar21[3];
          iVar9 = strncmp(param_2,(char *)(lVar22 + uVar20),uVar15);
          if (iVar9 == 0) {
            uVar15 = (ulong)bVar5 << 0x18 | (ulong)bVar6 << 0x10 | (ulong)bVar7 << 8;
            uVar20 = uVar15 | bVar4;
            bVar3 = bVar3 & 0xf;
            if (bVar3 < 2) {
              if ((uVar20 < __n) &&
                 (pvVar11 = memchr((void *)(lVar22 + uVar20),0,__n), pvVar11 != (void *)0x0)) {
                *param_3 = 1;
                *(ulong *)(param_3 + 2) = *(long *)(param_1 + 0x530) + (uVar15 | bVar4);
                return 0;
              }
            }
            else {
              if (bVar3 == 2) {
                uVar12 = 2;
LAB_0061f750:
                *param_3 = uVar12;
                param_3[2] = (int)uVar20;
                return 0;
              }
              if (bVar3 == 3) {
                uVar12 = 3;
                goto LAB_0061f750;
              }
            }
          }
        }
      }
      uVar19 = (int)uVar23 - 1;
      uVar23 = (ulong)uVar19;
      pbVar21 = pbVar21 + 10;
      if (uVar19 == 0) {
        return 6;
      }
    } while( true );
  }
  uVar18 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0x540) = 0;
  *(undefined8 *)(param_1 + 0x538) = 0;
  *(undefined8 *)(param_1 + 0x530) = 0;
  *(undefined8 *)(param_1 + 0x528) = 0;
  *(undefined8 *)(param_1 + 0x520) = 0;
  if ((ulong)*(ushort *)(param_1 + 0x120) == 0) {
    return 8;
  }
  plVar14 = *(long **)(param_1 + 0x128);
  plVar2 = plVar14 + (ulong)*(ushort *)(param_1 + 0x120) * 4;
  puVar1 = (undefined8 *)(param_1 + 0x520);
  while ((*plVar14 != 0x42444620 || (uVar23 = plVar14[3], uVar23 == 0))) {
    plVar14 = plVar14 + 4;
    if (plVar2 <= plVar14) {
      return 8;
    }
  }
  iVar9 = FUN_006069e0(uVar18,plVar14[2]);
  if (uVar23 < 8) {
    return 8;
  }
  if (iVar9 != 0) {
    return 8;
  }
  iVar9 = FUN_00608090(uVar18,uVar23,puVar1);
  if (iVar9 != 0) {
    return 8;
  }
  puVar13 = *(undefined1 **)(param_1 + 0x520);
  *(undefined1 **)(param_1 + 0x528) = puVar13 + uVar23;
  if (CONCAT11(*puVar13,puVar13[1]) == 1) {
    uVar15 = (ulong)(byte)puVar13[4] << 0x18 | (ulong)(byte)puVar13[5] << 0x10 |
             (ulong)(byte)puVar13[6] << 8 | (ulong)(byte)puVar13[7];
    if ((7 < uVar15) && (uVar15 <= uVar23 && uVar23 - uVar15 != 0)) {
      bVar3 = puVar13[3];
      uVar8 = CONCAT11(puVar13[2],bVar3);
      uVar20 = (ulong)uVar8;
      if (uVar20 <= uVar15 - 8 >> 2) {
        puVar24 = puVar13 + 8;
        uVar19 = (uint)uVar8;
        puVar16 = puVar24 + (ulong)uVar8 * 4;
        *(uint *)(param_1 + 0x540) = uVar19;
        *(undefined1 **)(param_1 + 0x530) = puVar13 + uVar15;
        *(ulong *)(param_1 + 0x538) = uVar23 - uVar15;
        if (uVar19 != 0) {
          puVar17 = puVar24;
          uVar23 = uVar20;
          if ((bVar3 & 1) != 0) {
            puVar16 = puVar16 + (ulong)CONCAT11(puVar13[10],puVar13[0xb]) * 10;
            puVar17 = puVar13 + 0xc;
            uVar23 = (ulong)(uVar19 - 1);
          }
          if (uVar19 != 1) {
            puVar17 = puVar17 + 7;
            do {
              uVar19 = (int)uVar23 - 2;
              uVar23 = (ulong)uVar19;
              puVar16 = puVar16 + (ulong)CONCAT11(puVar17[-1],*puVar17) * 10 +
                                  (ulong)CONCAT11(puVar17[-5],puVar17[-4]) * 10;
              puVar17 = puVar17 + 8;
            } while (uVar19 != 0);
          }
        }
        if (puVar16 <= puVar13 + uVar15) {
          *(undefined1 *)(param_1 + 0x544) = 1;
          goto joined_r0x0061f740;
        }
      }
    }
  }
  FUN_00608340(uVar18,puVar1);
  *(undefined8 *)(param_1 + 0x538) = 0;
  *(undefined8 *)(param_1 + 0x540) = 0;
  *(undefined8 *)(param_1 + 0x528) = 0;
  *(undefined8 *)(param_1 + 0x530) = 0;
  *puVar1 = 0;
  return 8;
}


