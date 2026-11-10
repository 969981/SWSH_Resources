/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013ced00; name: FUN_013ced00
 */


void FUN_013ced00(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long local_170;
  char *local_168;
  undefined8 local_160;
  long local_158;
  undefined1 *local_150;
  code *local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  long *local_130 [13];
  long local_c8;
  undefined1 *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  long *aplStack_a0 [12];
  long local_38;
  
  if ((*(long *)(param_1 + 0x68) == 0) ||
     (puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar5 == (undefined8 *)0x0)) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    plVar2 = (long *)(**(code **)*puVar5)(puVar5);
    plVar3 = (long *)FUN_0132d9a0();
    puVar6 = (undefined8 *)0x0;
    if (plVar2 != (long *)0x0) {
      do {
        if (plVar2 == plVar3) {
          puVar6 = puVar5 + -10;
          goto LAB_013ced64;
        }
        plVar2 = (long *)*plVar2;
      } while (plVar2 != (long *)0x0);
      puVar6 = (undefined8 *)0x0;
    }
  }
LAB_013ced64:
  FUN_01321c80(&local_38,*(undefined8 *)(param_1 + 0x90));
  FUN_013224a0(*(undefined8 *)(param_1 + 0x90),param_2);
  lVar4 = puVar6[0x6c];
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  local_c0 = &LAB_013d2970;
  local_b8 = FUN_013d2a10;
  local_b0 = &LAB_013d2a20;
  local_a8 = &LAB_013d2a30;
  aplStack_a0[0] = &local_38;
  FUN_01323050(lVar4,&local_c0);
  pcVar1 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (undefined1 *)0x0;
    local_a8 = (undefined1 *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar1)(aplStack_a0);
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  FUN_013a5170(&local_170);
  lVar4 = local_170;
  if (local_170 != 0) {
    (**(code **)(*(long *)(local_170 + 0x48) + 0x18))();
    local_170 = 0;
  }
  FUN_0130a910(lVar4,0);
  FUN_013a5170(&local_170);
  lVar4 = local_170;
  if (local_170 != 0) {
    (**(code **)(*(long *)(local_170 + 0x48) + 0x18))();
    local_170 = 0;
  }
  local_130[0] = &local_38;
  local_150 = &LAB_013d2a40;
  local_148 = FUN_013d2ae0;
  local_140 = &LAB_013d2af0;
  local_138 = &LAB_013d2b00;
  FUN_0130a080(&local_c8,lVar4,&local_150);
  if (local_c8 != 0) {
    (**(code **)(*(long *)(local_c8 + 0x48) + 0x18))();
    local_c8 = 0;
  }
  pcVar1 = local_148;
  if (local_148 != (code *)0x0) {
    local_140 = (undefined1 *)0x0;
    local_138 = (undefined1 *)0x0;
    local_150 = (undefined1 *)0x0;
    local_148 = (code *)0x0;
    (*pcVar1)(local_130);
  }
  local_170 = 0xa90d4a093ad30da;
  local_168 = "Play_Camp_Throw_Ball";
  local_160 = 0x14;
  local_158 = 0;
  FUN_012d6d40(&local_170);
  if (local_158 != 0) {
    (**(code **)(*(long *)(local_158 + 0x48) + 0x18))();
    local_158 = 0;
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


