/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001446a0; name: FUN_001446a0
 */


void FUN_001446a0(long *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar6;
  undefined8 *puVar5;
  
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 != 0) {
    puVar2 = (undefined8 *)*param_1;
    puVar5 = puVar2;
    do {
      puVar6 = puVar5 + 10;
      (**(code **)*puVar5)(puVar5);
      puVar5 = puVar6;
    } while (puVar6 < puVar2 + (ulong)uVar1 * 10);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0xc)) &&
      ((*(uint *)((long)param_1 + 0xc) & 0x7fffffff) != 0)) && (lVar4 = *param_1, lVar4 != 0)) {
                    /* try { // try from 001446fc to 0014470f has its CatchHandler @ 00144720 */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar4);
  }
  return;
}


