/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0061fb10; name: FUN_0061fb10
 */


/* WARNING: Type propagation algorithm not settling */

uint FUN_0061fb10(long *param_1,uint *param_2,char param_3)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  byte bVar12;
  uint uVar13;
  ushort uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  long lVar20;
  undefined4 uVar21;
  long lVar22;
  ulong uVar23;
  uint uVar24;
  ulong uVar25;
  uint uVar26;
  byte *pbVar27;
  uint uVar28;
  uint uVar29;
  ulong uVar30;
  uint uVar31;
  undefined1 *puVar32;
  uint uVar33;
  
  lVar22 = param_1[3];
  uVar23 = (ulong)*(byte *)(lVar22 + 7) & 0xfe | (ulong)*(byte *)(lVar22 + 6) << 8;
  if ((uint)uVar23 == 0) {
    return 0;
  }
  lVar20 = *param_1;
  uVar7 = *param_2;
  uVar13 = (uint)uVar23 >> 1;
  if (param_3 != '\0') {
    uVar7 = uVar7 + 1;
  }
  uVar26 = 0;
  lVar1 = lVar22 + 0xe;
  lVar2 = uVar23 + 2;
  pbVar3 = (byte *)(*(long *)(lVar20 + 0x330) + *(long *)(lVar20 + 0x338));
  uVar15 = uVar13;
  do {
    uVar24 = uVar15 + uVar26 >> 1;
    puVar4 = (undefined1 *)(lVar1 + ((ulong)(uVar15 + uVar26) & 0xfffffffe));
    puVar32 = puVar4 + lVar2;
    uVar29 = (uint)CONCAT11(*puVar4,puVar4[1]);
    uVar17 = (uint)CONCAT11(*puVar32,puVar32[1]);
    uVar31 = uVar24;
    uVar33 = uVar29;
    uVar19 = uVar7;
    if (uVar17 <= uVar7) {
      if (uVar7 <= uVar29) {
        pbVar5 = puVar32 + uVar23;
        pbVar27 = pbVar5 + uVar23;
        uVar15 = (int)(short)((ushort)*pbVar5 << 8) | (uint)pbVar5[1];
        uVar25 = (ulong)CONCAT11(*pbVar27,pbVar27[1]);
        uVar26 = (uint)CONCAT11(*pbVar27,pbVar27[1]);
        if (uVar29 == 0xffff) {
          uVar31 = uVar15;
          if (pbVar3 < pbVar27 + uVar25 + 2) {
            uVar31 = 1;
          }
          uVar28 = 0;
          if (pbVar27 + uVar25 + 2 <= pbVar3) {
            uVar28 = uVar26;
          }
          uVar6 = uVar26;
          uVar16 = uVar15;
          if (uVar26 != 0) {
            uVar6 = uVar28;
            uVar16 = uVar31;
          }
          uVar31 = uVar26;
          uVar28 = uVar15;
          if (uVar17 == 0xffff) {
            uVar31 = uVar6;
            uVar28 = uVar16;
          }
          if (uVar13 - 1 <= uVar24) {
            uVar26 = uVar31;
            uVar15 = uVar28;
          }
          uVar25 = (ulong)uVar26;
          bVar12 = *(byte *)(param_1 + 4);
        }
        else {
          bVar12 = *(byte *)(param_1 + 4);
        }
        uVar26 = (uint)uVar25;
        if ((bVar12 >> 1 & 1) != 0) {
          uVar31 = uVar24;
          if (uVar26 == 0xffff) {
            uVar31 = uVar24 + 1;
          }
          if (uVar24 == 0) {
            uVar28 = 0;
            if (uVar31 == 1) goto LAB_0061fe84;
            goto LAB_0061ffac;
          }
          uVar16 = uVar24 - 1;
          uVar25 = (ulong)(uVar16 * 2);
          uVar6 = (uint)CONCAT11(*(undefined1 *)(lVar1 + uVar25),((undefined1 *)(lVar1 + uVar25))[1]
                                );
          uVar28 = uVar24;
          if (uVar6 < uVar7) goto joined_r0x0061fe68;
          uVar15 = uVar24 * 2 - 4;
          uVar17 = uVar24;
          goto LAB_0061ff08;
        }
        if (uVar26 != 0xffff) goto joined_r0x0061ffbc;
        break;
      }
      uVar26 = uVar24 + 1;
      uVar31 = uVar15;
    }
    uVar15 = uVar31;
  } while (uVar26 < uVar15);
  goto LAB_0061fbd4;
  while( true ) {
    uVar25 = (ulong)uVar15;
    uVar15 = uVar15 - 2;
    uVar6 = (uint)CONCAT11(*(undefined1 *)(lVar1 + uVar25),((undefined1 *)(lVar1 + uVar25))[1]);
    uVar28 = uVar17 - 1;
    uVar16 = uVar17 - 2;
    uVar17 = uVar28;
    if (uVar6 < uVar7) break;
LAB_0061ff08:
    uVar33 = uVar6;
    puVar4 = (undefined1 *)(lVar1 + lVar2 + uVar25);
    pbVar5 = puVar4 + uVar23;
    pbVar27 = pbVar5 + uVar23;
    uVar26 = (uint)CONCAT11(*pbVar27,pbVar27[1]);
    if (uVar26 != 0xffff) {
      uVar31 = uVar16;
    }
    if (uVar16 == 0) {
      uVar28 = 0;
      break;
    }
  }
  uVar17 = (uint)CONCAT11(*puVar4,puVar4[1]);
  uVar15 = (int)(short)((ushort)*pbVar5 << 8) | (uint)pbVar5[1];
