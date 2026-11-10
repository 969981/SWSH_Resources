/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001210f0; name: FUN_001210f0
 */


void FUN_001210f0(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  uVar2 = (ulong)*(uint *)(param_1 + 1);
  if (*(uint *)(param_1 + 1) != 0) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      lVar3 = *(long *)(*param_1 + lVar4);
      if (lVar3 != 0) {
                    /* try { // try from 00121120 to 00121133 has its CatchHandler @ 0012118c */
        plVar1 = (long *)FUN_00400d30();
        (**(code **)(*plVar1 + 0x18))(plVar1,lVar3);
        uVar2 = (ulong)*(uint *)(param_1 + 1);
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x10;
    } while (uVar5 < uVar2);
  }
  *(undefined4 *)(param_1 + 2) = 0;
  if (((-1 < (int)*(uint *)((long)param_1 + 0xc)) &&
      ((*(uint *)((long)param_1 + 0xc) & 0x7fffffff) != 0)) && (lVar4 = *param_1, lVar4 != 0)) {
                    /* try { // try from 00121164 to 00121177 has its CatchHandler @ 00121188 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  return;
}


