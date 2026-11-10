/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0061f7a0; name: FUN_0061f7a0
 */


uint FUN_0061f7a0(long *param_1,uint *param_2,char param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  uint uVar19;
  
  lVar16 = param_1[3];
  uVar6 = (ulong)*(byte *)(lVar16 + 7) & 0xfe | (ulong)*(byte *)(lVar16 + 6) << 8;
  if ((int)uVar6 != 0) {
    uVar12 = *param_2;
    if (param_3 != '\0') {
      uVar12 = uVar12 + 1;
    }
    if (uVar12 >> 0x10 == 0) {
      lVar14 = *param_1;
      uVar10 = (uint)(uVar6 >> 1);
      uVar15 = 0;
      puVar17 = (undefined1 *)(lVar16 + 0xe);
      puVar18 = (undefined1 *)(lVar16 + uVar6 + 0x10);
      pbVar1 = (byte *)(*(long *)(lVar14 + 0x330) + *(long *)(lVar14 + 0x338));
      while( true ) {
        uVar4 = (uint)CONCAT11(*puVar18,puVar18[1]);
        uVar13 = uVar12;
        if (uVar12 < uVar4) {
          uVar13 = uVar4;
        }
        if ((param_3 == '\0') && (uVar12 < uVar4)) break;
        uVar5 = (uint)CONCAT11(*puVar17,puVar17[1]);
        uVar12 = uVar13;
        if (uVar13 <= uVar5) {
          pbVar2 = puVar18 + uVar6;
          uVar9 = (int)(short)((ushort)*pbVar2 << 8) | (uint)pbVar2[1];
          pbVar2 = pbVar2 + uVar6;
          uVar7 = 0;
          uVar19 = (uint)CONCAT11(*pbVar2,pbVar2[1]);
          if (pbVar1 < pbVar2 + (ulong)CONCAT11(*pbVar2,pbVar2[1]) + 2) {
            uVar8 = 1;
          }
          else {
            uVar8 = uVar9;
            uVar7 = uVar19;
          }
          if ((((uVar5 == 0xffff) && (uVar10 - 1 <= uVar15)) && (uVar4 == 0xffff)) && (uVar19 != 0))
          {
            do {
              if (uVar7 == 0) {
                uVar4 = uVar8 + uVar12;
                uVar11 = uVar4 & 0xffff;
                if (param_3 == '\0') goto LAB_0061fa9c;
                if (*(uint *)(lVar14 + 0x20) <= uVar11) {
                  if ((int)uVar4 < 0) {
                    uVar11 = 0;
                    uVar12 = -uVar8;
                  }
                  else {
                    if ((0xffff < (int)uVar4) || ((int)uVar8 < 1)) break;
                    uVar11 = 0;
                    uVar12 = 0x10000 - uVar8;
                  }
                }
              }
              else {
                if ((uVar7 == 0xffff) ||
                   ((pbVar3 = pbVar2 + ((uVar7 + uVar12 * 2) - 0x1fffe), param_3 != '\0' &&
                    (pbVar1 < pbVar3)))) break;
                uVar11 = 0;
                if (CONCAT11(*pbVar3,pbVar3[1]) != 0) {
                  uVar11 = CONCAT11(*pbVar3,pbVar3[1]) + uVar8 & 0xffff;
                  if (*(uint *)(lVar14 + 0x20) <= uVar11) {
                    uVar11 = 0;
                  }
                }
              }
              uVar4 = (uint)(0xfffe < uVar12 || (param_3 == '\0' || uVar11 != 0));
              uVar12 = uVar12 + (uVar4 ^ 1);
              if (uVar4 != 0) goto LAB_0061fa9c;
            } while (uVar12 >> 0x10 == 0);
          }
          else if (param_3 == '\0') {
            if (uVar19 != 0xffff) {
              if (uVar19 == 0) {
                return uVar13 + uVar9 & 0xffff;
              }
              uVar12 = (uint)CONCAT11(pbVar2[uVar19 + (uVar13 - uVar4) * 2],
                                      (pbVar2 + (uVar19 + (uVar13 - uVar4) * 2))[1]);
              if (uVar12 == 0) {
                return 0;
              }
              uVar12 = uVar12 + uVar9 & 0xffff;
              if (uVar12 < *(uint *)(lVar14 + 0x20)) {
                return uVar12;
              }
              return 0;
            }
          }
          else {
            do {
              uVar13 = uVar12;
              if (uVar19 == 0) {
                uVar7 = uVar12 + uVar9;
                uVar11 = uVar7 & 0xffff;
                if (*(uint *)(lVar14 + 0x20) <= uVar11) {
                  if (((int)uVar7 < 0) && (-1 < (int)(uVar5 + uVar9))) {
                    uVar11 = 0;
                    uVar13 = -uVar9;
                  }
                  else {
                    if ((0xffff < (int)uVar7) || ((int)(uVar5 + uVar9) < 0x10000)) break;
                    uVar11 = 0;
                    uVar13 = 0x10000 - uVar9;
                  }
                }
              }
              else {
                if ((uVar19 == 0xffff) ||
                   (pbVar3 = pbVar2 + (uVar19 + (uVar12 - uVar4) * 2), pbVar1 < pbVar3)) break;
                uVar11 = 0;
                if ((CONCAT11(*pbVar3,pbVar3[1]) != 0) &&
                   (uVar11 = CONCAT11(*pbVar3,pbVar3[1]) + uVar9 & 0xffff,
                   *(uint *)(lVar14 + 0x20) <= uVar11)) {
                  uVar11 = 0;
                }
              }
              uVar12 = uVar13 + (uVar13 < 0xffff && uVar11 == 0);
              if ((0xfffe < uVar13) || (uVar11 != 0)) goto LAB_0061fa9c;
            } while (uVar12 <= uVar5);
          }
        }
        uVar15 = uVar15 + 1;
        puVar17 = puVar17 + 2;
        puVar18 = puVar18 + 2;
        if (uVar10 <= uVar15) break;
      }
      uVar11 = 0;
LAB_0061fa9c:
      if (param_3 == '\0') {
        return uVar11;
      }
      *param_2 = uVar12;
      return uVar11;
    }
  }
  return 0;
}


