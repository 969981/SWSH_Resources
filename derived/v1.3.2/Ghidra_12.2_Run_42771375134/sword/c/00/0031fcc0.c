/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0031fcc0; name: FUN_0031fcc0
 */


void FUN_0031fcc0(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  if (*(uint *)((long)param_1 + 0x2c) != 0) {
    uVar1 = 0;
    do {
      uVar2 = *(uint *)(param_1[4] + uVar1 * 4);
      if (uVar2 != 0xffffffff) {
        do {
          uVar2 = *(uint *)(param_1[3] + (ulong)uVar2 * 4);
        } while (uVar2 != 0xffffffff);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 != *(uint *)((long)param_1 + 0x2c));
  }
  if (param_1[1] != 0) {
                    /* try { // try from 0031fd18 to 0031fd1b has its CatchHandler @ 0031fd24 */
    (**(code **)(**(long **)*param_1 + 0x18))();
  }
  return;
}


