/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001d9a10; name: FUN_001d9a10
 */


void FUN_001d9a10(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x90) != 0) {
    uVar1 = 0;
    do {
      FUN_001dc0e0(*(undefined8 *)(*(long *)(param_1 + 0x88) + uVar1 * 8),param_2,param_3);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x90));
  }
  return;
}


