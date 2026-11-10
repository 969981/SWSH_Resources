/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fc6b70; name: FUN_00fc6b70
 */


undefined8 FUN_00fc6b70(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0x5742865396e549d0) {
    return 0;
  }
  if (lVar1 == 0x674edc539f9f74a6) {
    return 2;
  }
  if (lVar1 == 0x5ea5c3539ab81c81) {
    return 1;
  }
  return 0xffffffff;
}


