/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c7ab20; name: FUN_00c7ab20
 */


void FUN_00c7ab20(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long local_38;
  
  *param_1 = (long)(PTR_DAT_0271c360 + 0x10);
  if (param_1[1] != 0) {
    (**(code **)(*(long *)(param_1[1] + 0x48) + 0x18))();
    param_1[1] = 0;
  }
  while( true ) {
    plVar5 = (long *)(param_1[5] + 8);
    plVar7 = (long *)*plVar5;
    if ((plVar7 == (long *)0x0) || (plVar7 == plVar5)) break;
    lVar10 = *(long *)(param_1[5] + 0x10);
    plVar5 = *(long **)(*(long *)(lVar10 + 0x10) + 0x78);
    if (plVar5 != (long *)0x0) {
      (**(code **)(plVar5[9] + 0x10))();
    }
    (**(code **)(*plVar5 + 0x10))(&local_38,plVar5);
    lVar4 = local_38;
    local_38 = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(plVar5[9] + 0x18))(plVar5 + 9);
    }
    plVar7 = (long *)param_1[5];
    plVar6 = (long *)plVar7[2];
    lVar1 = *plVar6;
    plVar5 = (long *)plVar6[1];
    *plVar5 = lVar1;
    *(long **)(lVar1 + 8) = plVar5;
    *plVar7 = *plVar7 + -1;
    *plVar6 = 0;
    plVar6[1] = 0;
    if (*(long *)(lVar10 + 0x10) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar10 + 0x10) + 0x48) + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = 0;
    }
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0x48);
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  plVar5 = (long *)param_1[0x10];
  param_1[0x10] = 0;
  puVar3 = PTR_DAT_0271c368;
  if (plVar5 == (long *)0x0) {
    param_1[0x10] = 0;
  }
  else {
    lVar10 = plVar5[5];
    plVar5[5] = 0;
    *plVar5 = (long)(puVar3 + 0x10);
    if (lVar10 != 0) {
      FUN_00c83200(lVar10);
      (**(code **)(*(long *)plVar5[6] + 0x18))((long *)plVar5[6],lVar10,plVar5[7],plVar5[8]);
    }
    lVar10 = plVar5[1];
    plVar5[1] = 0;
    if (lVar10 != 0) {
      FUN_00c83f10(lVar10);
      (**(code **)(*(long *)plVar5[2] + 0x18))((long *)plVar5[2],lVar10,plVar5[3],plVar5[4]);
    }
    (**(code **)(*(long *)param_1[0x11] + 0x18))
              ((long *)param_1[0x11],plVar5,param_1[0x12],param_1[0x13]);
    plVar5 = (long *)param_1[0x10];
    param_1[0x10] = 0;
    if (plVar5 != (long *)0x0) {
      lVar10 = plVar5[5];
      *plVar5 = (long)(puVar3 + 0x10);
      plVar5[5] = 0;
      if (lVar10 != 0) {
        FUN_00c83200(lVar10);
        (**(code **)(*(long *)plVar5[6] + 0x18))((long *)plVar5[6],lVar10,plVar5[7],plVar5[8]);
      }
      lVar10 = plVar5[1];
      plVar5[1] = 0;
      if (lVar10 != 0) {
        FUN_00c83f10(lVar10);
        (**(code **)(*(long *)plVar5[2] + 0x18))((long *)plVar5[2],lVar10,plVar5[3],plVar5[4]);
      }
      (**(code **)(*(long *)param_1[0x11] + 0x18))
                ((long *)param_1[0x11],plVar5,param_1[0x12],param_1[0x13]);
    }
  }
  nn::os::FinalizeLightEvent((LightEventType *)((long)param_1 + 0x6c));
  puVar9 = (undefined8 *)param_1[9];
  param_1[9] = 0;
  if (puVar9 != (undefined8 *)0x0) {
    (**(code **)*puVar9)(puVar9);
    (**(code **)(*(long *)param_1[10] + 0x18))((long *)param_1[10],puVar9,param_1[0xb],param_1[0xc])
    ;
  }
  puVar9 = (undefined8 *)param_1[5];
  param_1[5] = 0;
  if (puVar9 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)puVar9[1];
    while (puVar9 + 1 != puVar2) {
      puVar8 = (undefined8 *)*puVar2;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = puVar8;
    }
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = 0;
    (**(code **)(*(long *)param_1[6] + 0x18))((long *)param_1[6],puVar9,param_1[7],param_1[8]);
  }
  if (param_1[3] != 0) {
    (**(code **)(*(long *)(param_1[3] + 0x48) + 0x18))();
    param_1[3] = 0;
  }
  if (param_1[2] != 0) {
    (**(code **)(*(long *)(param_1[2] + 0x48) + 0x18))();
    param_1[2] = 0;
  }
  if (param_1[1] != 0) {
    (**(code **)(*(long *)(param_1[1] + 0x48) + 0x18))();
    param_1[1] = 0;
  }
  return;
}


