/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cba2b0; name: FUN_00cba2b0
 */


void FUN_00cba2b0(long param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x18);
  lVar3 = *(long *)(param_2 + 0x20);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(param_1 + 0x80);
  *(long *)(param_1 + 0x80) = lVar3;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x38);
  lVar3 = *(long *)(param_2 + 0x40);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(param_1 + 0xa0);
  *(long *)(param_1 + 0xa0) = lVar3;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  lVar3 = *(long *)(param_2 + 0x48);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(param_1 + 0xa8);
  *(long *)(param_1 + 0xa8) = lVar3;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  lVar3 = *(long *)(param_2 + 0x50);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(param_1 + 0xb0);
  *(long *)(param_1 + 0xb0) = lVar3;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  lVar3 = *(long *)(param_2 + 0x58);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(param_1 + 0xb8);
  *(long *)(param_1 + 0xb8) = lVar3;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  lVar3 = *(long *)(param_2 + 0x60);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(param_1 + 0xc0);
  *(long *)(param_1 + 0xc0) = lVar3;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  lVar3 = *(long *)(param_2 + 0x68);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(param_1 + 200);
  *(long *)(param_1 + 200) = lVar3;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  lVar3 = *(long *)(param_2 + 0x70);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(param_1 + 0xd0);
  *(long *)(param_1 + 0xd0) = lVar3;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  lVar3 = *(long *)(param_2 + 0x78);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(param_1 + 0xd8);
  *(long *)(param_1 + 0xd8) = lVar3;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  lVar3 = *(long *)(param_2 + 0x80);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(param_1 + 0xe0);
  *(long *)(param_1 + 0xe0) = lVar3;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  pcVar2 = *(code **)(param_1 + 0x108);
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined8 *)(param_1 + 0x118) = 0;
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
    (*pcVar2)(param_1 + 0x120);
  }
  *(long *)(param_1 + 0x120) = param_1;
  *(undefined8 *)(param_1 + 0x100) = &LAB_00cbade0;
  *(undefined1 **)(param_1 + 0x108) = &LAB_00cbb0f0;
  *(undefined1 **)(param_1 + 0x110) = &LAB_00cbb100;
  *(undefined1 **)(param_1 + 0x118) = &LAB_00cbb110;
  lVar3 = *(long *)(param_1 + 0xf8);
  if (lVar3 == 0) {
    return;
  }
  plVar4 = (long *)(lVar3 + 0x48);
  (**(code **)(*plVar4 + 0x10))(plVar4);
  FUN_006e1e70(lVar3,param_1 + 0xf0,1);
                    /* WARNING: Could not recover jumptable at 0x00cba564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x18))(plVar4);
  return;
}


