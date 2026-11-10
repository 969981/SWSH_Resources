/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013551a0; name: FUN_013551a0
 */


void FUN_013551a0(long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  FUN_01346e80();
  uVar2 = FUN_012ea9b0();
  uVar3 = FUN_01346e80(param_1);
  if ((uVar2 & 1) != 0) {
    FUN_012e5a10(DAT_01d4c708,uVar3,2,0);
    uVar3 = FUN_01346f80(param_1);
    FUN_0131e480(uVar3,9);
    return;
  }
  uVar1 = FUN_012ea950();
  switch(uVar1) {
  case 0:
  case 1:
    uVar3 = FUN_01346f80(param_1);
    FUN_0131e480(uVar3,0);
    return;
  case 2:
    uVar3 = FUN_01346f80(param_1);
    uVar4 = 6;
    break;
  case 3:
  case 4:
    uVar3 = FUN_01346f80(param_1);
    uVar4 = 7;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  FUN_0131e480(uVar3,uVar4);
  *(undefined4 *)(param_1 + 0xc4) = 0x3f800000;
  return;
}


