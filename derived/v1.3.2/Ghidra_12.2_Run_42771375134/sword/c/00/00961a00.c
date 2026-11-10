/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00961a00; name: FUN_00961a00
 */


bool FUN_00961a00(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = FUN_008e12a0(param_1,0xd);
  FUN_008e0b60(param_1);
  uVar2 = FUN_008e5fd0();
  iVar3 = FUN_008e12a0(param_1,0xf);
  return uVar1 <= (iVar3 * (uVar2 & 0xff)) / 100;
}


