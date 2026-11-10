/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ec050; name: FUN_008ec050
 */


uint FUN_008ec050(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_2 * param_1;
  uVar2 = uVar1 / 100;
  if (0x31 < uVar1 % 100) {
    uVar2 = uVar1 / 100 + 1;
  }
  return uVar2;
}


