/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bd3060; name: FUN_00bd3060
 */


void FUN_00bd3060(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    if ((*(uint *)(param_1 + 0x30a0) & 1 << (ulong)((uint)lVar1 & 0x1f)) != 0) {
      FUN_0167b9b0(*(undefined8 *)(param_1 + 0x58),
                   param_1 + (ulong)*(byte *)(param_1 + 0x2d86 + lVar1) * 0x78 + 0x68,param_2 & 1);
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x1e);
  return;
}


