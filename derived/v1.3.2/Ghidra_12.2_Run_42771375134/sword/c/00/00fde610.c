/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fde610; name: FUN_00fde610
 */


void FUN_00fde610(long param_1)

{
  long lVar1;
  long local_30;
  long local_28;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    local_28 = *(long *)(lVar1 + 0x58);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
    }
    FUN_00fde860(&local_30,lVar1,&local_28,0,"View_EyeSight");
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x18) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
    *(long *)(param_1 + 0x18) = local_30;
    if (local_30 != 0) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


