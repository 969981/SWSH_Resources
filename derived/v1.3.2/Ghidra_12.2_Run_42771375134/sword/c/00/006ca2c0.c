/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006ca2c0; name: FUN_006ca2c0
 */


void FUN_006ca2c0(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  
  lVar8 = param_1[8];
  uVar3 = param_1[9];
  uVar10 = param_1[10];
  if (uVar3 < uVar10) {
    uVar14 = *param_1;
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (*(ulong *)(lVar5 + 0x80) < 0x10) {
      *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar14;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      lVar6 = *param_2;
      *(long *)(lVar8 + uVar3 * 8) = lVar6;
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
      }
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
        plVar11 = (long *)(lVar8 + uVar3 * 8);
        plVar7 = (long *)(**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,uVar1 << 3,8);
        puVar4 = PTR_DAT_02710860;
        plVar15 = (long *)param_1[8];
        plVar13 = plVar7;
        if (plVar15 != plVar11 && plVar15 != (long *)0x0) {
          plVar12 = plVar15;
          plVar17 = plVar7;
          do {
            uVar14 = *param_1;
            lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
            if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_006ca5ec;
            *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar14;
            *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
            lVar5 = *plVar12;
            plVar16 = plVar12 + 1;
            *plVar12 = 0;
            plVar13 = plVar17 + 1;
            *plVar17 = lVar5;
            *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
            plVar12 = plVar16;
            plVar17 = plVar13;
          } while (plVar11 != plVar16);
        }
        puVar4 = PTR_DAT_02710860;
        uVar14 = *param_1;
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (0xf < *(ulong *)(lVar8 + 0x80)) {
LAB_006ca5ec:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar14;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
        lVar5 = *param_2;
        *plVar13 = lVar5;
        if (lVar5 != 0) {
          (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
        }
        plVar13 = plVar13 + 1;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
        if (plVar15 != (long *)0x0) {
          lVar8 = param_1[9];
          plVar12 = plVar13;
          if (plVar15 + lVar8 != plVar11) {
            do {
              uVar14 = *param_1;
              lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
              if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_006ca5ec;
              *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar14;
              *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
              lVar6 = *plVar11;
              plVar17 = plVar11 + 1;
              *plVar11 = 0;
              plVar13 = plVar12 + 1;
              *plVar12 = lVar6;
              *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
              plVar11 = plVar17;
              plVar12 = plVar13;
            } while (plVar15 + lVar8 != plVar17);
            lVar8 = param_1[9];
          }
          while (lVar8 != 0) {
            lVar8 = lVar8 + -1;
            if (*plVar15 != 0) {
              (**(code **)(*(long *)(*plVar15 + 0x48) + 0x18))();
              *plVar15 = 0;
            }
            plVar15 = plVar15 + 1;
          }
          (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_1[8],param_1[10] << 3,8);
        }
        param_1[8] = plVar7;
        param_1[9] = (long)plVar13 - (long)plVar7 >> 3;
        param_1[10] = uVar1;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


