/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009339e0; name: FUN_009339e0
 */


uint FUN_009339e0(long param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)*(byte *)(param_1 + 0x39);
  bVar1 = *(byte *)(param_1 + 0x38);
  if (bVar1 != 0) {
    uVar3 = *(byte *)(param_1 + 0x39) + 1;
    uVar2 = 0;
    if (bVar1 != 0) {
      uVar2 = uVar3 / bVar1;
    }
    uVar3 = uVar3 - uVar2 * bVar1;
  }
  return uVar3;
}


