/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01371880; name: FUN_01371880
 */


void FUN_01371880(long param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x750);
  if (0x1f < uVar1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  lVar2 = *param_2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    uVar1 = *(ulong *)(param_1 + 0x750);
  }
  *(ulong *)(param_1 + 0x750) = uVar1 + 1;
  param_1 = param_1 + uVar1 * 0x10;
  if (*(long *)(param_1 + 0x550) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x550) + 0x48) + 0x18))();
    *(long *)(param_1 + 0x550) = 0;
  }
  *(long *)(param_1 + 0x550) = lVar2;
  *(undefined1 *)(param_1 + 0x558) = 0;
  return;
}


