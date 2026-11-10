/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00646af0; name: FUN_00646af0
 */


void FUN_00646af0(long *param_1)

{
  *param_1 = (long)(PTR_DAT_027149f0 + 0x10);
  if ((long *)param_1[0x15c] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x15c] + 0x18))();
    param_1[0x15c] = 0;
  }
                    /* WARNING: Subroutine does not return */
  memset(param_1 + 0x104,0,0x2c0);
}


