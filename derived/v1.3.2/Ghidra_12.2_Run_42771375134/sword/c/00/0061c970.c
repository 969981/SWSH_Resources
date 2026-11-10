/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0061c970; name: FUN_0061c970
 */


ulong FUN_0061c970(long param_1,uint param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  byte *pbVar1;
  long lVar2;
  byte *pbVar3;
  undefined1 uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  uint uVar14;
  bool bVar15;
  ulong uVar16;
  uint uVar17;
  undefined1 *puVar18;
  ushort uVar19;
  long lVar20;
  ulong uVar21;
  ushort *puVar22;
  undefined1 *puVar23;
  ulong uVar24;
  ulong uVar25;
  undefined8 uVar26;
  byte *local_68;
  
  if (100 < param_5) {
    return 8;
  }
  lVar20 = *(long *)(param_1 + 0x40);
  if (lVar20 != 0) {
    pbVar3 = *(byte **)(param_1 + 0x50);
    lVar2 = *(long *)(param_1 + 0x48) + *(long *)(param_1 + 0x38);
    puVar18 = (undefined1 *)(lVar2 + 3);
    do {
      uVar17 = (uint)CONCAT11(puVar18[-3],puVar18[-2]);
      if ((uVar17 <= param_2) && (param_2 <= CONCAT11(puVar18[-1],*puVar18))) {
        uVar25 = (ulong)(byte)puVar18[1] << 0x18 | (ulong)(byte)puVar18[2] << 0x10 |
                 (ulong)(byte)puVar18[3] << 8 | (ulong)(byte)puVar18[4];
        if ((ulong)((long)pbVar3 - lVar2) < uVar25) {
          return 8;
        }
        puVar18 = (undefined1 *)(lVar2 + uVar25);
        pbVar1 = puVar18 + 8;
        if ((pbVar1 <= pbVar3) && (CONCAT11(*puVar18,puVar18[1]) - 1 < 0x13)) {
          uVar4 = puVar18[2];
          bVar5 = puVar18[3];
          bVar6 = puVar18[4];
          bVar7 = puVar18[5];
          bVar8 = puVar18[6];
          bVar9 = puVar18[7];
          switch((uint)CONCAT11(*puVar18,puVar18[1])) {
          case 1:
            pbVar1 = pbVar1 + (param_2 - uVar17) * 4;
            if (pbVar1 + 8 <= pbVar3) {
              uVar21 = (ulong)*pbVar1 << 0x18 | (ulong)pbVar1[1] << 0x10 | (ulong)pbVar1[2] << 8 |
                       (ulong)pbVar1[3];
              uVar24 = (ulong)pbVar1[4] << 0x18 | (ulong)pbVar1[5] << 0x10 | (ulong)pbVar1[6] << 8 |
                       (ulong)pbVar1[7];
              if (uVar21 != uVar24) goto LAB_0061cda8;
            }
            break;
          case 2:
            if ((puVar18 + 0x14 <= pbVar3) && (puVar18 + 0x11 <= pbVar3)) {
              puVar22 = *(ushort **)(param_1 + 0x18);
              bVar10 = *pbVar1;
              bVar11 = puVar18[9];
              bVar12 = puVar18[10];
              bVar13 = puVar18[0xb];
              *puVar22 = (ushort)(byte)puVar18[0xc];
              puVar22[1] = (ushort)(byte)puVar18[0xd];
              puVar22[2] = (short)(char)puVar18[0xe];
              puVar22[3] = (short)(char)puVar18[0xf];
              puVar22[4] = (ushort)(byte)puVar18[0x10];
              if (puVar18 + 0x14 <= pbVar3) {
                puVar22[5] = (short)(char)puVar18[0x11];
                uVar24 = (ulong)bVar10 << 0x18 | (ulong)bVar11 << 0x10 | (ulong)bVar12 << 8 |
                         (ulong)bVar13;
                puVar22[6] = (short)(char)puVar18[0x12];
                puVar22[7] = (ushort)(byte)puVar18[0x13];
                uVar21 = uVar24 * (param_2 - uVar17);
                *(undefined1 *)(param_1 + 0x20) = 1;
                uVar24 = uVar21 + uVar24;
                lVar20 = uVar24 - uVar21;
                bVar15 = lVar20 == 0;
                if (uVar21 <= uVar24) goto LAB_0061cdb0;
              }
            }
            break;
          case 3:
            pbVar1 = pbVar1 + (param_2 - uVar17) * 2;
            if (pbVar1 + 4 <= pbVar3) {
              uVar21 = (ulong)CONCAT11(*pbVar1,pbVar1[1]);
              uVar24 = (ulong)CONCAT11(pbVar1[2],pbVar1[3]);
              if (uVar21 != uVar24) goto LAB_0061cda8;
            }
            break;
          case 4:
            if ((((puVar18 + 0xc <= pbVar3) && (puVar18 + 0x10 <= pbVar3)) &&
                (uVar16 = (ulong)(byte)puVar18[8] << 0x18 | (ulong)(byte)puVar18[9] << 0x10 |
                          (ulong)(byte)puVar18[10] << 8 | (ulong)(byte)puVar18[0xb],
                uVar16 <= ((long)pbVar3 - (long)(puVar18 + 0xc) >> 2) - 1U)) && (uVar16 != 0)) {
              uVar21 = 0;
              puVar18 = (undefined1 *)
                        (*(long *)(param_1 + 0x48) + *(long *)(param_1 + 0x38) + uVar25 + 0x13);
              goto LAB_0061cd58;
            }
            break;
          case 5:
          case 0x13:
            if ((puVar18 + 0x18 <= pbVar3) && (puVar18 + 0x11 <= pbVar3)) {
              bVar10 = *pbVar1;
              bVar11 = puVar18[9];
              bVar12 = puVar18[10];
              bVar13 = puVar18[0xb];
              puVar22 = *(ushort **)(param_1 + 0x18);
              *puVar22 = (ushort)(byte)puVar18[0xc];
              puVar22[1] = (ushort)(byte)puVar18[0xd];
              puVar22[2] = (short)(char)puVar18[0xe];
              puVar22[3] = (short)(char)puVar18[0xf];
              puVar22[4] = (ushort)(byte)puVar18[0x10];
              if (puVar18 + 0x14 <= pbVar3) {
                puVar22[5] = (short)(char)puVar18[0x11];
                puVar22[6] = (short)(char)puVar18[0x12];
                puVar22[7] = (ushort)(byte)puVar18[0x13];
                *(undefined1 *)(param_1 + 0x20) = 1;
                puVar23 = puVar18 + 0x18;
                uVar25 = (ulong)(byte)puVar18[0x14] << 0x18 | (ulong)(byte)puVar18[0x15] << 0x10 |
                         (ulong)(byte)puVar18[0x16] << 8 | (ulong)(byte)puVar18[0x17];
                if ((uVar25 <= (ulong)((long)pbVar3 - (long)puVar23 >> 1)) && (uVar25 != 0)) {
                  uVar21 = 0;
                  uVar16 = 0;
                  uVar24 = (ulong)bVar10 << 0x18 | (ulong)bVar11 << 0x10 | (ulong)bVar12 << 8 |
                           (ulong)bVar13;
                  goto LAB_0061cb80;
                }
              }
            }
          }
        }
        break;
      }
      lVar20 = lVar20 + -1;
      puVar18 = puVar18 + 8;
    } while (lVar20 != 0);
  }
  goto switchD_0061caac_caseD_6;
  while( true ) {
    uVar16 = uVar16 + 1;
    uVar21 = uVar21 + uVar24;
    puVar23 = puVar23 + 2;
    if (uVar25 <= uVar16) break;
LAB_0061cb80:
    if (CONCAT11(*puVar23,puVar23[1]) == param_2) {
      uVar24 = uVar24 + uVar21;
      lVar20 = uVar24 - uVar21;
      bVar15 = lVar20 == 0;
      if (uVar21 <= uVar24) goto LAB_0061cdb0;
      break;
    }
  }
  goto switchD_0061caac_caseD_6;
  while( true ) {
    uVar21 = uVar21 + 1;
    puVar18 = puVar18 + 4;
    if (uVar16 <= uVar21) break;
LAB_0061cd58:
    if (CONCAT11(puVar18[-7],puVar18[-6]) == param_2) {
      uVar21 = (ulong)CONCAT11(puVar18[-5],puVar18[-4]);
      uVar24 = (ulong)CONCAT11(puVar18[-1],*puVar18);
LAB_0061cda8:
      lVar20 = uVar24 - uVar21;
      bVar15 = lVar20 == 0;
      if (uVar24 < uVar21) break;
LAB_0061cdb0:
      if ((bVar15) ||
         (uVar25 = (ulong)bVar6 << 0x18 | (ulong)bVar7 << 0x10 | (ulong)bVar8 << 8 | (ulong)bVar9,
         *(ulong *)(param_1 + 0x30) < uVar24 + uVar25)) {
        return 6;
      }
      uVar26 = *(undefined8 *)(param_1 + 8);
      uVar25 = FUN_006069e0(uVar26,uVar21 + uVar25 + *(long *)(param_1 + 0x28));
      if ((int)uVar25 != 0) {
        return uVar25;
      }
      uVar25 = FUN_00608090(uVar26,lVar20,&local_68);
      if ((int)uVar25 != 0) {
        return uVar25;
      }
      uVar17 = (uint)CONCAT11(uVar4,bVar5);
      if (uVar17 < 0x13) {
        uVar14 = 1 << (ulong)(bVar5 & 0x1f);
        if ((uVar14 & 0x20106) == 0) {
          if ((uVar14 & 0x402c0) == 0) goto joined_r0x0061cf1c;
          if (4 < lVar20) {
            puVar22 = *(ushort **)(param_1 + 0x18);
            *puVar22 = (ushort)*local_68;
            puVar22[1] = (ushort)local_68[1];
            puVar22[2] = (short)(char)local_68[2];
            puVar22[3] = (short)(char)local_68[3];
            puVar22[4] = (ushort)local_68[4];
            if (7 < lVar20) {
              puVar22[5] = (short)(char)local_68[5];
              puVar22[6] = (short)(char)local_68[6];
              uVar19 = (ushort)local_68[7];
              goto LAB_0061cef4;
            }
          }
        }
        else if (4 < lVar20) {
          puVar22 = *(ushort **)(param_1 + 0x18);
          *puVar22 = (ushort)*local_68;
          puVar22[1] = (ushort)local_68[1];
          puVar22[2] = (short)(char)local_68[2];
          puVar22[3] = (short)(char)local_68[3];
          bVar5 = local_68[4];
          uVar19 = 0;
          puVar22[5] = 0;
          puVar22[6] = 0;
          puVar22[4] = (ushort)bVar5;
LAB_0061cef4:
          puVar22[7] = uVar19;
          *(undefined1 *)(param_1 + 0x20) = 1;
          goto joined_r0x0061cf1c;
        }
        uVar25 = 6;
      }
      else {
joined_r0x0061cf1c:
        if (uVar17 - 1 < 0x13) {
                    /* WARNING: Could not recover jumptable at 0x0061cf40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar25 = (*(code *)(&DAT_02133b88 + *(int *)(&DAT_02133b88 + (ulong)(uVar17 - 1) * 4)))();
          return uVar25;
        }
        uVar25 = 8;
      }
      FUN_00608340(uVar26,&local_68);
      return uVar25;
    }
  }
switchD_0061caac_caseD_6:
  uVar17 = 0x9d;
  if (param_5 != 0) {
    uVar17 = 0x15;
  }
  return (ulong)uVar17;
}


