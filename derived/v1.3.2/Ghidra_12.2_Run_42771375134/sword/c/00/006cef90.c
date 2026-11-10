/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006cef90; name: FUN_006cef90
 */


void FUN_006cef90(undefined8 param_1)

{
  if (0x3ff < DAT_029ef628) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 *)(&DAT_029ed628 + (long)(int)DAT_029ef628 * 8) = param_1;
  DAT_029ef628 = DAT_029ef628 + 1;
  return;
}


