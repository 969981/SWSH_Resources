/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f45290; name: FUN_00f45290
 */


void FUN_00f45290(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  
  lVar7 = param_1[8];
  uVar3 = param_1[9];
  uVar10 = param_1[10];
  if (uVar3 < uVar10) {
    uVar11 = *param_1;
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (*(ulong *)(lVar5 + 0x80) < 0x10) {
      *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar11;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      lVar8 = *param_2;
      *param_2 = 0;
      *(long *)(lVar7 + uVar3 * 8) = lVar8;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      param_1[9] = param_1[9] + 1;
      return;
    }
  }
  else {
    uVar9 = param_1[1];
    uVar1 = uVar3 + 1;
    if (uVar1 - uVar10 <= uVar9 - uVar10) {
      uVar2 = uVar10 << 3;
      if (4 < uVar10 >> 0x3d) {
        uVar2 = 0xffffffffffffffff;
      }
      if (uVar10 >> 0x3d == 0) {
        uVar2 = (uVar10 << 3) / 5;
      }
      uVar10 = uVar9;
      if (uVar2 <= uVar9) {
        uVar10 = uVar2;
      }
      if (uVar1 <= uVar10) {
        uVar1 = uVar10;
      }
      if (uVar1 <= uVar9) {
        plVar12 = (long *)(lVar7 + uVar3 * 8);
        plVar6 = (long *)(**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,uVar1 << 3,8);
        puVar4 = PTR_DAT_02710860;
        plVar15 = (long *)param_1[8];
        plVar14 = plVar6;
        if (plVar15 != plVar12 && plVar15 != (long *)0x0) {
          plVar13 = plVar6;
          plVar16 = plVar15;
          do {
            uVar11 = *param_1;
            lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
            if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_00f4559c;
            *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar11;
            *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
            lVar5 = *plVar16;
            plVar17 = plVar16 + 1;
            *plVar16 = 0;
            plVar14 = plVar13 + 1;
            *plVar13 = lVar5;
            *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
            plVar13 = plVar14;
            plVar16 = plVar17;
          } while (plVar12 != plVar17);
        }
        puVar4 = PTR_DAT_02710860;
        uVar11 = *param_1;
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (0xf < *(ulong *)(lVar7 + 0x80)) {
LAB_00f4559c:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar11;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
        lVar5 = *param_2;
        *param_2 = 0;
        *plVar14 = lVar5;
        plVar14 = plVar14 + 1;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
        if (plVar15 != (long *)0x0) {
          lVar7 = param_1[9];
          plVar13 = plVar14;
          if (plVar15 + lVar7 != plVar12) {
            do {
              uVar11 = *param_1;
              lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
              if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_00f4559c;
              *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar11;
              *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
              lVar8 = *plVar12;
              plVar16 = plVar12 + 1;
              *plVar12 = 0;
              plVar14 = plVar13 + 1;
              *plVar13 = lVar8;
              *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
              plVar12 = plVar16;
              plVar13 = plVar14;
            } while (plVar15 + lVar7 != plVar16);
            lVar7 = param_1[9];
          }
          while (lVar7 != 0) {
            lVar7 = lVar7 + -1;
            if (*plVar15 != 0) {
              (**(code **)(*(long *)(*plVar15 + 0x48) + 0x18))();
              *plVar15 = 0;
            }
            plVar15 = plVar15 + 1;
          }
          (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_1[8],param_1[10] << 3,8);
        }
        param_1[8] = plVar6;
        param_1[9] = (long)plVar14 - (long)plVar6 >> 3;
        param_1[10] = uVar1;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


