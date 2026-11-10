/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00416290; name: FUN_00416290
 */


void FUN_00416290(long *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  *param_1 = (long)(PTR_DAT_02712b00 + 0x10);
  if ((long *)param_1[7] != (long *)0x0) {
    (**(code **)(*(long *)param_1[7] + 0x10))();
    param_1[7] = 0;
  }
  puVar2 = PTR_DAT_02712a90;
  puVar3 = (undefined8 *)param_1[4];
  uVar4 = *(uint *)(param_1 + 5);
  if (uVar4 != 0) {
    puVar6 = puVar3;
    do {
      puVar5 = (undefined8 *)*puVar6;
      if (puVar5 != (undefined8 *)0x0) {
        uVar1 = *(undefined4 *)puVar2;
        (**(code **)*puVar5)(puVar5);
        FUN_00404870(uVar1,puVar5);
        puVar3 = (undefined8 *)param_1[4];
        uVar4 = *(uint *)(param_1 + 5);
      }
      puVar6 = puVar6 + 1;
    } while (puVar6 != puVar3 + uVar4);
  }
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 5) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    param_1[4] = 0;
    *(undefined4 *)((long)param_1 + 0x2c) = 0;
  }
  return;
}


