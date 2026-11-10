/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01487b40; name: FUN_01487b40
 */


void FUN_01487b40(long param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *local_d0;
  code *local_c8;
  code *local_c0;
  undefined1 *local_b8;
  long alStack_b0 [13];
  long local_48;
  
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x5d8),0);
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x5d8),1);
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x5d8),2);
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x5d8),3);
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x5d8),4);
  lVar4 = *(long *)(param_1 + 0x2b0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(lVar4 + 0x2e8);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  FUN_00ff86a0(&local_d0,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar4 = *(long *)(local_d0 + 0x60);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  if (local_d0 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_d0 + 0x48) + 0x18))();
  }
  local_d0 = (undefined1 *)0xe3458eb964977714;
  FUN_0077eb10(lVar4,&local_d0,lVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x5d8);
  local_48 = lVar3;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  FUN_016bb930(uVar5,0,1,&local_48);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if ((**(uint **)(param_1 + 0x5e8) | 1) == 5) goto LAB_01487d64;
  lVar1 = *(long *)(param_1 + 0x5e0);
  pcVar2 = *(code **)(lVar1 + 0x138);
  local_d0 = &LAB_01489420;
  local_c8 = FUN_01489440;
  local_c0 = FUN_01489450;
  local_b8 = &LAB_01489460;
  alStack_b0[0] = param_1;
  if (pcVar2 == (code *)0x0) {
LAB_01487d14:
    (*local_c0)(alStack_b0,lVar1 + 0x150);
    *(undefined1 **)(lVar1 + 0x148) = local_b8;
    *(code **)(lVar1 + 0x138) = local_c8;
    *(code **)(lVar1 + 0x140) = local_c0;
    *(undefined8 *)(lVar1 + 0x130) = local_d0;
  }
  else {
    *(undefined8 *)(lVar1 + 0x140) = 0;
    *(undefined8 *)(lVar1 + 0x148) = 0;
    *(undefined8 *)(lVar1 + 0x130) = 0;
    *(undefined8 *)(lVar1 + 0x138) = 0;
    (*pcVar2)(lVar1 + 0x150);
    if (local_c0 != (code *)0x0) goto LAB_01487d14;
  }
  pcVar2 = local_c8;
  *(undefined8 *)(*(long *)(param_1 + 0x5e0) + 0xa8) = 0x400000000;
  if (local_c8 != (code *)0x0) {
    local_c0 = (code *)0x0;
    local_b8 = (undefined1 *)0x0;
    local_d0 = (undefined1 *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar2)(alStack_b0);
  }
LAB_01487d64:
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  return;
}


