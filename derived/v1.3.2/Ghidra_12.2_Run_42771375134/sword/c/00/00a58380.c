/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a58380; name: FUN_00a58380
 */


bool FUN_00a58380(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  switch(*(undefined4 *)(param_1 + 0x20)) {
  case 0:
    lVar3 = *(long *)(param_1 + 0x28);
    lVar1 = *(long *)(param_1 + 0x38);
    break;
  case 1:
  case 2:
  case 3:
    lVar3 = *(long *)(param_1 + 0x30);
    lVar1 = *(long *)(param_1 + 0x38);
    break;
  default:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (lVar1 != 0) {
    uVar2 = FUN_0090db80(lVar1,*(undefined4 *)(lVar3 + 0x650));
    if ((uVar2 & 1) == 0) {
      return true;
    }
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  return *(int *)(lVar3 + 0x5cc) == 1;
}


