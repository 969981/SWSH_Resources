/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0106a9c0; name: FUN_0106a9c0
 */


void FUN_0106a9c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                 long *param_5,uint param_6)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  *param_1 = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  plVar2 = param_1 + 1;
  *plVar2 = 0;
  lVar1 = FUN_00703b30(auStack_68,param_3,PTR_DAT_02715928);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (*plVar2 != 0) {
    (**(code **)(*(long *)(*plVar2 + 0x48) + 0x18))();
    *plVar2 = 0;
  }
  *plVar2 = lVar1;
  lVar3 = *param_4;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (*(long *)(lVar1 + 0xb0) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar1 + 0xb0) + 0x48) + 0x18))();
    *(undefined8 *)(lVar1 + 0xb0) = 0;
  }
  *(long *)(lVar1 + 0xb0) = lVar3;
  lVar1 = *plVar2;
  lVar3 = *param_5;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (*(long *)(lVar1 + 0x130) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar1 + 0x130) + 0x48) + 0x18))();
    *(undefined8 *)(lVar1 + 0x130) = 0;
  }
  *(long *)(lVar1 + 0x130) = lVar3;
  FUN_00701e00(*param_1,param_1[1]);
  if ((param_6 & 1) != 0) {
    lVar1 = FUN_00703b30(auStack_60,param_3,PTR_DAT_02715cb0);
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    }
    if (param_1[2] != 0) {
      (**(code **)(*(long *)(param_1[2] + 0x48) + 0x18))();
      param_1[2] = 0;
    }
    param_1[2] = lVar1;
    lVar3 = *param_4;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    if (*(long *)(lVar1 + 0xb0) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar1 + 0xb0) + 0x48) + 0x18))();
      *(undefined8 *)(lVar1 + 0xb0) = 0;
    }
    *(long *)(lVar1 + 0xb0) = lVar3;
    lVar1 = param_1[2];
    lVar3 = *param_5;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    if (*(long *)(lVar1 + 0x130) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar1 + 0x130) + 0x48) + 0x18))();
      *(undefined8 *)(lVar1 + 0x130) = 0;
    }
    *(long *)(lVar1 + 0x130) = lVar3;
    FUN_00701e00(*param_1,param_1[2]);
  }
  lVar1 = FUN_00703e30(auStack_58,param_3,PTR_DAT_02715930);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (param_1[3] != 0) {
    (**(code **)(*(long *)(param_1[3] + 0x48) + 0x18))();
    param_1[3] = 0;
  }
  param_1[3] = lVar1;
  lVar3 = *param_4;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (*(long *)(lVar1 + 0xb0) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar1 + 0xb0) + 0x48) + 0x18))();
    *(undefined8 *)(lVar1 + 0xb0) = 0;
  }
  *(long *)(lVar1 + 0xb0) = lVar3;
  lVar3 = param_1[3];
  lVar1 = *param_5;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (*(long *)(lVar3 + 0x130) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar3 + 0x130) + 0x48) + 0x18))();
    *(undefined8 *)(lVar3 + 0x130) = 0;
  }
  *(long *)(lVar3 + 0x130) = lVar1;
  FUN_00701e00(*param_1,param_1[3]);
  *(undefined4 *)(param_1[1] + 0x1a8) = 0;
  if ((param_6 & 1) != 0) {
    *(undefined4 *)(param_1[2] + 0x1a8) = 1;
  }
  *(undefined4 *)(param_1[3] + 0x1a8) = 2;
  return;
}


