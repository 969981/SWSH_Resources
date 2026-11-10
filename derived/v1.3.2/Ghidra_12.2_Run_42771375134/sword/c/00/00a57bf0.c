/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a57bf0; name: FUN_00a57bf0
 */


void FUN_00a57bf0(long param_1)

{
  char cVar1;
  undefined8 *puVar2;
  long lVar3;
  
  switch(*(undefined4 *)(param_1 + 0x20)) {
  case 0:
    lVar3 = *(long *)(param_1 + 0x28);
    cVar1 = *(char *)(lVar3 + 0x689);
    break;
  case 1:
  case 2:
  case 3:
    lVar3 = *(long *)(param_1 + 0x30);
    cVar1 = *(char *)(lVar3 + 0x689);
    break;
  default:
    goto switchD_00a57c18_default;
  }
  if ((cVar1 == '\0') || (*(int *)(lVar3 + 0x5cc) != 1)) {
    FUN_00a5a6f0(lVar3);
    return;
  }
  switch(*(undefined4 *)(param_1 + 0x20)) {
  case 0:
    puVar2 = (undefined8 *)(param_1 + 0x28);
    break;
  case 1:
  case 2:
  case 3:
    puVar2 = (undefined8 *)(param_1 + 0x30);
    break;
  default:
switchD_00a57c18_default:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  FUN_00a5a6a0(*puVar2);
  FUN_00a5a6f0(lVar3);
  return;
}


