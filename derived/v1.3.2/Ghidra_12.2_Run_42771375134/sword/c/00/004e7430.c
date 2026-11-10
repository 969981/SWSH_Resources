/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e7430; name: FUN_004e7430
 */


undefined8 FUN_004e7430(long *param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 *puVar8;
  char *pcVar9;
  uint *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  
  puVar4 = PTR_DAT_02713640;
  uVar1 = *(int *)((long)param_1 + 0xc) + param_2;
  lVar5 = FUN_00404690(*(undefined4 *)PTR_DAT_02713640,(ulong)uVar1 * 0x18);
  uVar6 = 0;
  if (lVar5 != 0) {
    lVar7 = *param_1;
    if ((lVar7 != 0) && (lVar7 != lVar5)) {
      uVar3 = *(uint *)(param_1 + 1);
      if (uVar3 != 0) {
        uVar12 = 0;
        do {
          puVar8 = (undefined4 *)(lVar5 + uVar12 * 0x18);
          if (puVar8 != (undefined4 *)0x0) {
            lVar7 = lVar5 + uVar12 * 0x18;
            *(undefined8 *)(lVar7 + 8) = 0;
            *(undefined8 *)(lVar7 + 0x10) = 0;
          }
          lVar13 = *param_1;
          puVar2 = (undefined4 *)(lVar13 + uVar12 * 0x18);
          *puVar8 = *puVar2;
          plVar14 = (long *)(lVar5 + uVar12 * 0x18 + 8);
          lVar7 = *plVar14;
          if (lVar7 == 0) {
            lVar7 = lVar5 + uVar12 * 0x18;
            puVar10 = (uint *)(lVar7 + 0x10);
            puVar8 = (undefined4 *)(lVar7 + 0x14);
          }
          else {
            puVar10 = (uint *)(lVar5 + uVar12 * 0x18 + 0x10);
            if (*puVar10 != 0) {
              lVar11 = (ulong)*puVar10 * 0x48;
              pcVar9 = (char *)(lVar7 + 0x40);
              do {
                if ((*(long *)(pcVar9 + -8) != 0) && (*pcVar9 != '\0')) {
                  FUN_00404870(*(undefined4 *)puVar4);
                  *pcVar9 = '\0';
                }
                pcVar9[-8] = '\0';
                pcVar9[-7] = '\0';
                pcVar9[-6] = '\0';
                pcVar9[-5] = '\0';
                pcVar9[-4] = '\0';
                pcVar9[-3] = '\0';
                pcVar9[-2] = '\0';
                pcVar9[-1] = '\0';
                lVar11 = lVar11 + -0x48;
                pcVar9 = pcVar9 + 0x48;
              } while (lVar11 != 0);
              lVar7 = *plVar14;
            }
            *puVar10 = 0;
            FUN_00404870(*(undefined4 *)puVar4,lVar7);
            *plVar14 = 0;
            puVar8 = (undefined4 *)(lVar5 + uVar12 * 0x18 + 0x14);
            *puVar8 = 0;
          }
          lVar13 = lVar13 + uVar12 * 0x18;
          uVar12 = uVar12 + 1;
          *plVar14 = *(long *)(puVar2 + 2);
          *puVar10 = *(uint *)(lVar13 + 0x10);
          *puVar8 = *(undefined4 *)(lVar13 + 0x14);
          *(long *)(puVar2 + 2) = 0;
          *(undefined8 *)(puVar2 + 4) = 0;
        } while (uVar12 != uVar3);
        lVar7 = *param_1;
      }
      FUN_00404870(*(undefined4 *)puVar4,lVar7);
    }
    uVar6 = 1;
    *param_1 = lVar5;
    *(uint *)((long)param_1 + 0xc) = uVar1;
  }
  return uVar6;
}


