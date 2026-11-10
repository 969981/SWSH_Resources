/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001b3510; name: FUN_001b3510
 */


void FUN_001b3510(long param_1,long param_2)

{
  ulong uVar1;
  
  FUN_003ff570(*(undefined8 *)(param_1 + 0xb8));
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar1 = 0;
    do {
                    /* try { // try from 001b3544 to 001b354b has its CatchHandler @ 001b3584 */
      FUN_001fc800(*(undefined8 *)(*(long *)(param_1 + 8) + uVar1 * 8),param_2);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x10));
  }
  *(long *)(*(long *)(param_1 + 0x50) + (ulong)*(uint *)(param_2 + 0x48) * 8) = param_2;
                    /* try { // try from 001b356c to 001b356f has its CatchHandler @ 001b3580 */
  FUN_003ff5a0(*(undefined8 *)(param_1 + 0xb8));
  return;
}