joined_r0x0061fe68:
  if (uVar31 == uVar24 + 1) {
LAB_0061fe84:
    if (uVar28 != uVar24) {
      uVar33 = uVar29;
    }
    if (uVar24 + 1 < uVar13) {
      uVar25 = (ulong)(uVar24 + 1) * 2;
      uVar30 = uVar25 & 0xfffffffe;
      puVar4 = (undefined1 *)(lVar1 + uVar30) + lVar2;
      uVar15 = (uint)CONCAT11(*puVar4,puVar4[1]);
      if (uVar7 < uVar15) {
        uVar29 = uVar24;
      }
      else {
        uVar18 = (ulong)(uVar24 + 1);
        puVar4 = (undefined1 *)(lVar1 + uVar30);
        uVar31 = uVar24;
        do {
          uVar17 = uVar15;
          puVar32 = puVar4;
          uVar25 = uVar25 + 2;
          pbVar5 = (byte *)(lVar1 + lVar2 + uVar23 + uVar30);
          pbVar27 = pbVar5 + uVar23;
          uVar26 = (uint)CONCAT11(*pbVar27,pbVar27[1]);
          uVar29 = (uint)uVar18;
          if (uVar26 != 0xffff) {
            uVar31 = uVar29;
          }
          uVar33 = (uint)(uVar18 + 1);
          if (uVar13 <= uVar33) {
            uVar14 = CONCAT11(*puVar32,puVar32[1]);
            uVar15 = (int)(short)((ushort)*pbVar5 << 8) | (uint)pbVar5[1];
            goto joined_r0x00620090;
          }
          uVar30 = uVar25 & 0xfffffffe;
          pbVar27 = (undefined1 *)(lVar1 + uVar30) + lVar2;
          uVar18 = uVar18 + 1;
          puVar4 = (undefined1 *)(lVar1 + uVar30);
          uVar15 = (uint)CONCAT11(*pbVar27,pbVar27[1]);
        } while (CONCAT11(*pbVar27,pbVar27[1]) <= uVar7);
        uVar14 = CONCAT11(*puVar32,puVar32[1]);
        uVar15 = (int)(short)((ushort)*pbVar5 << 8) | (uint)pbVar5[1];
        uVar29 = uVar33 - 1;
joined_r0x00620090:
        uVar33 = (uint)uVar14;
        if (uVar31 != uVar24) {
          uVar24 = uVar31;
          if (uVar31 != uVar29) goto LAB_006200a4;
          goto joined_r0x0061ffbc;
        }
      }
      uVar26 = 0;
      uVar24 = uVar29;
      goto joined_r0x0061fd9c;
    }
  }
  else {
LAB_0061ffac:
    uVar24 = uVar31;
    if (uVar31 != uVar28) {
LAB_006200a4:
      puVar4 = (undefined1 *)(lVar1 + (ulong)(uVar31 << 1));
      puVar32 = puVar4 + lVar2;
      pbVar5 = puVar32 + uVar23;
      pbVar27 = pbVar5 + uVar23;
      uVar17 = (uint)CONCAT11(*puVar32,puVar32[1]);
      uVar15 = (int)(short)((ushort)*pbVar5 << 8) | (uint)pbVar5[1];
      uVar26 = (uint)CONCAT11(*pbVar27,pbVar27[1]);
      uVar33 = (uint)CONCAT11(*puVar4,puVar4[1]);
      uVar24 = uVar31;
    }
joined_r0x0061ffbc:
    if (uVar26 == 0) {
      uVar29 = uVar15 + uVar7;
      uVar26 = uVar29 & 0xffff;
      if ((param_3 != '\0') && (*(uint *)(lVar20 + 0x20) <= uVar26)) {
        if (((int)uVar29 < 0) && (-1 < (int)(uVar33 + uVar15))) {
          uVar26 = 0;
          uVar19 = -uVar15;
        }
        else {
          uVar26 = 0;
          uVar19 = 0x10000 - uVar15;
          if ((int)(uVar33 + uVar15) < 0x10000 || 0xffff < (int)uVar29) {
            uVar19 = uVar7;
          }
        }
      }
      goto joined_r0x0061fd9c;
    }
    pbVar27 = pbVar27 + (uVar26 + (uVar7 - uVar17) * 2);
    if (((param_3 == '\0') || (pbVar27 <= pbVar3)) && (CONCAT11(*pbVar27,pbVar27[1]) != 0)) {
      uVar26 = CONCAT11(*pbVar27,pbVar27[1]) + uVar15 & 0xffff;
      if (*(uint *)(lVar20 + 0x20) <= uVar26) {
        uVar26 = 0;
      }
      goto joined_r0x0061fd9c;
    }
  }
