/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001b8790; name: FUN_001b8790
 */


void FUN_001b8790(long param_1,undefined8 param_2)

{
  undefined8 local_28;
  
  local_28 = param_2;
  FUN_003ff570(*(undefined8 *)(param_1 + 8));
                    /* try { // try from 001b87b4 to 001b87bb has its CatchHandler @ 001b87d8 */
  FUN_001c7fb0(param_1 + 0x3f0,&local_28);
                    /* try { // try from 001b87c0 to 001b87c3 has its CatchHandler @ 001b87d4 */
  FUN_003ff5a0(*(undefined8 *)(param_1 + 8));
  return;
}


