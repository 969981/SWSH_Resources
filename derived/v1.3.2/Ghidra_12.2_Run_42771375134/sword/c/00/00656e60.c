/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00656e60; name: FUN_00656e60
 */


void FUN_00656e60(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  *param_1 = (long)(PTR_DAT_02714b50 + 0x10);
  FUN_00658290(param_1 + 5);
  plVar1 = param_1 + 0x14;
  if (((*(byte *)(param_1 + 0x18) & 1) == 0) && (lVar5 = *plVar1, lVar5 != 0)) {
    plVar6 = (long *)param_1[0x10];
    if (plVar6 != (long *)0x0) {
      lVar4 = (**(code **)(*plVar6 + 0x50))(plVar6,lVar5);
      if (lVar4 != 0) {
        plVar7 = (long *)(lVar5 + 0x50);
        do {
          if ((long *)*plVar7 != (long *)0x0) {
            (**(code **)(*(long *)*plVar7 + 0x18))();
            *plVar7 = 0;
          }
          lVar4 = lVar4 + -1;
          plVar7 = plVar7 + 0xb;
        } while (lVar4 != 0);
      }
      (**(code **)(*plVar6 + 0x48))(plVar6,lVar5,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2)
      ;
    }
    *plVar1 = 0;
  }
  puVar3 = PTR_DAT_02714b60;
  param_1[0x18] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  puVar2 = PTR_DAT_02714b58;
  param_1[0xf] = (long)(puVar3 + 0x10);
  param_1[0x16] = 0;
  *plVar1 = 0;
  param_1[0x15] = 0;
  param_1[5] = (long)(puVar2 + 0x10);
  FUN_00658290(param_1 + 5);
  FUN_005bf750(param_1 + 1);
  return;
}


