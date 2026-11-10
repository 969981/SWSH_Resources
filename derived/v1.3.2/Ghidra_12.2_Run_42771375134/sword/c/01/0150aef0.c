/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0150aef0; name: FUN_0150aef0
 */


undefined8 FUN_0150aef0(long param_1,undefined4 param_2,undefined4 param_3)

{
  ulong uVar1;
  
  uVar1 = FUN_0150a730();
  if (((((uVar1 & 1) == 0) || ((*(byte *)(param_1 + 0x56c) & 1) == 0)) &&
      ((uVar1 = FUN_0150a730(param_1,param_2,param_3,1), (uVar1 & 1) == 0 ||
       ((*(byte *)(param_1 + 0x56c) >> 1 & 1) == 0)))) &&
     ((((uVar1 = FUN_0150a730(param_1,param_2,param_3,2), (uVar1 & 1) == 0 ||
        ((*(byte *)(param_1 + 0x56c) >> 2 & 1) == 0)) &&
       ((uVar1 = FUN_0150a730(param_1,param_2,param_3,3), (uVar1 & 1) == 0 ||
        ((*(byte *)(param_1 + 0x56c) >> 3 & 1) == 0)))) &&
      (((uVar1 = FUN_0150a730(param_1,param_2,param_3,4), (uVar1 & 1) == 0 ||
        ((*(byte *)(param_1 + 0x56c) >> 4 & 1) == 0)) &&
       ((uVar1 = FUN_0150a730(param_1,param_2,param_3,5), (uVar1 & 1) == 0 ||
        ((*(byte *)(param_1 + 0x56c) >> 5 & 1) == 0)))))))) {
    return 0;
  }
  return 1;
}


