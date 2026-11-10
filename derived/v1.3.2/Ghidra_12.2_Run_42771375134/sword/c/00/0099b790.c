/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0099b790; name: FUN_0099b790
 */


bool FUN_0099b790(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar1 = FUN_008e12a0(param_1,0x11);
  uVar3 = FUN_008e12a0(param_1,0xf);
  uVar2 = FUN_008e12a0(param_1,0xd);
  return 0x13 < uVar1 && (uint)((uVar3 & 0xffffffff) >> 2) < uVar2;
}


