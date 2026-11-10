/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0076ab50; name: FUN_0076ab50
 */


void FUN_0076ab50(MultiWaitType *param_1)

{
  long lVar1;
  
  nn::os::SignalEvent((EventType *)(param_1 + 0x248));
  nn::os::WaitThread((ThreadType *)(param_1 + 0x88));
  nn::os::DestroyThread((ThreadType *)(param_1 + 0x88));
  nn::os::UnlinkMultiWaitHolder((MultiWaitHolderType *)(param_1 + 0x270));
  nn::os::UnlinkMultiWaitHolder((MultiWaitHolderType *)(param_1 + 0x2b0));
  nn::os::UnlinkMultiWaitHolder((MultiWaitHolderType *)(param_1 + 0x2f0));
  nn::os::UnlinkMultiWaitHolder((MultiWaitHolderType *)(param_1 + 0x330));
  nn::os::UnlinkMultiWaitHolder((MultiWaitHolderType *)(param_1 + 0x370));
  nn::os::UnlinkMultiWaitHolder((MultiWaitHolderType *)(param_1 + 0x3b0));
  nn::os::UnlinkMultiWaitHolder((MultiWaitHolderType *)(param_1 + 0x3f0));
  nn::os::UnlinkMultiWaitHolder((MultiWaitHolderType *)(param_1 + 0x430));
  nn::os::UnlinkMultiWaitHolder((MultiWaitHolderType *)(param_1 + 0x470));
  nn::os::FinalizeMultiWaitHolder((MultiWaitHolderType *)(param_1 + 0x270));
  nn::os::FinalizeMultiWaitHolder((MultiWaitHolderType *)(param_1 + 0x2b0));
  nn::os::FinalizeMultiWaitHolder((MultiWaitHolderType *)(param_1 + 0x2f0));
  nn::os::FinalizeMultiWaitHolder((MultiWaitHolderType *)(param_1 + 0x330));
  nn::os::FinalizeMultiWaitHolder((MultiWaitHolderType *)(param_1 + 0x370));
  nn::os::FinalizeMultiWaitHolder((MultiWaitHolderType *)(param_1 + 0x3b0));
  nn::os::FinalizeMultiWaitHolder((MultiWaitHolderType *)(param_1 + 0x3f0));
  nn::os::FinalizeMultiWaitHolder((MultiWaitHolderType *)(param_1 + 0x430));
  nn::os::FinalizeMultiWaitHolder((MultiWaitHolderType *)(param_1 + 0x470));
  nn::os::FinalizeEvent((EventType *)(param_1 + 0x248));
  nn::os::FinalizeEvent((EventType *)(param_1 + 0x4b0));
  nn::os::FinalizeMultiWait(param_1);
  lVar1 = *(long *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x70) + 0x18))
              (*(long **)(param_1 + 0x70),lVar1,*(undefined8 *)(param_1 + 0x78),
               *(undefined8 *)(param_1 + 0x80));
    lVar1 = *(long *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = 0;
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0076acb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x70) + 0x18))
                (*(long **)(param_1 + 0x70),lVar1,*(undefined8 *)(param_1 + 0x78),
                 *(undefined8 *)(param_1 + 0x80));
      return;
    }
  }
  return;
}


