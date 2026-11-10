/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d6fba0; name: FUN_00d6fba0
 */


void FUN_00d6fba0(undefined8 *param_1,long *param_2)

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
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  
  lVar7 = param_1[8];
  uVar3 = param_1[9];
  uVar10 = param_1[10];
  if (uVar3 < uVar10) {
    uVar12 = *param_1;
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (*(ulong *)(lVar5 + 0x80) < 0x10) {
      *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar12;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      lVar8 = *param_2;
      plVar13 = (long *)(lVar7 + uVar3 * 0x20);
      *param_2 = 0;
      *plVar13 = lVar8;
      lVar7 = param_2[1];
      lVar8 = param_2[3];
      plVar13[2] = param_2[2];
      plVar13[3] = lVar8;
      plVar13[1] = lVar7;
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
        plVar13 = (long *)(lVar7 + uVar3 * 0x20);
        plVar6 = (long *)(**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,uVar1 << 5,8);
        puVar4 = PTR_DAT_02710860;
        plVar15 = (long *)param_1[8];
        plVar14 = plVar6;
        if (plVar15 != plVar13 && plVar15 != (long *)0x0) {
          plVar16 = plVar15;
          do {
            uVar12 = *param_1;
            lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
            if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_00d6ff1c;
            *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar12;
            *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
            lVar5 = *plVar16;
            *plVar16 = 0;
            *plVar14 = lVar5;
            lVar8 = plVar16[3];
            lVar5 = plVar16[2];
            plVar14[1] = plVar16[1];
            plVar14[2] = lVar5;
            plVar14[3] = lVar8;
            plVar16 = plVar16 + 4;
            plVar14 = plVar14 + 4;
            *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
          } while (plVar16 != plVar13);
        }
        puVar4 = PTR_DAT_02710860;
        uVar12 = *param_1;
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (0xf < *(ulong *)(lVar7 + 0x80)) {
LAB_00d6ff1c:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar12;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
        lVar5 = *param_2;
        *param_2 = 0;
        *plVar14 = lVar5;
        lVar8 = param_2[3];
        lVar5 = param_2[2];
        plVar14[1] = param_2[1];
        plVar14[2] = lVar5;
        plVar14[3] = lVar8;
        plVar14 = plVar14 + 4;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
        if (plVar15 != (long *)0x0) {
          lVar7 = param_1[9];
          if (plVar15 + lVar7 * 4 != plVar13) {
            do {
              uVar12 = *param_1;
              lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
              if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_00d6ff1c;
              *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar12;
              *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
              lVar8 = *plVar13;
              *plVar13 = 0;
              *plVar14 = lVar8;
              lVar11 = plVar13[3];
              lVar8 = plVar13[2];
              plVar14[1] = plVar13[1];
              plVar14[2] = lVar8;
              plVar14[3] = lVar11;
              plVar13 = plVar13 + 4;
              plVar14 = plVar14 + 4;
              *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
            } while (plVar13 != plVar15 + lVar7 * 4);
            lVar7 = param_1[9];
          }
          while (lVar7 != 0) {
            lVar5 = *plVar15;
            lVar7 = lVar7 + -1;
            *plVar15 = 0;
            if (lVar5 != 0) {
              FUN_00d6f2e0(lVar5);
              (**(code **)(*(long *)plVar15[1] + 0x18))
                        ((long *)plVar15[1],lVar5,plVar15[2],plVar15[3]);
            }
            plVar15 = plVar15 + 4;
          }
          (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_1[8],param_1[10] << 5,8);
        }
        param_1[10] = uVar1;
        param_1[8] = plVar6;
        param_1[9] = (long)plVar14 - (long)plVar6 >> 5;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


