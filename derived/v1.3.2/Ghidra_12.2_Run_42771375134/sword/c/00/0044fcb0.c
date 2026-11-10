/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0044fcb0; name: FUN_0044fcb0
 */


undefined8 FUN_0044fcb0(long param_1,uint param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = **(long **)(*(long *)(param_1 + 0x10) + 0x38);
  if (param_2 < *(ushort *)(lVar1 + 0x38)) {
    memcpy(param_3,(void *)(*(long *)(lVar1 + 0x20) + (ulong)param_2 * 0x28),0x24);
    return 1;
  }
  return 2;
}


