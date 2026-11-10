/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00864d20; name: FUN_00864d20
 */


void FUN_00864d20(undefined4 param_1,undefined4 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00887a20(DAT_029f5b28,param_1,param_2,DAT_029f5b08);
  if ((uVar1 & 1) == 0) {
    FUN_00886150(DAT_029f5b08,param_1,param_2);
    FUN_00887ad0(DAT_029f5b28,DAT_029f5b08);
    return;
  }
  return;
}


