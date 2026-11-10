/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0150a670; name: FUN_0150a670
 */


undefined8 FUN_0150a670(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0150a730();
  if (((((uVar1 & 1) == 0) && (uVar1 = FUN_0150a730(param_1,param_2,param_3,1), (uVar1 & 1) == 0))
      && (uVar1 = FUN_0150a730(param_1,param_2,param_3,2), (uVar1 & 1) == 0)) &&
     ((uVar1 = FUN_0150a730(param_1,param_2,param_3,3), (uVar1 & 1) == 0 &&
      (uVar1 = FUN_0150a730(param_1,param_2,param_3,4), (uVar1 & 1) == 0)))) {
    uVar2 = FUN_0150a730(param_1,param_2,param_3,5);
    return uVar2;
  }
  return 1;
}


