/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001b9ad0; name: FUN_001b9ad0
 */


void FUN_001b9ad0(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  
  FUN_003ff570(*(undefined8 *)(param_1 + 0x300));
  if (param_2 != (undefined8 *)0x0) {
    if ((-1 < (int)*(uint *)((long)param_2 + 0x54)) &&
       ((*(uint *)((long)param_2 + 0x54) & 0x7fffffff) != 0)) {
      puVar2 = (undefined8 *)param_2[9];
      if (param_2 == puVar2) {
        *(undefined1 *)(param_2 + 8) = 0;
      }
      else if (puVar2 != (undefined8 *)0x0) {
                    /* try { // try from 001b9b14 to 001b9b27 has its CatchHandler @ 001b9b60 */
        plVar1 = (long *)FUN_00400d30();
        (**(code **)(*plVar1 + 0x18))(plVar1,puVar2);
      }
    }
    *(int *)(param_1 + 0x2ec) = *(int *)(param_1 + 0x2ec) + -1;
    *param_2 = *(undefined8 *)(param_1 + 0x2f8);
    *(undefined8 **)(param_1 + 0x2f8) = param_2;
  }
                    /* try { // try from 001b9b4c to 001b9b4f has its CatchHandler @ 001b9b64 */
  FUN_003ff5a0(*(undefined8 *)(param_1 + 0x300));
  return;
}


