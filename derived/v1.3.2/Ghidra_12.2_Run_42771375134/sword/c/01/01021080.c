/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01021080; name: FUN_01021080
 */


void FUN_01021080(long *param_1)

{
  code *pcVar1;
  undefined4 local_14;
  
  *param_1 = (long)(PTR_DAT_02723770 + 0x10);
  nn::os::DestroySystemEvent((SystemEventType *)(param_1 + 0x12));
  nn::os::DestroySystemEvent((SystemEventType *)(param_1 + 0x18));
  nn::os::DestroySystemEvent((SystemEventType *)(param_1 + 0x1e));
  if ((code *)param_1[2] != (code *)0x0) {
    local_14 = 0;
    (*(code *)param_1[2])(param_1 + 6,&local_14,PTR_No2_02723778);
  }
  if ((char)param_1[0x23] != '\0') {
    nn::os::DestroySystemEvent((SystemEventType *)(param_1 + 0x1e));
  }
  if ((char)param_1[0x1d] != '\0') {
    nn::os::DestroySystemEvent((SystemEventType *)(param_1 + 0x18));
  }
  if ((char)param_1[0x17] != '\0') {
    nn::os::DestroySystemEvent((SystemEventType *)(param_1 + 0x12));
  }
  *param_1 = (long)(PTR_DAT_02723748 + 0x10);
  pcVar1 = (code *)param_1[3];
  if (pcVar1 != (code *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    (*pcVar1)(param_1 + 6);
  }
  return;
}


