/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014fe170; name: FUN_014fe170
 */


void FUN_014fe170(uint *param_1,uint *param_2,undefined8 param_3)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  long lVar14;
  undefined8 uVar15;
  uint *puVar16;
  uint uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  uint *puVar23;
  uint *puVar24;
  uint *puVar25;
  uint uVar26;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
LAB_014fe1c0:
  puVar13 = param_2 + -8;
LAB_014fe1e0:
  puVar23 = param_1;
  lVar14 = (long)param_2 - (long)puVar23;
  uVar9 = lVar14 >> 5;
  switch(uVar9) {
  case 0:
  case 1:
    goto switchD_014fe7e0_caseD_0;
  case 2:
    if (*puVar23 <= param_2[-8]) {
      return;
    }
    break;
  case 3:
    puVar13 = puVar23 + 8;
    uVar26 = *puVar13;
    puVar12 = param_2 + -8;
    if (*puVar23 <= uVar26) {
      if (uVar26 <= *puVar12) {
        return;
      }
      uVar18 = *(undefined8 *)puVar13;
      uVar2 = *(undefined8 *)(puVar23 + 10);
      uVar21 = *(undefined8 *)(puVar23 + 0xc);
      uVar3 = *(undefined8 *)(puVar23 + 0xe);
      uVar22 = *(undefined8 *)puVar12;
      uVar15 = *(undefined8 *)(param_2 + -6);
      uVar20 = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)(puVar23 + 0xc) = *(undefined8 *)(param_2 + -4);
      *(undefined8 *)(puVar23 + 0xe) = uVar20;
      *(undefined8 *)puVar13 = uVar22;
      *(undefined8 *)(puVar23 + 10) = uVar15;
      *(undefined8 *)(param_2 + -4) = uVar21;
      *(undefined8 *)(param_2 + -2) = uVar3;
      *(undefined8 *)puVar12 = uVar18;
      *(undefined8 *)(param_2 + -6) = uVar2;
      if (puVar23[8] < *puVar23) {
        uVar18 = *(undefined8 *)puVar23;
        uVar22 = *(undefined8 *)(puVar23 + 2);
        uVar21 = *(undefined8 *)(puVar23 + 4);
        uVar2 = *(undefined8 *)(puVar23 + 6);
        *(undefined8 *)(puVar23 + 4) = *(undefined8 *)(puVar23 + 0xc);
        *(undefined8 *)(puVar23 + 6) = *(undefined8 *)(puVar23 + 0xe);
        *(undefined8 *)puVar23 = *(undefined8 *)puVar13;
        *(undefined8 *)(puVar23 + 2) = *(undefined8 *)(puVar23 + 10);
        *(undefined8 *)(puVar23 + 0xc) = uVar21;
        *(undefined8 *)(puVar23 + 0xe) = uVar2;
        *(undefined8 *)puVar13 = uVar18;
        *(undefined8 *)(puVar23 + 10) = uVar22;
        return;
      }
      return;
    }
    if (uVar26 <= *puVar12) {
      uVar18 = *(undefined8 *)puVar23;
      uVar22 = *(undefined8 *)(puVar23 + 2);
      uVar21 = *(undefined8 *)(puVar23 + 4);
      uVar2 = *(undefined8 *)(puVar23 + 6);
      *(undefined8 *)(puVar23 + 4) = *(undefined8 *)(puVar23 + 0xc);
      *(undefined8 *)(puVar23 + 6) = *(undefined8 *)(puVar23 + 0xe);
      *(undefined8 *)puVar23 = *(undefined8 *)puVar13;
      *(undefined8 *)(puVar23 + 2) = *(undefined8 *)(puVar23 + 10);
      *(undefined8 *)(puVar23 + 0xc) = uVar21;
      *(undefined8 *)(puVar23 + 0xe) = uVar2;
      *(undefined8 *)puVar13 = uVar18;
      *(undefined8 *)(puVar23 + 10) = uVar22;
      if (puVar23[8] <= *puVar12) {
        return;
      }
      local_80 = *(undefined8 *)puVar13;
      local_78 = *(undefined8 *)(puVar23 + 10);
      local_70 = *(undefined8 *)(puVar23 + 0xc);
      local_68 = *(undefined8 *)(puVar23 + 0xe);
      uVar18 = *(undefined8 *)puVar12;
      uVar21 = *(undefined8 *)(param_2 + -6);
      uVar22 = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)(puVar23 + 0xc) = *(undefined8 *)(param_2 + -4);
      *(undefined8 *)(puVar23 + 0xe) = uVar22;
      *(undefined8 *)puVar13 = uVar18;
      *(undefined8 *)(puVar23 + 10) = uVar21;
      goto LAB_014fea40;
    }
    break;
  case 4:
    FUN_014fec90(puVar23,puVar23 + 8,puVar23 + 0x10,puVar13,param_3);
    return;
  case 5:
    puVar13 = puVar23 + 8;
    puVar12 = puVar23 + 0x10;
    puVar25 = puVar23 + 0x18;
    FUN_014fec90(puVar23,puVar13,puVar12,puVar25,param_3);
    puVar10 = param_2 + -8;
    if (puVar23[0x18] <= *puVar10) {
      return;
    }
    uVar18 = *(undefined8 *)puVar25;
    uVar2 = *(undefined8 *)(puVar23 + 0x1a);
    uVar21 = *(undefined8 *)(puVar23 + 0x1c);
    uVar3 = *(undefined8 *)(puVar23 + 0x1e);
    uVar22 = *(undefined8 *)puVar10;
    uVar15 = *(undefined8 *)(param_2 + -6);
    uVar20 = *(undefined8 *)(param_2 + -2);
    *(undefined8 *)(puVar23 + 0x1c) = *(undefined8 *)(param_2 + -4);
    *(undefined8 *)(puVar23 + 0x1e) = uVar20;
    *(undefined8 *)puVar25 = uVar22;
    *(undefined8 *)(puVar23 + 0x1a) = uVar15;
    *(undefined8 *)(param_2 + -4) = uVar21;
    *(undefined8 *)(param_2 + -2) = uVar3;
    *(undefined8 *)puVar10 = uVar18;
    *(undefined8 *)(param_2 + -6) = uVar2;
    if (*puVar12 <= *puVar25) {
      return;
    }
    uVar18 = *(undefined8 *)puVar12;
    uVar22 = *(undefined8 *)(puVar23 + 0x12);
    uVar21 = *(undefined8 *)(puVar23 + 0x14);
    uVar2 = *(undefined8 *)(puVar23 + 0x16);
    *(undefined8 *)(puVar23 + 0x14) = *(undefined8 *)(puVar23 + 0x1c);
    *(undefined8 *)(puVar23 + 0x16) = *(undefined8 *)(puVar23 + 0x1e);
    *(undefined8 *)puVar12 = *(undefined8 *)puVar25;
    *(undefined8 *)(puVar23 + 0x12) = *(undefined8 *)(puVar23 + 0x1a);
    *(undefined8 *)(puVar23 + 0x1c) = uVar21;
    *(undefined8 *)(puVar23 + 0x1e) = uVar2;
    *(undefined8 *)puVar25 = uVar18;
    *(undefined8 *)(puVar23 + 0x1a) = uVar22;
    if (*puVar13 <= *puVar12) {
      return;
    }
    uVar18 = *(undefined8 *)puVar13;
    uVar22 = *(undefined8 *)(puVar23 + 10);
    uVar21 = *(undefined8 *)(puVar23 + 0xc);
    uVar2 = *(undefined8 *)(puVar23 + 0xe);
    *(undefined8 *)(puVar23 + 0xc) = *(undefined8 *)(puVar23 + 0x14);
    *(undefined8 *)(puVar23 + 0xe) = *(undefined8 *)(puVar23 + 0x16);
    *(undefined8 *)puVar13 = *(undefined8 *)puVar12;
    *(undefined8 *)(puVar23 + 10) = *(undefined8 *)(puVar23 + 0x12);
    *(undefined8 *)(puVar23 + 0x14) = uVar21;
    *(undefined8 *)(puVar23 + 0x16) = uVar2;
    *(undefined8 *)puVar12 = uVar18;
    *(undefined8 *)(puVar23 + 0x12) = uVar22;
    if (puVar23[8] < *puVar23) {
      uVar18 = *(undefined8 *)puVar23;
      uVar22 = *(undefined8 *)(puVar23 + 2);
      uVar21 = *(undefined8 *)(puVar23 + 4);
      uVar2 = *(undefined8 *)(puVar23 + 6);
      *(undefined8 *)(puVar23 + 4) = *(undefined8 *)(puVar23 + 0xc);
      *(undefined8 *)(puVar23 + 6) = *(undefined8 *)(puVar23 + 0xe);
      *(undefined8 *)puVar23 = *(undefined8 *)puVar13;
      *(undefined8 *)(puVar23 + 2) = *(undefined8 *)(puVar23 + 10);
      *(undefined8 *)(puVar23 + 0xc) = uVar21;
      *(undefined8 *)(puVar23 + 0xe) = uVar2;
      *(undefined8 *)puVar13 = uVar18;
      *(undefined8 *)(puVar23 + 10) = uVar22;
      return;
    }
    return;
  default:
    if (0x3df < lVar14) {
      uVar8 = uVar9;
      if ((long)uVar9 < 0) {
        uVar8 = uVar9 + 1;
      }
      puVar12 = puVar23 + (uVar8 & 0xffffffffffffffe) * 4;
      if (lVar14 < 0x7ce1) {
        uVar26 = *puVar12;
        if (uVar26 < *puVar23) {
          if (*puVar13 < uVar26) {
            uVar18 = *(undefined8 *)puVar23;
            uVar2 = *(undefined8 *)(puVar23 + 2);
            iVar7 = 1;
            iVar6 = 1;
            uVar21 = *(undefined8 *)(puVar23 + 4);
            uVar3 = *(undefined8 *)(puVar23 + 6);
            uVar22 = *(undefined8 *)puVar13;
            uVar15 = *(undefined8 *)(param_2 + -6);
            uVar20 = *(undefined8 *)(param_2 + -2);
            *(undefined8 *)(puVar23 + 4) = *(undefined8 *)(param_2 + -4);
            *(undefined8 *)(puVar23 + 6) = uVar20;
            *(undefined8 *)puVar23 = uVar22;
            *(undefined8 *)(puVar23 + 2) = uVar15;
            *(undefined8 *)(param_2 + -4) = uVar21;
            *(undefined8 *)(param_2 + -2) = uVar3;
            *(undefined8 *)puVar13 = uVar18;
            *(undefined8 *)(param_2 + -6) = uVar2;
            uVar26 = *puVar23;
            uVar17 = *puVar12;
            if (uVar17 <= uVar26) goto LAB_014fe424;
          }
          else {
            uVar18 = *(undefined8 *)puVar23;
            uVar2 = *(undefined8 *)(puVar23 + 2);
            uVar21 = *(undefined8 *)(puVar23 + 4);
            uVar3 = *(undefined8 *)(puVar23 + 6);
            uVar22 = *(undefined8 *)puVar12;
            uVar15 = *(undefined8 *)(puVar12 + 2);
            uVar20 = *(undefined8 *)(puVar12 + 6);
            *(undefined8 *)(puVar23 + 4) = *(undefined8 *)(puVar12 + 4);
            *(undefined8 *)(puVar23 + 6) = uVar20;
            *(undefined8 *)puVar23 = uVar22;
            *(undefined8 *)(puVar23 + 2) = uVar15;
            *(undefined8 *)(puVar12 + 4) = uVar21;
            *(undefined8 *)(puVar12 + 6) = uVar3;
            *(undefined8 *)puVar12 = uVar18;
            *(undefined8 *)(puVar12 + 2) = uVar2;
            if (*puVar13 < *puVar12) {
              uVar18 = *(undefined8 *)puVar12;
              uVar2 = *(undefined8 *)(puVar12 + 2);
              uVar21 = *(undefined8 *)(puVar12 + 4);
              uVar3 = *(undefined8 *)(puVar12 + 6);
              uVar22 = *(undefined8 *)puVar13;
              uVar15 = *(undefined8 *)(param_2 + -6);
              uVar20 = *(undefined8 *)(param_2 + -2);
              *(undefined8 *)(puVar12 + 4) = *(undefined8 *)(param_2 + -4);
              *(undefined8 *)(puVar12 + 6) = uVar20;
              *(undefined8 *)puVar12 = uVar22;
              *(undefined8 *)(puVar12 + 2) = uVar15;
              *(undefined8 *)(param_2 + -4) = uVar21;
              *(undefined8 *)(param_2 + -2) = uVar3;
              *(undefined8 *)puVar13 = uVar18;
              *(undefined8 *)(param_2 + -6) = uVar2;
              goto LAB_014fe644;
            }
LAB_014fe674:
            iVar7 = 1;
            iVar6 = 1;
            uVar26 = *puVar23;
            uVar17 = *puVar12;
            if (uVar17 <= uVar26) goto LAB_014fe424;
          }
        }
        else if (*puVar13 < uVar26) {
          uVar18 = *(undefined8 *)puVar12;
          uVar2 = *(undefined8 *)(puVar12 + 2);
          uVar21 = *(undefined8 *)(puVar12 + 4);
          uVar3 = *(undefined8 *)(puVar12 + 6);
          uVar22 = *(undefined8 *)puVar13;
          uVar15 = *(undefined8 *)(param_2 + -6);
          uVar20 = *(undefined8 *)(param_2 + -2);
          *(undefined8 *)(puVar12 + 4) = *(undefined8 *)(param_2 + -4);
          *(undefined8 *)(puVar12 + 6) = uVar20;
          *(undefined8 *)puVar12 = uVar22;
          *(undefined8 *)(puVar12 + 2) = uVar15;
          *(undefined8 *)(param_2 + -4) = uVar21;
          *(undefined8 *)(param_2 + -2) = uVar3;
          *(undefined8 *)puVar13 = uVar18;
          *(undefined8 *)(param_2 + -6) = uVar2;
          if (*puVar23 <= *puVar12) goto LAB_014fe674;
          uVar18 = *(undefined8 *)puVar23;
          uVar2 = *(undefined8 *)(puVar23 + 2);
          uVar21 = *(undefined8 *)(puVar23 + 4);
          uVar3 = *(undefined8 *)(puVar23 + 6);
          uVar22 = *(undefined8 *)puVar12;
          uVar15 = *(undefined8 *)(puVar12 + 2);
          uVar20 = *(undefined8 *)(puVar12 + 6);
          *(undefined8 *)(puVar23 + 4) = *(undefined8 *)(puVar12 + 4);
          *(undefined8 *)(puVar23 + 6) = uVar20;
          *(undefined8 *)puVar23 = uVar22;
          *(undefined8 *)(puVar23 + 2) = uVar15;
          *(undefined8 *)(puVar12 + 4) = uVar21;
          *(undefined8 *)(puVar12 + 6) = uVar3;
          *(undefined8 *)puVar12 = uVar18;
          *(undefined8 *)(puVar12 + 2) = uVar2;
LAB_014fe644:
          iVar7 = 2;
          iVar6 = 2;
          uVar26 = *puVar23;
          uVar17 = *puVar12;
          if (uVar17 <= uVar26) {
LAB_014fe424:
            puVar25 = param_2 + -0x10;
LAB_014fe428:
            puVar10 = puVar25;
            if (puVar23 != puVar10) goto code_r0x014fe430;
            puVar12 = puVar23 + 8;
            if (*puVar13 <= uVar26) {
              if (puVar12 == puVar13) {
                return;
              }
              puVar12 = puVar23 + 0x10;
              while (puVar12[-8] <= uVar26) {
                puVar12 = puVar12 + 8;
                if (param_2 == puVar12) {
                  return;
                }
              }
              uVar18 = *(undefined8 *)(puVar12 + -8);
              uVar2 = *(undefined8 *)(puVar12 + -6);
              uVar21 = *(undefined8 *)(puVar12 + -4);
              uVar3 = *(undefined8 *)(puVar12 + -2);
              uVar22 = *(undefined8 *)puVar13;
              uVar15 = *(undefined8 *)(param_2 + -6);
              uVar20 = *(undefined8 *)(param_2 + -2);
              *(undefined8 *)(puVar12 + -4) = *(undefined8 *)(param_2 + -4);
              *(undefined8 *)(puVar12 + -2) = uVar20;
              *(undefined8 *)(puVar12 + -8) = uVar22;
              *(undefined8 *)(puVar12 + -6) = uVar15;
              *(undefined8 *)(param_2 + -4) = uVar21;
              *(undefined8 *)(param_2 + -2) = uVar3;
              *(undefined8 *)puVar13 = uVar18;
              *(undefined8 *)(param_2 + -6) = uVar2;
            }
            if (puVar12 == puVar13) {
              return;
            }
            while( true ) {
              param_1 = puVar12 + -8;
              do {
                puVar25 = param_1;
                param_1 = puVar25 + 8;
              } while (*param_1 <= *puVar23);
              puVar12 = puVar25 + 0x10;
              do {
                puVar10 = puVar13;
                puVar13 = puVar10 + -8;
              } while (*puVar23 < *puVar13);
              if (puVar13 <= param_1) break;
              uVar18 = *(undefined8 *)param_1;
              uVar2 = *(undefined8 *)(puVar25 + 10);
              uVar21 = *(undefined8 *)(puVar25 + 0xc);
              uVar3 = *(undefined8 *)(puVar25 + 0xe);
              uVar22 = *(undefined8 *)puVar13;
              uVar15 = *(undefined8 *)(puVar10 + -6);
              uVar20 = *(undefined8 *)(puVar10 + -2);
              *(undefined8 *)(puVar25 + 0xc) = *(undefined8 *)(puVar10 + -4);
              *(undefined8 *)(puVar25 + 0xe) = uVar20;
              *(undefined8 *)param_1 = uVar22;
              *(undefined8 *)(puVar25 + 10) = uVar15;
              *(undefined8 *)(puVar10 + -4) = uVar21;
              *(undefined8 *)(puVar10 + -2) = uVar3;
              *(undefined8 *)puVar13 = uVar18;
              *(undefined8 *)(puVar10 + -6) = uVar2;
            }
            uVar26 = 4;
            goto LAB_014fe79c;
          }
        }
        else {
          iVar7 = 0;
          iVar6 = 0;
          uVar26 = *puVar23;
          uVar17 = *puVar12;
          if (uVar17 <= uVar26) goto LAB_014fe424;
        }
      }
      else {
        uVar8 = uVar9 + 3;
        if (-1 < (long)uVar9) {
          uVar8 = uVar9;
        }
        puVar25 = puVar23 + (uVar8 & 0x1ffffffffffffffc) * 2;
        puVar10 = puVar12 + (uVar8 & 0x1ffffffffffffffc) * 2;
        iVar6 = FUN_014fec90(puVar23,puVar25,puVar12,puVar10,param_3);
        if (*puVar13 < *puVar10) {
          uVar18 = *(undefined8 *)puVar10;
          uVar2 = *(undefined8 *)(puVar10 + 2);
          uVar21 = *(undefined8 *)(puVar10 + 4);
          uVar3 = *(undefined8 *)(puVar10 + 6);
          uVar22 = *(undefined8 *)puVar13;
          uVar15 = *(undefined8 *)(param_2 + -6);
          uVar20 = *(undefined8 *)(param_2 + -2);
          *(undefined8 *)(puVar10 + 4) = *(undefined8 *)(param_2 + -4);
          *(undefined8 *)(puVar10 + 6) = uVar20;
          *(undefined8 *)puVar10 = uVar22;
          *(undefined8 *)(puVar10 + 2) = uVar15;
          *(undefined8 *)(param_2 + -4) = uVar21;
          *(undefined8 *)(param_2 + -2) = uVar3;
          *(undefined8 *)puVar13 = uVar18;
          *(undefined8 *)(param_2 + -6) = uVar2;
          if (*puVar10 < *puVar12) {
            uVar18 = *(undefined8 *)puVar12;
            uVar2 = *(undefined8 *)(puVar12 + 2);
            uVar21 = *(undefined8 *)(puVar12 + 4);
            uVar3 = *(undefined8 *)(puVar12 + 6);
            uVar22 = *(undefined8 *)puVar10;
            uVar15 = *(undefined8 *)(puVar10 + 2);
            uVar20 = *(undefined8 *)(puVar10 + 6);
            *(undefined8 *)(puVar12 + 4) = *(undefined8 *)(puVar10 + 4);
            *(undefined8 *)(puVar12 + 6) = uVar20;
            *(undefined8 *)puVar12 = uVar22;
            *(undefined8 *)(puVar12 + 2) = uVar15;
            *(undefined8 *)(puVar10 + 4) = uVar21;
            *(undefined8 *)(puVar10 + 6) = uVar3;
            *(undefined8 *)puVar10 = uVar18;
            *(undefined8 *)(puVar10 + 2) = uVar2;
            if (*puVar12 < *puVar25) {
              uVar18 = *(undefined8 *)puVar25;
              uVar2 = *(undefined8 *)(puVar25 + 2);
              uVar21 = *(undefined8 *)(puVar25 + 4);
              uVar3 = *(undefined8 *)(puVar25 + 6);
              uVar22 = *(undefined8 *)puVar12;
              uVar15 = *(undefined8 *)(puVar12 + 2);
              uVar20 = *(undefined8 *)(puVar12 + 6);
              *(undefined8 *)(puVar25 + 4) = *(undefined8 *)(puVar12 + 4);
              *(undefined8 *)(puVar25 + 6) = uVar20;
              *(undefined8 *)puVar25 = uVar22;
              *(undefined8 *)(puVar25 + 2) = uVar15;
              *(undefined8 *)(puVar12 + 4) = uVar21;
              *(undefined8 *)(puVar12 + 6) = uVar3;
              *(undefined8 *)puVar12 = uVar18;
              *(undefined8 *)(puVar12 + 2) = uVar2;
              if (*puVar25 < *puVar23) {
                uVar18 = *(undefined8 *)puVar23;
                uVar2 = *(undefined8 *)(puVar23 + 2);
                iVar6 = iVar6 + 4;
                uVar21 = *(undefined8 *)(puVar23 + 4);
                uVar3 = *(undefined8 *)(puVar23 + 6);
                uVar22 = *(undefined8 *)puVar25;
                uVar15 = *(undefined8 *)(puVar25 + 2);
                uVar20 = *(undefined8 *)(puVar25 + 6);
                *(undefined8 *)(puVar23 + 4) = *(undefined8 *)(puVar25 + 4);
                *(undefined8 *)(puVar23 + 6) = uVar20;
                *(undefined8 *)puVar23 = uVar22;
                *(undefined8 *)(puVar23 + 2) = uVar15;
                *(undefined8 *)(puVar25 + 4) = uVar21;
                *(undefined8 *)(puVar25 + 6) = uVar3;
                *(undefined8 *)puVar25 = uVar18;
                *(undefined8 *)(puVar25 + 2) = uVar2;
                goto LAB_014fe350;
              }
              iVar6 = iVar6 + 3;
              uVar26 = *puVar23;
              uVar17 = *puVar12;
              iVar7 = iVar6;
              if (uVar17 <= uVar26) goto LAB_014fe424;
            }
            else {
              iVar6 = iVar6 + 2;
              uVar26 = *puVar23;
              uVar17 = *puVar12;
              iVar7 = iVar6;
              if (uVar17 <= uVar26) goto LAB_014fe424;
            }
          }
          else {
            iVar6 = iVar6 + 1;
            uVar26 = *puVar23;
            uVar17 = *puVar12;
            iVar7 = iVar6;
            if (uVar17 <= uVar26) goto LAB_014fe424;
          }
        }
        else {
LAB_014fe350:
          uVar26 = *puVar23;
          uVar17 = *puVar12;
          iVar7 = iVar6;
          if (uVar17 <= uVar26) goto LAB_014fe424;
        }
      }
      puVar25 = puVar23 + 8;
      puVar10 = puVar13;
      if (puVar13 <= puVar25) goto LAB_014fe370;
      goto LAB_014fe4c0;
    }
    puVar13 = puVar23 + 0x10;
    uVar26 = *puVar13;
    puVar12 = puVar23 + 8;
    uVar17 = *puVar12;
    if (uVar17 < *puVar23) {
      if (uVar26 < uVar17) {
        local_80 = *(undefined8 *)puVar23;
        local_78 = *(undefined8 *)(puVar23 + 2);
        local_70 = *(undefined8 *)(puVar23 + 4);
        local_68 = *(undefined8 *)(puVar23 + 6);
        *(undefined8 *)(puVar23 + 4) = *(undefined8 *)(puVar23 + 0x14);
        *(undefined8 *)(puVar23 + 6) = *(undefined8 *)(puVar23 + 0x16);
        *(undefined8 *)puVar23 = *(undefined8 *)puVar13;
        *(undefined8 *)(puVar23 + 2) = *(undefined8 *)(puVar23 + 0x12);
      }
      else {
        uVar18 = *(undefined8 *)puVar23;
        uVar22 = *(undefined8 *)(puVar23 + 2);
        uVar21 = *(undefined8 *)(puVar23 + 4);
        uVar2 = *(undefined8 *)(puVar23 + 6);
        *(undefined8 *)(puVar23 + 4) = *(undefined8 *)(puVar23 + 0xc);
        *(undefined8 *)(puVar23 + 6) = *(undefined8 *)(puVar23 + 0xe);
        *(undefined8 *)puVar23 = *(undefined8 *)puVar12;
        *(undefined8 *)(puVar23 + 2) = *(undefined8 *)(puVar23 + 10);
        *(undefined8 *)(puVar23 + 0xc) = uVar21;
        *(undefined8 *)(puVar23 + 0xe) = uVar2;
        *(undefined8 *)puVar12 = uVar18;
        *(undefined8 *)(puVar23 + 10) = uVar22;
        if (puVar23[8] <= uVar26) goto joined_r0x014fe8bc;
        local_80 = *(undefined8 *)puVar12;
        local_78 = *(undefined8 *)(puVar23 + 10);
        local_70 = *(undefined8 *)(puVar23 + 0xc);
        local_68 = *(undefined8 *)(puVar23 + 0xe);
        *(undefined8 *)(puVar23 + 0xc) = *(undefined8 *)(puVar23 + 0x14);
        *(undefined8 *)(puVar23 + 0xe) = *(undefined8 *)(puVar23 + 0x16);
        *(undefined8 *)puVar12 = *(undefined8 *)puVar13;
        *(undefined8 *)(puVar23 + 10) = *(undefined8 *)(puVar23 + 0x12);
      }
      *(undefined8 *)(puVar23 + 0x14) = local_70;
      *(undefined8 *)(puVar23 + 0x16) = local_68;
      *(undefined8 *)puVar13 = local_80;
      *(undefined8 *)(puVar23 + 0x12) = local_78;
    }
    else if (uVar26 < uVar17) {
      uVar18 = *(undefined8 *)puVar12;
      uVar22 = *(undefined8 *)(puVar23 + 10);
      uVar21 = *(undefined8 *)(puVar23 + 0xc);
      uVar2 = *(undefined8 *)(puVar23 + 0xe);
      *(undefined8 *)(puVar23 + 0xc) = *(undefined8 *)(puVar23 + 0x14);
      *(undefined8 *)(puVar23 + 0xe) = *(undefined8 *)(puVar23 + 0x16);
      *(undefined8 *)puVar12 = *(undefined8 *)puVar13;
      *(undefined8 *)(puVar23 + 10) = *(undefined8 *)(puVar23 + 0x12);
      *(undefined8 *)(puVar23 + 0x14) = uVar21;
      *(undefined8 *)(puVar23 + 0x16) = uVar2;
      *(undefined8 *)puVar13 = uVar18;
      *(undefined8 *)(puVar23 + 0x12) = uVar22;
      if (*puVar12 < *puVar23) {
        uVar18 = *(undefined8 *)puVar23;
        uVar22 = *(undefined8 *)(puVar23 + 2);
        uVar21 = *(undefined8 *)(puVar23 + 4);
        uVar2 = *(undefined8 *)(puVar23 + 6);
        *(undefined8 *)(puVar23 + 4) = *(undefined8 *)(puVar23 + 0xc);
        *(undefined8 *)(puVar23 + 6) = *(undefined8 *)(puVar23 + 0xe);
        *(undefined8 *)puVar23 = *(undefined8 *)puVar12;
        *(undefined8 *)(puVar23 + 2) = *(undefined8 *)(puVar23 + 10);
        *(undefined8 *)(puVar23 + 0xc) = uVar21;
        *(undefined8 *)(puVar23 + 0xe) = uVar2;
        *(undefined8 *)puVar12 = uVar18;
        *(undefined8 *)(puVar23 + 10) = uVar22;
      }
    }
