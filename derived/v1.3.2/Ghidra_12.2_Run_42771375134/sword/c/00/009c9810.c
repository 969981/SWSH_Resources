/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009c9810; name: FUN_009c9810
 */


int FUN_009c9810(ulong param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((param_2 & 0xff) < 6) {
    uVar1 = param_2;
  }
  return (byte)(&DAT_0214c960)[param_1 & 0xffffffff] + uVar1;
}


