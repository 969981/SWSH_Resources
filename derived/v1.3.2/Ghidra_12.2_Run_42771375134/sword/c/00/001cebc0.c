/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001cebc0; name: FUN_001cebc0
 */


void FUN_001cebc0(long param_1,long param_2)

{
  undefined4 local_28;
  undefined4 uStack_24;
  
  FUN_003ff570(*(undefined8 *)(param_1 + 0x1fb0));
  local_28 = *(undefined4 *)(param_2 + 0x18);
  uStack_24 = 1;
  if (*(uint *)(param_1 + 0x1fa8) < (*(uint *)(param_1 + 0x1fac) & 0x7fffffff)) {
    *(ulong *)(*(long *)(param_1 + 0x1fa0) + (ulong)*(uint *)(param_1 + 0x1fa8) * 8) =
         CONCAT44(1,local_28);
    *(int *)(param_1 + 0x1fa8) = *(int *)(param_1 + 0x1fa8) + 1;
  }
  else {
                    /* try { // try from 001cec28 to 001cec2f has its CatchHandler @ 001cec48 */
    FUN_001d7800(param_1 + 0x1fa0,&local_28);
  }
                    /* try { // try from 001cec34 to 001cec37 has its CatchHandler @ 001cec60 */
  FUN_003ff5a0(*(undefined8 *)(param_1 + 0x1fb0));
  return;
}