joined_r0x014fe8bc:
    if (puVar23 + 0x18 == param_2) {
      return;
    }
    lVar14 = 0;
    puVar12 = puVar23 + 0x18;
    goto LAB_014fe940;
  }
  local_80 = *(undefined8 *)puVar23;
  local_78 = *(undefined8 *)(puVar23 + 2);
  local_70 = *(undefined8 *)(puVar23 + 4);
  local_68 = *(undefined8 *)(puVar23 + 6);
  uVar18 = *(undefined8 *)(param_2 + -8);
  uVar21 = *(undefined8 *)(param_2 + -6);
  uVar22 = *(undefined8 *)(param_2 + -2);
  *(undefined8 *)(puVar23 + 4) = *(undefined8 *)(param_2 + -4);
  *(undefined8 *)(puVar23 + 6) = uVar22;
  *(undefined8 *)puVar23 = uVar18;
  *(undefined8 *)(puVar23 + 2) = uVar21;
LAB_014fea40:
  *(undefined8 *)(param_2 + -4) = local_70;
  *(undefined8 *)(param_2 + -2) = local_68;
  *(undefined8 *)(param_2 + -8) = local_80;
  *(undefined8 *)(param_2 + -6) = local_78;
  return;
code_r0x014fe430:
  puVar25 = puVar10 + -8;
  if (*puVar10 < uVar17) goto code_r0x014fe43c;
  goto LAB_014fe428;
