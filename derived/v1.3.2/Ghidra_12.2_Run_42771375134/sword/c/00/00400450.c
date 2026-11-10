/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00400450; name: FUN_00400450
 */


void FUN_00400450(long *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  if (*(uint *)((long)param_1 + 0x24) != 0) {
    uVar1 = 0;
    do {
      uVar2 = *(uint *)(param_1[3] + uVar1 * 4);
      if (uVar2 != 0xffffffff) {
        do {
          uVar2 = *(uint *)(param_1[2] + (ulong)uVar2 * 4);
        } while (uVar2 != 0xffffffff);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 != *(uint *)((long)param_1 + 0x24));
  }
  if (*param_1 != 0) {
                    /* try { // try from 004004ac to 004004af has its CatchHandler @ 004004b8 */
    (**(code **)(*(long *)(*(long *)PTR_DAT_027129e0 + 0x18) + 0x18))();
  }
  return;
}


