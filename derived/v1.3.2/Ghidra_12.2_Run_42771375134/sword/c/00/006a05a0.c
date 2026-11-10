/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006a05a0; name: FUN_006a05a0
 */


void FUN_006a05a0(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *local_150;
  long local_148;
  undefined8 local_140;
  code *local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [96];
  undefined8 local_c0;
  code *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [112];
  
  FUN_006a9780(&local_150);
  uVar3 = FUN_00696de0();
  uVar4 = FUN_00696de0();
  FUN_006a0690(param_1,&local_150,uVar3,uVar4);
  local_150 = PTR_DAT_02710a48 + 0x10;
  if (local_148 == 0) {
    local_148 = 0;
    pcVar1 = local_b8;
  }
  else {
    FUN_006e2100(local_148,&local_150);
    lVar2 = local_148;
    local_148 = 0;
    pcVar1 = local_b8;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
      pcVar1 = local_b8;
    }
  }
  local_b8 = pcVar1;
  if (pcVar1 != (code *)0x0) {
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    local_b8 = (code *)0x0;
    (*pcVar1)(auStack_a0);
  }
  pcVar1 = local_138;
  if (local_138 != (code *)0x0) {
    local_130 = 0;
    uStack_128 = 0;
    local_140 = 0;
    local_138 = (code *)0x0;
    (*pcVar1)(auStack_120);
  }
  if (local_148 != 0) {
    (**(code **)(*(long *)(local_148 + 0x48) + 0x18))();
  }
  return;
}


