/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00100c70; name: operator.new
 */


/* operator new(unsigned long) */

void * operator_new(ulong param_1)

{
  ulong uVar1;
  long *plVar2;
  void *pvVar3;
  
  uVar1 = FUN_0075ede0();
  if ((uVar1 & 1) != 0) {
    nn::diag::detail::OnAssertionFailure(2,&DAT_01d38550,&DAT_01d38550,&DAT_01d38550,0);
  }
  plVar2 = (long *)FUN_0075ecb0();
  pvVar3 = (void *)(**(code **)(*plVar2 + 0x10))(plVar2,param_1,8);
  FUN_0075ef10();
  return pvVar3;
}


