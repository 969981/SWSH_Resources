/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c85330; name: FUN_00c85330
 */


void FUN_00c85330(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  
  lVar8 = param_1[8];
  uVar3 = param_1[9];
  uVar11 = param_1[10];
  if (uVar3 < uVar11) {
    uVar14 = *param_1;
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (*(ulong *)(lVar5 + 0x80) < 0x10) {
      *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar14;
      puVar10 = (undefined8 *)(lVar8 + uVar3 * 0x28);
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      uVar14 = param_2[1];
      *puVar10 = *param_2;
      puVar10[1] = uVar14;
      lVar6 = param_2[2];
      puVar10[2] = lVar6;
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
      }
      lVar8 = lVar8 + uVar3 * 0x28;
      uVar14 = param_2[3];
      *(undefined4 *)(lVar8 + 0x20) = *(undefined4 *)(param_2 + 4);
      *(undefined8 *)(lVar8 + 0x18) = uVar14;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      param_1[9] = param_1[9] + 1;
      return;
    }
  }
  else {
    uVar9 = param_1[1];
    uVar1 = uVar3 + 1;
    if (uVar1 - uVar11 <= uVar9 - uVar11) {
      uVar2 = uVar11 << 3;
      if (4 < uVar11 >> 0x3d) {
        uVar2 = 0xffffffffffffffff;
      }
      if (uVar11 >> 0x3d == 0) {
        uVar2 = (uVar11 << 3) / 5;
      }
      uVar11 = uVar9;
      if (uVar2 <= uVar9) {
        uVar11 = uVar2;
      }
      if (uVar1 <= uVar11) {
        uVar1 = uVar11;
      }
      if (uVar1 <= uVar9) {
        puVar10 = (undefined8 *)(lVar8 + uVar3 * 0x28);
        puVar7 = (undefined8 *)
                 (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,uVar1 * 0x28,8);
        puVar4 = PTR_DAT_02710860;
        puVar15 = (undefined8 *)param_1[8];
        puVar13 = puVar7;
        if (puVar15 != puVar10 && puVar15 != (undefined8 *)0x0) {
          puVar16 = puVar15;
          do {
            uVar14 = *param_1;
            lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
            if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_00c85700;
            *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar14;
            *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
            uVar14 = puVar16[1];
            *puVar13 = *puVar16;
            puVar13[1] = uVar14;
            uVar14 = puVar16[2];
            puVar16[2] = 0;
            puVar13[2] = uVar14;
            uVar14 = puVar16[3];
            *(undefined4 *)(puVar13 + 4) = *(undefined4 *)(puVar16 + 4);
            puVar13[3] = uVar14;
            puVar16 = puVar16 + 5;
            puVar13 = puVar13 + 5;
            *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
          } while (puVar16 != puVar10);
        }
        puVar4 = PTR_DAT_02710860;
        uVar14 = *param_1;
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (0xf < *(ulong *)(lVar8 + 0x80)) {
LAB_00c85700:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar14;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
        uVar14 = param_2[1];
        *puVar13 = *param_2;
        puVar13[1] = uVar14;
        lVar5 = param_2[2];
        puVar13[2] = lVar5;
        if (lVar5 != 0) {
          (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
        }
        uVar14 = param_2[3];
        *(undefined4 *)(puVar13 + 4) = *(undefined4 *)(param_2 + 4);
        puVar13[3] = uVar14;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
        puVar13 = puVar13 + 5;
        if (puVar15 != (undefined8 *)0x0) {
          lVar8 = param_1[9];
          if (puVar15 + lVar8 * 5 != puVar10) {
            do {
              uVar14 = *param_1;
              lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
              if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_00c85700;
              *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar14;
              *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
              uVar14 = puVar10[1];
              *puVar13 = *puVar10;
              puVar13[1] = uVar14;
              uVar14 = puVar10[2];
              puVar10[2] = 0;
              puVar13[2] = uVar14;
              uVar14 = puVar10[3];
              *(undefined4 *)(puVar13 + 4) = *(undefined4 *)(puVar10 + 4);
              puVar13[3] = uVar14;
              puVar10 = puVar10 + 5;
              puVar13 = puVar13 + 5;
              *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
            } while (puVar10 != puVar15 + lVar8 * 5);
            lVar8 = param_1[9];
          }
          if (lVar8 != 0) {
            plVar12 = puVar15 + 2;
            do {
              lVar8 = lVar8 + -1;
              if (*plVar12 != 0) {
                (**(code **)(*(long *)(*plVar12 + 0x48) + 0x18))();
                *plVar12 = 0;
              }
              plVar12 = plVar12 + 5;
            } while (lVar8 != 0);
          }
          (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_1[8],param_1[10] * 0x28,8);
        }
        param_1[10] = uVar1;
        param_1[8] = puVar7;
        param_1[9] = ((long)puVar13 - (long)puVar7 >> 3) * -0x3333333333333333;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


