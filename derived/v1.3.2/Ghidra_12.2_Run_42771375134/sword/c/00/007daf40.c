/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007daf40; name: FUN_007daf40
 */


void FUN_007daf40(long param_1,long *param_2,undefined1 param_3,undefined1 param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  code *pcVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  undefined1 *local_e0;
  code *local_d8;
  code *local_d0;
  undefined1 *local_c8;
  long lStack_c0;
  undefined1 local_b8;
  undefined1 *local_58;
  
  uVar5 = *(ulong *)(param_1 + 0xd8);
  if (uVar5 != 0) {
    plVar7 = *(long **)(param_1 + 0xd0);
    plVar9 = plVar7;
LAB_007daf80:
    plVar1 = plVar9 + 2;
    do {
      if (*plVar9 != 0) {
        plVar7 = *(long **)(param_1 + 0xd0);
        uVar5 = *(ulong *)(param_1 + 0xd8);
        if (*(int *)(*plVar9 + 0x54) != 0) goto LAB_007db024;
      }
      plVar11 = plVar1;
      if (plVar1 != plVar7 + uVar5 * 2) {
        do {
          if (plVar11[-2] != 0) {
            (**(code **)(*(long *)(plVar11[-2] + 0x48) + 0x18))();
            plVar11[-2] = 0;
          }
          lVar6 = *plVar11;
          *plVar11 = 0;
          plVar11[-2] = lVar6;
          *(short *)(plVar11 + -1) = (short)plVar11[1];
          plVar11 = plVar11 + 2;
        } while (plVar7 + uVar5 * 2 != plVar11);
        plVar7 = *(long **)(param_1 + 0xd0);
        uVar5 = *(ulong *)(param_1 + 0xd8);
        plVar11 = plVar7 + uVar5 * 2;
      }
      if (plVar11[-2] != 0) {
        (**(code **)(*(long *)(plVar11[-2] + 0x48) + 0x18))();
        plVar11[-2] = 0;
        plVar7 = *(long **)(param_1 + 0xd0);
        uVar5 = *(ulong *)(param_1 + 0xd8);
      }
      uVar5 = uVar5 - 1;
      *(ulong *)(param_1 + 0xd8) = uVar5;
      if (plVar7 + uVar5 * 2 == plVar9) goto LAB_007db034;
    } while( true );
  }
LAB_007db03c:
  if (*param_2 == 0) {
    return;
  }
  if (*(int *)(*param_2 + 0x54) == 0) {
    return;
  }
  plVar7 = *(long **)(param_1 + 0xd0);
  lVar6 = *(long *)(param_1 + 0xd8);
  lVar10 = *param_2;
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  if (lVar6 != 0) {
    plVar9 = plVar7 + lVar6 * 2;
    if (lVar10 == 0) {
      do {
        if ((*plVar7 != 0) && (*(int *)(*plVar7 + 0x54) != 0)) {
          if (*plVar7 == 0) {
            local_e0 = (undefined1 *)0x0;
            goto LAB_007db168;
          }
          FUN_007dbe40(&local_e0);
          if (local_e0 == (undefined1 *)0x0) goto LAB_007db154;
          (**(code **)(*(long *)(local_e0 + 0x48) + 0x18))();
        }
        plVar7 = plVar7 + 2;
      } while (plVar7 != plVar9);
    }
    else {
      do {
        if ((*plVar7 != 0) && (*(int *)(*plVar7 + 0x54) != 0)) {
          if (*plVar7 == 0) {
            local_e0 = (undefined1 *)0x0;
          }
          else {
            FUN_007dbe40(&local_e0);
          }
          FUN_007dbe40(&local_58,lVar10);
          puVar4 = local_58;
          puVar3 = local_e0;
          if (local_58 != (undefined1 *)0x0) {
            (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
          }
          local_58 = (undefined1 *)0x0;
          if (local_e0 != (undefined1 *)0x0) {
            local_58 = (undefined1 *)0x0;
            (**(code **)(*(long *)(local_e0 + 0x48) + 0x18))();
            local_e0 = (undefined1 *)0x0;
          }
          if (puVar3 == puVar4) goto LAB_007db154;
        }
        plVar7 = plVar7 + 2;
      } while (plVar7 != plVar9);
    }
    plVar7 = plVar9;
  }
LAB_007db154:
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
  }
LAB_007db168:
  if ((long *)(*(long *)(param_1 + 0xd0) + *(long *)(param_1 + 0xd8) * 0x10) != plVar7) {
    return;
  }
  if (*param_2 == 0) {
    local_58 = (undefined1 *)0x0;
  }
  else {
    FUN_007dbe40(&local_58);
  }
  puVar3 = local_58;
  local_e0 = &LAB_007dc010;
  local_d8 = FUN_007dc040;
  local_d0 = FUN_007dc050;
  local_c8 = &LAB_007dc060;
  pcVar8 = *(code **)(local_58 + 0x68);
  puVar2 = (undefined8 *)(local_58 + 0x60);
  lStack_c0 = param_1;
  local_b8 = param_3;
  if (pcVar8 == (code *)0x0) {
LAB_007db1f0:
    (*local_d0)(&lStack_c0,puVar3 + 0x80);
    *(undefined1 **)(puVar3 + 0x78) = local_c8;
    *(code **)(puVar3 + 0x68) = local_d8;
    *(code **)(puVar3 + 0x70) = local_d0;
    *puVar2 = local_e0;
  }
  else {
    *(undefined8 *)(local_58 + 0x70) = 0;
    *(undefined8 *)(local_58 + 0x78) = 0;
    *puVar2 = 0;
    *(undefined8 *)(local_58 + 0x68) = 0;
    (*pcVar8)(local_58 + 0x80);
    if (local_d0 != (code *)0x0) goto LAB_007db1f0;
  }
  pcVar8 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    local_c8 = (undefined1 *)0x0;
    local_e0 = (undefined1 *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar8)(&lStack_c0);
  }
  if (local_58 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = (undefined1 *)0x0;
  }
  if (*param_2 == 0) {
    local_58 = (undefined1 *)0x0;
  }
  else {
    FUN_007dbe40(&local_58);
  }
  puVar3 = local_58;
  local_e0 = &LAB_007dc070;
  local_d8 = FUN_007dc090;
  local_d0 = FUN_007dc0a0;
  local_c8 = &LAB_007dc0b0;
  pcVar8 = *(code **)(local_58 + 0xe8);
  puVar2 = (undefined8 *)(local_58 + 0xe0);
  lStack_c0 = param_1;
  local_b8 = param_3;
  if (pcVar8 != (code *)0x0) {
    *(undefined8 *)(local_58 + 0xf0) = 0;
    *(undefined8 *)(local_58 + 0xf8) = 0;
    *puVar2 = 0;
    *(undefined8 *)(local_58 + 0xe8) = 0;
    (*pcVar8)(local_58 + 0x100);
    if (local_d0 == (code *)0x0) goto LAB_007db2fc;
  }
  (*local_d0)(&lStack_c0,puVar3 + 0x100);
  *(undefined1 **)(puVar3 + 0xf8) = local_c8;
  *(code **)(puVar3 + 0xe8) = local_d8;
  *(code **)(puVar3 + 0xf0) = local_d0;
  *puVar2 = local_e0;
LAB_007db2fc:
  pcVar8 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    local_c8 = (undefined1 *)0x0;
    local_e0 = (undefined1 *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar8)(&lStack_c0);
  }
  if (local_58 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = (undefined1 *)0x0;
  }
  local_e0 = (undefined1 *)*param_2;
  if (local_e0 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_e0 + 0x48) + 0x10))();
  }
  local_d8 = (code *)(CONCAT62(local_d8._2_6_,CONCAT11(param_4,param_3)) & 0xffffffffffff01ff);
  FUN_007dc0c0(param_1 + 0x90,&local_e0);
  if (local_e0 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_e0 + 0x48) + 0x18))();
  }
  return;
LAB_007db024:
  plVar9 = plVar1;
  if (plVar7 + uVar5 * 2 == plVar1) goto LAB_007db034;
  goto LAB_007daf80;
LAB_007db034:
  if (0xf < uVar5) {
    return;
  }
  goto LAB_007db03c;
}


