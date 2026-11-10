/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0042eec0; name: FUN_0042eec0
 */


undefined8 * FUN_0042eec0(void)

{
  int iVar1;
  
  if (((DAT_02737d80 & 1) == 0) && (iVar1 = __cxa_guard_acquire(), iVar1 != 0)) {
    DAT_02737d78 = PTR_DAT_02712d70 + 0x10;
    __cxa_guard_release(&DAT_02737d80);
    return &DAT_02737d78;
  }
  return &DAT_02737d78;
}


