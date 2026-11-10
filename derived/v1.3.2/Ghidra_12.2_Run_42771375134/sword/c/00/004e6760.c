/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e6760; name: FUN_004e6760
 */


undefined8 FUN_004e6760(long *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar6;
  undefined4 *puVar5;
  long lVar7;
  char *pcVar8;
  
  puVar1 = PTR_DAT_02713640;
  uVar3 = *(uint *)(param_1 + 1);
  puVar4 = (undefined4 *)(*param_1 + (ulong)uVar3 * 0x18 + -0x18);
  if ((undefined4 *)*param_2 < puVar4) {
    puVar5 = (undefined4 *)*param_2;
    do {
      puVar6 = puVar5 + 6;
      lVar2 = *(long *)(puVar5 + 2);
      *puVar5 = *puVar6;
      if (lVar2 != 0) {
        if (puVar5[4] != 0) {
          lVar7 = (ulong)(uint)puVar5[4] * 0x48;
          pcVar8 = (char *)(lVar2 + 0x40);
          do {
            if ((*(long *)(pcVar8 + -8) != 0) && (*pcVar8 != '\0')) {
              FUN_00404870(*(undefined4 *)puVar1);
              *pcVar8 = '\0';
            }
            pcVar8[-8] = '\0';
            pcVar8[-7] = '\0';
            pcVar8[-6] = '\0';
            pcVar8[-5] = '\0';
            pcVar8[-4] = '\0';
            pcVar8[-3] = '\0';
            pcVar8[-2] = '\0';
            pcVar8[-1] = '\0';
            lVar7 = lVar7 + -0x48;
            pcVar8 = pcVar8 + 0x48;
          } while (lVar7 != 0);
          lVar2 = *(long *)(puVar5 + 2);
        }
        puVar5[4] = 0;
        FUN_00404870(*(undefined4 *)puVar1,lVar2);
        *(undefined8 *)(puVar5 + 2) = 0;
        puVar5[5] = 0;
      }
      *(undefined8 *)(puVar5 + 2) = *(undefined8 *)(puVar5 + 8);
      puVar5[4] = puVar5[10];
      puVar5[5] = puVar5[0xb];
      *(undefined8 *)(puVar5 + 8) = 0;
      *(undefined8 *)(puVar5 + 10) = 0;
      puVar5 = puVar6;
    } while (puVar6 < puVar4);
    uVar3 = *(uint *)(param_1 + 1);
  }
  *(uint *)(param_1 + 1) = uVar3 - 1;
  return *param_2;
}


