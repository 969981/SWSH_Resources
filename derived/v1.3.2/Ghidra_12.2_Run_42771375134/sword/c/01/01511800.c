/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01511800; name: FUN_01511800
 */


void FUN_01511800(long param_1)

{
  ulong *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined *local_170;
  long local_168;
  undefined8 local_160;
  code *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [96];
  undefined8 local_e0;
  code *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [104];
  long local_58;
  
  puVar4 = PTR_DAT_02710ad8;
  local_168 = *(long *)(param_1 + 0x5b8);
  local_170 = PTR_DAT_02710ad8 + 0x10;
  if (local_168 != 0) {
    (**(code **)(*(long *)(local_168 + 0x48) + 0x10))();
  }
  local_150 = 0;
  uStack_148 = 0;
  local_160 = 0;
  local_158 = (code *)0x0;
  if (*(code **)(param_1 + 0x5d0) != (code *)0x0) {
    (**(code **)(param_1 + 0x5d0))(param_1 + 0x5e0,auStack_140);
    local_160 = *(undefined8 *)(param_1 + 0x5c0);
    local_158 = *(code **)(param_1 + 0x5c8);
    local_150 = *(undefined8 *)(param_1 + 0x5d0);
    uStack_148 = *(undefined8 *)(param_1 + 0x5d8);
  }
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  local_d8 = (code *)0x0;
  if (*(code **)(param_1 + 0x650) != (code *)0x0) {
    (**(code **)(param_1 + 0x650))(param_1 + 0x660,auStack_c0);
    local_e0 = *(undefined8 *)(param_1 + 0x640);
    local_d8 = *(code **)(param_1 + 0x648);
    local_d0 = *(undefined8 *)(param_1 + 0x650);
    uStack_c8 = *(undefined8 *)(param_1 + 0x658);
  }
  local_170 = PTR_DAT_02710ad0 + 0x10;
  if (local_168 != 0) {
    plVar11 = *(long **)(param_1 + 0x9f0);
    lVar5 = FUN_006e72a0();
    puVar3 = PTR_DAT_02710920;
    if (lVar5 != 0) {
      lVar10 = 0;
      do {
        FUN_01511640(&local_58,&local_170,lVar10);
        uVar7 = plVar11[1];
        puVar1 = (ulong *)puVar3;
        if (local_58 != 0) {
          puVar1 = (ulong *)(local_58 + 0x58);
        }
        uVar6 = *puVar1;
        if ((uVar7 - 1 & uVar7) == 0) {
          plVar8 = *(long **)(*plVar11 + (uVar7 - 1 & uVar6) * 8);
          do {
            do {
              plVar8 = (long *)*plVar8;
            } while (plVar8[1] != uVar6);
          } while (plVar8[2] != uVar6);
        }
        else {
          uVar9 = uVar6;
          if (uVar7 <= uVar6) {
            uVar9 = 0;
            if (uVar7 != 0) {
              uVar9 = uVar6 / uVar7;
            }
            uVar9 = uVar6 - uVar9 * uVar7;
          }
          plVar8 = *(long **)(*plVar11 + uVar9 * 8);
          do {
            do {
              plVar8 = (long *)*plVar8;
            } while (plVar8[1] != uVar6);
          } while (plVar8[2] != uVar6);
        }
        *(undefined1 *)((long)plVar8 + 0x18) = 0;
        if (local_58 != 0) {
          (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
          local_58 = 0;
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 != lVar5);
    }
  }
  local_170 = puVar4 + 0x10;
  if (local_168 == 0) {
    local_168 = 0;
    pcVar2 = local_d8;
  }
  else {
    FUN_006e2100(local_168,&local_170);
    lVar5 = local_168;
    local_168 = 0;
    pcVar2 = local_d8;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
      pcVar2 = local_d8;
    }
  }
  local_d8 = pcVar2;
  if (pcVar2 != (code *)0x0) {
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    (*pcVar2)(auStack_c0);
  }
  pcVar2 = local_158;
  if (local_158 != (code *)0x0) {
    local_150 = 0;
    uStack_148 = 0;
    local_160 = 0;
    local_158 = (code *)0x0;
    (*pcVar2)(auStack_140);
  }
  if (local_168 != 0) {
    (**(code **)(*(long *)(local_168 + 0x48) + 0x18))();
  }
  return;
}


