/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bce710; name: FUN_00bce710
 */


uint FUN_00bce710(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_00bccb30();
  uVar1 = 0;
  if (lVar2 != 0) {
    uVar3 = FUN_00878810(lVar2,param_5);
    uVar1 = FUN_00bce510(uVar3,lVar2,param_5);
    FUN_00bce610(param_1,param_2,param_3,param_4);
    uVar1 = uVar1 & 1;
  }
  return uVar1;
}


