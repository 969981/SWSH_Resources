/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0142bf80; name: FUN_0142bf80
 */


void FUN_0142bf80(long param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long alStack_120 [12];
  undefined1 *local_c0;
  code *local_b8;
  code *local_b0;
  undefined1 *local_a8;
  long alStack_a0 [12];
  
  local_c0 = (undefined1 *)0x970ffa262cc5f8b1;
  uVar1 = FUN_00ffde30(param_1 + 0x100,&local_c0);
  *(undefined8 *)(param_1 + 0x650) = uVar1;
  FUN_016c2c80(uVar1,0,0);
  FUN_016c2c90(*(undefined8 *)(param_1 + 0x650),0);
  FUN_016c2ca0(*(undefined8 *)(param_1 + 0x650),1);
  FUN_0142c170(param_1,0xffffffffffffffff);
  lVar3 = *(long *)(param_1 + 0x650);
  pcVar2 = *(code **)(lVar3 + 0x248);
  local_c0 = &LAB_0142cd80;
  local_b8 = FUN_0142cde0;
  local_a8 = &LAB_0142ce00;
  local_b0 = FUN_0142cdf0;
  alStack_a0[0] = param_1;
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(lVar3 + 0x250) = 0;
    *(undefined8 *)(lVar3 + 600) = 0;
    *(undefined8 *)(lVar3 + 0x240) = 0;
    *(undefined8 *)(lVar3 + 0x248) = 0;
    (*pcVar2)(lVar3 + 0x260);
    if (local_b0 == (code *)0x0) goto LAB_0142c078;
  }
  (*local_b0)(alStack_a0,lVar3 + 0x260);
  *(undefined1 **)(lVar3 + 600) = local_a8;
  *(code **)(lVar3 + 0x248) = local_b8;
  *(code **)(lVar3 + 0x250) = local_b0;
  *(undefined8 *)(lVar3 + 0x240) = local_c0;
LAB_0142c078:
  lVar3 = *(long *)(param_1 + 0x650);
  pcVar2 = *(code **)(lVar3 + 200);
  alStack_120[0] = param_1;
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(lVar3 + 0xd0) = 0;
    *(undefined8 *)(lVar3 + 0xd8) = 0;
    *(undefined8 *)(lVar3 + 0xc0) = 0;
    *(undefined8 *)(lVar3 + 200) = 0;
    (*pcVar2)(lVar3 + 0xe0);
  }
  FUN_0142ce60(alStack_120,lVar3 + 0xe0);
  *(undefined1 **)(lVar3 + 0xd8) = &LAB_0142ce70;
  *(code **)(lVar3 + 200) = FUN_0142ce50;
  *(code **)(lVar3 + 0xd0) = FUN_0142ce60;
  *(undefined8 *)(lVar3 + 0xc0) = &LAB_0142ce10;
  FUN_016bef00(*(undefined8 *)(param_1 + 0x650));
  FUN_00ffa290(param_1,0,1);
  FUN_0142ce50(alStack_120);
  pcVar2 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (code *)0x0;
    local_a8 = (undefined1 *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar2)(alStack_a0);
  }
  return;
}


