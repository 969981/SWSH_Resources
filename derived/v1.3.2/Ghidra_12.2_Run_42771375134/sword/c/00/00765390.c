/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00765390; name: FUN_00765390
 */


void FUN_00765390(long param_1)

{
  void *pvVar1;
  long lVar2;
  
  nn::os::SendMessageQueue((MessageQueueType *)(param_1 + 0x260),2);
  nn::os::WaitThread((ThreadType *)(param_1 + 0x40));
  nn::os::DestroyThread((ThreadType *)(param_1 + 0x40));
  nn::os::FinalizeMessageQueue((MessageQueueType *)(param_1 + 0x260));
  lVar2 = *(long *)(param_1 + 0x240);
  *(undefined8 *)(param_1 + 0x240) = 0;
  if (lVar2 != 0) {
    (**(code **)(**(long **)(param_1 + 0x248) + 0x18))
              (*(long **)(param_1 + 0x248),lVar2,*(undefined8 *)(param_1 + 0x250),
               *(undefined8 *)(param_1 + 600));
  }
  lVar2 = *(long *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (lVar2 != 0) {
    (**(code **)(**(long **)(param_1 + 0x28) + 0x18))
              (*(long **)(param_1 + 0x28),lVar2,*(undefined8 *)(param_1 + 0x30),
               *(undefined8 *)(param_1 + 0x38));
  }
  lVar2 = *(long *)(param_1 + 0x240);
  *(undefined8 *)(param_1 + 0x240) = 0;
  if (lVar2 != 0) {
    (**(code **)(**(long **)(param_1 + 0x248) + 0x18))
              (*(long **)(param_1 + 0x248),lVar2,*(undefined8 *)(param_1 + 0x250),
               *(undefined8 *)(param_1 + 600));
  }
  pvVar1 = *(void **)(param_1 + 0x200);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x208) = pvVar1;
    operator_delete(pvVar1);
  }
  lVar2 = *(long *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00765470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x28) + 0x18))
            (*(long **)(param_1 + 0x28),lVar2,*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38));
  return;
}


