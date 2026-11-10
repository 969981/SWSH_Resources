/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002ff790; name: FUN_002ff790
 */


void FUN_002ff790(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_027121c8 + 0x10;
  param_1[3] = (long)(PTR_DAT_027121c8 + 0x1d8);
  *param_1 = (long)puVar1;
  if (((*(byte *)((long)param_1 + 10) & 1) != 0) && (lVar3 = param_1[0xd], lVar3 != 0)) {
                    /* try { // try from 002ff7c8 to 002ff7db has its CatchHandler @ 002ff7fc */
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar3);
  }
                    /* try { // try from 002ff7dc to 002ff7ef has its CatchHandler @ 002ff800 */
  plVar2 = (long *)FUN_00400d30();
  (**(code **)(*plVar2 + 0x18))(plVar2,param_1);
  return;
}


