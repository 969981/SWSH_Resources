/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0029ce20; name: FUN_0029ce20
 */


void FUN_0029ce20(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 local_28;
  
  FUN_003ff570(*(undefined8 *)(param_1 + 8));
  uVar1 = *(uint *)(param_1 + 0xc0);
  local_28 = param_2;
  if (uVar1 < (*(uint *)(param_1 + 0xc4) & 0x7fffffff)) {
    *(undefined8 *)(*(long *)(param_1 + 0xb8) + (ulong)uVar1 * 8) = param_2;
    *(uint *)(param_1 + 0xc0) = uVar1 + 1;
  }
  else {
                    /* try { // try from 0029ce6c to 0029ce73 has its CatchHandler @ 0029ce8c */
    FUN_0029e090(param_1 + 0xb8,&local_28);
  }
                    /* try { // try from 0029ce78 to 0029ce7b has its CatchHandler @ 0029cea4 */
  FUN_003ff5a0(*(undefined8 *)(param_1 + 8));
  return;
}


