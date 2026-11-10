/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0067aad0; name: FUN_0067aad0
 */


void FUN_0067aad0(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  *param_1 = (long)(PTR_DAT_02714df0 + 0x10);
  plVar1 = param_1 + 5;
  if (((*(byte *)(param_1 + 9) & 1) == 0) && (lVar2 = *plVar1, lVar2 != 0)) {
    plVar3 = (long *)param_1[1];
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x50))(plVar3,lVar2);
      (**(code **)(*plVar3 + 0x48))(plVar3,lVar2,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2)
      ;
    }
    *plVar1 = 0;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[9] = 0;
  *plVar1 = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}


