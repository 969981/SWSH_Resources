/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01526150; name: FUN_01526150
 */


void FUN_01526150(long param_1,int param_2,int *param_3,int *param_4)

{
  long lVar1;
  
  *(char *)(param_1 + (long)param_2 * 0xa68 + (long)*param_3 * 0x18 + 0x72) = (char)*param_4;
  if (*param_4 == 0) {
    lVar1 = param_1 + (long)param_2 * 0xa68 + (long)*param_3 * 0x18;
    *(ushort *)(lVar1 + 0x72) = *(ushort *)(lVar1 + 0x72) & 0xfdff;
    return;
  }
  return;
}


