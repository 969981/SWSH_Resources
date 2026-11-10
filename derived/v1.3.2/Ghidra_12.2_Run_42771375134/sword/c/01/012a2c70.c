/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012a2c70; name: FUN_012a2c70
 */


void FUN_012a2c70(long param_1)

{
  ulong __n;
  char *__s;
  size_t sVar1;
  void *__dest;
  
  __s = (char *)FUN_007ab2c0(*(undefined8 *)PTR_DAT_02716740);
  sVar1 = strlen(__s);
  __dest = *(void **)(param_1 + 0x68);
  __n = sVar1 + 1;
  if ((int)__n != 0) {
    if ((__dest != (void *)0x0) && (*(int *)(param_1 + 0x70) != 0)) {
      (**(code **)(**(long **)(param_1 + 0x60) + 0x18))();
      *(undefined8 *)(param_1 + 0x68) = 0;
      *(undefined4 *)(param_1 + 0x70) = 0;
    }
    *(int *)(param_1 + 0x70) = (int)__n;
    __dest = (void *)(**(code **)(**(long **)(param_1 + 0x60) + 0x10))
                               (*(long **)(param_1 + 0x60),__n & 0xffffffff,8);
    *(void **)(param_1 + 0x68) = __dest;
  }
  memcpy(__dest,__s,__n);
  FUN_007df3a0(*(undefined8 *)(param_1 + 0x78),"https://v3-lp1.vp.n.srv.nintendo.net/v1/public_key",
               *(undefined8 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70));
  return;
}


