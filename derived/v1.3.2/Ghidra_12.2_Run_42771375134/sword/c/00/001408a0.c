/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001408a0; name: FUN_001408a0
 */


void FUN_001408a0(uint param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined4 *puVar2;
  
  if (param_1 != 0) {
    uVar1 = (ulong)param_1;
    puVar2 = (undefined4 *)(param_2 + 4);
    do {
      FUN_001402e0(param_3,puVar2[-1],*puVar2);
      puVar2 = puVar2 + 2;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}


