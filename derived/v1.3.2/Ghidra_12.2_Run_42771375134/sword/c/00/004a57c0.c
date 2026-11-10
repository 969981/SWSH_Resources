/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004a57c0; name: FUN_004a57c0
 */


void FUN_004a57c0(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = PTR_DAT_02712dc0;
  puVar2 = (undefined4 *)*param_1;
  puVar4 = puVar2;
  if (*(int *)(param_1 + 1) != 0) {
    do {
      puVar3 = puVar4 + 1;
      FUN_00478ab0(*(undefined8 *)puVar1,*puVar4,param_2);
      puVar2 = (undefined4 *)*param_1;
      puVar4 = puVar3;
    } while (puVar3 != puVar2 + *(uint *)(param_1 + 1));
  }
  if (puVar2 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 1) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,puVar2);
    *param_1 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
  puVar1 = PTR_DAT_02712b50;
  puVar2 = (undefined4 *)param_1[2];
  puVar4 = puVar2;
  if (*(int *)(param_1 + 3) != 0) {
    do {
      puVar3 = puVar4 + 1;
      FUN_0049e320(*(undefined8 *)puVar1,*puVar4,param_2);
      puVar2 = (undefined4 *)param_1[2];
      puVar4 = puVar3;
    } while (puVar3 != puVar2 + *(uint *)(param_1 + 3));
  }
  if (puVar2 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 3) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,puVar2);
    param_1[2] = 0;
    *(undefined4 *)((long)param_1 + 0x1c) = 0;
  }
  return;
}


