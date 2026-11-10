/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008dd340; name: FUN_008dd340
 */


undefined8 FUN_008dd340(short param_1)

{
  long lVar1;
  
  lVar1 = 0;
  while (((&DAT_0214898c)[lVar1] != param_1 && ((&DAT_0214898e)[lVar1] != param_1))) {
    lVar1 = lVar1 + 2;
    if (0x55 < (uint)lVar1) {
      return 0;
    }
  }
  return 1;
}