LAB_0061fbd4:
  uVar26 = 0;
joined_r0x0061fd9c:
  if (param_3 == '\0') {
    return uVar26;
  }
  if ((uVar33 < uVar19) && (uVar24 = uVar24 + 1, uVar24 == uVar13)) {
    return 0;
  }
  uVar7 = *(uint *)(param_1 + 6);
  if (uVar24 < uVar7) {
    uVar13 = uVar7 * 2;
    uVar23 = (ulong)uVar24;
    uVar25 = uVar23 << 1;
    do {
      puVar4 = (undefined1 *)(lVar22 + 0xe + (uVar25 & 0xfffffffe));
      uVar8 = *puVar4;
      uVar9 = puVar4[1];
      puVar4 = puVar4 + (uVar13 + 2);
      *(uint *)((long)param_1 + 0x3c) = (uint)CONCAT11(uVar8,uVar9);
      uVar10 = *puVar4;
      uVar11 = puVar4[1];
      pbVar3 = puVar4 + uVar13;
      *(uint *)(param_1 + 7) = (uint)CONCAT11(uVar10,uVar11);
      pbVar5 = pbVar3 + uVar13;
      *(uint *)(param_1 + 8) = (int)(short)((ushort)*pbVar3 << 8) | (uint)pbVar3[1];
      uVar14 = CONCAT11(*pbVar5,pbVar5[1]);
      uVar21 = (undefined4)uVar23;
      if ((CONCAT11(uVar8,uVar9) == 0xffff && uVar7 - 1 <= uVar23) &&
          CONCAT11(uVar10,uVar11) == 0xffff) {
        if (uVar14 == 0) {
LAB_0061fdd8:
          param_1[9] = 0;
          *(undefined4 *)((long)param_1 + 0x34) = uVar21;
          *(uint *)(param_1 + 5) = uVar19;
        }
        else {
          if (pbVar5 + (ulong)uVar14 + 2 <=
              (byte *)(*(long *)(lVar20 + 0x330) + *(long *)(lVar20 + 0x338))) goto LAB_0061fcac;
          *(undefined4 *)(param_1 + 8) = 1;
          param_1[9] = 0;
          *(undefined4 *)((long)param_1 + 0x34) = uVar21;
          *(uint *)(param_1 + 5) = uVar19;
        }
joined_r0x0061ff74:
        if (uVar26 == 0) {
          *(uint *)(param_1 + 5) = uVar19;
          FUN_00620160(param_1);
          uVar26 = *(uint *)((long)param_1 + 0x2c);
          if (uVar26 == 0) {
            return 0;
          }
          uVar19 = *(uint *)(param_1 + 5);
        }
        else {
          *(uint *)((long)param_1 + 0x2c) = uVar26;
        }
        goto LAB_0061fdf0;
      }
LAB_0061fcac:
      if (uVar14 != 0xffff) {
        if (uVar14 == 0) goto LAB_0061fdd8;
        param_1[9] = (long)(pbVar5 + uVar14);
        *(undefined4 *)((long)param_1 + 0x34) = uVar21;
        *(uint *)(param_1 + 5) = uVar19;
        goto joined_r0x0061ff74;
      }
      uVar23 = uVar23 + 1;
      uVar25 = uVar25 + 2;
    } while (uVar23 < uVar7);
  }
  if (uVar26 == 0) {
    return 0;
  }
LAB_0061fdf0:
  *param_2 = uVar19;
  return uVar26;
}


