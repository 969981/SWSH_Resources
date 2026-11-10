/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001b8140; name: FUN_001b8140
 */


void FUN_001b8140(long param_1,long *param_2)

{
  FUN_003ff570(*(undefined8 *)(param_1 + 0x2170));
  (**(code **)(*param_2 + 0x18))(param_2);
  *(int *)(param_1 + 0x215c) = *(int *)(param_1 + 0x215c) + -1;
  *param_2 = *(long *)(param_1 + 0x2168);
  *(long **)(param_1 + 0x2168) = param_2;
                    /* try { // try from 001b8188 to 001b818b has its CatchHandler @ 001b8198 */
  FUN_003ff5a0(*(undefined8 *)(param_1 + 0x2170));
  return;
}


