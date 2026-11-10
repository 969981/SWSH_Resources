/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a58430; name: FUN_00a58430
 */


bool FUN_00a58430(long param_1,undefined4 *param_2)

{
  char cVar1;
  long lVar2;
  
  switch(*(undefined4 *)(param_1 + 0x20)) {
  case 0:
    lVar2 = *(long *)(param_1 + 0x28);
    cVar1 = *(char *)(lVar2 + 0x688);
    break;
  case 1:
  case 2:
  case 3:
    lVar2 = *(long *)(param_1 + 0x30);
    cVar1 = *(char *)(lVar2 + 0x688);
    break;
  default:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if ((param_2 != (undefined4 *)0x0) && (cVar1 != '\0')) {
    *param_2 = *(undefined4 *)(lVar2 + 0x684);
  }
  return cVar1 != '\0';
}


