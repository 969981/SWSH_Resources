/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00aa5e40; name: FUN_00aa5e40
 */


void FUN_00aa5e40(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  switch(*(undefined4 *)(param_1 + 0x10)) {
  case 0:
    FUN_00aa5ef0(param_1);
    uVar3 = 1;
    break;
  case 1:
    uVar2 = FUN_00aa6400(param_1);
    if ((uVar2 & 1) == 0) {
      return;
    }
    FUN_00aa6560(param_1);
    uVar3 = 3;
    break;
  case 2:
    iVar1 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = iVar1 + 1;
    if (iVar1 < 0x50) {
      return;
    }
    FUN_00aa6af0(param_1);
    uVar3 = 4;
    break;
  case 3:
    FUN_00aa67a0(param_1);
    FUN_00aa69d0(param_1);
    uVar3 = 2;
    break;
  default:
    goto switchD_00aa5e6c_default;
  }
  *(undefined4 *)(param_1 + 0x10) = uVar3;
switchD_00aa5e6c_default:
  return;
}


