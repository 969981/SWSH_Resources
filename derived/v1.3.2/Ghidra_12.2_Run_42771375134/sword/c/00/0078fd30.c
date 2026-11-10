/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0078fd30; name: FUN_0078fd30
 */


void FUN_0078fd30(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long lVar7;
  
  puVar1 = PTR_DAT_02716488 + 0x10;
  param_1[9] = (long)(PTR_DAT_02716488 + 0x48);
  *param_1 = (long)puVar1;
  if (param_1[0x2c8] != 0) {
    FUN_019a4730(param_1 + 0x2c3,PTR_DAT_027155e8);
    lVar3 = param_1[0x2c8];
    param_1[0x2c8] = 0;
    if (lVar3 != 0) {
      (**(code **)(*(long *)param_1[0x2c9] + 0x18))
                ((long *)param_1[0x2c9],lVar3,param_1[0x2ca],param_1[0x2cb]);
    }
  }
  lVar3 = param_1[0xe7];
  param_1[0xe7] = 0;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  if (param_1[0xf] != 0) {
    FUN_019f4a40(param_1[0xf],PTR_LAB_027164b0,param_1);
    FUN_019f4a60(param_1[0xf],PTR_LAB_027164b8,param_1);
  }
  if (param_1[0x2cc] != 0) {
    (**(code **)(*(long *)(param_1[0x2cc] + 0x48) + 0x18))();
    param_1[0x2cc] = 0;
  }
  lVar3 = param_1[0x2c8];
  param_1[0x2c8] = 0;
  if (lVar3 != 0) {
    (**(code **)(*(long *)param_1[0x2c9] + 0x18))
              ((long *)param_1[0x2c9],lVar3,param_1[0x2ca],param_1[0x2cb]);
  }
  FUN_019a44f0(param_1 + 0x2c3);
  FUN_00790140(param_1 + 0xf9);
  lVar3 = param_1[0xf1];
  if (lVar3 != 0) {
    param_1[0xf2] = lVar3;
    (**(code **)(*(long *)param_1[0xf4] + 0x18))
              ((long *)param_1[0xf4],lVar3,param_1[0xf3] - lVar3,8);
  }
  nn::os::FinalizeLightEvent((LightEventType *)((long)param_1 + 0x774));
  lVar3 = param_1[0xe8];
  if (lVar3 != 0) {
    lVar4 = param_1[0xe9];
    if (param_1[0xe9] == lVar3) {
      lVar4 = lVar3;
    }
    else {
      do {
        pcVar5 = *(code **)(lVar4 + -0x78);
        lVar7 = lVar4 + -0x80;
        if (pcVar5 != (code *)0x0) {
          *(undefined8 *)(lVar4 + -0x70) = 0;
          *(undefined8 *)(lVar4 + -0x68) = 0;
          *(undefined8 *)(lVar4 + -0x80) = 0;
          *(undefined8 *)(lVar4 + -0x78) = 0;
          (*pcVar5)(lVar4 + -0x60);
        }
        lVar4 = lVar7;
      } while (lVar3 != lVar7);
      lVar4 = param_1[0xe8];
    }
    param_1[0xe9] = lVar3;
    (**(code **)(*(long *)param_1[0xeb] + 0x18))
              ((long *)param_1[0xeb],lVar4,param_1[0xea] - lVar4,0x10);
  }
  if (param_1[0xe7] != 0) {
    (**(code **)(*(long *)(param_1[0xe7] + 0x48) + 0x18))();
    param_1[0xe7] = 0;
  }
  plVar2 = (long *)param_1[0xe1];
  while (plVar2 != (long *)0x0) {
    lVar3 = *plVar2;
    if (plVar2[3] != 0) {
      (**(code **)(*(long *)(plVar2[3] + 0x48) + 0x18))();
      plVar2[3] = 0;
    }
    (**(code **)(*(long *)param_1[0xe2] + 0x18))((long *)param_1[0xe2],plVar2,0x20,8);
    plVar2 = (long *)lVar3;
  }
  lVar3 = param_1[0xdc];
  param_1[0xdc] = 0;
  if (lVar3 != 0) {
    (**(code **)(*(long *)param_1[0xde] + 0x18))((long *)param_1[0xde],lVar3,param_1[0xdd] << 3,8);
  }
  plVar2 = (long *)param_1[0xd6];
  while (plVar2 != (long *)0x0) {
    lVar3 = *plVar2;
    if (plVar2[3] != 0) {
      (**(code **)(*(long *)(plVar2[3] + 0x48) + 0x18))();
      plVar2[3] = 0;
    }
    (**(code **)(*(long *)param_1[0xd7] + 0x18))((long *)param_1[0xd7],plVar2,0x20,8);
    plVar2 = (long *)lVar3;
  }
  lVar3 = param_1[0xd1];
  param_1[0xd1] = 0;
  if (lVar3 != 0) {
    (**(code **)(*(long *)param_1[0xd3] + 0x18))((long *)param_1[0xd3],lVar3,param_1[0xd2] << 3,8);
  }
  plVar2 = (long *)param_1[0xcb];
  while (plVar2 != (long *)0x0) {
    lVar3 = *plVar2;
    if (plVar2[3] != 0) {
      (**(code **)(*(long *)(plVar2[3] + 0x48) + 0x18))();
      plVar2[3] = 0;
    }
    (**(code **)(*(long *)param_1[0xcc] + 0x18))((long *)param_1[0xcc],plVar2,0x28,8);
    plVar2 = (long *)lVar3;
  }
  lVar3 = param_1[0xc6];
  param_1[0xc6] = 0;
  if (lVar3 != 0) {
    (**(code **)(*(long *)param_1[200] + 0x18))((long *)param_1[200],lVar3,param_1[199] << 3,8);
  }
  nn::os::FinalizeLightEvent((LightEventType *)((long)param_1 + 0x61c));
  nn::os::FinalizeLightEvent((LightEventType *)((long)param_1 + 0x4e4));
  if (param_1[0x14] != 0) {
    (**(code **)(*(long *)(param_1[0x14] + 0x48) + 0x18))();
    param_1[0x14] = 0;
  }
  if (param_1[0x13] != 0) {
    (**(code **)(*(long *)(param_1[0x13] + 0x48) + 0x18))();
    param_1[0x13] = 0;
  }
  puVar6 = (undefined8 *)param_1[0xf];
  param_1[0xf] = 0;
  if (puVar6 == (undefined8 *)0x0) {
    return;
  }
  (**(code **)*puVar6)(puVar6);
                    /* WARNING: Could not recover jumptable at 0x007900b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[0x10] + 0x18))
            ((long *)param_1[0x10],puVar6,param_1[0x11],param_1[0x12]);
  return;
}


