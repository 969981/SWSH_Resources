/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01211270; name: FUN_01211270
 */


/* WARNING: Removing unreachable block (ram,0x01211344) */

void FUN_01211270(long param_1,void *param_2)

{
  ulong uVar1;
  undefined1 auStack_e0 [176];
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x580));
  memcpy(auStack_e0,param_2,0xb0);
  *(undefined4 *)(param_1 + 0x310) = 3;
  if (*(char *)(param_1 + 0x400) == '\0') {
LAB_01211300:
    memcpy((void *)(param_1 + 0x410),auStack_e0,0xb0);
    *(undefined1 *)(param_1 + 0x400) = 1;
  }
  else {
    uVar1 = FUN_01223930(param_1 + 0x410,auStack_e0);
    if ((uVar1 & 1) != 0) goto LAB_01211328;
    if (*(char *)(param_1 + 0x400) == '\0') goto LAB_01211300;
    memcpy((void *)(param_1 + 0x410),auStack_e0,0xa1);
  }
  FUN_01225e20(param_1 + 0x310);
LAB_01211328:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x580));
  return;
}


