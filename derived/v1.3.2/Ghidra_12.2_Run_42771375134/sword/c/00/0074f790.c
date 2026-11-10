/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0074f790; name: FUN_0074f790
 */


void FUN_0074f790(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  uint *puVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0x90);
  if (lVar7 != 0) {
    *(undefined1 *)(param_1 + 0x3d0) = 0;
    *(undefined4 *)(param_1 + 0x330) = 0;
    FUN_00751810(param_1 + 0x80,*(undefined8 *)(param_1 + 0x78),lVar7);
    FUN_00751db0(param_1 + 0x80,*(undefined8 *)(param_1 + 0x78),lVar7,*(undefined8 *)(param_1 + 8));
  }
  lVar7 = *(long *)(param_2 + 8);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(param_1 + 0xa8);
  *(long *)(param_1 + 0xa8) = lVar7;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
  }
  pcVar5 = *(code **)(param_1 + 0xb8);
  if (pcVar5 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    (*pcVar5)(param_1 + 0xd0);
  }
  if (*(code **)(param_2 + 0x20) != (code *)0x0) {
    (**(code **)(param_2 + 0x20))(param_2 + 0x30,param_1 + 0xd0);
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 200) = uVar3;
    *(undefined8 *)(param_1 + 0xb0) = uVar1;
    *(undefined8 *)(param_1 + 0xb8) = uVar2;
  }
  pcVar5 = *(code **)(param_1 + 0x138);
  if (pcVar5 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x140) = 0;
    *(undefined8 *)(param_1 + 0x148) = 0;
    *(undefined8 *)(param_1 + 0x130) = 0;
    *(undefined8 *)(param_1 + 0x138) = 0;
    (*pcVar5)(param_1 + 0x150);
  }
  if (*(code **)(param_2 + 0xa0) != (code *)0x0) {
    (**(code **)(param_2 + 0xa0))(param_2 + 0xb0,param_1 + 0x150);
    uVar1 = *(undefined8 *)(param_2 + 0x90);
    uVar2 = *(undefined8 *)(param_2 + 0x98);
    uVar3 = *(undefined8 *)(param_2 + 0xa8);
    *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0xa0);
    *(undefined8 *)(param_1 + 0x148) = uVar3;
    *(undefined8 *)(param_1 + 0x130) = uVar1;
    *(undefined8 *)(param_1 + 0x138) = uVar2;
  }
  lVar7 = *(long *)(param_1 + 0x98);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
    *(long *)(param_1 + 0x98) = 0;
  }
  lVar7 = *(long *)(param_1 + 0x2f0);
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  if (lVar7 != 0) {
    (**(code **)(**(long **)(param_1 + 0x2f8) + 0x18))
              (*(long **)(param_1 + 0x2f8),lVar7,*(undefined8 *)(param_1 + 0x300),
               *(undefined8 *)(param_1 + 0x308));
  }
  lVar7 = 0;
  if (*(long *)(param_2 + 8) != 0) {
    puVar6 = *(uint **)(*(long *)(param_2 + 8) + 400);
    lVar7 = (long)puVar6 + (ulong)*puVar6;
  }
  *(long *)(param_1 + 0x90) = lVar7;
  return;
}


