/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004b40f0; name: FUN_004b40f0
 */


undefined8 FUN_004b40f0(long *param_1,ulong param_2)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar1 = PTR_DAT_02712a90;
  uVar3 = (ulong)*(uint *)(param_1 + 1);
  if (*(uint *)(param_1 + 1) != 0) {
    puVar5 = (undefined8 *)*param_1;
    if ((param_2 & 1) == 0) {
      do {
        lVar4 = puVar5[1];
        if (*(long *)(lVar4 + 0x10) != 0) {
          *(undefined4 *)(lVar4 + 0x18) = 0;
          FUN_00404870(*(undefined4 *)puVar1);
          *(undefined8 *)(lVar4 + 0x10) = 0;
          *(undefined4 *)(lVar4 + 0x1c) = 0;
        }
        *(undefined8 *)(lVar4 + 8) = 0;
        FUN_00404870(*(undefined4 *)puVar1,lVar4);
        uVar2 = *(uint *)(param_1 + 1);
        if (1 < uVar2) {
          lVar4 = *param_1 + (ulong)uVar2 * 0x10;
          puVar5[1] = *(undefined8 *)(lVar4 + -8);
          *puVar5 = *(undefined8 *)(lVar4 + -0x10);
          uVar2 = *(uint *)(param_1 + 1);
        }
        *(uint *)(param_1 + 1) = uVar2 - 1;
      } while ((undefined8 *)(*param_1 + (ulong)(uVar2 - 1) * 0x10) != puVar5);
    }
    else {
      puVar6 = puVar5;
      do {
        while (lVar4 = puVar6[1], *(long *)(lVar4 + 8) == 0) {
          if (*(long *)(lVar4 + 0x10) != 0) {
            *(undefined4 *)(lVar4 + 0x18) = 0;
            FUN_00404870(*(undefined4 *)puVar1);
            *(undefined8 *)(lVar4 + 0x10) = 0;
            *(undefined4 *)(lVar4 + 0x1c) = 0;
          }
          *(undefined8 *)(lVar4 + 8) = 0;
          FUN_00404870(*(undefined4 *)puVar1,lVar4);
          uVar2 = *(uint *)(param_1 + 1);
          if (1 < uVar2) {
            lVar4 = *param_1 + (ulong)uVar2 * 0x10;
            puVar6[1] = *(undefined8 *)(lVar4 + -8);
            *puVar6 = *(undefined8 *)(lVar4 + -0x10);
            uVar2 = *(uint *)(param_1 + 1);
          }
          puVar5 = (undefined8 *)*param_1;
          uVar2 = uVar2 - 1;
          uVar3 = (ulong)uVar2;
          *(uint *)(param_1 + 1) = uVar2;
          if (puVar5 + (ulong)uVar2 * 2 == puVar6) {
            return 1;
          }
        }
        puVar6 = puVar6 + 2;
      } while (puVar5 + uVar3 * 2 != puVar6);
    }
  }
  return 1;
}


