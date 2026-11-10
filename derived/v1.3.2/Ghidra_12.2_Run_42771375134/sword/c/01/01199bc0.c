/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01199bc0; name: FUN_01199bc0
 */


void FUN_01199bc0(long param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(byte *)(param_1 + 0x100);
  if (bVar1 == 0) {
    FUN_007b5850(0);
    return;
  }
  uVar2 = 0;
  if (bVar1 != 0) {
    uVar2 = (param_2 & 0xff) / (uint)bVar1;
  }
  FUN_007b5850(*(undefined8 *)(param_1 + (ulong)((param_2 & 0xff) - uVar2 * bVar1) * 8 + 0xc0));
  return;
}


