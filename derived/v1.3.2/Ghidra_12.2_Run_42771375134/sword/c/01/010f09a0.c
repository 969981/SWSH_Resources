/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010f09a0; name: FUN_010f09a0
 */


void FUN_010f09a0(long param_1)

{
  if (*(int *)(param_1 + 0x5e0) != 0) {
    FUN_00ffd010(param_1 + 0x100,&DAT_02164260);
    *(undefined4 *)(param_1 + 0x5e0) = 0;
  }
  return;
}


