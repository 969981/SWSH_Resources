/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009c9910; name: FUN_009c9910
 */


uint FUN_009c9910(uint param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 & 0xff;
  if (param_1 < 6) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    if (param_1 < 0x1e) {
      lVar3 = 4;
    }
    lVar1 = 3;
    if (0x17 < param_1) {
      lVar1 = lVar3;
    }
    lVar2 = 1;
    if (0x11 < param_1) {
      lVar2 = lVar1;
    }
    lVar3 = 2;
    if (0xb < param_1) {
      lVar3 = lVar2;
    }
  }
  param_1 = param_1 - (byte)(&DAT_0214c960)[lVar3];
  if (5 < param_1) {
    param_1 = 0;
  }
  return param_1;
}


