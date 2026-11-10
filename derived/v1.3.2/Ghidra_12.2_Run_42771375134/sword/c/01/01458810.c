/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01458810; name: FUN_01458810
 */


void FUN_01458810(long param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
                 uint param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined2 local_50;
  undefined1 local_4e;
  undefined8 local_48;
  
  local_4e = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0x101;
  local_48 = param_2;
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar7 != (undefined8 *)0x0)) {
    plVar4 = (long *)(**(code **)*puVar7)(puVar7);
    lVar5 = FUN_014546a0();
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)lVar5) {
        puVar7 = puVar7 + -10;
        goto LAB_0145888c;
      }
    }
  }
  puVar7 = (undefined8 *)0x0;
LAB_0145888c:
  FUN_01457c50(puVar7,&local_60,&local_48,param_3);
  puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar4 = (long *)(**(code **)*puVar7)(puVar7);
  lVar5 = FUN_014546a0();
  for (; plVar4 != (long *)lVar5; plVar4 = (long *)*plVar4) {
  }
  *(undefined1 *)((long)puVar7 + 0x61) = 1;
  FUN_01038170(*(undefined8 *)(param_1 + 0x80),&local_60);
  pcVar6 = *(code **)(param_1 + 0x98);
  *(undefined4 *)(param_1 + 0x7c) = 1;
  if (pcVar6 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    (*pcVar6)(param_1 + 0xb0);
  }
  if ((code *)param_4[2] != (code *)0x0) {
    (*(code *)param_4[2])(param_4 + 4,param_1 + 0xb0);
    uVar1 = *param_4;
    uVar2 = param_4[1];
    uVar3 = param_4[3];
    *(undefined8 *)(param_1 + 0xa0) = param_4[2];
    *(undefined8 *)(param_1 + 0xa8) = uVar3;
    *(undefined8 *)(param_1 + 0x90) = uVar1;
    *(undefined8 *)(param_1 + 0x98) = uVar2;
  }
  if ((param_5 & 1) != 0) {
    FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x80),0);
  }
  return;
}


