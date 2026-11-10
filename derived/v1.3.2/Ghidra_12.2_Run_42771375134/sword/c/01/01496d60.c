/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01496d60; name: FUN_01496d60
 */


void FUN_01496d60(long param_1)

{
  long lVar1;
  code *pcVar2;
  long alStack_1a0 [12];
  undefined1 *local_140;
  code *local_138;
  code *local_130;
  undefined1 *local_128;
  long alStack_120 [12];
  undefined1 *local_c0;
  code *local_b8;
  code *local_b0;
  undefined1 *local_a8;
  long alStack_a0 [12];
  
  local_c0 = (undefined1 *)0xc083879d589db54d;
  lVar1 = FUN_00ffde30(param_1 + 0x100,&local_c0);
  *(long *)(param_1 + 0x5f0) = lVar1;
  pcVar2 = *(code **)(lVar1 + 0x1c8);
  local_c0 = &LAB_01497c50;
  local_b8 = FUN_01498150;
  local_b0 = FUN_01498160;
  local_a8 = &LAB_01498170;
  alStack_a0[0] = param_1;
  if (pcVar2 == (code *)0x0) {
LAB_01496dfc:
    (*local_b0)(alStack_a0,lVar1 + 0x1e0);
    *(undefined1 **)(lVar1 + 0x1d8) = local_a8;
    *(code **)(lVar1 + 0x1c8) = local_b8;
    *(code **)(lVar1 + 0x1d0) = local_b0;
    *(undefined8 *)(lVar1 + 0x1c0) = local_c0;
  }
  else {
    *(undefined8 *)(lVar1 + 0x1d0) = 0;
    *(undefined8 *)(lVar1 + 0x1d8) = 0;
    *(undefined8 *)(lVar1 + 0x1c0) = 0;
    *(undefined8 *)(lVar1 + 0x1c8) = 0;
    (*pcVar2)(lVar1 + 0x1e0);
    if (local_b0 != (code *)0x0) goto LAB_01496dfc;
  }
  *(undefined1 *)(lVar1 + 0x7a2) = 0;
  lVar1 = *(long *)(param_1 + 0x5f0);
  pcVar2 = *(code **)(lVar1 + 0x248);
  local_140 = &LAB_01498180;
  local_138 = FUN_01498290;
  local_130 = FUN_014982a0;
  local_128 = &LAB_014982b0;
  alStack_120[0] = param_1;
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(lVar1 + 0x250) = 0;
    *(undefined8 *)(lVar1 + 600) = 0;
    *(undefined8 *)(lVar1 + 0x240) = 0;
    *(undefined8 *)(lVar1 + 0x248) = 0;
    (*pcVar2)(lVar1 + 0x260);
    if (local_130 == (code *)0x0) goto LAB_01496eb4;
  }
  (*local_130)(alStack_120,lVar1 + 0x260);
  *(undefined1 **)(lVar1 + 600) = local_128;
  *(code **)(lVar1 + 0x248) = local_138;
  *(code **)(lVar1 + 0x250) = local_130;
  *(undefined8 *)(lVar1 + 0x240) = local_140;
LAB_01496eb4:
  lVar1 = *(long *)(param_1 + 0x5f0);
  pcVar2 = *(code **)(lVar1 + 200);
  alStack_1a0[0] = param_1;
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(lVar1 + 0xd0) = 0;
    *(undefined8 *)(lVar1 + 0xd8) = 0;
    *(undefined8 *)(lVar1 + 0xc0) = 0;
    *(undefined8 *)(lVar1 + 200) = 0;
    (*pcVar2)(lVar1 + 0xe0);
  }
  FUN_01498600(alStack_1a0,lVar1 + 0xe0);
  *(undefined1 **)(lVar1 + 0xd8) = &LAB_01498610;
  *(code **)(lVar1 + 200) = FUN_014985f0;
  *(code **)(lVar1 + 0xd0) = FUN_01498600;
  *(undefined8 *)(lVar1 + 0xc0) = &LAB_014982c0;
  FUN_016b2da0(*(undefined8 *)(param_1 + 0x5f0),0);
  FUN_014985f0(alStack_1a0);
  pcVar2 = local_138;
  if (local_138 != (code *)0x0) {
    local_130 = (code *)0x0;
    local_128 = (undefined1 *)0x0;
    local_140 = (undefined1 *)0x0;
    local_138 = (code *)0x0;
    (*pcVar2)(alStack_120);
  }
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


