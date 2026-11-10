/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 015261a0; name: FUN_015261a0
 */


void FUN_015261a0(long param_1,int param_2,int *param_3,byte *param_4)

{
  long lVar1;
  
  lVar1 = param_1 + (long)param_2 * 0xa68 + (long)*param_3 * 0x18;
  *(ushort *)(lVar1 + 0x72) = *(ushort *)(lVar1 + 0x72) & 0xfdff | (ushort)*param_4 << 9;
  return;
}


