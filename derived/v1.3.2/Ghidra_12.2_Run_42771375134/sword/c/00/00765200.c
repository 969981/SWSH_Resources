/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00765200; name: FUN_00765200
 */


undefined8 FUN_00765200(MutexType *param_1,long param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_3 == (long *)0x0) {
    uVar4 = 0x100b;
  }
  else {
    nn::os::LockMutex(param_1);
    nn::os::GetSystemTick();
    uVar3 = nn::os::ConvertToTimeSpan();
    if (*(long *)(param_1 + 0x28) == -1) {
      uVar4 = 0x1000;
    }
    else {
      uVar1 = ((long)uVar3 >> 0x20) * 0xe353f7cf + ((uVar3 & 0xffffffff) * 0xe353f7cf >> 0x20);
      lVar2 = ((long)(((long)uVar3 >> 0x20) * 0x20c49ba5 + ((long)uVar1 >> 0x20) +
                     ((uVar3 & 0xffffffff) * 0x20c49ba5 + (uVar1 & 0xffffffff) >> 0x20)) >> 7) -
              ((long)uVar3 >> 0x3f);
      uVar3 = *(long *)(param_1 + 0x20) + (lVar2 - *(long *)(param_1 + 0x28));
      uVar1 = *(ulong *)(param_1 + 0x38);
      if ((long)*(ulong *)(param_1 + 0x38) <= (long)uVar3) {
        uVar1 = uVar3;
      }
      uVar4 = 0;
      *param_3 = (lVar2 + param_2) - (uVar1 & ((long)uVar1 >> 0x3f ^ 0xffffffffffffffffU));
    }
    nn::os::UnlockMutex(param_1);
  }
  return uVar4;
}


