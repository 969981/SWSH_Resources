/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e24b0; name: FUN_008e24b0
 */


undefined1 FUN_008e24b0(long param_1,int param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  
  if (*(byte *)(param_1 + 0x33c) == 0) {
    return 0;
  }
  uVar2 = 0;
  puVar1 = (undefined1 *)(param_1 + 0x2d8);
  do {
    if (*(int *)(puVar1 + -4) == param_2) {
      return *puVar1;
    }
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 0x1c;
  } while (uVar2 < *(byte *)(param_1 + 0x33c));
  return 0;
}


