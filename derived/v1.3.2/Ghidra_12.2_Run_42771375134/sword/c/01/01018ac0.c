/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01018ac0; name: FUN_01018ac0
 */


void FUN_01018ac0(long param_1)

{
  if (((*(char *)(param_1 + 0x180) == '\0') || (*(int *)(param_1 + 0x60) != 1)) &&
     ((*(char *)(param_1 + 0x2b0) == '\0' || (*(int *)(param_1 + 400) != 1)))) {
    return;
  }
  nn::err::ShowUnacceptableAddOnContentVersionError();
  return;
}


