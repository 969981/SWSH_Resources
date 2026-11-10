/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 015367f0; name: FUN_015367f0
 */


uint FUN_015367f0(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (param_2 & 0xffff) * 7 + param_3;
  if (param_1 != 0x365) {
    uVar1 = param_2 & 0xffff;
  }
  uVar2 = 0;
  if (uVar1 < 0x3f) {
    uVar2 = uVar1;
  }
  return uVar2;
}


