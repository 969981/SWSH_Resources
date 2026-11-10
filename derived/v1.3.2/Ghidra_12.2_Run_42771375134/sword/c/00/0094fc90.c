/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0094fc90; name: FUN_0094fc90
 */


void FUN_0094fc90(long param_1,undefined4 param_2)

{
  uint uVar1;
  
  if (*(char *)(param_1 + 0x18) != '\0') {
    uVar1 = *(uint *)(param_1 + 0x14);
    if (uVar1 < 5) {
      *(uint *)(param_1 + 0x14) = uVar1 + 1;
      *(undefined4 *)(param_1 + (ulong)uVar1 * 4) = param_2;
    }
  }
  return;
}


