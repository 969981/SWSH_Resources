/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010b0950; name: FUN_010b0950
 */


/* WARNING: Removing unreachable block (ram,0x010b0d7c) */
/* WARNING: Removing unreachable block (ram,0x010b0cfc) */
/* WARNING: Removing unreachable block (ram,0x010b0c7c) */
/* WARNING: Removing unreachable block (ram,0x010b0bfc) */
/* WARNING: Removing unreachable block (ram,0x010b0b7c) */
/* WARNING: Removing unreachable block (ram,0x010b0bb0) */
/* WARNING: Removing unreachable block (ram,0x010b0c30) */
/* WARNING: Removing unreachable block (ram,0x010b0cb0) */
/* WARNING: Removing unreachable block (ram,0x010b0d30) */
/* WARNING: Removing unreachable block (ram,0x010b0db0) */

void FUN_010b0950(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
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
  
  lVar3 = param_1 + 0x100;
  local_c0 = (undefined1 *)0x970ffa262cc5f8b1;
  lVar2 = FUN_00ffde30(lVar3,&local_c0);
  *(long *)(param_1 + 0x5f0) = lVar2;
  pcVar4 = *(code **)(lVar2 + 0x1c8);
  local_c0 = &LAB_010b37e0;
  local_b8 = FUN_010b3dc0;
  local_b0 = FUN_010b3dd0;
  local_a8 = &LAB_010b3de0;
  alStack_a0[0] = param_1;
  if (pcVar4 == (code *)0x0) {
LAB_010b09f0:
    (*local_b0)(alStack_a0,lVar2 + 0x1e0);
    *(undefined1 **)(lVar2 + 0x1d8) = local_a8;
    *(code **)(lVar2 + 0x1c8) = local_b8;
    *(code **)(lVar2 + 0x1d0) = local_b0;
    *(undefined8 *)(lVar2 + 0x1c0) = local_c0;
  }
  else {
    *(undefined8 *)(lVar2 + 0x1d0) = 0;
    *(undefined8 *)(lVar2 + 0x1d8) = 0;
    *(undefined8 *)(lVar2 + 0x1c0) = 0;
    *(undefined8 *)(lVar2 + 0x1c8) = 0;
    (*pcVar4)(lVar2 + 0x1e0);
    if (local_b0 != (code *)0x0) goto LAB_010b09f0;
  }
  *(undefined1 *)(lVar2 + 0x7a2) = 0;
  lVar2 = *(long *)(param_1 + 0x5f0);
  pcVar4 = *(code **)(lVar2 + 0x248);
  local_140 = &LAB_010b3df0;
  local_138 = FUN_010b4190;
  local_130 = FUN_010b41a0;
  local_128 = &LAB_010b41b0;
  alStack_120[0] = param_1;
  if (pcVar4 != (code *)0x0) {
    *(undefined8 *)(lVar2 + 0x250) = 0;
    *(undefined8 *)(lVar2 + 600) = 0;
    *(undefined8 *)(lVar2 + 0x240) = 0;
    *(undefined8 *)(lVar2 + 0x248) = 0;
    (*pcVar4)(lVar2 + 0x260);
    if (local_130 == (code *)0x0) goto LAB_010b0aa8;
  }
  (*local_130)(alStack_120,lVar2 + 0x260);
  *(undefined1 **)(lVar2 + 600) = local_128;
  *(code **)(lVar2 + 0x248) = local_138;
  *(code **)(lVar2 + 0x250) = local_130;
  *(undefined8 *)(lVar2 + 0x240) = local_140;
LAB_010b0aa8:
  lVar2 = *(long *)(param_1 + 0x5f0);
  pcVar4 = *(code **)(lVar2 + 200);
  alStack_1a0[0] = param_1;
  if (pcVar4 != (code *)0x0) {
    *(undefined8 *)(lVar2 + 0xd0) = 0;
    *(undefined8 *)(lVar2 + 0xd8) = 0;
    *(undefined8 *)(lVar2 + 0xc0) = 0;
    *(undefined8 *)(lVar2 + 200) = 0;
    (*pcVar4)(lVar2 + 0xe0);
  }
  FUN_010b5330(alStack_1a0,lVar2 + 0xe0);
  *(undefined1 **)(lVar2 + 0xd8) = &LAB_010b5340;
  *(code **)(lVar2 + 200) = FUN_010b5320;
  *(code **)(lVar2 + 0xd0) = FUN_010b5330;
  *(undefined8 *)(lVar2 + 0xc0) = &LAB_010b41c0;
  puVar1 = PTR_DAT_02724378;
  lVar2 = FUN_00ffda40(lVar3,PTR_DAT_02724378);
  pcVar4 = *(code **)(lVar2 + 0x158);
  if (pcVar4 != (code *)0x0) {
    *(undefined8 *)(lVar2 + 0x160) = 0;
    *(undefined8 *)(lVar2 + 0x168) = 0;
    *(undefined8 *)(lVar2 + 0x150) = 0;
    *(undefined8 *)(lVar2 + 0x158) = 0;
    (*pcVar4)(lVar2 + 0x170);
  }
  lVar2 = FUN_00ffda40(lVar3,puVar1 + 8);
  pcVar4 = *(code **)(lVar2 + 0x158);
  if (pcVar4 != (code *)0x0) {
    *(undefined8 *)(lVar2 + 0x160) = 0;
    *(undefined8 *)(lVar2 + 0x168) = 0;
    *(undefined8 *)(lVar2 + 0x150) = 0;
    *(undefined8 *)(lVar2 + 0x158) = 0;
    (*pcVar4)(lVar2 + 0x170);
  }
  lVar2 = FUN_00ffda40(lVar3,puVar1 + 0x10);
  pcVar4 = *(code **)(lVar2 + 0x158);
  if (pcVar4 != (code *)0x0) {
    *(undefined8 *)(lVar2 + 0x160) = 0;
    *(undefined8 *)(lVar2 + 0x168) = 0;
    *(undefined8 *)(lVar2 + 0x150) = 0;
    *(undefined8 *)(lVar2 + 0x158) = 0;
    (*pcVar4)(lVar2 + 0x170);
  }
  lVar2 = FUN_00ffda40(lVar3,puVar1 + 0x18);
  pcVar4 = *(code **)(lVar2 + 0x158);
  if (pcVar4 != (code *)0x0) {
    *(undefined8 *)(lVar2 + 0x160) = 0;
    *(undefined8 *)(lVar2 + 0x168) = 0;
    *(undefined8 *)(lVar2 + 0x150) = 0;
    *(undefined8 *)(lVar2 + 0x158) = 0;
    (*pcVar4)(lVar2 + 0x170);
  }
  lVar3 = FUN_00ffda40(lVar3,puVar1 + 0x20);
  pcVar4 = *(code **)(lVar3 + 0x158);
  if (pcVar4 != (code *)0x0) {
    *(undefined8 *)(lVar3 + 0x160) = 0;
    *(undefined8 *)(lVar3 + 0x168) = 0;
    *(undefined8 *)(lVar3 + 0x150) = 0;
    *(undefined8 *)(lVar3 + 0x158) = 0;
    (*pcVar4)(lVar3 + 0x170);
  }
  FUN_010b5320(alStack_1a0);
  pcVar4 = local_138;
  if (local_138 != (code *)0x0) {
    local_130 = (code *)0x0;
    local_128 = (undefined1 *)0x0;
    local_140 = (undefined1 *)0x0;
    local_138 = (code *)0x0;
    (*pcVar4)(alStack_120);
  }
  pcVar4 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (code *)0x0;
    local_a8 = (undefined1 *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar4)(alStack_a0);
  }
  return;
}


