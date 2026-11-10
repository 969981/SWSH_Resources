/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0046e530; name: FUN_0046e530
 */


bool FUN_0046e530(long param_1,code *param_2,undefined8 param_3,undefined4 *param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  if (((*(char *)(param_1 + 0x10) != '\0') &&
      (uVar3 = (*param_2)(param_1 + 8,param_3,param_5), (uVar3 & 1) != 0)) &&
     (*(char *)(param_1 + 0x10) != '\0')) {
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  uVar5 = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    puVar7 = *(undefined8 **)(param_1 + 0x18);
    do {
      *param_4 = *(undefined4 *)(puVar7 + 5);
      uVar3 = FUN_0046e870(puVar7,param_2,param_3,param_4 + 2,param_5);
      if ((uVar3 & 1) == 0) {
        uVar5 = *(uint *)(param_1 + 0x20);
        puVar7 = puVar7 + 6;
      }
      else {
        puVar8 = (undefined8 *)puVar7[3];
        if (*(uint *)(puVar7 + 4) != 0) {
          lVar6 = (ulong)*(uint *)(puVar7 + 4) * 0x30;
          do {
            FUN_0046ec50(puVar8);
            puVar8 = puVar8 + 6;
            lVar6 = lVar6 + -0x30;
          } while (lVar6 != 0);
          puVar8 = (undefined8 *)puVar7[3];
        }
        if (puVar8 != (undefined8 *)0x0) {
          if (*(uint *)(puVar7 + 4) != 0) {
            lVar6 = (ulong)*(uint *)(puVar7 + 4) * 0x30;
            do {
              (**(code **)*puVar8)(puVar8);
              lVar6 = lVar6 + -0x30;
              puVar8 = puVar8 + 6;
            } while (lVar6 != 0);
            puVar8 = (undefined8 *)puVar7[3];
          }
          *(undefined4 *)(puVar7 + 4) = 0;
          FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,puVar8);
          puVar7[3] = 0;
          *(undefined4 *)((long)puVar7 + 0x24) = 0;
        }
        puVar4 = (undefined8 *)
                 ((*(long *)(param_1 + 0x18) + (ulong)*(uint *)(param_1 + 0x20) * 0x30) - 0x30);
        for (puVar8 = puVar7; puVar8 < puVar4; puVar8 = puVar8 + 6) {
          *(undefined4 *)(puVar8 + 5) = *(undefined4 *)(puVar8 + 0xb);
          puVar8[1] = puVar8[7];
          *(undefined1 *)(puVar8 + 2) = *(undefined1 *)(puVar8 + 8);
          uVar1 = puVar8[9];
          uVar2 = puVar8[10];
          puVar8[9] = 0;
          puVar8[10] = 0;
          puVar8[3] = uVar1;
          puVar8[4] = uVar2;
        }
        (**(code **)*puVar4)();
        uVar5 = *(int *)(param_1 + 0x20) - 1;
        *(uint *)(param_1 + 0x20) = uVar5;
      }
    } while ((undefined8 *)(*(long *)(param_1 + 0x18) + (ulong)uVar5 * 0x30) != puVar7);
  }
  return *(char *)(param_1 + 0x10) == '\0' && uVar5 == 0;
}


