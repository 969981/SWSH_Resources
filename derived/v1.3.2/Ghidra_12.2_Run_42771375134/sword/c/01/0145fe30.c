/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0145fe30; name: FUN_0145fe30
 */


void FUN_0145fe30(long param_1,undefined8 param_2,long param_3,int param_4,undefined8 *param_5,
                 uint param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  byte bVar6;
  code *pcVar7;
  undefined8 *puVar8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8;
  undefined4 local_a6;
  undefined8 local_a0;
  undefined8 uStack_98;
  short local_90;
  undefined1 local_8e;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  
  local_90 = 0x101;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 1;
  local_b8 = 0;
  uStack_b0 = 0;
  local_e0 = 0;
  local_8e = 0;
  local_a6 = 0xffff;
  local_c8 = 0;
  local_c0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_48 = param_2;
  if (*(long *)(param_1 + 0x68) != 0) {
    puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    if (puVar8 == (undefined8 *)0x0) goto LAB_0145fed4;
    plVar4 = (long *)(**(code **)*puVar8)(puVar8);
    lVar5 = FUN_014546a0();
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)lVar5) {
        puVar8 = puVar8 + -10;
        goto LAB_0145fed4;
      }
    }
  }
  puVar8 = (undefined8 *)0x0;
LAB_0145fed4:
  FUN_01457ce0(puVar8,puVar8[0xc],&local_48);
  FUN_01457ce0(puVar8,puVar8[0xe],param_3);
  FUN_01457ce0(puVar8,puVar8[0xf],param_3 + 8);
  if (param_4 == 1) {
    bVar6 = 1;
  }
  else if (param_4 == 2) {
    bVar6 = 0;
  }
  else {
    bVar6 = *(byte *)((long)puVar8 + 0xb1) ^ 1;
  }
  local_a0 = puVar8[0xc];
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_e0 = puVar8[0xe];
  local_d8 = puVar8[0xf];
  local_90 = (ushort)bVar6 << 8;
  uStack_78 = 0;
  local_a8 = 1;
  local_8e = 0;
  local_c0 = 0;
  local_a6 = 0xffff;
  uStack_98 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  local_88 = local_e0;
  local_80 = local_d8;
  plVar4 = (long *)(**(code **)*puVar8)(puVar8);
  lVar5 = FUN_014546a0();
  for (; plVar4 != (long *)lVar5; plVar4 = (long *)*plVar4) {
  }
  *(undefined1 *)((long)puVar8 + 0x61) = 1;
  (**(code **)(**(long **)(param_1 + 0x80) + 0x88))(*(long **)(param_1 + 0x80),&local_a0,&local_e0);
  *(undefined4 *)(param_1 + 0x7c) = 2;
  FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x80),0);
  pcVar7 = *(code **)(param_1 + 0x118);
  if (pcVar7 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x120) = 0;
    *(undefined8 *)(param_1 + 0x128) = 0;
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined8 *)(param_1 + 0x118) = 0;
    (*pcVar7)(param_1 + 0x130);
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


