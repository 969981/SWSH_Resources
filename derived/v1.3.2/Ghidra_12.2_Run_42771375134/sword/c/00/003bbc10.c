/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003bbc10; name: FUN_003bbc10
 */


void FUN_003bbc10(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  
  if (*(int *)(param_2 + 0x30) != 0) {
    uVar1 = 0;
    do {
      FUN_003bf5e0(param_1,*(undefined8 *)(*(long *)(param_2 + 0x28) + uVar1 * 8),param_3,param_4);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_2 + 0x30));
  }
  return;
}


