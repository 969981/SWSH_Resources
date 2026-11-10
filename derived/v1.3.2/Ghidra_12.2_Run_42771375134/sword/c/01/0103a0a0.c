/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0103a0a0; name: FUN_0103a0a0
 */


void FUN_0103a0a0(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  if (*param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  FUN_0103bbf0();
  lVar2 = *param_2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(param_1 + 0xba0);
  *(long *)(param_1 + 0xba0) = lVar2;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    lVar2 = *(long *)(param_1 + 0xba0);
  }
  FUN_0103c8d0(lVar2);
  if ((*(char *)(param_1 + 0xba8) == '\0') || (*(int *)(*(long *)(param_1 + 0xba0) + 0x198) != 3)) {
    *(undefined4 *)(param_1 + 0xbac) = 1;
    return;
  }
  FUN_01039d30(param_1);
  return;
}


