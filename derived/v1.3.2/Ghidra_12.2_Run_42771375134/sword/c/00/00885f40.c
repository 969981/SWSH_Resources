/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00885f40; name: FUN_00885f40
 */


undefined2 FUN_00885f40(long param_1,ushort param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)param_2;
  if (*(byte *)(param_1 + 0x112) <= param_2) {
    uVar1 = 0;
  }
  return *(undefined2 *)(param_1 + uVar1 * 4 + 0xe);
}


