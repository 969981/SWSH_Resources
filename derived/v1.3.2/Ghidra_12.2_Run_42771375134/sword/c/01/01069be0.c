/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01069be0; name: FUN_01069be0
 */


void FUN_01069be0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                 long *param_5)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  *param_1 = param_2;
  param_1[2] = 0;
  plVar3 = param_1 + 1;
  *plVar3 = 0;
  lVar2 = FUN_01058840(auStack_60,param_3,"InitializeRenderPath0");
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (*plVar3 != 0) {
    (**(code **)(*(long *)(*plVar3 + 0x48) + 0x18))();
    *plVar3 = 0;
  }
  puVar1 = PTR_DAT_02710910;
  *plVar3 = lVar2;
  lVar4 = *(long *)(*(long *)puVar1 + 0x168);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  if (*(long *)(lVar2 + 0xb0) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar2 + 0xb0) + 0x48) + 0x18))();
    *(undefined8 *)(lVar2 + 0xb0) = 0;
  }
  *(long *)(lVar2 + 0xb0) = lVar4;
  lVar2 = *plVar3;
  lVar4 = *(long *)(*(long *)(*(long *)puVar1 + 0x168) + 0xa8);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  if (*(long *)(lVar2 + 0x130) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar2 + 0x130) + 0x48) + 0x18))();
    *(undefined8 *)(lVar2 + 0x130) = 0;
  }
  *(long *)(lVar2 + 0x130) = lVar4;
  *(undefined1 *)(param_1[1] + 0xb8) = 1;
  *(undefined1 *)(param_1[1] + 0x1ac) = 1;
  FUN_00701e00(*param_1,param_1[1]);
  lVar2 = FUN_01058840(auStack_58,param_3,"InitializeRenderPath1");
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (param_1[2] != 0) {
    (**(code **)(*(long *)(param_1[2] + 0x48) + 0x18))();
    param_1[2] = 0;
  }
  param_1[2] = lVar2;
  lVar4 = *param_4;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  if (*(long *)(lVar2 + 0xb0) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar2 + 0xb0) + 0x48) + 0x18))();
    *(undefined8 *)(lVar2 + 0xb0) = 0;
  }
  *(long *)(lVar2 + 0xb0) = lVar4;
  lVar4 = param_1[2];
  lVar2 = *param_5;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (*(long *)(lVar4 + 0x130) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar4 + 0x130) + 0x48) + 0x18))();
    *(undefined8 *)(lVar4 + 0x130) = 0;
  }
  *(long *)(lVar4 + 0x130) = lVar2;
  *(undefined1 *)(param_1[2] + 0xb8) = 1;
  *(undefined1 *)(param_1[2] + 0x1ac) = 1;
  FUN_00701e00(*param_1,param_1[2]);
  *(undefined4 *)(param_1[1] + 0x1a8) = 0;
  *(undefined4 *)(param_1[2] + 0x1a8) = 1;
  return;
}


