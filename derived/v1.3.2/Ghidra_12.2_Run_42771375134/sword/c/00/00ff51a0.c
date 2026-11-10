/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ff51a0; name: FUN_00ff51a0
 */


undefined8 FUN_00ff51a0(long *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x28))();
  if ((uVar1 & 1) == 0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00ff51d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*param_1 + 0x20))(param_1);
  return uVar2;
}


