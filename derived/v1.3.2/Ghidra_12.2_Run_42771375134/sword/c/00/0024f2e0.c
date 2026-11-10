/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0024f2e0; name: FUN_0024f2e0
 */


void FUN_0024f2e0(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_02711e78 + 0x10;
  param_1[2] = (long)(PTR_DAT_02711e78 + 0xe0);
  *param_1 = (long)puVar1;
  if ((*(byte *)((long)param_1 + 10) & 1) != 0) {
    lVar3 = param_1[10];
    if (lVar3 != 0) {
                    /* try { // try from 0024f318 to 0024f32b has its CatchHandler @ 0024f33c */
      plVar2 = (long *)FUN_00400d30();
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar3);
    }
    param_1[10] = 0;
  }
  return;
}


