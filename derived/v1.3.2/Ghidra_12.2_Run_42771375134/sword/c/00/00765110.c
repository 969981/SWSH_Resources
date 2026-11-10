/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00765110; name: FUN_00765110
 */


undefined8 FUN_00765110(MutexType *param_1,ulong param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if ((long)(param_3 | param_2) < 0) {
    uVar5 = 0x1000;
  }
  else {
    nn::os::LockMutex(param_1);
    nn::os::GetSystemTick();
    uVar4 = nn::os::ConvertToTimeSpan();
    uVar1 = ((long)uVar4 >> 0x20) * 0xe353f7cf + ((uVar4 & 0xffffffff) * 0xe353f7cf >> 0x20);
    lVar2 = ((long)(((long)uVar4 >> 0x20) * 0x20c49ba5 + ((long)uVar1 >> 0x20) +
                   ((uVar4 & 0xffffffff) * 0x20c49ba5 + (uVar1 & 0xffffffff) >> 0x20)) >> 7) -
            ((long)uVar4 >> 0x3f);
    lVar3 = (lVar2 - param_3) + param_2;
    if (lVar3 < 0) {
      uVar5 = 0x1000;
    }
    else {
      uVar5 = 0;
      *(long *)(param_1 + 0x20) = lVar3;
      *(long *)(param_1 + 0x28) = lVar2;
      *(undefined8 *)(param_1 + 0x30) = param_4;
    }
    nn::os::UnlockMutex(param_1);
  }
  return uVar5;
}


