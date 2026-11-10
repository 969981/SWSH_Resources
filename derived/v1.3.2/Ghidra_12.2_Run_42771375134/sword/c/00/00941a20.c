/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00941a20; name: FUN_00941a20
 */


undefined8 FUN_00941a20(undefined8 *param_1,undefined4 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_008f8a90(*param_1);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  FUN_008f9d40(*param_1,param_2);
  return 1;
}


