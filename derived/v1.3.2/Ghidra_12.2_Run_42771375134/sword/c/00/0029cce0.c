/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0029cce0; name: FUN_0029cce0
 */


undefined4 FUN_0029cce0(long param_1)

{
  undefined4 uVar1;
  
  FUN_003ff570(*(undefined8 *)(param_1 + 8));
  uVar1 = *(undefined4 *)(param_1 + 0xb4);
                    /* try { // try from 0029cd00 to 0029cd03 has its CatchHandler @ 0029cd14 */
  FUN_003ff5a0(*(undefined8 *)(param_1 + 8));
  return uVar1;
}


