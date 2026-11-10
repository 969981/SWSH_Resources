/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0075ec30; name: FUN_0075ec30
 */


void FUN_0075ec30(long *param_1)

{
  *(long **)PTR_DAT_02715ff8 = param_1;
  (**(code **)(*param_1 + 0xb0))(param_1,"GlobalHeap");
  *(long **)PTR_DAT_02716000 = param_1;
  return;
}


