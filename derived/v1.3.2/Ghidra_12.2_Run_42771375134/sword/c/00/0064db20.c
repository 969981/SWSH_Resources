/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0064db20; name: FUN_0064db20
 */


void FUN_0064db20(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  *param_1 = (long)(PTR_DAT_02714a08 + 0x10);
  FUN_0064dbe0();
  param_1[0x40a] = (long)(PTR_DAT_02714a10 + 0x10);
  plVar1 = param_1 + 0x40f;
  if (((*(byte *)(param_1 + 0x413) & 1) == 0) && (lVar2 = *plVar1, lVar2 != 0)) {
    plVar3 = (long *)param_1[0x40b];
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x50))(plVar3,lVar2);
      (**(code **)(*plVar3 + 0x48))(plVar3,lVar2,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2)
      ;
    }
    *plVar1 = 0;
  }
  param_1[0x40d] = 0;
  param_1[0x40c] = 0;
  param_1[0x413] = 0;
  *plVar1 = 0;
  param_1[0x410] = 0;
  param_1[0x411] = 0;
  FUN_005bf750(param_1 + 1);
  return;
}


