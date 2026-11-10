/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0067e6a0; name: FUN_0067e6a0
 */


void FUN_0067e6a0(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  
  puVar1 = PTR_DAT_02714e30;
  *param_1 = (long)(PTR_DAT_02714e18 + 0x10);
  plVar5 = param_1 + 0x27;
  param_1[0x22] = (long)(puVar1 + 0x10);
  if (((*(byte *)(param_1 + 0x2b) & 1) == 0) && (*plVar5 != 0)) {
    plVar2 = (long *)param_1[0x23];
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x48))
                (plVar2,*plVar5,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar5 = 0;
  }
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x2b] = 0;
  *plVar5 = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x18] = (long)(PTR_DAT_02714e28 + 0x10);
  plVar5 = param_1 + 0x1d;
  if (((*(byte *)(param_1 + 0x21) & 1) == 0) && (*plVar5 != 0)) {
    plVar2 = (long *)param_1[0x19];
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x48))
                (plVar2,*plVar5,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar5 = 0;
  }
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x21] = 0;
  *plVar5 = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0xe] = (long)(PTR_DAT_02714328 + 0x10);
  plVar5 = param_1 + 0x13;
  if (((*(byte *)(param_1 + 0x17) & 1) == 0) && (*plVar5 != 0)) {
    plVar2 = (long *)param_1[0xf];
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x48))
                (plVar2,*plVar5,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar5 = 0;
  }
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x17] = 0;
  plVar2 = param_1 + 9;
  *plVar5 = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[4] = (long)(PTR_DAT_02714e20 + 0x10);
  if (((*(byte *)(param_1 + 0xd) & 1) == 0) &&
     (puVar4 = (undefined8 *)*plVar2, puVar4 != (undefined8 *)0x0)) {
    plVar5 = (long *)param_1[5];
    if (plVar5 != (long *)0x0) {
      lVar3 = (**(code **)(*plVar5 + 0x50))(plVar5,puVar4);
      if (lVar3 != 0) {
        puVar6 = puVar4;
        do {
          (**(code **)*puVar6)(puVar6);
          lVar3 = lVar3 + -1;
          puVar6 = puVar6 + 10;
        } while (lVar3 != 0);
      }
      (**(code **)(*plVar5 + 0x48))
                (plVar5,puVar4,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar2 = 0;
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0xd] = 0;
  *plVar2 = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  FUN_005bf750(param_1 + 1);
  return;
}


