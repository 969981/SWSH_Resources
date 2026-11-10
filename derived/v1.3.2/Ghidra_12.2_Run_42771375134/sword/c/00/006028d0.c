/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006028d0; name: FUN_006028d0
 */


undefined8 FUN_006028d0(long *param_1)

{
  uint uVar1;
  void *__s;
  long lVar2;
  size_t __n;
  
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 << 1 == 0) {
    *(undefined1 *)((long)param_1 + 0x14) = 1;
    param_1[8] = 0;
    param_1[9] = (ulong)uVar1 * 0x10;
    lVar2 = (long)*(short *)((long)param_1 + 0x1a) * 0x10;
    param_1[0xd] = param_1[4] + lVar2;
    param_1[0xe] = param_1[5] + (long)*(short *)((long)param_1 + 0x1a);
    param_1[0x11] = lVar2;
    param_1[0x12] = (ulong)uVar1 * 0x10 + lVar2;
    param_1[0xf] = param_1[6] + (long)(short)param_1[3] * 2;
    return 0;
  }
  if ((uVar1 & 0x7fffffff) >> 0x1a != 0) {
    param_1[8] = 0;
    return 10;
  }
  __n = (ulong)(uVar1 << 1) << 4;
  __s = (void *)(**(code **)(*param_1 + 8))(*param_1,__n);
  if (__s != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    memset(__s,0,__n);
  }
  param_1[8] = 0;
  return 0x40;
}


