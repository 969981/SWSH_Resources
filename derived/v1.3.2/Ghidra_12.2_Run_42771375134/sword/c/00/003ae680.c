/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ae680; name: FUN_003ae680
 */


void FUN_003ae680(long param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x38);
  if (lVar2 != 0) {
                    /* try { // try from 003ae698 to 003ae6ab has its CatchHandler @ 003ae710 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
                    /* try { // try from 003ae6b8 to 003ae6bf has its CatchHandler @ 003ae70c */
  plVar1 = (long *)(**(code **)(**(long **)(param_1 + 0x20) + 0x18))();
  if (*(long **)(param_1 + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x20) + 8))();
  }
  if ((short)plVar1[1] == 0) {
    (**(code **)(*plVar1 + 8))(plVar1);
    FUN_003ba2c0(param_1);
    return;
  }
  FUN_003ba2c0(param_1);
  return;
}


