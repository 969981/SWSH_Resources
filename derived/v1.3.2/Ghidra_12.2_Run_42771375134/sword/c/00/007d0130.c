/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007d0130; name: FUN_007d0130
 */


void FUN_007d0130(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  code *pcVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  
  lVar5 = param_1[8];
  uVar6 = param_1[9];
  uVar15 = param_1[10];
  if (uVar6 < uVar15) {
    uVar18 = *param_1;
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (*(ulong *)(lVar10 + 0x80) < 0x10) {
      *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar18;
      puVar16 = (undefined8 *)(lVar5 + uVar6 * 0x80);
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
      puVar16[2] = 0;
      puVar16[3] = 0;
      *puVar16 = 0;
      puVar16[1] = 0;
      if ((code *)param_2[3] != (code *)0x0) {
        (*(code *)param_2[3])(param_2 + 4,puVar16 + 4);
        uVar18 = *param_2;
        uVar7 = param_2[1];
        uVar8 = param_2[3];
        puVar16[2] = param_2[2];
        puVar16[3] = uVar8;
        *puVar16 = uVar18;
        puVar16[1] = uVar7;
        pcVar13 = (code *)param_2[1];
        if (pcVar13 != (code *)0x0) {
          param_2[2] = 0;
          param_2[3] = 0;
          *param_2 = 0;
          param_2[1] = 0;
          (*pcVar13)(param_2 + 4);
        }
      }
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
      param_1[9] = param_1[9] + 1;
      return;
    }
  }
  else {
    uVar14 = param_1[1];
    uVar1 = uVar6 + 1;
    if (uVar1 - uVar15 <= uVar14 - uVar15) {
      uVar4 = uVar15 << 3;
      if (4 < uVar15 >> 0x3d) {
        uVar4 = 0xffffffffffffffff;
      }
      if (uVar15 >> 0x3d == 0) {
        uVar4 = (uVar15 << 3) / 5;
      }
      uVar15 = uVar14;
      if (uVar4 <= uVar14) {
        uVar15 = uVar4;
      }
      if (uVar1 <= uVar15) {
        uVar1 = uVar15;
      }
      if (uVar1 <= uVar14) {
        lVar5 = lVar5 + uVar6 * 0x80;
        puVar11 = (undefined8 *)
                  (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,uVar1 << 7,0x10);
        puVar9 = PTR_DAT_02710860;
        lVar10 = param_1[8];
        puVar16 = puVar11;
        if (lVar10 != lVar5 && lVar10 != 0) {
          lVar19 = 0;
          do {
            uVar18 = *param_1;
            lVar12 = nn::os::GetTlsValue(*(undefined4 *)puVar9);
            if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_007d058c;
            *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar18;
            puVar16 = (undefined8 *)((long)puVar11 + lVar19);
            *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
            puVar16[2] = 0;
            puVar16[3] = 0;
            puVar2 = (undefined8 *)(lVar10 + lVar19);
            *puVar16 = 0;
            puVar16[1] = 0;
            if ((code *)puVar2[3] != (code *)0x0) {
              (*(code *)puVar2[3])(puVar2 + 4,puVar16 + 4);
              uVar18 = *puVar2;
              uVar7 = puVar2[1];
              uVar8 = puVar2[3];
              puVar16[2] = puVar2[2];
              puVar16[3] = uVar8;
              *puVar16 = uVar18;
              puVar16[1] = uVar7;
              pcVar13 = (code *)puVar2[1];
              if (pcVar13 != (code *)0x0) {
                puVar2[2] = 0;
                puVar2[3] = 0;
                *puVar2 = 0;
                puVar2[1] = 0;
                (*pcVar13)(puVar2 + 4);
              }
            }
            lVar19 = lVar19 + 0x80;
            *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
          } while (lVar5 - lVar10 != lVar19);
          puVar16 = (undefined8 *)((long)puVar11 + lVar19);
        }
        uVar18 = *param_1;
        lVar19 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (0xf < *(ulong *)(lVar19 + 0x80)) {
LAB_007d058c:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar19 + *(ulong *)(lVar19 + 0x80) * 8) = uVar18;
        *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + 1;
        puVar16[2] = 0;
        puVar16[3] = 0;
        *puVar16 = 0;
        puVar16[1] = 0;
        if ((code *)param_2[3] != (code *)0x0) {
          (*(code *)param_2[3])(param_2 + 4,puVar16 + 4);
          uVar18 = *param_2;
          uVar7 = param_2[1];
          uVar8 = param_2[3];
          puVar16[2] = param_2[2];
          puVar16[3] = uVar8;
          *puVar16 = uVar18;
          puVar16[1] = uVar7;
          pcVar13 = (code *)param_2[1];
          if (pcVar13 != (code *)0x0) {
            param_2[2] = 0;
            param_2[3] = 0;
            *param_2 = 0;
            param_2[1] = 0;
            (*pcVar13)(param_2 + 4);
          }
        }
        *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + -1;
        puVar16 = puVar16 + 0x10;
        if (lVar10 != 0) {
          lVar12 = param_1[9];
          lVar19 = lVar10 + lVar12 * 0x80;
          if (lVar19 != lVar5) {
            lVar17 = 0;
            do {
              uVar18 = *param_1;
              lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
              if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_007d058c;
              *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar18;
              puVar2 = (undefined8 *)((long)puVar16 + lVar17);
              *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
              puVar2[2] = 0;
              puVar2[3] = 0;
              *puVar2 = 0;
              puVar2[1] = 0;
              puVar3 = (undefined8 *)(lVar5 + lVar17);
              if ((code *)puVar3[3] != (code *)0x0) {
                (*(code *)puVar3[3])(puVar3 + 4,puVar2 + 4);
                uVar18 = *puVar3;
                uVar7 = puVar3[1];
                uVar8 = puVar3[3];
                puVar2[2] = puVar3[2];
                puVar2[3] = uVar8;
                *puVar2 = uVar18;
                puVar2[1] = uVar7;
                pcVar13 = (code *)puVar3[1];
                if (pcVar13 != (code *)0x0) {
                  puVar3[2] = 0;
                  puVar3[3] = 0;
                  *puVar3 = 0;
                  puVar3[1] = 0;
                  (*pcVar13)(puVar3 + 4);
                }
              }
              lVar17 = lVar17 + 0x80;
              *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
            } while (lVar19 - lVar5 != lVar17);
            lVar12 = param_1[9];
            puVar16 = (undefined8 *)((long)puVar16 + lVar17);
          }
          if (lVar12 != 0) {
            lVar10 = lVar10 + 0x20;
            do {
              pcVar13 = *(code **)(lVar10 + -0x18);
              lVar12 = lVar12 + -1;
              if (pcVar13 != (code *)0x0) {
                *(undefined8 *)(lVar10 + -0x10) = 0;
                *(undefined8 *)(lVar10 + -8) = 0;
                *(undefined8 *)(lVar10 + -0x20) = 0;
                *(undefined8 *)(lVar10 + -0x18) = 0;
                (*pcVar13)(lVar10);
              }
              lVar10 = lVar10 + 0x80;
            } while (lVar12 != 0);
          }
          (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_1[8],param_1[10] << 7,0x10)
          ;
        }
        param_1[10] = uVar1;
        param_1[8] = puVar11;
        param_1[9] = (long)puVar16 - (long)puVar11 >> 7;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


