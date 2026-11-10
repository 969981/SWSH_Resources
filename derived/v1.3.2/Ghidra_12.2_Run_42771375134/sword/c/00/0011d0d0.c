/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0011d0d0; name: FUN_0011d0d0
 */


void FUN_0011d0d0(long param_1)

{
  long *plVar1;
  long lVar2;
  
                    /* try { // try from 0011d0e0 to 0011d0e3 has its CatchHandler @ 0011d11c */
  FUN_0011d4d0();
  lVar2 = *(long *)(param_1 + 0x30);
  if ((lVar2 != 0) && (-1 < *(int *)(param_1 + 0x38))) {
                    /* try { // try from 0011d0f4 to 0011d107 has its CatchHandler @ 0011d118 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}


