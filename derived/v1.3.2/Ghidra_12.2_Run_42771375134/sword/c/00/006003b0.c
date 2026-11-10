/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006003b0; name: FUN_006003b0
 */


void FUN_006003b0(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  *param_1 = (long)(PTR_DAT_027144f0 + 0x10);
  FUN_00600190();
  param_1[0x18] = (long)(PTR_DAT_02714508 + 0x10);
  plVar3 = param_1 + 0x1d;
  if (((*(byte *)(param_1 + 0x21) & 1) == 0) && (lVar6 = *plVar3, lVar6 != 0)) {
    plVar7 = (long *)param_1[0x19];
    if (plVar7 != (long *)0x0) {
      lVar2 = (**(code **)(*plVar7 + 0x50))(plVar7,lVar6);
      if (lVar2 != 0) {
        lVar8 = lVar6;
        do {
          FUN_0060af00(lVar8);
          lVar2 = lVar2 + -1;
          lVar8 = lVar8 + 0x98;
        } while (lVar2 != 0);
      }
      (**(code **)(*plVar7 + 0x48))(plVar7,lVar6,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2)
      ;
    }
    *plVar3 = 0;
  }
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x21] = 0;
  plVar7 = param_1 + 0x11;
  *plVar3 = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0xc] = (long)(PTR_DAT_02714500 + 0x10);
  if (((*(byte *)(param_1 + 0x15) & 1) == 0) && (*plVar7 != 0)) {
    plVar3 = (long *)param_1[0xd];
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x48))
                (plVar3,*plVar7,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar7 = 0;
  }
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x15] = 0;
  *plVar7 = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  puVar1 = PTR_DAT_027144f8 + 0x10;
  param_1[7] = (long)puVar1;
  if (param_1[0xb] != 0) {
    plVar3 = param_1 + 9;
    do {
      puVar4 = (undefined8 *)*plVar3;
      if (puVar4 == (undefined8 *)0x0) break;
      puVar5 = (undefined8 *)puVar4[1];
      if (puVar5 == (undefined8 *)0x0) {
        *plVar3 = 0;
        param_1[10] = 0;
      }
      else {
        *puVar5 = 0;
        *plVar3 = (long)puVar5;
      }
      *puVar4 = 0;
      puVar4[1] = 0;
      lVar6 = param_1[0xb];
      param_1[0xb] = lVar6 + -1;
    } while (lVar6 + -1 != 0);
  }
  param_1[2] = (long)puVar1;
  if (param_1[6] != 0) {
    plVar3 = param_1 + 4;
    do {
      puVar4 = (undefined8 *)*plVar3;
      if (puVar4 == (undefined8 *)0x0) {
        return;
      }
      puVar5 = (undefined8 *)puVar4[1];
      if (puVar5 == (undefined8 *)0x0) {
        *plVar3 = 0;
        param_1[5] = 0;
      }
      else {
        *puVar5 = 0;
        *plVar3 = (long)puVar5;
      }
      *puVar4 = 0;
      puVar4[1] = 0;
      lVar6 = param_1[6];
      param_1[6] = lVar6 + -1;
    } while (lVar6 + -1 != 0);
  }
  return;
}


