/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a57f50; name: FUN_00a57f50
 */


byte FUN_00a57f50(long param_1)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  long *plVar4;
  long lVar5;
  
  switch(*(undefined4 *)(param_1 + 0x20)) {
  case 0:
    plVar4 = (long *)(param_1 + 0x28);
    break;
  case 1:
  case 2:
  case 3:
    plVar4 = (long *)(param_1 + 0x30);
    break;
  default:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  lVar5 = *plVar4;
  iVar1 = *(int *)(lVar5 + 0x5cc);
  bVar2 = FUN_010368c0(lVar5,2);
  bVar3 = FUN_010368c0(lVar5,3);
  return iVar1 == 1 & (bVar2 ^ 1) & (bVar3 ^ 1);
}


