/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006110a0; name: FUN_006110a0
 */


void FUN_006110a0(uint *param_1,uint param_2,short *param_3,uint param_4,short *param_5,int param_6,
                 int param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  short sVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  uint *puVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  uint *puVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint *puVar24;
  uint *puVar25;
  
  puVar16 = param_1;
  if (param_7 != 0) {
    puVar16 = param_1 + 0x184;
  }
  *puVar16 = 0;
  uVar17 = 0;
  uVar15 = 0;
  puVar14 = param_1 + 0xc2;
  if (param_7 != 0) {
    puVar14 = param_1 + 0x246;
  }
  *puVar14 = 0;
  if (1 < param_2) {
    bVar19 = false;
    uVar15 = 0;
    uVar17 = 0;
    do {
      if (!bVar19) {
        sVar6 = param_3[1];
        uVar18 = (int)*param_3 - (int)sVar6;
        puVar8 = puVar14;
        uVar21 = uVar15;
      }
      else {
        sVar6 = *param_3;
        uVar18 = (int)param_3[1] - (int)sVar6;
        puVar8 = puVar16;
        uVar21 = uVar17;
      }
      uVar12 = (uint)sVar6;
      puVar20 = puVar8 + 2;
      if (uVar21 != 0) {
        uVar23 = uVar21;
        uVar22 = uVar21;
LAB_00611150:
        if ((int)uVar12 < (int)*puVar20) {
          uVar11 = (ulong)uVar23;
          if ((uVar23 & 3) != 0) {
            iVar7 = -(uVar22 & 3);
            puVar8 = puVar8 + (ulong)uVar21 * 0xc + 2;
            do {
              iVar10 = (int)uVar11;
              uVar11 = uVar11 - 1;
              puVar9 = puVar20 + (ulong)(iVar10 - 1) * 0xc;
              uVar1 = *(undefined8 *)(puVar9 + 2);
              iVar7 = iVar7 + 1;
              *(undefined8 *)puVar8 = *(undefined8 *)puVar9;
              *(undefined8 *)(puVar8 + 2) = uVar1;
              uVar1 = *(undefined8 *)(puVar9 + 4);
              uVar2 = *(undefined8 *)(puVar9 + 6);
              uVar3 = *(undefined8 *)(puVar9 + 10);
              *(undefined8 *)(puVar8 + 8) = *(undefined8 *)(puVar9 + 8);
              *(undefined8 *)(puVar8 + 10) = uVar3;
              *(undefined8 *)(puVar8 + 4) = uVar1;
              *(undefined8 *)(puVar8 + 6) = uVar2;
              puVar8 = puVar8 + -0xc;
            } while (iVar7 != 0);
          }
          if (2 < uVar23 - 1) {
            puVar8 = puVar20 + uVar11 * 0xc;
            uVar21 = (int)uVar11 - 4;
            uVar11 = uVar11 + 0xfffffffd;
            do {
              puVar9 = puVar20 + (ulong)((int)uVar11 + 2) * 0xc;
              uVar1 = *(undefined8 *)(puVar9 + 2);
              puVar25 = puVar20 + (ulong)((int)uVar11 + 1) * 0xc;
              *(undefined8 *)puVar8 = *(undefined8 *)puVar9;
              *(undefined8 *)(puVar8 + 2) = uVar1;
              uVar1 = *(undefined8 *)(puVar9 + 4);
              uVar2 = *(undefined8 *)(puVar9 + 6);
              uVar3 = *(undefined8 *)(puVar9 + 10);
              *(undefined8 *)(puVar8 + 8) = *(undefined8 *)(puVar9 + 8);
              *(undefined8 *)(puVar8 + 10) = uVar3;
              *(undefined8 *)(puVar8 + 4) = uVar1;
              *(undefined8 *)(puVar8 + 6) = uVar2;
              uVar1 = *(undefined8 *)puVar25;
              *(undefined8 *)(puVar8 + -10) = *(undefined8 *)(puVar25 + 2);
              uVar2 = *(undefined8 *)(puVar25 + 4);
              uVar4 = *(undefined8 *)(puVar25 + 6);
              uVar3 = *(undefined8 *)(puVar25 + 8);
              uVar5 = *(undefined8 *)(puVar25 + 10);
              *(undefined8 *)(puVar8 + -0xc) = uVar1;
              uVar13 = uVar11 & 0xffffffff;
              uVar11 = uVar11 - 4;
              puVar9 = puVar20 + uVar13 * 0xc;
              *(undefined8 *)(puVar8 + -4) = uVar3;
              *(undefined8 *)(puVar8 + -2) = uVar5;
              *(undefined8 *)(puVar8 + -8) = uVar2;
              *(undefined8 *)(puVar8 + -6) = uVar4;
              uVar1 = *(undefined8 *)puVar9;
              *(undefined8 *)(puVar8 + -0x16) = *(undefined8 *)(puVar9 + 2);
              uVar2 = *(undefined8 *)(puVar9 + 4);
              uVar4 = *(undefined8 *)(puVar9 + 6);
              uVar3 = *(undefined8 *)(puVar9 + 8);
              uVar5 = *(undefined8 *)(puVar9 + 10);
              *(undefined8 *)(puVar8 + -0x18) = uVar1;
              puVar9 = puVar20 + (ulong)uVar21 * 0xc;
              uVar21 = uVar21 - 4;
              *(undefined8 *)(puVar8 + -0x10) = uVar3;
              *(undefined8 *)(puVar8 + -0xe) = uVar5;
              *(undefined8 *)(puVar8 + -0x14) = uVar2;
              *(undefined8 *)(puVar8 + -0x12) = uVar4;
              uVar1 = *(undefined8 *)(puVar9 + 2);
              *(undefined8 *)(puVar8 + -0x24) = *(undefined8 *)puVar9;
              *(undefined8 *)(puVar8 + -0x22) = uVar1;
              uVar1 = *(undefined8 *)(puVar9 + 4);
              uVar2 = *(undefined8 *)(puVar9 + 6);
              uVar3 = *(undefined8 *)(puVar9 + 10);
              *(undefined8 *)(puVar8 + -0x1c) = *(undefined8 *)(puVar9 + 8);
              *(undefined8 *)(puVar8 + -0x1a) = uVar3;
              *(undefined8 *)(puVar8 + -0x20) = uVar1;
              *(undefined8 *)(puVar8 + -0x1e) = uVar2;
              puVar8 = puVar8 + -0x30;
            } while (uVar21 != 0xfffffffc);
          }
          goto LAB_00611270;
        }
        if (uVar12 != *puVar20) goto code_r0x00611160;
        if ((int)uVar18 < 0) {
          if ((int)puVar20[1] <= (int)uVar18) goto LAB_0061129c;
        }
        else if ((int)uVar18 <= (int)puVar20[1]) goto LAB_0061129c;
        puVar20[1] = uVar18;
        goto LAB_0061129c;
      }
LAB_00611270:
      *puVar20 = uVar12;
      puVar20[1] = uVar18;
      if (!bVar19) {
        uVar15 = uVar15 + 1;
      }
      else {
        uVar17 = uVar17 + 1;
      }
LAB_0061129c:
      param_2 = param_2 - 2;
      param_3 = param_3 + 2;
      bVar19 = true;
    } while (1 < param_2);
  }
  *puVar16 = uVar17;
  *puVar14 = uVar15;
  if (1 < param_4) {
    puVar8 = puVar14 + 2;
    do {
      sVar6 = param_5[1];
      uVar18 = (int)*param_5 - (int)sVar6;
      uVar21 = (uint)sVar6;
      puVar20 = puVar8;
      if (uVar15 != 0) {
        uVar12 = uVar15;
        uVar22 = uVar15;
LAB_00611308:
        uVar23 = *puVar20;
        if (uVar23 != uVar21 && (int)sVar6 <= (int)uVar23) {
          uVar11 = (ulong)uVar22;
          if ((uVar22 & 3) != 0) {
            puVar9 = puVar8 + (ulong)uVar15 * 0xc;
            iVar7 = -(uVar12 & 3);
            do {
              iVar10 = (int)uVar11;
              uVar11 = uVar11 - 1;
              puVar25 = puVar20 + (ulong)(iVar10 - 1) * 0xc;
              uVar1 = *(undefined8 *)(puVar25 + 2);
              iVar7 = iVar7 + 1;
              *(undefined8 *)puVar9 = *(undefined8 *)puVar25;
              *(undefined8 *)(puVar9 + 2) = uVar1;
              uVar1 = *(undefined8 *)(puVar25 + 4);
              uVar2 = *(undefined8 *)(puVar25 + 6);
              uVar3 = *(undefined8 *)(puVar25 + 10);
              *(undefined8 *)(puVar9 + 8) = *(undefined8 *)(puVar25 + 8);
              *(undefined8 *)(puVar9 + 10) = uVar3;
              *(undefined8 *)(puVar9 + 4) = uVar1;
              *(undefined8 *)(puVar9 + 6) = uVar2;
              puVar9 = puVar9 + -0xc;
            } while (iVar7 != 0);
          }
          if (2 < uVar22 - 1) {
            puVar9 = puVar20 + uVar11 * 0xc;
            uVar12 = (int)uVar11 - 4;
            uVar11 = uVar11 + 0xfffffffd;
            do {
              puVar25 = puVar20 + (ulong)((int)uVar11 + 2) * 0xc;
              uVar1 = *(undefined8 *)(puVar25 + 2);
              puVar24 = puVar20 + (ulong)((int)uVar11 + 1) * 0xc;
              *(undefined8 *)puVar9 = *(undefined8 *)puVar25;
              *(undefined8 *)(puVar9 + 2) = uVar1;
              uVar1 = *(undefined8 *)(puVar25 + 4);
              uVar2 = *(undefined8 *)(puVar25 + 6);
              uVar3 = *(undefined8 *)(puVar25 + 10);
              *(undefined8 *)(puVar9 + 8) = *(undefined8 *)(puVar25 + 8);
              *(undefined8 *)(puVar9 + 10) = uVar3;
              *(undefined8 *)(puVar9 + 4) = uVar1;
              *(undefined8 *)(puVar9 + 6) = uVar2;
              uVar1 = *(undefined8 *)puVar24;
              *(undefined8 *)(puVar9 + -10) = *(undefined8 *)(puVar24 + 2);
              uVar2 = *(undefined8 *)(puVar24 + 4);
              uVar4 = *(undefined8 *)(puVar24 + 6);
              uVar3 = *(undefined8 *)(puVar24 + 8);
              uVar5 = *(undefined8 *)(puVar24 + 10);
              *(undefined8 *)(puVar9 + -0xc) = uVar1;
              uVar13 = uVar11 & 0xffffffff;
              uVar11 = uVar11 - 4;
              puVar25 = puVar20 + uVar13 * 0xc;
              *(undefined8 *)(puVar9 + -4) = uVar3;
              *(undefined8 *)(puVar9 + -2) = uVar5;
              *(undefined8 *)(puVar9 + -8) = uVar2;
              *(undefined8 *)(puVar9 + -6) = uVar4;
              uVar1 = *(undefined8 *)puVar25;
              *(undefined8 *)(puVar9 + -0x16) = *(undefined8 *)(puVar25 + 2);
              uVar2 = *(undefined8 *)(puVar25 + 4);
              uVar4 = *(undefined8 *)(puVar25 + 6);
              uVar3 = *(undefined8 *)(puVar25 + 8);
              uVar5 = *(undefined8 *)(puVar25 + 10);
              *(undefined8 *)(puVar9 + -0x18) = uVar1;
              puVar25 = puVar20 + (ulong)uVar12 * 0xc;
              uVar12 = uVar12 - 4;
              *(undefined8 *)(puVar9 + -0x10) = uVar3;
              *(undefined8 *)(puVar9 + -0xe) = uVar5;
              *(undefined8 *)(puVar9 + -0x14) = uVar2;
              *(undefined8 *)(puVar9 + -0x12) = uVar4;
              uVar1 = *(undefined8 *)(puVar25 + 2);
              *(undefined8 *)(puVar9 + -0x24) = *(undefined8 *)puVar25;
              *(undefined8 *)(puVar9 + -0x22) = uVar1;
              uVar1 = *(undefined8 *)(puVar25 + 4);
              uVar2 = *(undefined8 *)(puVar25 + 6);
              uVar3 = *(undefined8 *)(puVar25 + 10);
              *(undefined8 *)(puVar9 + -0x1c) = *(undefined8 *)(puVar25 + 8);
              *(undefined8 *)(puVar9 + -0x1a) = uVar3;
              *(undefined8 *)(puVar9 + -0x20) = uVar1;
              *(undefined8 *)(puVar9 + -0x1e) = uVar2;
              puVar9 = puVar9 + -0x30;
            } while (uVar12 != 0xfffffffc);
          }
          goto LAB_00611424;
        }
        if (uVar23 != uVar21) goto code_r0x00611318;
        if ((int)uVar18 < 0) {
          if ((int)uVar18 < (int)puVar20[1]) goto LAB_0061142c;
          goto LAB_00611430;
        }
        if ((int)puVar20[1] < (int)uVar18) goto LAB_0061142c;
        goto LAB_00611430;
      }
LAB_00611424:
      uVar15 = uVar15 + 1;
      *puVar20 = uVar21;
LAB_0061142c:
      puVar20[1] = uVar18;
LAB_00611430:
      param_4 = param_4 - 2;
      param_5 = param_5 + 2;
    } while (1 < param_4);
  }
  *puVar16 = uVar17;
  *puVar14 = uVar15;
  if (uVar17 != 0) {
    uVar18 = uVar17 - 1;
    puVar8 = puVar16;
    uVar21 = uVar17;
    if (uVar18 != 0) goto LAB_0061149c;
    do {
      uVar12 = puVar8[2];
      uVar21 = uVar18;
      uVar18 = puVar8[3];
      while( true ) {
        puVar8[4] = uVar18 + uVar12;
        puVar8[5] = uVar12;
        puVar8 = puVar8 + 0xc;
        uVar18 = uVar21 - 1;
        if (uVar18 == 0) break;
LAB_0061149c:
        if (uVar21 == 0) goto LAB_006114a0;
        uVar12 = puVar8[2];
        uVar22 = puVar8[0xe] - uVar12;
        uVar21 = uVar18;
        uVar18 = puVar8[3];
        if ((int)uVar22 < (int)puVar8[3]) {
          puVar8[3] = uVar22;
          uVar18 = uVar22;
        }
      }
    } while( true );
  }
LAB_006114a0:
  if (uVar15 != 0) {
    uVar18 = uVar15 - 1;
    puVar8 = puVar14;
    uVar21 = uVar15;
    if (uVar18 != 0) goto LAB_006114f4;
    do {
      uVar12 = puVar8[2];
      uVar21 = uVar18;
      uVar18 = puVar8[3];
      while( true ) {
        puVar8[4] = uVar12;
        puVar8[5] = uVar18 + uVar12;
        puVar8 = puVar8 + 0xc;
        uVar18 = uVar21 - 1;
        if (uVar18 == 0) break;
LAB_006114f4:
        if (uVar21 == 0) goto LAB_006114f8;
        uVar12 = puVar8[2];
        uVar22 = uVar12 - puVar8[0xe];
        uVar21 = uVar18;
        uVar18 = puVar8[3];
        if ((int)puVar8[3] < (int)uVar22) {
          puVar8[3] = uVar22;
          uVar18 = uVar22;
        }
      }
    } while( true );
  }
LAB_006114f8:
  if (uVar17 != 0) {
    uVar18 = puVar16[4];
    puVar16[5] = puVar16[5] - param_6;
    if (uVar17 == 1) {
      puVar16 = puVar16 + 2;
    }
    else {
      iVar7 = 1 - uVar17;
      puVar8 = puVar16 + 0x11;
      do {
        while( true ) {
          iVar10 = *puVar8 - uVar18;
          if (iVar10 < 0) {
            iVar10 = iVar10 + 1;
          }
          if (param_6 <= iVar10 >> 1) break;
          uVar18 = (iVar10 >> 1) + uVar18;
          *puVar8 = uVar18;
          puVar8[-0xd] = uVar18;
          uVar18 = puVar8[-1];
          iVar7 = iVar7 + 1;
          puVar8 = puVar8 + 0xc;
          if (iVar7 == 0) goto LAB_0061157c;
        }
        puVar8[-0xd] = uVar18 + param_6;
        *puVar8 = *puVar8 - param_6;
        uVar18 = puVar8[-1];
        iVar7 = iVar7 + 1;
        puVar8 = puVar8 + 0xc;
      } while (iVar7 != 0);
LAB_0061157c:
      puVar16 = puVar16 + (ulong)(uVar17 - 2) * 0xc + 0xe;
    }
    puVar16[2] = uVar18 + param_6;
  }
  if (uVar15 != 0) {
    uVar17 = puVar14[4];
    puVar14[5] = puVar14[5] - param_6;
    if (uVar15 == 1) {
      puVar14 = puVar14 + 2;
    }
    else {
      iVar7 = 1 - uVar15;
      puVar16 = puVar14 + 0x11;
      do {
        iVar10 = *puVar16 - uVar17;
        if (iVar10 < 0) {
          iVar10 = iVar10 + 1;
        }
        uVar18 = (iVar10 >> 1) + uVar17;
        uVar21 = uVar18;
        if (param_6 <= iVar10 >> 1) {
          uVar18 = uVar17 + param_6;
          uVar21 = *puVar16 - param_6;
        }
        iVar7 = iVar7 + 1;
        puVar16[-0xd] = uVar18;
        uVar17 = puVar16[-1];
        *puVar16 = uVar21;
        puVar16 = puVar16 + 0xc;
      } while (iVar7 != 0);
      puVar14 = puVar14 + (ulong)(uVar15 - 2) * 0xc + 0xe;
    }
    puVar14[2] = uVar17 + param_6;
  }
  return;
code_r0x00611160:
  uVar23 = uVar23 - 1;
  puVar20 = puVar20 + 0xc;
  uVar22 = uVar22 + 3;
  if (uVar23 == 0) goto LAB_00611270;
  goto LAB_00611150;
code_r0x00611318:
  uVar22 = uVar22 - 1;
  puVar20 = puVar20 + 0xc;
  uVar12 = uVar12 + 3;
  if (uVar22 == 0) goto LAB_00611424;
  goto LAB_00611308;
}


