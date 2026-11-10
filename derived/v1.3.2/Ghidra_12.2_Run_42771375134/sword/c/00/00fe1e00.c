/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fe1e00; name: FUN_00fe1e00
 */


undefined1 FUN_00fe1e00(long param_1)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  if (*(char *)(param_1 + 9) != '\0') {
    lVar1 = *(long *)(param_1 + 0x10);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    local_28 = *(long *)(lVar1 + 0x58);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
    }
    FUN_00fe29a0(&local_30,lVar1,&local_28,0,"LiveCommViewField");
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x20) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    *(undefined8 *)(param_1 + 0x20) = local_30;
    *(undefined1 *)(param_1 + 9) = 0;
  }
  if ((*(char *)(*(long *)(param_1 + 0x10) + 0xc0) != '\0') && (*(char *)(param_1 + 10) == '\0')) {
    *(undefined1 *)(param_1 + 10) = 1;
    *(undefined1 *)(param_1 + 8) = 1;
  }
  return *(undefined1 *)(param_1 + 8);
}


