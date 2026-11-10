/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a0e30; name: FUN_009a0e30
 */


undefined4 FUN_009a0e30(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_009427e0(param_1,*param_3);
  if ((uVar1 & 1) != 0) {
    return 0x27;
  }
  uVar1 = FUN_008e1810(param_2,0xf);
  if (((uVar1 & 1) != 0) && (uVar1 = FUN_00880a00(*param_3,0xc), (uVar1 & 1) != 0)) {
    return 0xd;
  }
  uVar1 = FUN_008e1810(param_2,0x18);
  if (((uVar1 & 1) != 0) && (uVar1 = FUN_00880a00(*param_3,8), (uVar1 & 1) != 0)) {
    return 0x21;
  }
  FUN_00942390(param_1);
  uVar2 = FUN_00931930();
  uVar1 = FUN_00932ae0(uVar2,2);
  if (((uVar1 & 1) != 0) && (uVar1 = FUN_00880a00(*param_3,9), (uVar1 & 1) != 0)) {
    return 0x14;
  }
  uVar1 = FUN_00942800(param_1,*param_3);
  uVar3 = 0x1a;
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  return uVar3;
}


