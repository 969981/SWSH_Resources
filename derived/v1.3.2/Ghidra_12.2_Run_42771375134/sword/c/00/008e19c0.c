/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e19c0; name: FUN_008e19c0
 */


uint FUN_008e19c0(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)*(undefined8 *)(param_1 + 0x160);
  uVar1 = 0;
  if ((uVar3 & 7) == 2) {
    uVar1 = uVar3 >> 0xe & 0xffff;
  }
  uVar2 = uVar3 >> 0xe & 0xffff;
  if ((uVar3 & 7) != 1) {
    uVar2 = uVar1;
  }
  return uVar2;
}


