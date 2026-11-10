/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0048b0a0; name: FUN_0048b0a0
 */


void FUN_0048b0a0(undefined8 *param_1,undefined4 param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = (ulong)*(uint *)(param_1 + 1);
  if (*(uint *)(param_1 + 1) != 0) {
    puVar2 = (undefined8 *)*param_1;
    puVar3 = puVar2;
    do {
      if (*(int *)*puVar3 == 1) {
        FUN_00489f80((int *)*puVar3,param_2);
        puVar2 = (undefined8 *)*param_1;
        uVar1 = (ulong)*(uint *)(param_1 + 1);
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 != puVar2 + uVar1);
  }
  return;
}


