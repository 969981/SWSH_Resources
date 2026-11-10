/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cbf620; name: FUN_00cbf620
 */


undefined8 FUN_00cbf620(long param_1,char param_2)

{
  long lVar1;
  
  lVar1 = 0x248;
  if (param_2 != '\0') {
    lVar1 = 0x240;
  }
  return *(undefined8 *)(param_1 + lVar1);
}


