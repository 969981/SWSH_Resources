/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004cd220; name: FUN_004cd220
 */


undefined8 FUN_004cd220(long param_1,uint *param_2)

{
  void *__dest;
  
  if ((*(byte *)(param_1 + 0x82) >> 4 & 1) != 0) {
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 2);
    return 1;
  }
  __dest = (void *)FUN_00404690(*(undefined4 *)PTR_DAT_02712e28,*param_2);
  *(void **)(param_1 + 0x10) = __dest;
  if (__dest == (void *)0x0) {
    return 0x34;
  }
  memcpy(__dest,*(void **)(param_2 + 2),(ulong)*param_2);
  return 1;
}


