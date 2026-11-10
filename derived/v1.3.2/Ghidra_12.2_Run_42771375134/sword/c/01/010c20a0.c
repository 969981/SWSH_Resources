/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010c20a0; name: FUN_010c20a0
 */


void FUN_010c20a0(long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *local_b0;
  code *local_a8;
  code *local_a0;
  undefined1 *local_98;
  long alStack_90 [12];
  
  plVar1 = (long *)FUN_00ffdc80(param_1 + 0x100,"grid_00");
  *(long **)(param_1 + 0x5e0) = plVar1;
  (**(code **)(*plVar1 + 0x50))();
  local_b0 = (undefined1 *)0x0;
  FUN_016b7990(*(undefined8 *)(param_1 + 0x5e0),&local_b0,1,0);
  FUN_016b2d70(*(undefined8 *)(param_1 + 0x5e0),1);
  FUN_016b2da0(*(undefined8 *)(param_1 + 0x5e0),1);
  FUN_016b2d70(*(undefined8 *)(param_1 + 0x5e0),0);
  FUN_016b2eb0(*(undefined8 *)(param_1 + 0x5e0));
  lVar3 = *(long *)(param_1 + 0x5e0);
  pcVar2 = *(code **)(lVar3 + 0xb8);
  local_b0 = &LAB_010c2d40;
  local_a8 = FUN_010c2e80;
  local_98 = &LAB_010c2ea0;
  local_a0 = FUN_010c2e90;
  alStack_90[0] = param_1;
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(lVar3 + 0xc0) = 0;
    *(undefined8 *)(lVar3 + 200) = 0;
    *(undefined8 *)(lVar3 + 0xb0) = 0;
    *(undefined8 *)(lVar3 + 0xb8) = 0;
    (*pcVar2)(lVar3 + 0xd0);
    if (local_a0 == (code *)0x0) goto LAB_010c21a4;
  }
  (*local_a0)(alStack_90,lVar3 + 0xd0);
  *(undefined1 **)(lVar3 + 200) = local_98;
  *(code **)(lVar3 + 0xb8) = local_a8;
  *(code **)(lVar3 + 0xc0) = local_a0;
  *(undefined8 *)(lVar3 + 0xb0) = local_b0;
LAB_010c21a4:
  pcVar2 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = (code *)0x0;
    local_98 = (undefined1 *)0x0;
    local_b0 = (undefined1 *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar2)(alStack_90);
  }
  return;
}


