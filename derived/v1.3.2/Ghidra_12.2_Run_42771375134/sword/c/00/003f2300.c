/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003f2300; name: FUN_003f2300
 */


void FUN_003f2300(long param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (uVar1 != 0) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      lVar6 = *(long *)(param_1 + 0x10);
      lVar3 = *(long *)(lVar6 + lVar4);
      if (lVar3 != 0) {
                    /* try { // try from 003f233c to 003f234f has its CatchHandler @ 003f23ac */
        plVar2 = (long *)FUN_00400d30();
        (**(code **)(*plVar2 + 0x18))(plVar2,lVar3);
      }
      uVar5 = uVar5 + 1;
      *(undefined8 *)(lVar6 + lVar4) = 0;
      lVar4 = lVar4 + 0x18;
    } while (uVar5 < uVar1);
  }
  if (((-1 < (int)*(uint *)(param_1 + 0x1c)) && ((*(uint *)(param_1 + 0x1c) & 0x7fffffff) != 0)) &&
     (lVar4 = *(long *)(param_1 + 0x10), lVar4 != 0)) {
                    /* try { // try from 003f237c to 003f238f has its CatchHandler @ 003f23a8 */
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar4);
  }
  return;
}


