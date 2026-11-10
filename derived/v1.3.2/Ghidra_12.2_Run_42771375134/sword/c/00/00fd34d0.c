/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fd34d0; name: FUN_00fd34d0
 */


void FUN_00fd34d0(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 local_240;
  undefined8 local_238;
  undefined1 *local_230;
  code *local_228;
  undefined1 *local_220;
  undefined1 *local_218;
  long alStack_210 [12];
  undefined1 *local_1b0;
  code *local_1a8;
  undefined1 *local_1a0;
  undefined1 *local_198;
  long alStack_190 [12];
  undefined1 *local_130;
  code *local_128;
  code *local_120;
  undefined1 *local_118;
  long alStack_110 [12];
  undefined1 *local_b0;
  code *local_a8;
  code *local_a0;
  undefined1 *local_98;
  long alStack_90 [12];
  
  *(undefined8 *)(*(long *)(param_1 + 0x5f0) + 0x3d8) = 0x8388476c29ef4029;
  lVar2 = *(long *)(param_1 + 0x5f0);
  pcVar1 = *(code **)(lVar2 + 0xb8);
  local_b0 = &LAB_00fd5640;
  local_a8 = FUN_00fd57b0;
  local_a0 = FUN_00fd57c0;
  local_98 = &LAB_00fd57d0;
  alStack_90[0] = param_1;
  if (pcVar1 == (code *)0x0) {
LAB_00fd3558:
    (*local_a0)(alStack_90,lVar2 + 0xd0);
    *(undefined1 **)(lVar2 + 200) = local_98;
    *(code **)(lVar2 + 0xb8) = local_a8;
    *(code **)(lVar2 + 0xc0) = local_a0;
    *(undefined8 *)(lVar2 + 0xb0) = local_b0;
  }
  else {
    *(undefined8 *)(lVar2 + 0xc0) = 0;
    *(undefined8 *)(lVar2 + 200) = 0;
    *(undefined8 *)(lVar2 + 0xb0) = 0;
    *(undefined8 *)(lVar2 + 0xb8) = 0;
    (*pcVar1)(lVar2 + 0xd0);
    if (local_a0 != (code *)0x0) goto LAB_00fd3558;
  }
  lVar2 = *(long *)(param_1 + 0x5f0);
  pcVar1 = *(code **)(lVar2 + 0x138);
  local_130 = &LAB_00fd57e0;
  local_128 = FUN_00fd5ba0;
  local_118 = &LAB_00fd5bc0;
  local_120 = FUN_00fd5bb0;
  alStack_110[0] = param_1;
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(lVar2 + 0x140) = 0;
    *(undefined8 *)(lVar2 + 0x148) = 0;
    *(undefined8 *)(lVar2 + 0x130) = 0;
    *(undefined8 *)(lVar2 + 0x138) = 0;
    (*pcVar1)(lVar2 + 0x150);
    if (local_120 == (code *)0x0) goto LAB_00fd3610;
  }
  (*local_120)(alStack_110,lVar2 + 0x150);
  *(undefined1 **)(lVar2 + 0x148) = local_118;
  *(code **)(lVar2 + 0x138) = local_128;
  *(code **)(lVar2 + 0x140) = local_120;
  *(undefined8 *)(lVar2 + 0x130) = local_130;
LAB_00fd3610:
  local_1b0 = &LAB_00fd5bd0;
  local_1a8 = FUN_00fd5c90;
  local_1a0 = &LAB_00fd5ca0;
  local_198 = &LAB_00fd5cb0;
  local_230 = &LAB_00fd5cc0;
  local_228 = FUN_00fd5ce0;
  local_220 = &LAB_00fd5cf0;
  local_240 = 0x9c07bb506d0adf1b;
  local_238 = 0xcbf29ce484222645;
  local_218 = &LAB_00fd5d00;
  alStack_210[0] = param_1;
  alStack_190[0] = param_1;
  FUN_016b8000(*(undefined8 *)(param_1 + 0x5f0),&local_240,&local_230,&local_1b0);
  pcVar1 = local_228;
  lVar2 = *(long *)(param_1 + 0x5f0);
  *(undefined8 *)(lVar2 + 0x448) = 0xea098fb3ae0fcccc;
  *(char **)(lVar2 + 0x450) = "Play_UI_common_menu_scroll";
  *(undefined8 *)(lVar2 + 0x458) = 0x1a;
  if (local_228 != (code *)0x0) {
    local_220 = (undefined1 *)0x0;
    local_218 = (undefined1 *)0x0;
    local_230 = (undefined1 *)0x0;
    local_228 = (code *)0x0;
    (*pcVar1)(alStack_210);
  }
  pcVar1 = local_1a8;
  if (local_1a8 != (code *)0x0) {
    local_1a0 = (undefined1 *)0x0;
    local_198 = (undefined1 *)0x0;
    local_1b0 = (undefined1 *)0x0;
    local_1a8 = (code *)0x0;
    (*pcVar1)(alStack_190);
  }
  pcVar1 = local_128;
  if (local_128 != (code *)0x0) {
    local_120 = (code *)0x0;
    local_118 = (undefined1 *)0x0;
    local_130 = (undefined1 *)0x0;
    local_128 = (code *)0x0;
    (*pcVar1)(alStack_110);
  }
  pcVar1 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = (code *)0x0;
    local_98 = (undefined1 *)0x0;
    local_b0 = (undefined1 *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar1)(alStack_90);
  }
  return;
}


