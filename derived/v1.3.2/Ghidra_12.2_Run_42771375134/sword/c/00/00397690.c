/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00397690; name: FUN_00397690
 */


void FUN_00397690(long param_1)

{
  long *plVar1;
  long lVar2;
  
                    /* try { // try from 003976a0 to 003976a7 has its CatchHandler @ 003976d8 */
  FUN_00397700(param_1,0);
  lVar2 = *(long *)(param_1 + 0x50);
  if (lVar2 != 0) {
                    /* try { // try from 003976b0 to 003976c3 has its CatchHandler @ 003976f4 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  FUN_003993f0(param_1 + 0x18);
  return;
}


