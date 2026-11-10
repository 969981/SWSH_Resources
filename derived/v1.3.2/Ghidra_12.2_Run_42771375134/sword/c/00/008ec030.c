/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ec030; name: FUN_008ec030
 */


uint FUN_008ec030(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(param_2 * param_1) >> 0xc;
  if (0x800 < (param_2 * param_1 & 0xfffU)) {
    uVar1 = uVar1 + 1;
  }
  if (uVar1 == 0) {
    uVar1 = 1;
  }
  return uVar1;
}


