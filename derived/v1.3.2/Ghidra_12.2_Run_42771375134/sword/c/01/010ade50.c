/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010ade50; name: FUN_010ade50
 */


void FUN_010ade50(long param_1,ulong param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  code *local_128;
  long alStack_110 [12];
  undefined1 *local_b0;
  code *local_a8;
  code *local_a0;
  undefined1 *local_98;
  long alStack_90 [12];
  
  lVar3 = *(long *)(param_1 + 0x618);
  local_b0 = &LAB_010af900;
  local_a8 = FUN_010af910;
  local_a0 = FUN_010af920;
  local_98 = &LAB_010af930;
  alStack_90[0] = param_1;
  if ((param_2 & 1) == 0) {
    local_128 = *(code **)(lVar3 + 0xb8);
    if (local_128 == (code *)0x0) goto LAB_010adf48;
    plVar1 = (long *)(lVar3 + 0xd0);
    *(undefined8 *)(lVar3 + 0xc0) = 0;
    *(undefined8 *)(lVar3 + 200) = 0;
    *(undefined8 *)(lVar3 + 0xb0) = 0;
    *(undefined8 *)(lVar3 + 0xb8) = 0;
  }
  else {
    plVar1 = alStack_110;
    local_128 = FUN_010af910;
    pcVar2 = *(code **)(lVar3 + 0xb8);
    alStack_110[0] = param_1;
    if (pcVar2 != (code *)0x0) {
      *(undefined8 *)(lVar3 + 0xc0) = 0;
      *(undefined8 *)(lVar3 + 200) = 0;
      *(undefined8 *)(lVar3 + 0xb0) = 0;
      *(undefined8 *)(lVar3 + 0xb8) = 0;
      (*pcVar2)(lVar3 + 0xd0);
    }
    FUN_010af920(plVar1,lVar3 + 0xd0);
    *(undefined1 **)(lVar3 + 200) = &LAB_010af930;
    *(code **)(lVar3 + 0xb8) = FUN_010af910;
    *(code **)(lVar3 + 0xc0) = FUN_010af920;
    *(undefined8 *)(lVar3 + 0xb0) = &LAB_010af900;
  }
  (*local_128)(plVar1);
LAB_010adf48:
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


