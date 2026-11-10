/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0102b620; name: FUN_0102b620
 */


undefined4 FUN_0102b620(void)

{
  undefined1 auStack_48 [8];
  uint local_40;
  
  FUN_0102abe0(auStack_48);
  if (local_40 < 0x18) {
    return *(undefined4 *)(PTR_DAT_02723848 + (long)(int)local_40 * 4);
  }
  return 0;
}


