/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012eb100; name: FUN_012eb100
 */


void FUN_012eb100(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_02727ae8 + 0xc0;
  puVar2 = PTR_DAT_02727ae8 + 0x130;
  *param_1 = (long)(PTR_DAT_02727ae8 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  nn::os::FinalizeLightEvent((LightEventType *)((long)param_1 + 0x2f4));
  nn::os::FinalizeLightEvent((LightEventType *)((long)param_1 + 0x2dc));
  nn::os::FinalizeLightEvent((LightEventType *)((long)param_1 + 0x2c4));
  pcVar4 = (code *)param_1[0x49];
  if (pcVar4 != (code *)0x0) {
    param_1[0x4b] = 0;
    param_1[0x4a] = 0;
    param_1[0x49] = 0;
    param_1[0x48] = 0;
    (*pcVar4)(param_1 + 0x4c);
  }
  lVar5 = param_1[0x42];
  if (lVar5 != 0) {
    lVar3 = param_1[0x43];
    if (param_1[0x43] == lVar5) {
      lVar3 = lVar5;
    }
    else {
      do {
        pcVar4 = *(code **)(lVar3 + -0x78);
        lVar6 = lVar3 + -0x80;
        if (pcVar4 != (code *)0x0) {
          *(undefined8 *)(lVar3 + -0x70) = 0;
          *(undefined8 *)(lVar3 + -0x68) = 0;
          *(undefined8 *)(lVar3 + -0x80) = 0;
          *(undefined8 *)(lVar3 + -0x78) = 0;
          (*pcVar4)(lVar3 + -0x60);
        }
        lVar3 = lVar6;
      } while (lVar5 != lVar6);
      lVar3 = param_1[0x42];
    }
    param_1[0x43] = lVar5;
    (**(code **)(*(long *)param_1[0x45] + 0x18))
              ((long *)param_1[0x45],lVar3,param_1[0x44] - lVar3,0x10);
  }
  lVar5 = param_1[0x3c];
  if (lVar5 != 0) {
    param_1[0x3d] = lVar5;
    (**(code **)(*(long *)param_1[0x3f] + 0x18))
              ((long *)param_1[0x3f],lVar5,param_1[0x3e] - lVar5,8);
  }
  if (param_1[0x3a] != 0) {
    (**(code **)(*(long *)(param_1[0x3a] + 0x48) + 0x18))();
    param_1[0x3a] = 0;
  }
  lVar5 = param_1[0x34];
  if (lVar5 != 0) {
    param_1[0x35] = lVar5;
    (**(code **)(*(long *)param_1[0x37] + 0x18))
              ((long *)param_1[0x37],lVar5,param_1[0x36] - lVar5,8);
  }
  FUN_012eb350(param_1 + 0x10);
  puVar1 = PTR_DAT_02715098 + 0x90;
  puVar2 = PTR_DAT_02715098 + 0x100;
  *param_1 = (long)(PTR_DAT_02715098 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  if (param_1[0xd] != 0) {
    (**(code **)(*(long *)(param_1[0xd] + 0x48) + 0x18))();
    param_1[0xd] = 0;
  }
  puVar1 = PTR_DAT_027150a0 + 0x50;
  puVar2 = PTR_DAT_027150a0 + 0xc0;
  *param_1 = (long)(PTR_DAT_027150a0 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  if (param_1[0xb] != 0) {
    (**(code **)(*(long *)(param_1[0xb] + 0x48) + 0x18))();
    param_1[0xb] = 0;
  }
  return;
}


