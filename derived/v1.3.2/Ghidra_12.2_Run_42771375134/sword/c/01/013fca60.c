/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013fca60; name: FUN_013fca60
 */


void FUN_013fca60(long param_1,int param_2)

{
  if (param_2 == 3) {
    FUN_00ffcf80(param_1 + 0x100,"anime_to_kinomi_single");
    return;
  }
  FUN_00ffcf80(param_1 + 0x100,"anime_to_food");
  return;
}


