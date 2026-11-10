/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0141e220; name: FUN_0141e220
 */


bool FUN_0141e220(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  code *pcVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  code *local_148;
  undefined1 auStack_130 [96];
  long local_d0;
  code *pcStack_c8;
  undefined8 local_c0;
  code *pcStack_b8;
  undefined1 auStack_b0 [96];
  
  lVar7 = *(long *)(param_1 + 0x2a0);
  local_148 = (code *)0x0;
  if (*(code **)(param_1 + 0x30) == (code *)0x0) {
    local_c0 = 0;
    pcStack_b8 = (code *)0x0;
    local_d0 = 0;
    pcStack_c8 = (code *)0x0;
    lVar5 = local_d0;
    pcVar6 = pcStack_c8;
  }
  else {
    (**(code **)(param_1 + 0x30))(param_1 + 0x40,auStack_130);
    lVar1 = *(long *)(param_1 + 0x20);
    pcVar3 = *(code **)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    pcVar4 = *(code **)(param_1 + 0x38);
    local_c0 = 0;
    pcStack_b8 = (code *)0x0;
    local_d0 = 0;
    pcStack_c8 = (code *)0x0;
    local_148 = pcVar3;
    lVar5 = local_d0;
    pcVar6 = pcStack_c8;
    if ((pcVar4 != (code *)0x0) &&
       ((*pcVar4)(auStack_130,auStack_b0), lVar5 = lVar1, pcVar6 = pcVar3, local_c0 = uVar2,
       pcStack_b8 = pcVar4, pcVar3 != (code *)0x0)) {
      local_148 = (code *)0x0;
      local_d0 = lVar1;
      pcStack_c8 = pcVar3;
      (*pcVar3)(auStack_130);
      lVar5 = local_d0;
      pcVar6 = pcStack_c8;
    }
  }
  local_d0 = lVar5;
  pcStack_c8 = pcVar6;
  if (pcVar6 != (code *)0x0) {
    local_c0 = 0;
    pcStack_b8 = (code *)0x0;
    local_d0 = 0;
    pcStack_c8 = (code *)0x0;
    (*pcVar6)(auStack_b0);
  }
  if (local_148 != (code *)0x0) {
    (*local_148)(auStack_130);
  }
  local_148 = (code *)0x0;
  uVar8 = (ulong)(lVar5 != 0);
  if (*(code **)(param_1 + 0xb0) == (code *)0x0) {
    local_c0 = 0;
    pcStack_b8 = (code *)0x0;
    local_d0 = 0;
    pcStack_c8 = (code *)0x0;
    lVar5 = local_d0;
    pcVar6 = pcStack_c8;
  }
  else {
    (**(code **)(param_1 + 0xb0))(param_1 + 0xc0,auStack_130);
    lVar1 = *(long *)(param_1 + 0xa0);
    pcVar3 = *(code **)(param_1 + 0xa8);
    uVar2 = *(undefined8 *)(param_1 + 0xb0);
    pcVar4 = *(code **)(param_1 + 0xb8);
    local_c0 = 0;
    pcStack_b8 = (code *)0x0;
    local_d0 = 0;
    pcStack_c8 = (code *)0x0;
    local_148 = pcVar3;
    lVar5 = local_d0;
    pcVar6 = pcStack_c8;
    if ((pcVar4 != (code *)0x0) &&
       ((*pcVar4)(auStack_130,auStack_b0), lVar5 = lVar1, pcVar6 = pcVar3, local_c0 = uVar2,
       pcStack_b8 = pcVar4, pcVar3 != (code *)0x0)) {
      local_148 = (code *)0x0;
      local_d0 = lVar1;
      pcStack_c8 = pcVar3;
      (*pcVar3)(auStack_130);
      lVar5 = local_d0;
      pcVar6 = pcStack_c8;
    }
  }
  local_d0 = lVar5;
  pcStack_c8 = pcVar6;
  if (pcVar6 != (code *)0x0) {
    local_c0 = 0;
    pcStack_b8 = (code *)0x0;
    local_d0 = 0;
    pcStack_c8 = (code *)0x0;
    (*pcVar6)(auStack_b0);
  }
  if (local_148 != (code *)0x0) {
    (*local_148)(auStack_130);
  }
  local_148 = (code *)0x0;
  if (lVar5 != 0) {
    uVar8 = uVar8 + 1;
  }
  if (*(code **)(param_1 + 0x130) == (code *)0x0) {
    local_c0 = 0;
    pcStack_b8 = (code *)0x0;
    local_d0 = 0;
    pcStack_c8 = (code *)0x0;
    lVar5 = local_d0;
    pcVar6 = pcStack_c8;
  }
  else {
    (**(code **)(param_1 + 0x130))(param_1 + 0x140,auStack_130);
    lVar1 = *(long *)(param_1 + 0x120);
    pcVar3 = *(code **)(param_1 + 0x128);
    uVar2 = *(undefined8 *)(param_1 + 0x130);
    pcVar4 = *(code **)(param_1 + 0x138);
    local_c0 = 0;
    pcStack_b8 = (code *)0x0;
    local_d0 = 0;
    pcStack_c8 = (code *)0x0;
    local_148 = pcVar3;
    lVar5 = local_d0;
    pcVar6 = pcStack_c8;
    if ((pcVar4 != (code *)0x0) &&
       ((*pcVar4)(auStack_130,auStack_b0), lVar5 = lVar1, pcVar6 = pcVar3, local_c0 = uVar2,
       pcStack_b8 = pcVar4, pcVar3 != (code *)0x0)) {
      local_148 = (code *)0x0;
      local_d0 = lVar1;
      pcStack_c8 = pcVar3;
      (*pcVar3)(auStack_130);
      lVar5 = local_d0;
      pcVar6 = pcStack_c8;
    }
  }
  local_d0 = lVar5;
  pcStack_c8 = pcVar6;
  if (pcVar6 != (code *)0x0) {
    local_c0 = 0;
    pcStack_b8 = (code *)0x0;
    local_d0 = 0;
    pcStack_c8 = (code *)0x0;
    (*pcVar6)(auStack_b0);
  }
  if (local_148 != (code *)0x0) {
    (*local_148)(auStack_130);
  }
  local_148 = (code *)0x0;
  if (lVar5 != 0) {
    uVar8 = uVar8 + 1;
  }
  if (*(code **)(param_1 + 0x1b0) == (code *)0x0) {
    local_c0 = 0;
    pcStack_b8 = (code *)0x0;
    local_d0 = 0;
    pcStack_c8 = (code *)0x0;
    lVar5 = local_d0;
    pcVar6 = pcStack_c8;
  }
  else {
    (**(code **)(param_1 + 0x1b0))(param_1 + 0x1c0,auStack_130);
    lVar1 = *(long *)(param_1 + 0x1a0);
    pcVar3 = *(code **)(param_1 + 0x1a8);
    uVar2 = *(undefined8 *)(param_1 + 0x1b0);
    pcVar4 = *(code **)(param_1 + 0x1b8);
    local_c0 = 0;
    pcStack_b8 = (code *)0x0;
    local_d0 = 0;
    pcStack_c8 = (code *)0x0;
    local_148 = pcVar3;
    lVar5 = local_d0;
    pcVar6 = pcStack_c8;
    if ((pcVar4 != (code *)0x0) &&
       ((*pcVar4)(auStack_130,auStack_b0), lVar5 = lVar1, pcVar6 = pcVar3, local_c0 = uVar2,
       pcStack_b8 = pcVar4, pcVar3 != (code *)0x0)) {
      local_148 = (code *)0x0;
      local_d0 = lVar1;
      pcStack_c8 = pcVar3;
      (*pcVar3)(auStack_130);
      lVar5 = local_d0;
      pcVar6 = pcStack_c8;
    }
  }
  local_d0 = lVar5;
  pcStack_c8 = pcVar6;
  if (pcVar6 != (code *)0x0) {
    local_c0 = 0;
    pcStack_b8 = (code *)0x0;
    local_d0 = 0;
    pcStack_c8 = (code *)0x0;
    (*pcVar6)(auStack_b0);
  }
  if (local_148 != (code *)0x0) {
    (*local_148)(auStack_130);
  }
  return lVar7 != -0x340d631b7bddd9bb || uVar8 != -(ulong)(lVar5 != 0);
}


