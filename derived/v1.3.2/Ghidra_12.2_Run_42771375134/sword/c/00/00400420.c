/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00400420; name: FUN_00400420
 */


void FUN_00400420(undefined8 *param_1)

{
  if ((-1 < (int)*(uint *)((long)param_1 + 0xc)) &&
     ((*(uint *)((long)param_1 + 0xc) & 0x7fffffff) != 0)) {
                    /* try { // try from 0040043c to 0040043f has its CatchHandler @ 00400448 */
    FUN_00401580(param_1,*param_1);
  }
  return;
}


