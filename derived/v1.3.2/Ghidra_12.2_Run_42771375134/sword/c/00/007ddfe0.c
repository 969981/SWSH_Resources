/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007ddfe0; name: FUN_007ddfe0
 */


void FUN_007ddfe0(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  
  lVar7 = param_1[8];
  uVar3 = param_1[9];
  uVar9 = param_1[10];
  if (uVar3 < uVar9) {
    uVar11 = *param_1;
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (*(ulong *)(lVar5 + 0x80) < 0x10) {
      *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar11;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      uVar11 = *param_2;
      puVar12 = (undefined8 *)(lVar7 + uVar3 * 0x20);
      *param_2 = 0;
      *puVar12 = uVar11;
      uVar11 = param_2[1];
      uVar10 = param_2[3];
      puVar12[2] = param_2[2];
      puVar12[3] = uVar10;
      puVar12[1] = uVar11;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      param_1[9] = param_1[9] + 1;
      return;
    }
  }
  else {
    uVar8 = param_1[1];
    uVar1 = uVar3 + 1;
    if (uVar1 - uVar9 <= uVar8 - uVar9) {
      uVar2 = uVar9 << 3;
      if (4 < uVar9 >> 0x3d) {
        uVar2 = 0xffffffffffffffff;
      }
      if (uVar9 >> 0x3d == 0) {
        uVar2 = (uVar9 << 3) / 5;
      }
      uVar9 = uVar8;
      if (uVar2 <= uVar8) {
        uVar9 = uVar2;
      }
      if (uVar1 <= uVar9) {
        uVar1 = uVar9;
      }
      if (uVar1 <= uVar8) {
        puVar12 = (undefined8 *)(lVar7 + uVar3 * 0x20);
        puVar6 = (undefined8 *)
                 (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,uVar1 << 5,8);
        puVar4 = PTR_DAT_02710860;
        puVar14 = (undefined8 *)param_1[8];
        puVar13 = puVar6;
        if (puVar14 != puVar12 && puVar14 != (undefined8 *)0x0) {
          puVar15 = puVar14;
          do {
            uVar11 = *param_1;
            lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
            if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_007de364;
            *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar11;
            *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
            uVar11 = *puVar15;
            *puVar15 = 0;
            *puVar13 = uVar11;
            uVar10 = puVar15[3];
            uVar11 = puVar15[2];
            puVar13[1] = puVar15[1];
            puVar13[2] = uVar11;
            puVar13[3] = uVar10;
            puVar15 = puVar15 + 4;
            puVar13 = puVar13 + 4;
            *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
          } while (puVar15 != puVar12);
        }
        puVar4 = PTR_DAT_02710860;
        uVar11 = *param_1;
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (0xf < *(ulong *)(lVar7 + 0x80)) {
LAB_007de364:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar11;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
        uVar11 = *param_2;
        *param_2 = 0;
        *puVar13 = uVar11;
        uVar10 = param_2[3];
        uVar11 = param_2[2];
        puVar13[1] = param_2[1];
        puVar13[2] = uVar11;
        puVar13[3] = uVar10;
        puVar13 = puVar13 + 4;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
        if (puVar14 != (undefined8 *)0x0) {
          lVar7 = param_1[9];
          if (puVar14 + lVar7 * 4 != puVar12) {
            do {
              uVar11 = *param_1;
              lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
              if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_007de364;
              *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar11;
              *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
              uVar11 = *puVar12;
              *puVar12 = 0;
              *puVar13 = uVar11;
              uVar10 = puVar12[3];
              uVar11 = puVar12[2];
              puVar13[1] = puVar12[1];
              puVar13[2] = uVar11;
              puVar13[3] = uVar10;
              puVar12 = puVar12 + 4;
              puVar13 = puVar13 + 4;
              *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
            } while (puVar12 != puVar14 + lVar7 * 4);
            lVar7 = param_1[9];
          }
          while (lVar7 != 0) {
            puVar12 = (undefined8 *)*puVar14;
            lVar7 = lVar7 + -1;
            *puVar14 = 0;
            if (puVar12 != (undefined8 *)0x0) {
              (**(code **)*puVar12)(puVar12);
              (**(code **)(*(long *)puVar14[1] + 0x18))
                        ((long *)puVar14[1],puVar12,puVar14[2],puVar14[3]);
            }
            puVar14 = puVar14 + 4;
          }
          (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_1[8],param_1[10] << 5,8);
        }
        param_1[10] = uVar1;
        param_1[8] = puVar6;
        param_1[9] = (long)puVar13 - (long)puVar6 >> 5;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


