/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010f0200; name: FUN_010f0200
 */


void FUN_010f0200(long param_1)

{
  if (*(int *)(param_1 + 0x5e0) != 1) {
    FUN_00ffd010(param_1 + 0x100,&DAT_02164238);
    *(undefined4 *)(param_1 + 0x5e0) = 1;
  }
  return;
}


