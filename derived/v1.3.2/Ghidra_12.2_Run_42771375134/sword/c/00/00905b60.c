/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00905b60; name: FUN_00905b60
 */


void FUN_00905b60(long param_1,long param_2,byte param_3,long param_4,uint param_5)

{
  ulong uVar1;
  ushort uVar2;
  undefined1 uVar3;
  double dVar4;
  double dVar5;
  byte bVar6;
  short sVar7;
  ushort uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  long lVar17;
  undefined1 *puVar18;
  int iVar19;
  uint uVar20;
  undefined8 uVar21;
  ulong uVar22;
  double dVar23;
  int local_98 [6];
  
  dVar5 = DAT_01cd5200;
  dVar4 = DAT_01cd50e0;
  if (param_3 != 0) {
    uVar22 = 0;
    do {
      local_98[uVar22] = 0;
      uVar12 = FUN_00914330(*(undefined8 *)(param_1 + 0x340),*(undefined1 *)(param_2 + uVar22));
      uVar13 = FUN_008e1600();
      if ((uVar13 & 1) == 0) {
        uVar13 = FUN_008f89e0(*(undefined8 *)(param_1 + 0x58));
        if ((uVar13 & 1) != 0) {
          uVar13 = FUN_008f35c0(*(undefined8 *)(param_1 + 0x58),0x100000);
          if (((uVar13 & 1) == 0) ||
             ((sVar7 = FUN_008e1290(uVar12), sVar7 != 0x378 &&
              (sVar7 = FUN_008e1290(uVar12), sVar7 != 0x379)))) {
            uVar21 = *(undefined8 *)(param_1 + 0x58);
            uVar9 = FUN_008e0a00(uVar12);
            uVar13 = FUN_008fb5e0(uVar21,uVar9);
            if ((uVar13 & 1) == 0) goto LAB_00905c58;
          }
          iVar19 = -1;
          goto LAB_00905da8;
        }
LAB_00905c58:
        if (param_4 == 0) {
          iVar19 = 0;
        }
        else {
          bVar6 = FUN_008e2150(uVar12);
          iVar19 = 0;
          if (bVar6 != 0) {
            uVar20 = 0;
            do {
              sVar7 = FUN_008e2480(uVar12,uVar20);
              if (sVar7 != 0) {
                uVar9 = FUN_008e2240(uVar12,uVar20);
                uVar13 = FUN_00880c60();
                if ((uVar13 & 1) != 0) {
                  uVar10 = FUN_00880ae0(uVar9);
                  uVar8 = FUN_00880ab0(uVar9);
                  uVar2 = 0x3c;
                  if (9 < uVar8) {
                    uVar2 = uVar8;
                  }
                  uVar9 = FUN_008e2920(param_4);
                  uVar9 = FUN_008eba60(uVar10,uVar9);
                  iVar11 = FUN_008ebee0(uVar2,uVar9);
                  if (iVar19 < iVar11) {
                    local_98[uVar22] = iVar11;
                    iVar19 = iVar11;
                  }
                }
              }
              uVar20 = uVar20 + 1;
            } while (bVar6 != uVar20);
          }
        }
        if ((param_5 & 0xff) < 5) {
          FUN_00931980(*(undefined8 *)(param_1 + 0x70),param_5,2);
          uVar13 = FUN_00934630();
          if ((uVar13 & 1) == 0) {
            FUN_00931980(*(undefined8 *)(param_1 + 0x70),param_5,1);
            uVar13 = FUN_00934630();
            if ((uVar13 & 1) == 0) goto LAB_00905dac;
          }
          iVar11 = FUN_008e2f00(uVar12);
          if (iVar11 < 0x42ab9) {
            uVar20 = 0x64000 - iVar11;
            dVar23 = 0.0;
            if ((uVar20 & 0xfff) != 0) {
              dVar23 = (double)(uVar20 & 0xfff) * dVar5;
            }
            iVar19 = iVar19 + (int)(dVar23 + (double)((int)uVar20 >> 0xc) + dVar4);
            goto LAB_00905da8;
          }
        }
      }
      else {
        iVar19 = -2;
LAB_00905da8:
        local_98[uVar22] = iVar19;
      }
LAB_00905dac:
      uVar22 = uVar22 + 1;
    } while (uVar22 != param_3);
    if (param_3 != 0) {
      uVar13 = (ulong)param_3;
      lVar14 = 1;
      uVar22 = 0;
      do {
        uVar1 = uVar22 + 1;
        if (uVar1 < uVar13) {
          lVar17 = lVar14;
          if ((~(uint)uVar22 + (uint)param_3 & 1) != 0) {
            iVar19 = local_98[uVar22];
            if (iVar19 < local_98[lVar14]) {
              local_98[uVar22] = local_98[lVar14];
              local_98[lVar14] = iVar19;
              uVar3 = *(undefined1 *)(param_2 + uVar22);
              *(undefined1 *)(param_2 + uVar22) = *(undefined1 *)(param_2 + lVar14);
              *(undefined1 *)(param_2 + lVar14) = uVar3;
            }
            lVar17 = lVar14 + 1;
          }
          if (uVar13 - 2 != uVar22) {
            piVar16 = local_98 + lVar17 + 1;
            lVar15 = uVar13 - lVar17;
            puVar18 = (undefined1 *)(param_2 + 1 + lVar17);
            do {
              iVar19 = local_98[uVar22];
              if (iVar19 < piVar16[-1]) {
                local_98[uVar22] = piVar16[-1];
                piVar16[-1] = iVar19;
                uVar3 = *(undefined1 *)(param_2 + uVar22);
                *(undefined1 *)(param_2 + uVar22) = puVar18[-1];
                puVar18[-1] = uVar3;
              }
              iVar19 = local_98[uVar22];
              if (iVar19 < *piVar16) {
                local_98[uVar22] = *piVar16;
                *piVar16 = iVar19;
                uVar3 = *(undefined1 *)(param_2 + uVar22);
                *(undefined1 *)(param_2 + uVar22) = *puVar18;
                *puVar18 = uVar3;
              }
              lVar15 = lVar15 + -2;
              piVar16 = piVar16 + 2;
              puVar18 = puVar18 + 2;
            } while (lVar15 != 0);
          }
        }
        lVar14 = lVar14 + 1;
        uVar22 = uVar1;
      } while (uVar1 != uVar13);
    }
  }
  return;
}


