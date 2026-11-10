/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012e9020; name: FUN_012e9020
 */


void FUN_012e9020(long param_1,uint param_2)

{
  code **ppcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  code *pcVar12;
  undefined8 *puVar13;
  code *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  long local_a0;
  undefined4 local_98;
  long local_38;
  
  uVar7 = FUN_012e81b0();
  local_38 = param_1;
  if ((param_2 < 3) && ((uVar7 & 1) != 0)) {
    lVar8 = FUN_012b65a0(*(undefined8 *)(param_1 + 0x710));
    local_98 = FUN_008783b0();
    local_c0 = (code *)&LAB_012ec990;
    local_b8 = FUN_012ecaa0;
    local_b0 = &LAB_012ecd00;
    local_a8 = &LAB_012ecd10;
    local_a0 = lVar8;
    FUN_0131e930(&local_c0);
    pcVar12 = local_b8;
    if (local_b8 != (code *)0x0) {
      local_b0 = (undefined1 *)0x0;
      local_a8 = (undefined1 *)0x0;
      local_c0 = (code *)0x0;
      local_b8 = (code *)0x0;
      (*pcVar12)(&local_a0);
    }
  }
  else if (param_1 == 0) goto LAB_012e90d4;
  (**(code **)(*(long *)(param_1 + 0x48) + 0x10))();
LAB_012e90d4:
  uVar7 = FUN_012f2a90(&local_38,param_2);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if ((uVar7 & 1) == 0) {
    uVar2 = FUN_012b6590(*(undefined8 *)(param_1 + 0x710));
    uVar3 = FUN_012b65b0(*(undefined8 *)(param_1 + 0x710));
    uVar4 = FUN_012b68c0(*(undefined8 *)(param_1 + 0x710));
    FUN_012b68f0(*(undefined8 *)(param_1 + 0x710),param_2);
    uVar5 = FUN_012b68c0(*(undefined8 *)(param_1 + 0x710));
    if (uVar4 < uVar5) {
      *(undefined1 *)(param_1 + 0x894) = 0;
      *(undefined1 *)(param_1 + 0x850) = 0;
      uVar7 = FUN_012e81b0(param_1);
      if ((uVar7 & 1) != 0) {
        FUN_01528a20(0xc);
      }
    }
    if ((*(long *)(param_1 + 0x68) == 0) ||
       (puVar13 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar13 == (undefined8 *)0x0))
    {
      lVar8 = FUN_012d52c0(0,&local_c0);
    }
    else {
      puVar9 = (undefined8 *)(**(code **)*puVar13)(puVar13);
      if (((*PTR_DAT_02715078 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_02715078), iVar6 != 0)) {
        uVar11 = FUN_00a87090();
        *(undefined8 *)PTR_DAT_02715080 = uVar11;
        __cxa_guard_release(PTR_DAT_02715078);
      }
      puVar10 = (undefined8 *)0x0;
      if (puVar9 != (undefined8 *)0x0) {
        do {
          if (puVar9 == (undefined8 *)PTR_DAT_02715080) {
            puVar10 = puVar13 + -10;
            goto LAB_012e91c4;
          }
          puVar9 = (undefined8 *)*puVar9;
        } while (puVar9 != (undefined8 *)0x0);
        puVar10 = (undefined8 *)0x0;
      }
LAB_012e91c4:
      lVar8 = FUN_012d52c0(puVar10,&local_c0);
    }
    if (lVar8 != 0) {
      uVar4 = FUN_012b65b0(*(undefined8 *)(param_1 + 0x710));
      if ((uVar3 < uVar4) && (uVar7 = FUN_012e81b0(param_1), (uVar7 & 1) != 0)) {
        uVar2 = FUN_012b6ac0(*(undefined8 *)(param_1 + 0x710));
        if (uVar2 != 0x15) {
          FUN_014bb440(&local_c0,PTR_DAT_02727ac8 + (ulong)uVar2 * 0x18);
          ppcVar1 = &local_c0;
          if (local_a8 != (undefined1 *)0x0) {
            ppcVar1 = &local_b8;
          }
          pcVar12 = *ppcVar1;
          if ((local_a8 != (undefined1 *)0x0) && (local_c0 != (code *)0x0)) {
            (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
          }
          local_c0 = (code *)0x0;
          local_b8 = (code *)0xcbf29ce484222645;
          local_b0 = &DAT_01d38550;
          local_a8 = (undefined1 *)0x0;
          if (local_a0 != 0) {
            (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
            local_a0 = 0;
          }
          FUN_012e0340(0,lVar8,pcVar12);
        }
        FUN_012b65b0(*(undefined8 *)(param_1 + 0x710));
        FUN_01313e70();
        FUN_006cf0a0(&local_c0);
        FUN_012d6d40(&local_c0);
      }
      else {
        uVar3 = FUN_012b6590(*(undefined8 *)(param_1 + 0x710));
        if (uVar3 <= uVar2) {
          return;
        }
        FUN_014bb440(&local_c0,PTR_DAT_02727ac8 + 0xc0);
        ppcVar1 = &local_c0;
        if (local_a8 != (undefined1 *)0x0) {
          ppcVar1 = &local_b8;
        }
        pcVar12 = *ppcVar1;
        if ((local_a8 != (undefined1 *)0x0) && (local_c0 != (code *)0x0)) {
          (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
        }
        local_c0 = (code *)0x0;
        local_b8 = (code *)0xcbf29ce484222645;
        local_b0 = &DAT_01d38550;
        local_a8 = (undefined1 *)0x0;
        if (local_a0 != 0) {
          (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
          local_a0 = 0;
        }
        FUN_012e0340(0,lVar8,pcVar12);
        local_c0 = (code *)0x11b6a811644f8920;
        local_b8 = (code *)0x1d22361;
        local_b0 = (undefined1 *)0x15;
        local_a8 = (undefined1 *)0x0;
        FUN_012d6f60(&local_c0,param_1);
      }
      if (local_a8 != (undefined1 *)0x0) {
        (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
      }
    }
  }
  return;
}


