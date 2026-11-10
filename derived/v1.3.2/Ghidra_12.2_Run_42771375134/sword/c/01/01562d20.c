/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01562d20; name: FUN_01562d20
 */


void FUN_01562d20(long *param_1,long param_2,long param_3,long param_4)

{
  param_3 = param_3 - (*param_1 - param_4);
  if (0 < param_3) {
    nn::crypto::detail::Sha256Impl::Update(param_1 + 2,param_2 + (*param_1 - param_4));
    *param_1 = *param_1 + param_3;
  }
  return;
}


