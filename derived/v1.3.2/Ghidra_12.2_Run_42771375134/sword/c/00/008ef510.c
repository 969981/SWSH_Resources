/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ef510; name: FUN_008ef510
 */


uint FUN_008ef510(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((param_2 & 0xff) != 4) {
    uVar1 = param_2;
  }
  if (param_1 != 2) {
    uVar1 = param_2 >> 1 & 0x7f;
  }
  return uVar1;
}


