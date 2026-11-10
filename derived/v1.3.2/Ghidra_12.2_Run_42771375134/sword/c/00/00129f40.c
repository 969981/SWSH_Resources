/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00129f40; name: FUN_00129f40
 */


void FUN_00129f40(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  
  plVar2 = param_1 + 1;
  *param_1 = (long)(PTR_DAT_02710c70 + 0x10);
  if ((int)param_1[2] != 0) {
    uVar4 = 0;
    do {
      (**(code **)**(undefined8 **)(*plVar2 + uVar4 * 8))();
      lVar3 = *(long *)(*plVar2 + uVar4 * 8);
      if (lVar3 != 0) {
                    /* try { // try from 00129f98 to 00129fab has its CatchHandler @ 00129ffc */
        plVar1 = (long *)FUN_00400d30();
        (**(code **)(*plVar1 + 0x18))(plVar1,lVar3);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 2));
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x14)) &&
      ((*(uint *)((long)param_1 + 0x14) & 0x7fffffff) != 0)) && (lVar3 = *plVar2, lVar3 != 0)) {
                    /* try { // try from 00129fd4 to 00129fe7 has its CatchHandler @ 00129ff8 */
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar3);
  }
  return;
}


