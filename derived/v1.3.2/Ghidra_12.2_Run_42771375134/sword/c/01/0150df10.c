/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0150df10; name: FUN_0150df10
 */


void FUN_0150df10(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  
  cVar3 = FUN_008d3750();
  if (cVar3 != '\x01') {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x60) & 0xffffff0f;
  uVar2 = uVar1 | 0x10;
  if ((param_2 & 1) == 0) {
    uVar2 = uVar1;
  }
  *(uint *)(param_1 + 0x60) = uVar2;
  FUN_014bfd10(uVar2 >> 4 & 1);
  return;
}


