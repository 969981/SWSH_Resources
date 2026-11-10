/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009ceb70; name: FUN_009ceb70
 */


size_t FUN_009ceb70(long param_1,ulong param_2,void *param_3)

{
  long lVar1;
  size_t __n;
  
  lVar1 = param_1 + (param_2 & 0xffffffff) * 0x418;
  if (*(char *)(lVar1 + 0x350) == '\x05') {
    return 0;
  }
  param_1 = param_1 + (param_2 & 0xffffffff) * 0x418;
  __n = *(size_t *)(param_1 + 0x760);
  memcpy(param_3,(void *)(param_1 + 0x35c),__n);
  *(undefined1 *)(lVar1 + 0x350) = 5;
  return __n;
}


