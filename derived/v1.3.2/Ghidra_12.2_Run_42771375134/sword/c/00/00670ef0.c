/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00670ef0; name: FUN_00670ef0
 */


void FUN_00670ef0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  *param_1 = (long)(PTR_DAT_02714d58 + 0x10);
  FUN_00671140();
  param_1[0x29] = (long)(PTR_DAT_02714d78 + 0x10);
  if (param_1[0x2d] != 0) {
    plVar2 = param_1 + 0x2b;
    do {
      puVar3 = (undefined8 *)*plVar2;
      if (puVar3 == (undefined8 *)0x0) break;
      puVar5 = (undefined8 *)puVar3[1];
      if (puVar5 == (undefined8 *)0x0) {
        *plVar2 = 0;
        param_1[0x2c] = 0;
      }
      else {
        *puVar5 = 0;
        *plVar2 = (long)puVar5;
      }
      *puVar3 = 0;
      puVar3[1] = 0;
      lVar4 = param_1[0x2d];
      param_1[0x2d] = lVar4 + -1;
    } while (lVar4 + -1 != 0);
  }
  param_1[0x1f] = (long)(PTR_DAT_02714d70 + 0x10);
  plVar2 = param_1 + 0x24;
  if (((*(byte *)(param_1 + 0x28) & 1) == 0) && (plVar6 = (long *)*plVar2, plVar6 != (long *)0x0)) {
    plVar7 = (long *)param_1[0x20];
    if (plVar7 != (long *)0x0) {
      lVar4 = (**(code **)(*plVar7 + 0x50))(plVar7,plVar6);
      if (lVar4 != 0) {
        plVar8 = plVar6;
        do {
          if ((*(byte *)(plVar8 + 5) & 1) == 0) {
            if (plVar8[1] != 0) {
              plVar1 = (long *)*plVar8;
              if (plVar1 != (long *)0x0) {
                (**(code **)(*plVar1 + 0x48))
                          (plVar1,plVar8[1],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
              }
              plVar8[1] = 0;
            }
            plVar8[1] = 0;
          }
          plVar8 = plVar8 + 9;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
      (**(code **)(*plVar7 + 0x48))
                (plVar7,plVar6,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar2 = 0;
  }
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x28] = 0;
  plVar6 = param_1 + 0x1a;
  *plVar2 = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x15] = (long)(PTR_DAT_02714d68 + 0x10);
  if (((*(byte *)(param_1 + 0x1e) & 1) == 0) && (*plVar6 != 0)) {
    plVar2 = (long *)param_1[0x16];
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x48))
                (plVar2,*plVar6,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar6 = 0;
  }
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1e] = 0;
  *plVar6 = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x10] = (long)(PTR_DAT_02714d60 + 0x10);
  if (param_1[0x14] != 0) {
    plVar2 = param_1 + 0x12;
    do {
      puVar3 = (undefined8 *)*plVar2;
      if (puVar3 == (undefined8 *)0x0) break;
      puVar5 = (undefined8 *)puVar3[1];
      if (puVar5 == (undefined8 *)0x0) {
        *plVar2 = 0;
        param_1[0x13] = 0;
      }
      else {
        *puVar5 = 0;
        *plVar2 = (long)puVar5;
      }
      *puVar3 = 0;
      puVar3[1] = 0;
      lVar4 = param_1[0x14];
      param_1[0x14] = lVar4 + -1;
    } while (lVar4 + -1 != 0);
  }
  if ((*(byte *)(param_1 + 0xf) & 1) == 0) {
    if (param_1[0xb] != 0) {
      plVar2 = (long *)param_1[10];
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x48))
                  (plVar2,param_1[0xb],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[0xb] = 0;
    }
    param_1[0xb] = 0;
  }
  FUN_00696510(param_1 + 3);
  FUN_005bf750(param_1 + 1);
  return;
}


