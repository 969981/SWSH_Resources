/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fdd130; name: FUN_00fdd130
 */


undefined8 FUN_00fdd130(long param_1)

{
  long lVar1;
  long local_30;
  long local_28;
  
  if (*(char *)(param_1 + 0x1a) != '\0') {
    lVar1 = *(long *)(param_1 + 8);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    local_28 = *(long *)(lVar1 + 0x58);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
    }
    FUN_00fdd2a0(&local_30,lVar1,&local_28,0,"ItemView");
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
    }
    *(long *)(param_1 + 0x10) = local_30;
    if (local_30 != 0) {
      (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
    }
    *(undefined1 *)(param_1 + 0x1a) = 0;
  }
  if (*(char *)(param_1 + 0x19) != '\0') {
    return 1;
  }
  if (*(char *)(*(long *)(param_1 + 8) + 0xc0) == '\0') {
    return 0;
  }
  *(undefined1 *)(param_1 + 0x19) = 1;
  return 1;
}