code_r0x014fe43c:
  uVar18 = *(undefined8 *)puVar23;
  uVar2 = *(undefined8 *)(puVar23 + 2);
  iVar7 = iVar6 + 1;
  uVar21 = *(undefined8 *)(puVar23 + 4);
  uVar3 = *(undefined8 *)(puVar23 + 6);
  uVar15 = *(undefined8 *)puVar10;
  uVar20 = *(undefined8 *)(puVar10 + 6);
  uVar22 = *(undefined8 *)(puVar10 + 2);
  *(undefined8 *)(puVar23 + 4) = *(undefined8 *)(puVar10 + 4);
  *(undefined8 *)(puVar23 + 6) = uVar20;
  *(undefined8 *)puVar23 = uVar15;
  *(undefined8 *)(puVar23 + 2) = uVar22;
  *(undefined8 *)(puVar10 + 4) = uVar21;
  *(undefined8 *)(puVar10 + 6) = uVar3;
  *(undefined8 *)puVar10 = uVar18;
  *(undefined8 *)(puVar10 + 2) = uVar2;
  puVar25 = puVar23 + 8;
  if (puVar25 < puVar10) {
LAB_014fe4c0:
    while( true ) {
      puVar24 = puVar25 + -8;
      do {
        puVar16 = puVar24;
        puVar24 = puVar16 + 8;
      } while (*puVar24 < *puVar12);
      puVar25 = puVar16 + 0x10;
      do {
        puVar11 = puVar10;
        puVar10 = puVar11 + -8;
      } while (*puVar12 <= *puVar10);
      if (puVar10 < puVar24) break;
      uVar18 = *(undefined8 *)puVar24;
      uVar22 = *(undefined8 *)(puVar16 + 10);
      uVar21 = *(undefined8 *)(puVar16 + 0xc);
      uVar2 = *(undefined8 *)(puVar16 + 0xe);
      iVar7 = iVar7 + 1;
      puVar1 = puVar10;
      if (puVar12 != puVar24) {
        puVar1 = puVar12;
      }
      uVar3 = *(undefined8 *)puVar10;
      uVar15 = *(undefined8 *)(puVar11 + -6);
      uVar20 = *(undefined8 *)(puVar11 + -2);
      *(undefined8 *)(puVar16 + 0xc) = *(undefined8 *)(puVar11 + -4);
      *(undefined8 *)(puVar16 + 0xe) = uVar20;
      *(undefined8 *)puVar24 = uVar3;
      *(undefined8 *)(puVar16 + 10) = uVar15;
      *(undefined8 *)(puVar11 + -4) = uVar21;
      *(undefined8 *)(puVar11 + -2) = uVar2;
      *(undefined8 *)puVar10 = uVar18;
      *(undefined8 *)(puVar11 + -6) = uVar22;
      puVar12 = puVar1;
    }
    if (puVar24 == puVar12) goto LAB_014fe4f8;
LAB_014fe378:
    if (*puVar24 <= *puVar12) goto LAB_014fe4f8;
    uVar18 = *(undefined8 *)puVar24;
    uVar2 = *(undefined8 *)(puVar24 + 2);
    uVar21 = *(undefined8 *)(puVar24 + 4);
    uVar3 = *(undefined8 *)(puVar24 + 6);
    uVar22 = *(undefined8 *)puVar12;
    uVar15 = *(undefined8 *)(puVar12 + 2);
    uVar20 = *(undefined8 *)(puVar12 + 6);
    *(undefined8 *)(puVar24 + 4) = *(undefined8 *)(puVar12 + 4);
    *(undefined8 *)(puVar24 + 6) = uVar20;
    *(undefined8 *)puVar24 = uVar22;
    *(undefined8 *)(puVar24 + 2) = uVar15;
    *(undefined8 *)(puVar12 + 4) = uVar21;
    *(undefined8 *)(puVar12 + 6) = uVar3;
    *(undefined8 *)puVar12 = uVar18;
    *(undefined8 *)(puVar12 + 2) = uVar2;
    if (iVar7 != -1) goto LAB_014fe52c;
  }
  else {
LAB_014fe370:
    puVar24 = puVar23 + 8;
    if (puVar24 != puVar12) goto LAB_014fe378;
LAB_014fe4f8:
    if (iVar7 != 0) goto LAB_014fe52c;
  }
  uVar9 = FUN_014fef00(puVar23,puVar24,param_3);
  uVar8 = FUN_014fef00(puVar24 + 8,param_2,param_3);
  if ((uVar8 & 1) != 0) goto LAB_014fe7b0;
  param_1 = puVar24 + 8;
  if ((uVar9 & 1) != 0) goto LAB_014fe1e0;
