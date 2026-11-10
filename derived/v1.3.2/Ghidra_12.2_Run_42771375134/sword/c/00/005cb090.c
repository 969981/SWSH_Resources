/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005cb090; name: FUN_005cb090
 */


void FUN_005cb090(long *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  *param_1 = (long)(PTR_DAT_02713f58 + 0x10);
  FUN_005cb220();
  uVar2 = FUN_005bf7e0();
  FUN_005c0e10(uVar2,param_1);
  if ((long *)param_1[0x25] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x25] + 0x18))();
    param_1[0x25] = 0;
  }
  puVar1 = PTR_DAT_02713f68 + 0x10;
  plVar4 = param_1 + 0x1f;
  param_1[0x1a] = (long)puVar1;
  if (((*(byte *)(param_1 + 0x23) & 1) == 0) && (*plVar4 != 0)) {
    plVar3 = (long *)param_1[0x1b];
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x48))
                (plVar3,*plVar4,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar4 = 0;
  }
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x23] = 0;
  *plVar4 = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  plVar4 = param_1 + 0x15;
  param_1[0x10] = (long)puVar1;
  if (((*(byte *)(param_1 + 0x19) & 1) == 0) && (*plVar4 != 0)) {
    plVar3 = (long *)param_1[0x11];
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x48))
                (plVar3,*plVar4,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar4 = 0;
  }
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x19] = 0;
  *plVar4 = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0xb] = (long)(PTR_DAT_02713f60 + 0x10);
  if (param_1[0xf] != 0) {
    plVar4 = param_1 + 0xd;
    do {
      lVar5 = *plVar4;
      if (lVar5 == 0) break;
      lVar6 = *(long *)(lVar5 + 0x10);
      if (lVar6 == 0) {
        *plVar4 = 0;
        param_1[0xe] = 0;
      }
      else {
        *(undefined8 *)(lVar6 + 8) = 0;
        *plVar4 = lVar6;
      }
      *(undefined8 *)(lVar5 + 8) = 0;
      *(undefined8 *)(lVar5 + 0x10) = 0;
      lVar5 = param_1[0xf];
      param_1[0xf] = lVar5 + -1;
    } while (lVar5 + -1 != 0);
  }
  if ((*(byte *)(param_1 + 7) & 1) == 0) {
    if (param_1[3] != 0) {
      plVar4 = (long *)param_1[2];
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x48))
                  (plVar4,param_1[3],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[3] = 0;
    }
    param_1[3] = 0;
  }
  return;
}


