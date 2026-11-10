/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0029c7e0; name: FUN_0029c7e0
 */


uint FUN_0029c7e0(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 local_28;
  
  FUN_003ff570(*(undefined8 *)(param_1 + 8));
                    /* try { // try from 0029c808 to 0029c813 has its CatchHandler @ 0029c834 */
  local_28 = param_2;
  uVar1 = FUN_0029dc60(param_1 + 0x48,&local_28);
                    /* try { // try from 0029c818 to 0029c81b has its CatchHandler @ 0029c830 */
  FUN_003ff5a0(*(undefined8 *)(param_1 + 8));
  return uVar1 & 1;
}


