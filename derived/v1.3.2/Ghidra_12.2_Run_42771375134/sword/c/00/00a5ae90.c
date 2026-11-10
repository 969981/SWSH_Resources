/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a5ae90; name: FUN_00a5ae90
 */


void FUN_00a5ae90(long param_1,uint param_2)

{
  if (param_2 != 2) {
    param_2 = (uint)(param_2 == 1);
  }
  FUN_00ffd510((float)(int)param_2,param_1 + 0x100,&DAT_02155210);
  return;
}


