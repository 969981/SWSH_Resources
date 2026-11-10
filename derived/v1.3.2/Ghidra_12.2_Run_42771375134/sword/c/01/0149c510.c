/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0149c510; name: FUN_0149c510
 */


void FUN_0149c510(long param_1)

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
  
  *(undefined8 *)(*(long *)(param_1 + 0x5e0) + 0x3d8) = 0xa1982e1098a281c;
  lVar2 = *(long *)(param_1 + 0x5e0);
  pcVar1 = *(code **)(lVar2 + 0xb8);
  local_b0 = &LAB_0149e0d0;
  local_a8 = FUN_0149e0f0;
  local_a0 = FUN_0149e100;
  local_98 = &LAB_0149e110;
  alStack_90[0] = param_1;
  if (pcVar1 == (code *)0x0) {
LAB_0149c598:
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
    if (local_a0 != (code *)0x0) goto LAB_0149c598;
  }
  lVar2 = *(long *)(param_1 + 0x5e0);
  pcVar1 = *(code **)(lVar2 + 0x138);
  local_130 = &LAB_0149e120;
  local_128 = FUN_0149e150;
  local_118 = &LAB_0149e170;
  local_120 = FUN_0149e160;
  alStack_110[0] = param_1;
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(lVar2 + 0x140) = 0;
    *(undefined8 *)(lVar2 + 0x148) = 0;
    *(undefined8 *)(lVar2 + 0x130) = 0;
    *(undefined8 *)(lVar2 + 0x138) = 0;
    (*pcVar1)(lVar2 + 0x150);
    if (local_120 == (code *)0x0) goto LAB_0149c650;
  }
  (*local_120)(alStack_110,lVar2 + 0x150);
  *(undefined1 **)(lVar2 + 0x148) = local_118;
  *(code **)(lVar2 + 0x138) = local_128;
  *(code **)(lVar2 + 0x140) = local_120;
  *(undefined8 *)(lVar2 + 0x130) = local_130;
LAB_0149c650:
  local_1b0 = &LAB_0149e180;
  local_1a8 = FUN_0149e6d0;
  local_1a0 = &LAB_0149e6e0;
  local_198 = &LAB_0149e6f0;
  local_230 = &LAB_0149e700;
  local_228 = FUN_0149e710;
  local_220 = &LAB_0149e720;
  local_240 = 0xe893de4787b4c200;
  local_238 = 0xcbf29ce484222645;
  local_218 = &LAB_0149e730;
  alStack_210[0] = param_1;
  alStack_190[0] = param_1;
  FUN_016b8000(*(undefined8 *)(param_1 + 0x5e0),&local_240,&local_230,&local_1b0);
  pcVar1 = local_228;
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