LAB_014fe52c:
  if ((long)param_2 - (long)puVar24 <= (long)puVar24 - (long)puVar23) {
    FUN_014fe170(puVar24 + 8,param_2,param_3);
    param_2 = puVar24;
    param_1 = puVar23;
    goto LAB_014fe1c0;
  }
  FUN_014fe170(puVar23,puVar24,param_3);
  param_1 = puVar24 + 8;
  goto LAB_014fe1e0;
LAB_014fe7b0:
  bVar5 = (uVar9 & 1) == 0;
  if (bVar5) {
    param_2 = puVar24;
  }
  uVar26 = 1;
  if (bVar5) {
    uVar26 = 2;
  }
  param_1 = puVar23;
  if (4 < uVar26) {
    return;
  }
LAB_014fe79c:
  if ((1 << (ulong)uVar26 & 0x15U) == 0) {
    return;
  }
  goto LAB_014fe1c0;
LAB_014fe940:
  uVar26 = *puVar12;
  if (uVar26 < *puVar13) {
    uVar18 = *(undefined8 *)(puVar12 + 1);
    uVar21 = *(undefined8 *)(puVar12 + 3);
    uVar22 = *(undefined8 *)(puVar12 + 5);
    uVar17 = puVar12[7];
    lVar4 = lVar14;
    do {
      lVar19 = lVar4;
      *(undefined8 *)((long)puVar23 + lVar19 + 0x70) =
           *(undefined8 *)((long)puVar23 + lVar19 + 0x50);
      *(undefined8 *)((long)puVar23 + lVar19 + 0x78) =
           *(undefined8 *)((long)puVar23 + lVar19 + 0x58);
      *(undefined8 *)((long)puVar23 + lVar19 + 0x60) =
           *(undefined8 *)((long)puVar23 + lVar19 + 0x40);
      *(undefined8 *)((long)puVar23 + lVar19 + 0x68) =
           *(undefined8 *)((long)puVar23 + lVar19 + 0x48);
      if (lVar19 == -0x40) {
        puVar13 = puVar23;
        goto LAB_014fe9b0;
      }
      lVar4 = lVar19 + -0x20;
    } while (uVar26 < *(uint *)((long)puVar23 + lVar19 + 0x20));
    puVar13 = (uint *)((long)puVar23 + lVar19 + 0x40);
LAB_014fe9b0:
    *puVar13 = uVar26;
    puVar13[7] = uVar17;
    *(undefined8 *)(puVar13 + 5) = uVar22;
    *(undefined8 *)(puVar13 + 3) = uVar21;
    *(undefined8 *)(puVar13 + 1) = uVar18;
  }
  puVar25 = puVar12 + 8;
  lVar14 = lVar14 + 0x20;
  puVar13 = puVar12;
  puVar12 = puVar25;
  if (puVar25 == param_2) {
switchD_014fe7e0_caseD_0:
    return;
  }
  goto LAB_014fe940;
}


