/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00173e70; name: FUN_00173e70
 */


void FUN_00173e70(undefined8 *param_1)

{
  if (((-1 < (int)*(uint *)((long)param_1 + 0x14)) &&
      ((*(uint *)((long)param_1 + 0x14) & 0x7fffffff) != 0)) && (param_1[1] != 0)) {
                    /* try { // try from 00173e9c to 00173e9f has its CatchHandler @ 00173ea8 */
    (**(code **)(*(long *)*param_1 + 0x18))();
  }
  return;
}


