/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010bf310; name: FUN_010bf310
 */


/* WARNING: Removing unreachable block (ram,0x010bf544) */
/* WARNING: Removing unreachable block (ram,0x010bf578) */

void FUN_010bf310(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long alStack_1b0 [12];
  undefined1 *local_150;
  code *local_148;
  code *local_140;
  undefined1 *local_138;
  long alStack_130 [12];
  undefined1 *local_d0;
  code *local_c8;
  code *local_c0;
  undefined1 *local_b8;
  long alStack_b0 [12];
  
  local_d0 = (undefined1 *)0x970ffa262cc5f8b1;
  lVar2 = FUN_00ffde30(param_1 + 0x100,&local_d0);
  *(long *)(param_1 + 0x5e8) = lVar2;
  pcVar4 = *(code **)(lVar2 + 0x1c8);
  local_d0 = &LAB_010c0280;
  local_c8 = FUN_010c0420;
  local_c0 = FUN_010c0430;
  local_b8 = &LAB_010c0440;
  alStack_b0[0] = param_1;
  if (pcVar4 == (code *)0x0) {
LAB_010bf3b4:
    (*local_c0)(alStack_b0,lVar2 + 0x1e0);
    *(undefined1 **)(lVar2 + 0x1d8) = local_b8;
    *(code **)(lVar2 + 0x1c8) = local_c8;
    *(code **)(lVar2 + 0x1d0) = local_c0;
    *(undefined8 *)(lVar2 + 0x1c0) = local_d0;
  }
  else {
    *(undefined8 *)(lVar2 + 0x1d0) = 0;
    *(undefined8 *)(lVar2 + 0x1d8) = 0;
    *(undefined8 *)(lVar2 + 0x1c0) = 0;
    *(undefined8 *)(lVar2 + 0x1c8) = 0;
    (*pcVar4)(lVar2 + 0x1e0);
    if (local_c0 != (code *)0x0) goto LAB_010bf3b4;
  }
  *(undefined1 *)(lVar2 + 0x7a2) = 0;
  lVar2 = *(long *)(param_1 + 0x5e8);
  pcVar4 = *(code **)(lVar2 + 0x248);
  local_150 = &LAB_010c0450;
  local_148 = FUN_010c05a0;
  local_140 = FUN_010c05b0;
  local_138 = &LAB_010c05c0;
  alStack_130[0] = param_1;
  if (pcVar4 != (code *)0x0) {
    *(undefined8 *)(lVar2 + 0x250) = 0;
    *(undefined8 *)(lVar2 + 600) = 0;
    *(undefined8 *)(lVar2 + 0x240) = 0;
    *(undefined8 *)(lVar2 + 0x248) = 0;
    (*pcVar4)(lVar2 + 0x260);
    if (local_140 == (code *)0x0) goto LAB_010bf46c;
  }
  (*local_140)(alStack_130,lVar2 + 0x260);
  *(undefined1 **)(lVar2 + 600) = local_138;
  *(code **)(lVar2 + 0x248) = local_148;
  *(code **)(lVar2 + 0x250) = local_140;
  *(undefined8 *)(lVar2 + 0x240) = local_150;
LAB_010bf46c:
  lVar2 = *(long *)(param_1 + 0x5e8);
  pcVar4 = *(code **)(lVar2 + 200);
  alStack_1b0[0] = param_1;
  if (pcVar4 != (code *)0x0) {
    *(undefined8 *)(lVar2 + 0xd0) = 0;
    *(undefined8 *)(lVar2 + 0xd8) = 0;
    *(undefined8 *)(lVar2 + 0xc0) = 0;
    *(undefined8 *)(lVar2 + 200) = 0;
    (*pcVar4)(lVar2 + 0xe0);
  }
  FUN_010c0740(alStack_1b0,lVar2 + 0xe0);
  *(undefined1 **)(lVar2 + 0xd8) = &LAB_010c0750;
  *(code **)(lVar2 + 200) = FUN_010c0730;
  *(code **)(lVar2 + 0xd0) = FUN_010c0740;
  *(undefined8 *)(lVar2 + 0xc0) = &LAB_010c05d0;
  puVar1 = PTR_DAT_027243b0;
  lVar2 = 0x10;
  do {
    lVar3 = FUN_00ffda40(param_1 + 0x100,puVar1 + lVar2);
    pcVar4 = *(code **)(lVar3 + 0x158);
    if (pcVar4 != (code *)0x0) {
      *(undefined8 *)(lVar3 + 0x160) = 0;
      *(undefined8 *)(lVar3 + 0x168) = 0;
      *(undefined8 *)(lVar3 + 0x150) = 0;
      *(undefined8 *)(lVar3 + 0x158) = 0;
      (*pcVar4)(lVar3 + 0x170);
    }
    lVar2 = lVar2 + 0x28;
  } while (lVar2 != 0x650);
  FUN_010c0730(alStack_1b0);
  pcVar4 = local_148;
  if (local_148 != (code *)0x0) {
    local_140 = (code *)0x0;
    local_138 = (undefined1 *)0x0;
    local_150 = (undefined1 *)0x0;
    local_148 = (code *)0x0;
    (*pcVar4)(alStack_130);
  }
  pcVar4 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (code *)0x0;
    local_b8 = (undefined1 *)0x0;
    local_d0 = (undefined1 *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar4)(alStack_b0);
  }
  return;
}


