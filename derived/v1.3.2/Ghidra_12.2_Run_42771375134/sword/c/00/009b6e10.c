/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009b6e10; name: FUN_009b6e10
 */


void FUN_009b6e10(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  code *pcVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  
  lVar7 = param_1[8];
  uVar3 = param_1[9];
  uVar10 = param_1[10];
  if (uVar3 < uVar10) {
    uVar12 = *param_1;
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (*(ulong *)(lVar5 + 0x80) < 0x10) {
      *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar12;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      uVar12 = *param_2;
      puVar13 = (undefined8 *)(lVar7 + uVar3 * 0x20);
      *param_2 = 0;
      *puVar13 = uVar12;
      uVar12 = param_2[1];
      uVar11 = param_2[3];
      puVar13[2] = param_2[2];
      puVar13[3] = uVar11;
      puVar13[1] = uVar12;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      param_1[9] = param_1[9] + 1;
      return;
    }
  }
  else {
    uVar8 = param_1[1];
    uVar1 = uVar3 + 1;
    if (uVar1 - uVar10 <= uVar8 - uVar10) {
      uVar2 = uVar10 << 3;
      if (4 < uVar10 >> 0x3d) {
        uVar2 = 0xffffffffffffffff;
      }
      if (uVar10 >> 0x3d == 0) {
        uVar2 = (uVar10 << 3) / 5;
      }
      uVar10 = uVar8;
      if (uVar2 <= uVar8) {
        uVar10 = uVar2;
      }
      if (uVar1 <= uVar10) {
        uVar1 = uVar10;
      }
      if (uVar1 <= uVar8) {
        puVar13 = (undefined8 *)(lVar7 + uVar3 * 0x20);
        puVar6 = (undefined8 *)
                 (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,uVar1 << 5,8);
        puVar4 = PTR_DAT_02710860;
        puVar15 = (undefined8 *)param_1[8];
        puVar14 = puVar6;
        if (puVar15 != puVar13 && puVar15 != (undefined8 *)0x0) {
          puVar16 = puVar15;
          do {
            uVar12 = *param_1;
            lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
            if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_009b719c;
            *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar12;
            *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
            uVar12 = *puVar16;
            *puVar16 = 0;
            *puVar14 = uVar12;
            uVar11 = puVar16[3];
            uVar12 = puVar16[2];
            puVar14[1] = puVar16[1];
            puVar14[2] = uVar12;
            puVar14[3] = uVar11;
            puVar16 = puVar16 + 4;
            puVar14 = puVar14 + 4;
            *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
          } while (puVar16 != puVar13);
        }
        puVar4 = PTR_DAT_02710860;
        uVar12 = *param_1;
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (0xf < *(ulong *)(lVar7 + 0x80)) {
LAB_009b719c:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar12;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
        uVar12 = *param_2;
        *param_2 = 0;
        *puVar14 = uVar12;
        uVar11 = param_2[3];
        uVar12 = param_2[2];
        puVar14[1] = param_2[1];
        puVar14[2] = uVar12;
        puVar14[3] = uVar11;
        puVar14 = puVar14 + 4;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
        if (puVar15 != (undefined8 *)0x0) {
          lVar7 = param_1[9];
          if (puVar15 + lVar7 * 4 != puVar13) {
            do {
              uVar12 = *param_1;
              lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
              if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_009b719c;
              *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar12;
              *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
              uVar12 = *puVar13;
              *puVar13 = 0;
              *puVar14 = uVar12;
              uVar11 = puVar13[3];
              uVar12 = puVar13[2];
              puVar14[1] = puVar13[1];
              puVar14[2] = uVar12;
              puVar14[3] = uVar11;
              puVar13 = puVar13 + 4;
              puVar14 = puVar14 + 4;
              *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
            } while (puVar13 != puVar15 + lVar7 * 4);
            lVar7 = param_1[9];
          }
          while (lVar7 != 0) {
            puVar13 = (undefined8 *)*puVar15;
            lVar7 = lVar7 + -1;
            *puVar15 = 0;
            if (puVar13 != (undefined8 *)0x0) {
              pcVar9 = (code *)puVar13[1];
              if (pcVar9 != (code *)0x0) {
                puVar13[2] = 0;
                puVar13[3] = 0;
                *puVar13 = 0;
                puVar13[1] = 0;
                (*pcVar9)(puVar13 + 4);
              }
              (**(code **)(*(long *)puVar15[1] + 0x18))
                        ((long *)puVar15[1],puVar13,puVar15[2],puVar15[3]);
            }
            puVar15 = puVar15 + 4;
          }
          (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_1[8],param_1[10] << 5,8);
        }
        param_1[10] = uVar1;
        param_1[8] = puVar6;
        param_1[9] = (long)puVar14 - (long)puVar6 >> 5;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


