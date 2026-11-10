/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00414850; name: FUN_00414850
 */


undefined8 FUN_00414850(long param_1,undefined4 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = FUN_004b3780(param_1 + 0x18);
  if ((uVar1 & 1) != 0) {
    return 1;
  }
  if ((*(long *)(param_1 + 0x80) == 0) ||
     (uVar1 = FUN_004567d0(*(long *)(param_1 + 0x80),param_2,param_3), (uVar1 & 1) == 0)) {
    return 0;
  }
  return 1;
}


