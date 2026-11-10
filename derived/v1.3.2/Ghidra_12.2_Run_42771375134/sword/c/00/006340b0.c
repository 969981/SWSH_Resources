/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006340b0; name: FUN_006340b0
 */


void FUN_006340b0(long *param_1,undefined8 param_2)

{
  *param_1 = (long)(PTR_DAT_027145d0 + 0x10);
  FUN_005bf710(param_1 + 1);
  FUN_006964c0(param_1 + 3,0);
  FUN_00634120(param_1 + 9,param_2,1);
  *(undefined1 *)(param_1 + 0x2e) = 0;
  *(undefined1 *)(param_1 + 0x2d) = 1;
  return;
}


