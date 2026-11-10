/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00947510; name: FUN_00947510
 */


void FUN_00947510(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar3 = 0x85;
  switch(param_2) {
  case 1:
    break;
  case 2:
    uVar3 = 0x87;
    break;
  default:
    return;
  case 4:
    uVar3 = 200;
    break;
  case 5:
    uVar3 = 0xca;
    break;
  case 8:
    FUN_00942390(param_1);
    FUN_00931930();
    iVar1 = FUN_00933080();
    if (3 < (iVar1 - 1U & 0xff)) {
      return;
    }
    uVar3 = 0x15b00e300e100df >> (((ulong)(iVar1 - 1U) & 3) << 4);
    break;
  case 9:
    uVar3 = 0x198;
  }
  uVar2 = FUN_009423b0(param_1);
  FUN_00936020(uVar2,uVar3 & 0xffffffff);
  return;
}


