/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006e8910; name: FUN_006e8910
 */


void FUN_006e8910(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_027155d0 + 0x40;
  *param_1 = (long)(PTR_DAT_027155d0 + 0x10);
  param_1[9] = (long)puVar1;
  puVar1 = PTR_DAT_027154f0;
  lVar6 = *(long *)PTR_DAT_027154f0;
  plVar3 = *(long **)(lVar6 + 0x30);
  *(undefined8 *)(lVar6 + 0x30) = 0;
  if (plVar3 != (long *)0x0) {
    if (plVar3[1] != 0) {
      (**(code **)(*(long *)(plVar3[1] + 0x48) + 0x18))();
      plVar3[1] = 0;
    }
    if (*plVar3 != 0) {
      (**(code **)(*(long *)(*plVar3 + 0x48) + 0x18))();
      *plVar3 = 0;
    }
    (**(code **)(**(long **)(lVar6 + 0x38) + 0x18))
              (*(long **)(lVar6 + 0x38),plVar3,*(undefined8 *)(lVar6 + 0x40),
               *(undefined8 *)(lVar6 + 0x48));
    lVar6 = *(long *)puVar1;
  }
  plVar3 = *(long **)(lVar6 + 0x10);
  *(undefined8 *)(lVar6 + 0x10) = 0;
  if (plVar3 != (long *)0x0) {
    if (plVar3[1] != 0) {
      (**(code **)(*(long *)(plVar3[1] + 0x48) + 0x18))();
      plVar3[1] = 0;
    }
    if (*plVar3 != 0) {
      (**(code **)(*(long *)(*plVar3 + 0x48) + 0x18))();
      *plVar3 = 0;
    }
    (**(code **)(**(long **)(lVar6 + 0x18) + 0x18))
              (*(long **)(lVar6 + 0x18),plVar3,*(undefined8 *)(lVar6 + 0x20),
               *(undefined8 *)(lVar6 + 0x28));
  }
  FUN_006f2b80();
  FUN_019a5c10();
  if (param_1[0x10b6] != 0) {
    (**(code **)(*(long *)(param_1[0x10b6] + 0x48) + 0x18))();
    param_1[0x10b6] = 0;
  }
  lVar6 = param_1[0x10b4];
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
    param_1[0x10b4] = 0;
  }
  FUN_006e8c90(param_1 + 0x10a0);
  nn::os::FinalizeLightEvent((LightEventType *)((long)param_1 + 0x84e4));
  FUN_019a54b0(param_1 + 0x84e);
  FUN_019a54b0(param_1 + 0x843);
  FUN_019a2b80(param_1 + 0x43e);
  if (param_1[0x3d] != 0) {
    (**(code **)(*(long *)(param_1[0x3d] + 0x48) + 0x18))();
    param_1[0x3d] = 0;
  }
  nn::os::FinalizeLightEvent((LightEventType *)((long)param_1 + 0x1a4));
  plVar3 = (long *)param_1[0x2e];
  if (plVar3 != (long *)0x0) {
    if ((long *)param_1[0x2f] == plVar3) {
      plVar2 = plVar3;
    }
    else {
      plVar2 = (long *)param_1[0x2f];
      do {
        plVar5 = plVar2 + -1;
        if (*plVar5 != 0) {
          (**(code **)(*(long *)(*plVar5 + 0x48) + 0x18))();
          plVar2[-1] = 0;
        }
        plVar2 = plVar5;
      } while (plVar3 != plVar5);
      plVar2 = (long *)param_1[0x2e];
    }
    param_1[0x2f] = (long)plVar3;
    (**(code **)(*(long *)param_1[0x31] + 0x18))
              ((long *)param_1[0x31],plVar2,param_1[0x30] - (long)plVar2,8);
  }
  if (param_1[0x2d] != 0) {
    (**(code **)(*(long *)(param_1[0x2d] + 0x48) + 0x18))();
    param_1[0x2d] = 0;
  }
  if (param_1[0x2c] != 0) {
    (**(code **)(*(long *)(param_1[0x2c] + 0x48) + 0x18))();
    param_1[0x2c] = 0;
  }
  lVar6 = param_1[0x28];
  param_1[0x28] = 0;
  if (lVar6 != 0) {
    (**(code **)(*(long *)param_1[0x29] + 0x18))
              ((long *)param_1[0x29],lVar6,param_1[0x2a],param_1[0x2b]);
  }
  param_1[0x1e] = (long)(PTR_DAT_027155d8 + 0x10);
  *(undefined8 *)puVar1 = 0;
  puVar4 = (undefined8 *)param_1[0x20];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)(*(long *)*puVar4 + 0x58))();
    (**(code **)(*(long *)puVar4[1] + 0x58))();
  }
  puVar4 = (undefined8 *)param_1[0x24];
  if (puVar4 == (undefined8 *)0x0) {
    param_1[0x24] = 0;
    plVar3 = (long *)param_1[0x20];
    param_1[0x20] = 0;
  }
  else {
    (**(code **)(*(long *)*puVar4 + 0x58))();
    (**(code **)(*(long *)puVar4[1] + 0x58))();
    plVar3 = (long *)param_1[0x24];
    param_1[0x24] = 0;
    if (plVar3 != (long *)0x0) {
      if (plVar3[1] != 0) {
        (**(code **)(*(long *)(plVar3[1] + 0x48) + 0x18))();
        plVar3[1] = 0;
      }
      if (*plVar3 != 0) {
        (**(code **)(*(long *)(*plVar3 + 0x48) + 0x18))();
        *plVar3 = 0;
      }
      (**(code **)(*(long *)param_1[0x25] + 0x18))
                ((long *)param_1[0x25],plVar3,param_1[0x26],param_1[0x27]);
    }
    plVar3 = (long *)param_1[0x20];
    param_1[0x20] = 0;
  }
  if (plVar3 != (long *)0x0) {
    if (plVar3[1] != 0) {
      (**(code **)(*(long *)(plVar3[1] + 0x48) + 0x18))();
      plVar3[1] = 0;
    }
    if (*plVar3 != 0) {
      (**(code **)(*(long *)(*plVar3 + 0x48) + 0x18))();
      *plVar3 = 0;
    }
    (**(code **)(*(long *)param_1[0x21] + 0x18))
              ((long *)param_1[0x21],plVar3,param_1[0x22],param_1[0x23]);
  }
  FUN_006eadf0(param_1 + 0x1e);
  return;
}


