/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01000bf0; name: FUN_01000bf0
 */


void FUN_01000bf0(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  code *pcVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  
  lVar19 = param_1[8];
  uVar5 = param_1[9];
  uVar13 = param_1[10];
  if (uVar5 < uVar13) {
    uVar17 = *param_1;
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (*(ulong *)(lVar7 + 0x80) < 0x10) {
      *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar17;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
      puVar9 = (undefined8 *)(lVar19 + uVar5 * 0x110);
      *puVar9 = *param_2;
      puVar9[4] = 0;
      puVar9[5] = 0;
      puVar9[2] = 0;
      puVar9[3] = 0;
      if ((code *)param_2[4] != (code *)0x0) {
        (*(code *)param_2[4])(param_2 + 6,lVar19 + uVar5 * 0x110 + 0x30);
        uVar17 = param_2[2];
        uVar11 = param_2[3];
        uVar14 = param_2[5];
        puVar9[4] = param_2[4];
        puVar9[5] = uVar14;
        puVar9[2] = uVar17;
        puVar9[3] = uVar11;
      }
      lVar18 = lVar19 + uVar5 * 0x110;
      *(undefined8 *)(lVar18 + 0x90) = 0;
      *(undefined8 *)(lVar18 + 0xa0) = 0;
      *(undefined8 *)(lVar18 + 0xa8) = 0;
      *(undefined8 *)(lVar18 + 0x98) = 0;
      if ((code *)param_2[0x14] != (code *)0x0) {
        (*(code *)param_2[0x14])(param_2 + 0x16,lVar19 + uVar5 * 0x110 + 0xb0);
        uVar17 = param_2[0x12];
        uVar11 = param_2[0x13];
        uVar14 = param_2[0x15];
        *(undefined8 *)(lVar18 + 0xa0) = param_2[0x14];
        *(undefined8 *)(lVar18 + 0xa8) = uVar14;
        *(undefined8 *)(lVar18 + 0x90) = uVar17;
        *(undefined8 *)(lVar18 + 0x98) = uVar11;
      }
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
      param_1[9] = param_1[9] + 1;
      return;
    }
  }
  else {
    uVar10 = param_1[1];
    uVar1 = uVar5 + 1;
    if (uVar1 - uVar13 <= uVar10 - uVar13) {
      uVar4 = uVar13 << 3;
      if (4 < uVar13 >> 0x3d) {
        uVar4 = 0xffffffffffffffff;
      }
      if (uVar13 >> 0x3d == 0) {
        uVar4 = (uVar13 << 3) / 5;
      }
      uVar13 = uVar10;
      if (uVar4 <= uVar10) {
        uVar13 = uVar4;
      }
      if (uVar1 <= uVar13) {
        uVar1 = uVar13;
      }
      if (uVar1 <= uVar10) {
        puVar16 = (undefined8 *)(lVar19 + uVar5 * 0x110);
        puVar8 = (undefined8 *)
                 (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,uVar1 * 0x110,0x10);
        puVar6 = PTR_DAT_02710860;
        puVar9 = (undefined8 *)param_1[8];
        puVar15 = puVar8;
        if (puVar9 != puVar16 && puVar9 != (undefined8 *)0x0) {
          lVar19 = 0;
          do {
            uVar17 = *param_1;
            lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
            if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_010011dc;
            *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar17;
            *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
            puVar15 = (undefined8 *)((long)puVar9 + lVar19);
            puVar2 = (undefined8 *)((long)puVar8 + lVar19);
            uVar17 = *puVar15;
            puVar2[3] = 0;
            *puVar2 = uVar17;
            puVar2[2] = 0;
            puVar2[4] = 0;
            puVar2[5] = 0;
            if ((code *)puVar15[5] != (code *)0x0) {
              (*(code *)puVar15[5])(puVar15 + 6,puVar2 + 6);
              uVar11 = puVar15[2];
              uVar17 = puVar15[3];
              uVar14 = puVar15[5];
              puVar2[4] = puVar15[4];
              puVar2[5] = uVar14;
              puVar2[2] = uVar11;
              puVar2[3] = uVar17;
              pcVar12 = (code *)puVar15[3];
              if (pcVar12 != (code *)0x0) {
                puVar15[4] = 0;
                puVar15[5] = 0;
                puVar15[2] = 0;
                puVar15[3] = 0;
                (*pcVar12)(puVar15 + 6);
              }
            }
            puVar2[0x12] = 0;
            puVar2[0x14] = 0;
            puVar2[0x15] = 0;
            puVar2[0x13] = 0;
            if ((code *)puVar15[0x15] != (code *)0x0) {
              (*(code *)puVar15[0x15])(puVar15 + 0x16,puVar2 + 0x16);
              uVar11 = puVar15[0x12];
              uVar17 = puVar15[0x13];
              uVar14 = puVar15[0x15];
              puVar2[0x14] = puVar15[0x14];
              puVar2[0x15] = uVar14;
              puVar2[0x12] = uVar11;
              puVar2[0x13] = uVar17;
              pcVar12 = (code *)puVar15[0x13];
              if (pcVar12 != (code *)0x0) {
                puVar15[0x14] = 0;
                puVar15[0x15] = 0;
                puVar15[0x12] = 0;
                puVar15[0x13] = 0;
                (*pcVar12)(puVar15 + 0x16);
              }
            }
            *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
            lVar19 = lVar19 + 0x110;
          } while (puVar15 + 0x22 != puVar16);
          puVar15 = (undefined8 *)((long)puVar8 + lVar19);
        }
        uVar17 = *param_1;
        lVar19 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (0xf < *(ulong *)(lVar19 + 0x80)) {
LAB_010011dc:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar19 + *(ulong *)(lVar19 + 0x80) * 8) = uVar17;
        *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + 1;
        uVar17 = *param_2;
        puVar15[3] = 0;
        *puVar15 = uVar17;
        puVar15[2] = 0;
        puVar15[4] = 0;
        puVar15[5] = 0;
        if ((code *)param_2[4] != (code *)0x0) {
          (*(code *)param_2[4])(param_2 + 6,puVar15 + 6);
          uVar17 = param_2[2];
          uVar11 = param_2[3];
          uVar14 = param_2[5];
          puVar15[4] = param_2[4];
          puVar15[5] = uVar14;
          puVar15[2] = uVar17;
          puVar15[3] = uVar11;
        }
        puVar15[0x12] = 0;
        puVar15[0x14] = 0;
        puVar15[0x15] = 0;
        puVar15[0x13] = 0;
        if ((code *)param_2[0x14] != (code *)0x0) {
          (*(code *)param_2[0x14])(param_2 + 0x16,puVar15 + 0x16);
          uVar17 = param_2[0x12];
          uVar11 = param_2[0x13];
          uVar14 = param_2[0x15];
          puVar15[0x14] = param_2[0x14];
          puVar15[0x15] = uVar14;
          puVar15[0x12] = uVar17;
          puVar15[0x13] = uVar11;
        }
        *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + -1;
        puVar15 = puVar15 + 0x22;
        if (puVar9 != (undefined8 *)0x0) {
          lVar19 = param_1[9];
          if (puVar9 + lVar19 * 0x22 != puVar16) {
            lVar7 = 0;
            do {
              uVar17 = *param_1;
              lVar18 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
              if (0xf < *(ulong *)(lVar18 + 0x80)) goto LAB_010011dc;
              *(undefined8 *)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = uVar17;
              *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
              puVar2 = (undefined8 *)((long)puVar16 + lVar7);
              puVar3 = (undefined8 *)((long)puVar15 + lVar7);
              *puVar3 = *puVar2;
              puVar3[3] = 0;
              puVar3[2] = 0;
              puVar3[4] = 0;
              puVar3[5] = 0;
              if ((code *)puVar2[5] != (code *)0x0) {
                (*(code *)puVar2[5])(puVar2 + 6,puVar3 + 6);
                uVar11 = puVar2[2];
                uVar17 = puVar2[3];
                uVar14 = puVar2[5];
                puVar3[4] = puVar2[4];
                puVar3[5] = uVar14;
                puVar3[2] = uVar11;
                puVar3[3] = uVar17;
                pcVar12 = (code *)puVar2[3];
                if (pcVar12 != (code *)0x0) {
                  puVar2[4] = 0;
                  puVar2[5] = 0;
                  puVar2[2] = 0;
                  puVar2[3] = 0;
                  (*pcVar12)(puVar2 + 6);
                }
              }
              puVar3[0x12] = 0;
              puVar3[0x14] = 0;
              puVar3[0x15] = 0;
              puVar3[0x13] = 0;
              if ((code *)puVar2[0x15] != (code *)0x0) {
                (*(code *)puVar2[0x15])(puVar2 + 0x16,puVar3 + 0x16);
                uVar11 = puVar2[0x12];
                uVar17 = puVar2[0x13];
                uVar14 = puVar2[0x15];
                puVar3[0x14] = puVar2[0x14];
                puVar3[0x15] = uVar14;
                puVar3[0x12] = uVar11;
                puVar3[0x13] = uVar17;
                pcVar12 = (code *)puVar2[0x13];
                if (pcVar12 != (code *)0x0) {
                  puVar2[0x14] = 0;
                  puVar2[0x15] = 0;
                  puVar2[0x12] = 0;
                  puVar2[0x13] = 0;
                  (*pcVar12)(puVar2 + 0x16);
                }
              }
              *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
              lVar7 = lVar7 + 0x110;
            } while (puVar2 + 0x22 != puVar9 + lVar19 * 0x22);
            lVar19 = param_1[9];
            puVar15 = (undefined8 *)((long)puVar15 + lVar7);
          }
          if (lVar19 != 0) {
            puVar9 = puVar9 + 0x16;
            do {
              pcVar12 = (code *)puVar9[-3];
              if (pcVar12 != (code *)0x0) {
                puVar9[-2] = 0;
                puVar9[-1] = 0;
                puVar9[-4] = 0;
                puVar9[-3] = 0;
                (*pcVar12)(puVar9);
              }
              pcVar12 = (code *)puVar9[-0x13];
              lVar19 = lVar19 + -1;
              if (pcVar12 != (code *)0x0) {
                puVar9[-0x12] = 0;
                puVar9[-0x11] = 0;
                puVar9[-0x14] = 0;
                puVar9[-0x13] = 0;
                (*pcVar12)(puVar9 + -0x10);
              }
              puVar9 = puVar9 + 0x22;
            } while (lVar19 != 0);
          }
          (**(code **)(*(long *)*param_1 + 0x18))
                    ((long *)*param_1,param_1[8],param_1[10] * 0x110,0x10);
        }
        param_1[8] = puVar8;
        param_1[9] = ((long)puVar15 - (long)puVar8 >> 4) * -0xf0f0f0f0f0f0f0f;
        param_1[10] = uVar1;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


