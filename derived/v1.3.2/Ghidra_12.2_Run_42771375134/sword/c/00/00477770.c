/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00477770; name: FUN_00477770
 */


void FUN_00477770(long *param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  
  puVar5 = PTR_DAT_02712a90;
  uVar14 = *(uint *)(param_1 + 1);
  if (uVar14 != 0) {
    uVar4 = 0;
    uVar8 = (uint)*param_2;
    if (uVar14 != 0) {
      uVar4 = uVar8 / uVar14;
    }
    for (lVar13 = *(long *)(*param_1 + (ulong)(uVar8 - uVar4 * uVar14) * 8); lVar13 != 0;
        lVar13 = *(long *)(lVar13 + 0x18)) {
      if (*(long *)(lVar13 + 0x10) == *param_2) {
        lVar9 = param_2[2];
        lVar10 = param_2[1];
        lVar11 = *param_2;
        uVar4 = *(uint *)(param_3 + 1);
        uVar14 = *(uint *)((long)param_3 + 0xc);
        if (uVar14 <= uVar4) {
          uVar14 = uVar14 + 8;
          lVar6 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar14 << 5);
          if (lVar6 == 0) {
            return;
          }
          lVar7 = *param_3;
          if ((lVar7 != 0) && (lVar7 != lVar6)) {
            uVar12 = (ulong)*(uint *)(param_3 + 1);
            if (*(uint *)(param_3 + 1) != 0) {
              lVar7 = 0;
              do {
                puVar1 = (undefined8 *)(lVar6 + lVar7);
                if (puVar1 != (undefined8 *)0x0) {
                  *puVar1 = 0;
                  puVar1[1] = 0;
                  *(undefined8 *)(lVar6 + lVar7 + 0x10) = 1;
                  *(undefined8 *)(lVar6 + lVar7 + 0x18) = 0;
                }
                puVar2 = (undefined8 *)(*param_3 + lVar7);
                lVar7 = lVar7 + 0x20;
                puVar1[3] = puVar2[3];
                puVar1[2] = puVar2[2];
                puVar1[1] = puVar2[1];
                uVar12 = uVar12 - 1;
                *puVar1 = *puVar2;
              } while (uVar12 != 0);
              lVar7 = *param_3;
            }
            FUN_00404870(*(undefined4 *)puVar5,lVar7);
          }
          *param_3 = lVar6;
          *(uint *)((long)param_3 + 0xc) = uVar14;
        }
        if (uVar14 <= uVar4) {
          return;
        }
        uVar14 = *(uint *)(param_3 + 1);
        *(uint *)(param_3 + 1) = uVar14 + 1;
        plVar3 = (long *)(*param_3 + (ulong)uVar14 * 0x20);
        if (plVar3 == (long *)0x0) {
          return;
        }
        lVar6 = *param_3 + (ulong)uVar14 * 0x20;
        *(undefined8 *)(lVar6 + 0x10) = 1;
        *(long *)(lVar6 + 0x18) = lVar13;
        plVar3[2] = lVar9;
        plVar3[1] = lVar10;
        *plVar3 = lVar11;
        return;
      }
    }
  }
  return;
}


