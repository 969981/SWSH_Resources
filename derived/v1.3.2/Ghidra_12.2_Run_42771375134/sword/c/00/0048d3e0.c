/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0048d3e0; name: FUN_0048d3e0
 */


void FUN_0048d3e0(undefined8 param_1,long *param_2,int param_3,int param_4)

{
  if (param_3 == 4) {
    if (param_4 == 1) {
      *(uint *)((long)param_2 + 0x26b) = *(uint *)((long)param_2 + 0x26b) & 0xfffffeff | 0x800;
    }
  }
  else if (param_3 == 3) {
    *(uint *)((long)param_2 + 0x26b) = *(uint *)((long)param_2 + 0x26b) | 0x100;
    (**(code **)(*param_2 + 0x78))(param_2);
                    /* WARNING: Could not recover jumptable at 0x0048d444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x30))(param_1,param_2);
    return;
  }
  return;
}


