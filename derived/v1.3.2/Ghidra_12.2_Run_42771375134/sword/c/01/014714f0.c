/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014714f0; name: FUN_014714f0
 */


void FUN_014714f0(long param_1)

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
  
  *(undefined8 *)(*(long *)(param_1 + 0x600) + 0x3d8) = 0xe5e04290c5405c01;
  FUN_01471770(*(long *)(param_1 + 0x5e0) +
               (ulong)*(uint *)(*(long *)(param_1 + 0x5d0) + 0x10) * 0x218);
  lVar2 = *(long *)(param_1 + 0x600);
  pcVar1 = *(code **)(lVar2 + 0xb8);
  local_b0 = &LAB_01471e50;
  local_a8 = FUN_01471ec0;
  local_98 = &LAB_01471ee0;
  local_a0 = FUN_01471ed0;
  alStack_90[0] = param_1;
  if (pcVar1 == (code *)0x0) {
LAB_01471590:
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
    if (local_a0 != (code *)0x0) goto LAB_01471590;
  }
  lVar2 = *(long *)(param_1 + 0x600);
  pcVar1 = *(code **)(lVar2 + 0x138);
  local_130 = &LAB_01471ef0;
  local_128 = FUN_01471f80;
  local_118 = &LAB_01471fa0;
  local_120 = FUN_01471f90;
  alStack_110[0] = param_1;
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(lVar2 + 0x140) = 0;
    *(undefined8 *)(lVar2 + 0x148) = 0;
    *(undefined8 *)(lVar2 + 0x130) = 0;
    *(undefined8 *)(lVar2 + 0x138) = 0;
    (*pcVar1)(lVar2 + 0x150);
    if (local_120 == (code *)0x0) goto LAB_01471648;
  }
  (*local_120)(alStack_110,lVar2 + 0x150);
  *(undefined1 **)(lVar2 + 0x148) = local_118;
  *(code **)(lVar2 + 0x138) = local_128;
  *(code **)(lVar2 + 0x140) = local_120;
  *(undefined8 *)(lVar2 + 0x130) = local_130;
LAB_01471648:
  local_1b0 = &LAB_01471fb0;
  local_1a8 = FUN_014721a0;
  local_1a0 = &LAB_014721b0;
  local_198 = &LAB_014721c0;
  local_230 = &LAB_014721d0;
  local_228 = FUN_014722b0;
  local_220 = &LAB_014722c0;
  local_240 = 0x3fb5738326ec2b1;
  local_238 = 0xcbf29ce484222645;
  local_218 = &LAB_014722d0;
  alStack_210[0] = param_1;
  alStack_190[0] = param_1;
  FUN_016b8000(*(undefined8 *)(param_1 + 0x600),&local_240,&local_230,&local_1b0);
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


