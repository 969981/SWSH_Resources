/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a580d0; name: FUN_00a580d0
 */


bool FUN_00a580d0(long param_1,undefined4 *param_2)

{
  char cVar1;
  long *plVar2;
  
  switch(*(undefined4 *)(param_1 + 0x20)) {
  case 0:
    cVar1 = *(char *)(*(long *)(param_1 + 0x28) + 0x688);
    break;
  case 1:
  case 2:
  case 3:
    cVar1 = *(char *)(*(long *)(param_1 + 0x30) + 0x688);
    break;
  default:
    goto switchD_00a580f4_default;
  }
  if (param_2 == (undefined4 *)0x0) {
    return cVar1 != '\0';
  }
  switch(*(undefined4 *)(param_1 + 0x20)) {
  case 0:
    plVar2 = (long *)(param_1 + 0x28);
    break;
  case 1:
  case 2:
  case 3:
    plVar2 = (long *)(param_1 + 0x30);
    break;
  default:
switchD_00a580f4_default:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  *param_2 = *(undefined4 *)(*plVar2 + 0x680);
  return cVar1 != '\0';
}


