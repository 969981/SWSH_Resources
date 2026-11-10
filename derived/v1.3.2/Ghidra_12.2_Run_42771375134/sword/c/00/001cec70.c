/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001cec70; name: FUN_001cec70
 */


void FUN_001cec70(long param_1,long param_2)

{
  undefined4 local_28;
  undefined4 uStack_24;
  
  if (*(int *)(param_2 + 0x18) != -1) {
    FUN_003ff570(*(undefined8 *)(param_1 + 0x1fb0));
    local_28 = *(undefined4 *)(param_2 + 0x18);
    uStack_24 = 2;
    if (*(uint *)(param_1 + 0x1fa8) < (*(uint *)(param_1 + 0x1fac) & 0x7fffffff)) {
      *(ulong *)(*(long *)(param_1 + 0x1fa0) + (ulong)*(uint *)(param_1 + 0x1fa8) * 8) =
           CONCAT44(2,local_28);
      *(int *)(param_1 + 0x1fa8) = *(int *)(param_1 + 0x1fa8) + 1;
    }
    else {
                    /* try { // try from 001cece4 to 001ceceb has its CatchHandler @ 001ced04 */
      FUN_001d7800(param_1 + 0x1fa0,&local_28);
    }
                    /* try { // try from 001cecf0 to 001cecf3 has its CatchHandler @ 001ced1c */
    FUN_003ff5a0(*(undefined8 *)(param_1 + 0x1fb0));
  }
  return;
}


