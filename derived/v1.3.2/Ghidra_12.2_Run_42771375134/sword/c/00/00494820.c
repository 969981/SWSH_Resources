/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00494820; name: FUN_00494820
 */


void FUN_00494820(long param_1,uint param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)((param_2 & 0xfff8) >> 3);
  *(byte *)(*(long *)(param_1 + 0x30) + uVar1) =
       (byte)(1 << (ulong)(param_2 & 7)) | *(byte *)(*(long *)(param_1 + 0x30) + uVar1);
  return;
}


