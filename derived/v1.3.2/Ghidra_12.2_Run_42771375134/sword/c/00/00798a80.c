/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00798a80; name: FUN_00798a80
 */


void FUN_00798a80(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  puVar1 = PTR_DAT_02716500 + 0xb0;
  puVar2 = PTR_DAT_02716500 + 0xf0;
  *param_1 = (long)(PTR_DAT_02716500 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  plVar4 = (long *)param_1[0x56];
  while (plVar4 != (long *)0x0) {
    lVar5 = *plVar4;
    if (plVar4[5] != 0) {
      (**(code **)(*(long *)(plVar4[5] + 0x48) + 0x18))();
      plVar4[5] = 0;
    }
    (**(code **)(*(long *)param_1[0x57] + 0x18))((long *)param_1[0x57],plVar4,0x38,8);
    plVar4 = (long *)lVar5;
  }
  lVar5 = param_1[0x51];
  param_1[0x51] = 0;
  if (lVar5 != 0) {
    (**(code **)(*(long *)param_1[0x53] + 0x18))((long *)param_1[0x53],lVar5,param_1[0x52] << 3,8);
  }
  if (param_1[0x50] != 0) {
    (**(code **)(*(long *)(param_1[0x50] + 0x48) + 0x18))();
    param_1[0x50] = 0;
  }
  puVar1 = PTR_DAT_027159d0 + 0xb0;
  puVar2 = PTR_DAT_027159d0 + 0xf0;
  *param_1 = (long)(PTR_DAT_027159d0 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  if (param_1[0x4c] != 0) {
    (**(code **)(*(long *)(param_1[0x4c] + 0x48) + 0x18))();
    param_1[0x4c] = 0;
  }
  nn::os::FinalizeLightEvent((LightEventType *)((long)param_1 + 0x244));
  plVar4 = (long *)param_1[0x42];
  if (plVar4 != (long *)0x0) {
    if ((long *)param_1[0x43] == plVar4) {
      plVar3 = plVar4;
    }
    else {
      plVar3 = (long *)param_1[0x43];
      do {
        plVar6 = plVar3 + -1;
        if (*plVar6 != 0) {
          (**(code **)(*(long *)(*plVar6 + 0x48) + 0x18))();
          plVar3[-1] = 0;
        }
        plVar3 = plVar6;
      } while (plVar4 != plVar6);
      plVar3 = (long *)param_1[0x42];
    }
    param_1[0x43] = (long)plVar4;
    (**(code **)(*(long *)param_1[0x45] + 0x18))
              ((long *)param_1[0x45],plVar3,param_1[0x44] - (long)plVar3,8);
  }
  FUN_006ff0c0(param_1);
  return;
}


