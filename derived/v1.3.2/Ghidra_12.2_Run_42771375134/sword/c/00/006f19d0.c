/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006f19d0; name: FUN_006f19d0
 */


void FUN_006f19d0(long param_1,undefined8 param_2)

{
  FUN_019a2c40(param_2,param_1 + 0xe0);
  if (*(char *)(param_1 + 0x8a1) == '\0') {
    *(undefined1 *)(param_1 + 0x8a1) = 1;
    return;
  }
  FUN_019a5540(param_1 + (long)*(int *)PTR_DAT_02715500 * 0x58 + 2000,1000000000);
  return;
}


