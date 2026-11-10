/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a1db0; name: FUN_009a1db0
 */


bool FUN_009a1db0(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if (param_3 == 0xa5) {
    return false;
  }
  FUN_00942390();
  uVar2 = FUN_00931930();
  uVar3 = FUN_00932ae0(uVar2,5);
  if ((uVar3 & 1) != 0) {
    return false;
  }
  uVar3 = FUN_008e1810(param_2,0x13);
  if ((uVar3 & 1) != 0) {
    return false;
  }
  uVar3 = FUN_008e1810(param_2,0x1c);
  if ((uVar3 & 1) == 0) {
    return false;
  }
  uVar3 = FUN_008e0a10(param_2);
  if ((uVar3 & 1) == 0) {
    iVar1 = FUN_008e1c20(param_2);
    return iVar1 != param_3;
  }
  return false;
}


