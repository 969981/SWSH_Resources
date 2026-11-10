/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014ca2e0; name: FUN_014ca2e0
 */


undefined2 FUN_014ca2e0(uint param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  
  if (7 < param_2) {
    return 0;
  }
  uVar3 = 0x49;
  if (param_2 != 5) {
    uVar3 = 0x1cb;
  }
  uVar1 = 0;
  if ((param_1 - 0x30 & 0xffff) < 10) {
    uVar1 = uVar3 >> (ulong)((param_1 & 0xffff) - 0x30 & 0x1f) & 1;
  }
  uVar3 = (int)((param_1 & 0xffff) - 0xac00) % 0x1c;
  bVar2 = (uVar3 | 8) != 8;
  if (param_2 != 5) {
    bVar2 = uVar3 != 0;
  }
  if ((param_1 + 0x5400 >> 2 & 0x3fff) < 0xae9) {
    uVar1 = (uint)bVar2;
  }
  return *(undefined2 *)(&UNK_01d4daa0 + (ulong)param_2 * 2 + (ulong)uVar1 * 0x10);
}


