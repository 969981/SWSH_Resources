/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003b4070; name: FUN_003b4070
 */


void FUN_003b4070(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = (long)(PTR_DAT_02712758 + 0x10);
  *(undefined8 *)param_1[10] = 0;
  if (((-1 < (int)*(uint *)((long)param_1 + 0xcc)) &&
      ((*(uint *)((long)param_1 + 0xcc) & 0x7fffffff) != 0)) && (lVar2 = param_1[0x18], lVar2 != 0))
  {
                    /* try { // try from 003b40b0 to 003b40c3 has its CatchHandler @ 003b410c */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0xbc)) &&
      ((*(uint *)((long)param_1 + 0xbc) & 0x7fffffff) != 0)) && (lVar2 = param_1[0x16], lVar2 != 0))
  {
                    /* try { // try from 003b40dc to 003b40ef has its CatchHandler @ 003b4108 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  FUN_003b9ec0(param_1 + 0xc);
  FUN_003ba3b0(param_1);
  return;
}


