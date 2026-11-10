/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014fba10; name: FUN_014fba10
 */


void FUN_014fba10(long param_1,void *param_2,ulong param_3)

{
  time_t tVar1;
  tm tStack_58;
  
  memcpy((void *)(param_1 + 0x60),param_2,0x1c4);
  if ((param_3 & 1) != 0) {
    FUN_0102ad30(&tStack_58);
    tVar1 = mktime(&tStack_58);
    *(time_t *)(param_1 + 0x208) = tVar1;
  }
  return;
}


