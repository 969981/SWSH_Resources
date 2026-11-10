/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0039ad60; name: FUN_0039ad60
 */


void FUN_0039ad60(long *param_1,uint param_2,uint param_3)

{
  FUN_003ff570(param_1[0xe]);
  if ((((param_2 & 1) != 0) && ((long *)*param_1 != (long *)0x0)) && ((int)param_1[5] == 1)) {
                    /* try { // try from 0039ada4 to 0039adeb has its CatchHandler @ 0039ae04 */
    (**(code **)(*(long *)*param_1 + 0x80))();
    (**(code **)(*(long *)*param_1 + 0x20))();
  }
  if ((((param_3 & 1) != 0) && ((long *)param_1[6] != (long *)0x0)) && ((int)param_1[0xb] == 1)) {
    (**(code **)(*(long *)param_1[6] + 0x80))();
    (**(code **)(*(long *)param_1[6] + 0x20))();
  }
                    /* try { // try from 0039adf0 to 0039adf3 has its CatchHandler @ 0039ae1c */
  FUN_003ff5a0(param_1[0xe]);
  return;
}


