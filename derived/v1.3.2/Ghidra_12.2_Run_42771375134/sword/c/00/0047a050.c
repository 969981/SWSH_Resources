/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0047a050; name: FUN_0047a050
 */


void FUN_0047a050(long param_1)

{
  if (*(long *)(param_1 + 200) != 0) {
    *(undefined4 *)(param_1 + 0xd0) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0xd4) = 0;
  }
  return;
}


