/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0101e950; name: FUN_0101e950
 */


void FUN_0101e950(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  long *plVar8;
  long *plVar9;
  long lStack_120;
  undefined *local_118;
  undefined8 uStack_110;
  undefined *local_c0;
  code *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  long local_a0;
  undefined *puStack_98;
  undefined8 local_90;
  
  plVar8 = *(long **)(param_1 + 0x47f0);
  lVar5 = (**(code **)(*plVar8 + 0x10))(plVar8,0xf0,0x10);
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar8;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  FUN_01020a90(lVar5);
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  plVar9 = *(long **)(param_1 + 0x50);
  *(long *)(param_1 + 0x50) = lVar5;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))(plVar9);
    (**(code **)(**(long **)(param_1 + 0x58) + 0x18))
              (*(long **)(param_1 + 0x58),plVar9,*(undefined8 *)(param_1 + 0x60),
               *(undefined8 *)(param_1 + 0x68));
    lVar5 = *(long *)(param_1 + 0x50);
  }
  *(long **)(param_1 + 0x58) = plVar8;
  *(undefined8 *)(param_1 + 0x60) = 0xf0;
  puStack_98 = PTR_LAB_027236c8;
  *(undefined8 *)(param_1 + 0x68) = 0x10;
  puVar4 = PTR_LAB_027236e0;
  puVar3 = PTR_FUN_027236d8;
  puVar2 = PTR_LAB_027236d0;
  puVar1 = PTR_FUN_027236c0;
  local_90 = 0;
  local_c0 = PTR_LAB_027236d0;
  local_b8 = (code *)PTR_FUN_027236c0;
  local_b0 = PTR_FUN_027236d8;
  local_a8 = PTR_LAB_027236e0;
  local_118 = puStack_98;
  uStack_110 = 0;
  pcVar7 = *(code **)(lVar5 + 0x18);
  lStack_120 = param_1;
  local_a0 = param_1;
  if (pcVar7 != (code *)0x0) {
    *(undefined8 *)(lVar5 + 0x20) = 0;
    *(undefined8 *)(lVar5 + 0x28) = 0;
    *(undefined8 *)(lVar5 + 0x10) = 0;
    *(undefined8 *)(lVar5 + 0x18) = 0;
    (*pcVar7)(lVar5 + 0x30);
  }
  if (puVar3 != (undefined *)0x0) {
    (*(code *)puVar3)(&lStack_120,lVar5 + 0x30);
    *(undefined **)(lVar5 + 0x28) = puVar4;
    *(undefined **)(lVar5 + 0x18) = puVar1;
    *(undefined **)(lVar5 + 0x20) = puVar3;
    *(undefined8 *)(lVar5 + 0x10) = puVar2;
  }
  if (puVar1 != (undefined *)0x0) {
    (*(code *)puVar1)(&lStack_120);
  }
  pcVar7 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (undefined *)0x0;
    local_a8 = (undefined *)0x0;
    local_c0 = (undefined *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar7)(&local_a0);
  }
  return;
}


