/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014601e0; name: FUN_014601e0
 */


void FUN_014601e0(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 *param_5,ulong param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined4 local_6e;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined2 local_58;
  undefined1 local_56;
  undefined8 local_48;
  
  local_58 = 0x101;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 1;
  local_80 = 0;
  uStack_78 = 0;
  local_a8 = 0;
  local_56 = 0;
  local_6e = 0xffff;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_48 = param_2;
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar7 != (undefined8 *)0x0)) {
    plVar4 = (long *)(**(code **)*puVar7)(puVar7);
    lVar5 = FUN_014546a0();
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)lVar5) {
        puVar7 = puVar7 + -10;
        goto LAB_01460284;
      }
    }
  }
  puVar7 = (undefined8 *)0x0;
LAB_01460284:
  FUN_01460f90(puVar7,&local_68,&local_a8,&local_48,param_3,param_4);
  puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar4 = (long *)(**(code **)*puVar7)(puVar7);
  lVar5 = FUN_014546a0();
  for (; plVar4 != (long *)lVar5; plVar4 = (long *)*plVar4) {
  }
  *(undefined1 *)((long)puVar7 + 0x61) = 1;
  (**(code **)(**(long **)(param_1 + 0x80) + 0x88))(*(long **)(param_1 + 0x80),&local_68,&local_a8);
  *(undefined4 *)(param_1 + 0x7c) = 2;
  FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x80),0);
  pcVar6 = *(code **)(param_1 + 0x118);
  if (pcVar6 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x120) = 0;
    *(undefined8 *)(param_1 + 0x128) = 0;
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined8 *)(param_1 + 0x118) = 0;
    (*pcVar6)(param_1 + 0x130);
  }
  if ((code *)param_5[2] != (code *)0x0) {
    (*(code *)param_5[2])(param_5 + 4,param_1 + 0x130);
    uVar1 = *param_5;
    uVar2 = param_5[1];
    uVar3 = param_5[3];
    *(undefined8 *)(param_1 + 0x120) = param_5[2];
    *(undefined8 *)(param_1 + 0x128) = uVar3;
    *(undefined8 *)(param_1 + 0x110) = uVar1;
    *(undefined8 *)(param_1 + 0x118) = uVar2;
  }
  if ((param_6 & 1) != 0) {
    FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x80),0);
  }
  return;
}


