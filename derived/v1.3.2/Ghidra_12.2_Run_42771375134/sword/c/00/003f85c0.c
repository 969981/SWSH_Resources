/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003f85c0; name: FUN_003f85c0
 */


void FUN_003f85c0(long *param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_003c6e00(param_1,param_3,param_4,6,0);
  puVar1 = PTR_DAT_02712998;
  param_1[5] = param_2;
  *param_1 = (long)(puVar1 + 0x10);
  if ((*(uint *)(param_1[1] + 0xb8) < 0xfffffffe) && (*(uint *)(param_1[2] + 0xb8) < 0xfffffffe)) {
    *(byte *)((long)param_1 + 0x25) = *(byte *)((long)param_1 + 0x25) | 0x40;
  }
                    /* try { // try from 003f8634 to 003f8647 has its CatchHandler @ 003f8678 */
  FUN_003ba4b0(param_1[1],param_1);
  FUN_003ba4b0(param_1[2],param_1);
                    /* try { // try from 003f864c to 003f865b has its CatchHandler @ 003f8674 */
  FUN_003bb250(*(undefined8 *)(param_3 + 0xc0),param_4,param_3,param_1);
  *(long **)param_1[5] = param_1;
  return;
}


