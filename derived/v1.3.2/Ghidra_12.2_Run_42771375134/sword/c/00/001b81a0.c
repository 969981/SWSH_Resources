/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001b81a0; name: FUN_001b81a0
 */


void FUN_001b81a0(long param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  if ((param_3 & 1) == 0) {
    uVar1 = *(uint *)(param_1 + 0x1cf0);
    uVar2 = (ulong)uVar1;
    if (uVar1 == 0) {
      if ((*(uint *)(param_1 + 0x1cf4) & 0x7fffffc0) == 0) {
        FUN_001c7cc0(param_1 + 0x1ce8,0x40);
        uVar2 = (ulong)*(uint *)(param_1 + 0x1cf0);
        if ((*(uint *)(param_1 + 0x1cf4) & 0x7fffffff) <= *(uint *)(param_1 + 0x1cf0))
        goto LAB_001b82a4;
      }
      else {
        uVar2 = 0;
        if ((*(uint *)(param_1 + 0x1cf4) & 0x7fffffff) == 0) {
LAB_001b82a4:
          FUN_001c7e20(param_1 + 0x1ce8,&local_28);
          return;
        }
      }
    }
    else if ((*(uint *)(param_1 + 0x1cf4) & 0x7fffffff) <= uVar1) goto LAB_001b82a4;
    *(undefined8 *)(*(long *)(param_1 + 0x1ce8) + uVar2 * 8) = param_2;
    *(int *)(param_1 + 0x1cf0) = (int)uVar2 + 1;
    return;
  }
  FUN_003ff570(*(undefined8 *)(param_1 + 8));
  uVar1 = *(uint *)(param_1 + 0x1cf0);
  uVar2 = (ulong)uVar1;
  if (uVar1 == 0) {
    if ((*(uint *)(param_1 + 0x1cf4) & 0x7fffffc0) == 0) {
                    /* try { // try from 001b82c0 to 001b82cb has its CatchHandler @ 001b8308 */
      FUN_001c7cc0(param_1 + 0x1ce8,0x40);
      uVar2 = (ulong)*(uint *)(param_1 + 0x1cf0);
      if ((*(uint *)(param_1 + 0x1cf4) & 0x7fffffff) <= *(uint *)(param_1 + 0x1cf0))
      goto LAB_001b8260;
    }
    else {
      uVar2 = 0;
      if ((*(uint *)(param_1 + 0x1cf4) & 0x7fffffff) == 0) {
LAB_001b8260:
                    /* try { // try from 001b8260 to 001b826b has its CatchHandler @ 001b8308 */
        FUN_001c7e20(param_1 + 0x1ce8,&local_28);
        goto LAB_001b826c;
      }
    }
  }
  else if ((*(uint *)(param_1 + 0x1cf4) & 0x7fffffff) <= uVar1) goto LAB_001b8260;
  *(undefined8 *)(*(long *)(param_1 + 0x1ce8) + uVar2 * 8) = local_28;
  *(int *)(param_1 + 0x1cf0) = (int)uVar2 + 1;
LAB_001b826c:
                    /* try { // try from 001b8270 to 001b8273 has its CatchHandler @ 001b8320 */
  FUN_003ff5a0(*(undefined8 *)(param_1 + 8));
  return;
}


