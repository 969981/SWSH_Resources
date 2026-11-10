/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0029c850; name: FUN_0029c850
 */


undefined4 FUN_0029c850(long param_1)

{
  undefined4 uVar1;
  
  FUN_003ff570(*(undefined8 *)(param_1 + 8));
  uVar1 = *(undefined4 *)(param_1 + 0x7c);
                    /* try { // try from 0029c870 to 0029c873 has its CatchHandler @ 0029c884 */
  FUN_003ff5a0(*(undefined8 *)(param_1 + 8));
  return uVar1;
}


