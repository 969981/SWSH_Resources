/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00768a90; name: FUN_00768a90
 */


undefined4 FUN_00768a90(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  void *pvVar1;
  undefined4 uVar2;
  long lVar3;
  void *__src;
  size_t __n;
  void *__dest;
  
  *(undefined1 *)((long)param_1 + 0x8c) = 1;
  __src = (void *)param_1[4];
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  *param_1 = param_3;
  param_1[3] = 0;
  param_1[0xe] = param_2;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if ((ulong)((param_1[6] - (long)__src >> 3) * -0x5555555555555555) < 0x40) {
    __n = param_1[5] - (long)__src;
    pvVar1 = operator_new(0x600);
    lVar3 = SUB168(SEXT816((long)__n) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
    __dest = (void *)((long)pvVar1 + __n + ((lVar3 >> 2) - (lVar3 >> 0x3f)) * 0x18);
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    param_1[4] = __dest;
    param_1[5] = (long)pvVar1 + __n;
    param_1[6] = (long)pvVar1 + 0x600;
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  nn::os::InitializeMutex((MutexType *)(param_1 + 7),false,0);
  uVar2 = 0x1002;
  if (param_1[2] != 0) {
    uVar2 = 0x1000;
  }
  return uVar2;
}


