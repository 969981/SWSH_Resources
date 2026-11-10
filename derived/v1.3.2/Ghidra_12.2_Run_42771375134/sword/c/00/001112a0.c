/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001112a0; name: FUN_001112a0
 */


void FUN_001112a0(undefined8 *param_1)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  
  FUN_003ff570(*param_1);
  uVar2 = *(uint *)(param_1 + 0x14);
  uVar3 = (ulong)uVar2;
  while (uVar2 != 0) {
    uVar2 = (int)uVar3 - 1;
    uVar3 = (ulong)uVar2;
    lVar4 = *(long *)(param_1[0x13] + uVar3 * 8);
    *(uint *)(param_1 + 0x14) = uVar2;
    if (lVar4 != 0) {
                    /* try { // try from 001112d4 to 001112e7 has its CatchHandler @ 00111314 */
      plVar1 = (long *)FUN_00400d30();
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
      uVar3 = (ulong)*(uint *)(param_1 + 0x14);
    }
    *(int *)(param_1 + 0x17) = *(int *)(param_1 + 0x17) + -1;
    uVar2 = (uint)uVar3;
  }
                    /* try { // try from 00111300 to 00111303 has its CatchHandler @ 00111310 */
  FUN_003ff5a0(*param_1);
  return;
}


