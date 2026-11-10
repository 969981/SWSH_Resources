/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01027020; name: FUN_01027020
 */


void FUN_01027020(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 local_a0;
  code *local_98;
  code *local_90;
  undefined8 local_88;
  undefined1 auStack_80 [96];
  
  lVar2 = *(long *)(param_1 + 0x58);
  local_90 = (code *)0x0;
  local_88 = 0;
  local_a0 = 0;
  local_98 = (code *)0x0;
  if ((code *)param_2[2] != (code *)0x0) {
    (*(code *)param_2[2])(param_2 + 4,auStack_80);
    local_a0 = *param_2;
    local_98 = (code *)param_2[1];
    local_90 = (code *)param_2[2];
    local_88 = param_2[3];
  }
  pcVar1 = *(code **)(lVar2 + 0x18);
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(lVar2 + 0x20) = 0;
    *(undefined8 *)(lVar2 + 0x28) = 0;
    *(undefined8 *)(lVar2 + 0x10) = 0;
    *(undefined8 *)(lVar2 + 0x18) = 0;
    (*pcVar1)(lVar2 + 0x30);
  }
  if (local_90 != (code *)0x0) {
    (*local_90)(auStack_80,lVar2 + 0x30);
    *(undefined8 *)(lVar2 + 0x28) = local_88;
    *(code **)(lVar2 + 0x18) = local_98;
    *(code **)(lVar2 + 0x20) = local_90;
    *(undefined8 *)(lVar2 + 0x10) = local_a0;
  }
  if (local_98 != (code *)0x0) {
    (*local_98)(auStack_80);
  }
  return;
}


