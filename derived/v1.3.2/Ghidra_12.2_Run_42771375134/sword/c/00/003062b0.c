/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003062b0; name: FUN_003062b0
 */


void FUN_003062b0(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_027121e8 + 0x10;
  param_1[3] = (long)(PTR_DAT_027121e8 + 0x1c0);
  *param_1 = (long)puVar1;
  if (((*(byte *)((long)param_1 + 10) & 1) != 0) && (lVar3 = param_1[0xd], lVar3 != 0)) {
                    /* try { // try from 003062e8 to 003062fb has its CatchHandler @ 0030631c */
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar3);
  }
                    /* try { // try from 003062fc to 0030630f has its CatchHandler @ 00306320 */
  plVar2 = (long *)FUN_00400d30();
  (**(code **)(*plVar2 + 0x18))(plVar2,param_1);
  return;
}


