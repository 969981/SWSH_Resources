/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0046e350; name: FUN_0046e350
 */


bool FUN_0046e350(long param_1,code *param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  if (((*(char *)(param_1 + 0x10) != '\0') &&
      (uVar3 = (*param_2)(param_1 + 8,param_3,param_5), (uVar3 & 1) != 0)) &&
     (*(char *)(param_1 + 0x10) != '\0')) {
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  puVar2 = PTR_DAT_02712a90;
  uVar4 = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    puVar7 = *(undefined8 **)(param_1 + 0x18);
    do {
      *param_4 = puVar7[5];
      uVar3 = FUN_0046e530(puVar7,param_2,param_3,param_4 + 1,param_5);
      if ((uVar3 & 1) == 0) {
        uVar4 = *(uint *)(param_1 + 0x20);
        puVar7 = puVar7 + 6;
      }
      else {
        FUN_0046e730(puVar7);
        puVar8 = (undefined8 *)
                 (*(long *)(param_1 + 0x18) + (ulong)*(uint *)(param_1 + 0x20) * 0x30 + -0x30);
        puVar1 = puVar7;
        while (puVar1 < puVar8) {
          puVar1[5] = puVar1[0xb];
          puVar5 = (undefined8 *)puVar1[3];
          puVar1[1] = puVar1[7];
          *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(puVar1 + 8);
          if (puVar5 != (undefined8 *)0x0) {
            if (*(uint *)(puVar1 + 4) != 0) {
              lVar6 = (ulong)*(uint *)(puVar1 + 4) * 0x30;
              do {
                (**(code **)*puVar5)(puVar5);
                lVar6 = lVar6 + -0x30;
                puVar5 = puVar5 + 6;
              } while (lVar6 != 0);
              puVar5 = (undefined8 *)puVar1[3];
            }
            *(undefined4 *)(puVar1 + 4) = 0;
            FUN_00404870(*(undefined4 *)puVar2,puVar5);
            puVar1[3] = 0;
            *(undefined4 *)((long)puVar1 + 0x24) = 0;
          }
          puVar1[3] = puVar1[9];
          *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(puVar1 + 10);
          *(undefined4 *)((long)puVar1 + 0x24) = *(undefined4 *)((long)puVar1 + 0x54);
          puVar1[9] = 0;
          puVar1[10] = 0;
          puVar1 = puVar1 + 6;
        }
        (**(code **)*puVar8)(puVar8);
        uVar4 = *(int *)(param_1 + 0x20) - 1;
        *(uint *)(param_1 + 0x20) = uVar4;
      }
    } while ((undefined8 *)(*(long *)(param_1 + 0x18) + (ulong)uVar4 * 0x30) != puVar7);
  }
  return *(char *)(param_1 + 0x10) == '\0' && uVar4 == 0;
}


