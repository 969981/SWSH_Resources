/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0138dc60; name: FUN_0138dc60
 */


void FUN_0138dc60(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  code *pcVar6;
  long *plVar7;
  long *plVar8;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = PTR_DAT_02728cb0 + 0x140;
  puVar2 = PTR_DAT_02728cb0 + 0x1b0;
  *param_1 = (long)(PTR_DAT_02728cb0 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  lVar3 = param_1[0x80];
  param_1[0x80] = 0;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  lVar3 = param_1[0x81];
  param_1[0x81] = 0;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  lVar3 = param_1[0x82];
  param_1[0x82] = 0;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  lVar3 = param_1[0x83];
  param_1[0x83] = 0;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  lVar3 = param_1[0x84];
  param_1[0x84] = 0;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  lVar3 = param_1[0x85];
  param_1[0x85] = 0;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  lVar3 = param_1[0x86];
  param_1[0x86] = 0;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  lVar3 = param_1[0x87];
  param_1[0x87] = 0;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  uVar4 = FUN_0101f850(*(undefined8 *)PTR_DAT_02710840);
  FUN_01021910(uVar4,2);
  FUN_01021910(uVar4,1);
  FUN_01021990(uVar4,2);
  FUN_01021990(uVar4,1);
  if (param_1[0x7f] != 0) {
    lVar3 = FUN_01380080(param_1[0x7f],auStack_48);
    if (lVar3 != 0) {
      *(undefined1 *)(lVar3 + 0x75) = 0;
    }
    FUN_01391cb0(param_1[0x7f],auStack_40);
    FUN_01391fd0(param_1[0x7f],auStack_38);
  }
  pcVar6 = (code *)param_1[0xa5];
  if (pcVar6 != (code *)0x0) {
    param_1[0xa7] = 0;
    param_1[0xa6] = 0;
    param_1[0xa5] = 0;
    param_1[0xa4] = 0;
    (*pcVar6)(param_1 + 0xa8);
  }
  pcVar6 = (code *)param_1[0x91];
  if (pcVar6 != (code *)0x0) {
    param_1[0x93] = 0;
    param_1[0x92] = 0;
    param_1[0x91] = 0;
    param_1[0x90] = 0;
    (*pcVar6)(param_1 + 0x94);
  }
  if (param_1[0x8e] != 0) {
    (**(code **)(*(long *)(param_1[0x8e] + 0x48) + 0x18))();
    param_1[0x8e] = 0;
  }
  if (param_1[0x8d] != 0) {
    (**(code **)(*(long *)(param_1[0x8d] + 0x48) + 0x18))();
    param_1[0x8d] = 0;
  }
  if (param_1[0x8c] != 0) {
    (**(code **)(*(long *)(param_1[0x8c] + 0x48) + 0x18))();
    param_1[0x8c] = 0;
  }
  if (param_1[0x8b] != 0) {
    (**(code **)(*(long *)(param_1[0x8b] + 0x48) + 0x18))();
    param_1[0x8b] = 0;
  }
  if (param_1[0x8a] != 0) {
    (**(code **)(*(long *)(param_1[0x8a] + 0x48) + 0x18))();
    param_1[0x8a] = 0;
  }
  if (param_1[0x89] != 0) {
    (**(code **)(*(long *)(param_1[0x89] + 0x48) + 0x18))();
    param_1[0x89] = 0;
  }
  if (param_1[0x88] != 0) {
    (**(code **)(*(long *)(param_1[0x88] + 0x48) + 0x18))();
    param_1[0x88] = 0;
  }
  if (param_1[0x87] != 0) {
    (**(code **)(*(long *)(param_1[0x87] + 0x48) + 0x18))();
    param_1[0x87] = 0;
  }
  if (param_1[0x86] != 0) {
    (**(code **)(*(long *)(param_1[0x86] + 0x48) + 0x18))();
    param_1[0x86] = 0;
  }
  if (param_1[0x85] != 0) {
    (**(code **)(*(long *)(param_1[0x85] + 0x48) + 0x18))();
    param_1[0x85] = 0;
  }
  if (param_1[0x84] != 0) {
    (**(code **)(*(long *)(param_1[0x84] + 0x48) + 0x18))();
    param_1[0x84] = 0;
  }
  if (param_1[0x83] != 0) {
    (**(code **)(*(long *)(param_1[0x83] + 0x48) + 0x18))();
    param_1[0x83] = 0;
  }
  if (param_1[0x82] != 0) {
    (**(code **)(*(long *)(param_1[0x82] + 0x48) + 0x18))();
    param_1[0x82] = 0;
  }
  if (param_1[0x81] != 0) {
    (**(code **)(*(long *)(param_1[0x81] + 0x48) + 0x18))();
    param_1[0x81] = 0;
  }
  if (param_1[0x80] != 0) {
    (**(code **)(*(long *)(param_1[0x80] + 0x48) + 0x18))();
    param_1[0x80] = 0;
  }
  if (param_1[0x7f] != 0) {
    (**(code **)(*(long *)(param_1[0x7f] + 0x48) + 0x18))();
    param_1[0x7f] = 0;
  }
  plVar7 = (long *)param_1[0x79];
  if (plVar7 != (long *)0x0) {
    if ((long *)param_1[0x7a] == plVar7) {
      plVar5 = plVar7;
    }
    else {
      plVar5 = (long *)param_1[0x7a];
      do {
        plVar8 = plVar5 + -1;
        if (*plVar8 != 0) {
          (**(code **)(*(long *)(*plVar8 + 0x48) + 0x18))();
          plVar5[-1] = 0;
        }
        plVar5 = plVar8;
      } while (plVar7 != plVar8);
      plVar5 = (long *)param_1[0x79];
    }
    param_1[0x7a] = (long)plVar7;
    (**(code **)(*(long *)param_1[0x7c] + 0x18))
              ((long *)param_1[0x7c],plVar5,param_1[0x7b] - (long)plVar5,8);
  }
  pcVar6 = (code *)param_1[0x11];
  if (pcVar6 != (code *)0x0) {
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    (*pcVar6)(param_1 + 0x14);
  }
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


