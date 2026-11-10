/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01427530; name: FUN_01427530
 */


void FUN_01427530(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_38;
  
  puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar6 = (long *)(**(code **)*puVar11)(puVar11);
  lVar7 = FUN_01410b60();
  for (; plVar6 != (long *)lVar7; plVar6 = (long *)*plVar6) {
  }
  *(undefined4 *)(puVar11 + 4) = 9;
  puVar12 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar6 = (long *)(**(code **)*puVar12)(puVar12);
  puVar1 = PTR_DAT_02717528;
  puVar11 = (undefined8 *)PTR_DAT_02717530;
  if (((*PTR_DAT_02717528 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_02717528), puVar11 = (undefined8 *)PTR_DAT_02717530,
     iVar5 != 0)) {
    uVar9 = FUN_00b8c810();
    *(undefined8 *)PTR_DAT_02717530 = uVar9;
    __cxa_guard_release(PTR_DAT_02717528);
    puVar11 = (undefined8 *)PTR_DAT_02717530;
  }
  for (; plVar6 != puVar11; plVar6 = (long *)*plVar6) {
  }
  local_50 = 0xd4477b9fa8d74118;
  local_48 = "cooking_call";
  local_40 = 0xc;
  local_38 = 0;
  PTR_DAT_02717530 = (undefined *)puVar11;
  lVar7 = FUN_014291e0(puVar12[0x9f],&local_50);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar8 = *(long *)(param_1 + 0x108);
  *(long *)(param_1 + 0x108) = lVar7;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
  }
  puVar12 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar6 = (long *)(**(code **)*puVar12)(puVar12);
  if (((*puVar1 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_02717528), iVar5 != 0)) {
    uVar9 = FUN_00b8c810();
    *puVar11 = uVar9;
    __cxa_guard_release(PTR_DAT_02717528);
  }
  for (; plVar6 != puVar11; plVar6 = (long *)*plVar6) {
  }
  local_50 = 0xb2aef51fb54b4f70;
  local_48 = "cooking_order";
  local_40 = 0xd;
  local_38 = 0;
  lVar7 = FUN_01429330(puVar12[0x9f],&local_50);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar8 = *(long *)(param_1 + 0x110);
  *(long *)(param_1 + 0x110) = lVar7;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
  }
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar11 != (undefined8 *)0x0)) {
    plVar6 = (long *)(**(code **)*puVar11)(puVar11);
    lVar7 = FUN_01410b60();
    for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      if (plVar6 == (long *)lVar7) {
        puVar11 = puVar11 + -10;
        goto LAB_0142776c;
      }
    }
  }
  puVar11 = (undefined8 *)0x0;
LAB_0142776c:
  FUN_0140e0b0(puVar11,3);
  pcVar10 = *(code **)(param_1 + 0x88);
  *(undefined1 *)(param_1 + 0x100) = 0;
  if (pcVar10 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    (*pcVar10)(param_1 + 0xa0);
  }
  puVar4 = PTR_LAB_02729af0;
  puVar3 = PTR_LAB_02729ae8;
  puVar2 = PTR_LAB_02729ae0;
  puVar1 = PTR_LAB_02729ad8;
  *(long *)(param_1 + 0xa0) = param_1;
  *(undefined **)(param_1 + 0xa8) = puVar1;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  puVar1 = PTR_LAB_02729af8;
  *(undefined **)(param_1 + 0x80) = puVar2;
  *(undefined **)(param_1 + 0x88) = puVar3;
  *(undefined **)(param_1 + 0x90) = puVar4;
  *(undefined **)(param_1 + 0x98) = puVar1;
  return;
}


