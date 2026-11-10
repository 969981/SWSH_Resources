/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ddb10; name: FUN_008ddb10
 */


undefined8 FUN_008ddb10(short param_1)

{
  short sVar1;
  long lVar2;
  
  lVar2 = 0;
  sVar1 = DAT_02148b84;
  while( true ) {
    if (sVar1 == param_1) {
      return 1;
    }
    if (0x50 < (int)lVar2 + 1U) break;
    if ((&DAT_02148b86)[lVar2] == param_1) {
      return 1;
    }
    lVar2 = lVar2 + 2;
    sVar1 = (&DAT_02148b84)[lVar2];
  }
  return 0;
}


