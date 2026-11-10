/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c5e3f0; name: FUN_00c5e3f0
 */


uint FUN_00c5e3f0(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = FUN_008d42a0(param_1 + 0x98,0);
  uVar2 = FUN_008d42a0(param_1 + 0xa8,0);
  uVar3 = FUN_008d42a0(param_1 + 0xb8,0);
  uVar4 = FUN_008d42a0(param_1 + 200,0);
  return uVar1 & uVar2 & uVar3 & uVar4 & 1;
}


