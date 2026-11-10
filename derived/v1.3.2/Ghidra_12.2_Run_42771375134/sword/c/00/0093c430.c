/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0093c430; name: FUN_0093c430
 */


undefined8 FUN_0093c430(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = FUN_00931950(*(undefined8 *)(param_1 + 0x10));
  uVar2 = FUN_00935240(uVar1,param_2,param_3,param_4);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  uVar1 = FUN_00931990(*(undefined8 *)(param_1 + 0x10));
  FUN_008dd210(uVar1,param_2,param_3,param_4);
  return 1;
}


