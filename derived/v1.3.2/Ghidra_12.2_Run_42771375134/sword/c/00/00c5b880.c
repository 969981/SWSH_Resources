/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c5b880; name: FUN_00c5b880
 */


uint FUN_00c5b880(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar1 = FUN_008d42a0(param_1 + 0x118,0);
  uVar2 = FUN_008d42a0(param_1 + 0x128,0);
  uVar3 = FUN_008d42a0(param_1 + 0x138,0);
  uVar4 = FUN_008d42a0(param_1 + 0x148,0);
  uVar5 = FUN_008d42a0(param_1 + 0x158,0);
  uVar6 = FUN_008d42a0(param_1 + 0x168,0);
  uVar7 = FUN_008d42a0(param_1 + 0x178,0);
  uVar8 = FUN_008d42a0(param_1 + 0x188,0);
  return uVar1 & uVar2 & uVar3 & uVar4 & uVar5 & uVar6 & uVar7 & uVar8 & 1;
}


