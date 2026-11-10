/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0040d3b0; name: FUN_0040d3b0
 */


void FUN_0040d3b0(float param_1,long *param_2,uint param_3)

{
  switch(param_3) {
  case 0:
                    /* WARNING: Could not recover jumptable at 0x0040d3f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0xf8))(param_1 + 1.0,param_2,(long)param_2 + (ulong)param_3);
    return;
  case 1:
    *(float *)(param_2 + 0x21) = param_1;
    *(float *)((long)param_2 + 0x84) = *(float *)((long)param_2 + 0x104) + param_1;
    return;
  case 2:
    *(float *)(param_2 + 0x22) = param_1;
    *(float *)(param_2 + 0x11) = *(float *)((long)param_2 + 0x10c) + param_1;
    break;
  case 3:
  case 4:
                    /* WARNING: Could not recover jumptable at 0x0040d3dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0xf8))(param_2,(long)param_2 + (ulong)param_3);
    return;
  }
  return;
}


