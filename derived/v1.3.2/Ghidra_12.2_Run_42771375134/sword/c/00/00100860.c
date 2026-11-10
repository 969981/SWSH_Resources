/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00100860; name: malloc
 */


void * malloc(size_t __size)

{
  ulong uVar1;
  long *plVar2;
  void *pvVar3;
  
  uVar1 = FUN_0075ede0();
  if ((uVar1 & 1) != 0) {
    nn::diag::detail::OnAssertionFailure(2,&DAT_01d38550,&DAT_01d38550,&DAT_01d38550,0);
  }
  FUN_0075ef10();
  plVar2 = (long *)FUN_0075ecb0();
                    /* WARNING: Could not recover jumptable at 0x001008b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar3 = (void *)(**(code **)(*plVar2 + 0x10))(plVar2,__size,8);
  return pvVar3;
}


