/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c82b70; name: FUN_00c82b70
 */


void FUN_00c82b70(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  
  lVar6 = param_1[8];
  uVar3 = param_1[9];
  uVar9 = param_1[10];
  if (uVar3 < uVar9) {
    uVar13 = *param_1;
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (*(ulong *)(lVar5 + 0x80) < 0x10) {
      *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar13;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      puVar10 = (undefined8 *)(lVar6 + uVar3 * 0x10);
      *puVar10 = *param_2;
      lVar6 = param_2[1];
      puVar10[1] = lVar6;
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
      }
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
        puVar10 = (undefined8 *)(lVar6 + uVar3 * 0x10);
        puVar7 = (undefined8 *)
                 (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,uVar1 << 4,8);
        puVar4 = PTR_DAT_02710860;
        puVar14 = (undefined8 *)param_1[8];
        puVar12 = puVar7;
        if (puVar14 != puVar10 && puVar14 != (undefined8 *)0x0) {
          puVar15 = puVar14;
          do {
            uVar13 = *param_1;
            lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
            if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_00c82ed8;
            *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar13;
            *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
            *puVar12 = *puVar15;
            uVar13 = puVar15[1];
            puVar15[1] = 0;
            puVar12[1] = uVar13;
            puVar15 = puVar15 + 2;
            puVar12 = puVar12 + 2;
            *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
          } while (puVar15 != puVar10);
        }
        puVar4 = PTR_DAT_02710860;
        uVar13 = *param_1;
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (0xf < *(ulong *)(lVar6 + 0x80)) {
LAB_00c82ed8:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar13;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
        *puVar12 = *param_2;
        lVar5 = param_2[1];
        puVar12[1] = lVar5;
        if (lVar5 != 0) {
          (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
        }
        puVar12 = puVar12 + 2;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        if (puVar14 != (undefined8 *)0x0) {
          lVar6 = param_1[9];
          if (puVar14 + lVar6 * 2 != puVar10) {
            do {
              uVar13 = *param_1;
              lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
              if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_00c82ed8;
              *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar13;
              *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
              *puVar12 = *puVar10;
              uVar13 = puVar10[1];
              puVar10[1] = 0;
              puVar12[1] = uVar13;
              puVar10 = puVar10 + 2;
              puVar12 = puVar12 + 2;
              *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
            } while (puVar10 != puVar14 + lVar6 * 2);
            lVar6 = param_1[9];
          }
          if (lVar6 != 0) {
            plVar11 = puVar14 + 1;
            do {
              lVar6 = lVar6 + -1;
              if (*plVar11 != 0) {
                (**(code **)(*(long *)(*plVar11 + 0x48) + 0x18))();
                *plVar11 = 0;
              }
              plVar11 = plVar11 + 2;
            } while (lVar6 != 0);
          }
          (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_1[8],param_1[10] << 4,8);
        }
        param_1[8] = puVar7;
        param_1[9] = (long)puVar12 - (long)puVar7 >> 4;
        param_1[10] = uVar1;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


