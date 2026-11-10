/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01003b50; name: FUN_01003b50
 */


void FUN_01003b50(long param_1)

{
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_006e1be0();
  }
  if (*(long *)(param_1 + 0x168) != 0) {
    FUN_006e1be0();
  }
  if (*(long *)(param_1 + 0x278) != 0) {
    FUN_006e1be0();
  }
  if (*(long *)(param_1 + 0x388) != 0) {
    FUN_006e1be0();
  }
  if (*(long *)(param_1 + 0x498) == 0) {
    return;
  }
  FUN_006e1be0();
  return;
}


