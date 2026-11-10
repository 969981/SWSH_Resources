/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e72c0; name: FUN_004e72c0
 */


long FUN_004e72c0(long *param_1,uint param_2)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  char *pcVar10;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar4 = *(uint *)((long)param_1 + 0xc);
  if (uVar4 <= uVar1) {
    uVar3 = FUN_004e7430(param_1,1);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    uVar4 = *(uint *)((long)param_1 + 0xc);
  }
  if (uVar4 <= uVar1) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 1);
  lVar5 = *param_1;
  *(uint *)(param_1 + 1) = uVar1 + 1;
  puVar7 = (undefined4 *)(lVar5 + (ulong)uVar1 * 0x18);
  if (puVar7 != (undefined4 *)0x0) {
    lVar5 = lVar5 + (ulong)uVar1 * 0x18;
    *(undefined8 *)(lVar5 + 8) = 0;
    *(undefined8 *)(lVar5 + 0x10) = 0;
    lVar5 = *param_1;
  }
  puVar2 = PTR_DAT_02713640;
  puVar6 = (undefined4 *)(lVar5 + (ulong)param_2 * 0x18);
  uVar3 = (ulong)param_2;
  if (puVar6 < puVar7) {
    do {
      puVar8 = puVar7 + -6;
      lVar5 = *(long *)(puVar7 + 2);
      *puVar7 = *puVar8;
      if (lVar5 != 0) {
        if (puVar7[4] != 0) {
          lVar9 = (ulong)(uint)puVar7[4] * 0x48;
          pcVar10 = (char *)(lVar5 + 0x40);
          do {
            if ((*(long *)(pcVar10 + -8) != 0) && (*pcVar10 != '\0')) {
              FUN_00404870(*(undefined4 *)puVar2);
              *pcVar10 = '\0';
            }
            pcVar10[-8] = '\0';
            pcVar10[-7] = '\0';
            pcVar10[-6] = '\0';
            pcVar10[-5] = '\0';
            pcVar10[-4] = '\0';
            pcVar10[-3] = '\0';
            pcVar10[-2] = '\0';
            pcVar10[-1] = '\0';
            lVar9 = lVar9 + -0x48;
            pcVar10 = pcVar10 + 0x48;
          } while (lVar9 != 0);
          lVar5 = *(long *)(puVar7 + 2);
        }
        puVar7[4] = 0;
        FUN_00404870(*(undefined4 *)puVar2,lVar5);
        *(undefined8 *)(puVar7 + 2) = 0;
        puVar7[5] = 0;
      }
      *(undefined8 *)(puVar7 + 2) = *(undefined8 *)(puVar7 + -4);
      puVar7[4] = puVar7[-2];
      puVar7[5] = puVar7[-1];
      *(undefined8 *)(puVar7 + -4) = 0;
      *(undefined8 *)(puVar7 + -2) = 0;
      lVar5 = *param_1;
      puVar6 = (undefined4 *)(lVar5 + uVar3 * 0x18);
      puVar7 = puVar8;
    } while (puVar6 < puVar8);
  }
  if (puVar6 != (undefined4 *)0x0) {
    lVar5 = lVar5 + uVar3 * 0x18;
    *(undefined8 *)(lVar5 + 8) = 0;
    *(undefined8 *)(lVar5 + 0x10) = 0;
    lVar5 = *param_1;
  }
  return lVar5 + uVar3 * 0x18;
}


