/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001ceb20; name: FUN_001ceb20
 */


void FUN_001ceb20(long param_1,long param_2)

{
  uint local_28 [2];
  
  FUN_003ff570(*(undefined8 *)(param_1 + 0x1fb0));
  local_28[0] = *(uint *)(param_2 + 0x18);
  local_28[1] = 0;
  if (*(uint *)(param_1 + 0x1fa8) < (*(uint *)(param_1 + 0x1fac) & 0x7fffffff)) {
    *(ulong *)(*(long *)(param_1 + 0x1fa0) + (ulong)*(uint *)(param_1 + 0x1fa8) * 8) =
         (ulong)local_28[0];
    *(int *)(param_1 + 0x1fa8) = *(int *)(param_1 + 0x1fa8) + 1;
  }
  else {
                    /* try { // try from 001ceb80 to 001ceb87 has its CatchHandler @ 001ceba0 */
    FUN_001d7800(param_1 + 0x1fa0,local_28);
  }
                    /* try { // try from 001ceb8c to 001ceb8f has its CatchHandler @ 001cebb8 */
  FUN_003ff5a0(*(undefined8 *)(param_1 + 0x1fb0));
  return;
}


