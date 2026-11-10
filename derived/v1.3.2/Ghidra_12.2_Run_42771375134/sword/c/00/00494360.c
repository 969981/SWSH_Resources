/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00494360; name: FUN_00494360
 */


undefined8 FUN_00494360(long param_1)

{
  uint uVar1;
  void *__s;
  ulong __n;
  
  uVar1 = *(ushort *)(param_1 + 0x12) + 7 >> 3;
  __n = (ulong)(uVar1 << 1);
  __s = (void *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,__n);
  *(void **)(param_1 + 0x28) = __s;
  if (__s != (void *)0x0) {
    *(ulong *)(param_1 + 0x30) = (long)__s + (ulong)uVar1;
                    /* WARNING: Subroutine does not return */
    memset(__s,0,__n);
  }
  return 2;
}


