/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00474e80; name: FUN_00474e80
 */


void FUN_00474e80(undefined8 param_1,int *param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined8 *puVar6;
  
  puVar3 = PTR_DAT_02712a90;
  piVar5 = (int *)*param_3;
  if (((piVar5 != (int *)0x0) && ((uint)piVar5[4] < (uint)piVar5[5] >> 1)) &&
     (*(undefined8 **)piVar5 != (undefined8 *)0x0)) {
    puVar4 = *(undefined8 **)piVar5;
    do {
      *(undefined4 *)(puVar4 + 2) = 0;
      *(undefined4 *)(puVar4 + 4) = 0;
      piVar1 = param_2 + 4;
      if (*(undefined8 **)(param_2 + 4) != puVar4) {
        piVar1 = piVar5;
      }
      *(undefined8 *)piVar1 = *puVar4;
      if (*(undefined8 **)(param_2 + 2) == puVar4) {
        *(int **)(param_2 + 2) = piVar5;
      }
      *param_2 = *param_2 + -1;
      puVar6 = *(undefined8 **)piVar5;
      uVar2 = *(undefined4 *)puVar3;
      if (puVar4[6] != 0) {
        FUN_004047f0(uVar2);
      }
      *(undefined4 *)((long)puVar4 + 0x2c) = 0;
      puVar4[6] = 0;
      if (puVar4[1] != 0) {
        *(undefined4 *)(puVar4 + 2) = 0;
        FUN_004047f0(*(undefined4 *)puVar3);
        puVar4[1] = 0;
        *(undefined4 *)((long)puVar4 + 0x14) = 0;
      }
      if (puVar4[3] != 0) {
        *(undefined4 *)(puVar4 + 4) = 0;
        FUN_004047f0(*(undefined4 *)puVar3);
        puVar4[3] = 0;
        *(undefined4 *)((long)puVar4 + 0x24) = 0;
      }
      FUN_00404870(uVar2,puVar4);
      puVar4 = puVar6;
    } while (puVar6 != (undefined8 *)0x0);
  }
  return;
}


