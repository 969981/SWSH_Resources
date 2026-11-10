/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00100c10; name: aligned_alloc
 */


void aligned_alloc(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  
  uVar1 = FUN_0075ede0();
  if ((uVar1 & 1) != 0) {
    nn::diag::detail::OnAssertionFailure(2,&DAT_01d38550,&DAT_01d38550,&DAT_01d38550,0);
  }
  FUN_0075ef10();
  plVar2 = (long *)FUN_0075ecb0();
                    /* WARNING: Could not recover jumptable at 0x00100c68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x10))(plVar2,param_2,param_1);
  return;
}


