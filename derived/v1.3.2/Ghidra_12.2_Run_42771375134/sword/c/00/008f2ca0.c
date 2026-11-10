/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f2ca0; name: FUN_008f2ca0
 */


void FUN_008f2ca0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong *puVar6;
  ulong uVar7;
  long *plVar8;
  
  puVar1 = PTR_DAT_02710860;
  plVar5 = *(long **)(param_1 + 0x60);
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  puVar6 = (ulong *)(lVar2 + 0x80);
  uVar4 = *puVar6;
  uVar7 = 0;
  plVar8 = (long *)(param_1 + 0x110);
  do {
    if (0xf < uVar4) goto LAB_008f2f18;
    *(long **)(lVar2 + uVar4 * 8) = plVar5;
    *puVar6 = *puVar6 + 1;
    lVar2 = (**(code **)(*plVar5 + 0x10))(plVar5,0x90,8);
    if (lVar2 == 0) {
      (**(code **)(*plVar5 + 0xb8))(plVar5);
    }
    FUN_00883c20(lVar2,*(undefined8 *)(param_1 + 0x60));
    *(long **)(lVar2 + 8) = plVar5;
    *(long *)(lVar2 + 0x10) = lVar2;
    *(undefined8 *)(lVar2 + 0x18) = 0x90;
    *(undefined8 *)(lVar2 + 0x20) = 8;
    *puVar6 = *puVar6 - 1;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    if (plVar8[-5] != 0) {
      (**(code **)(*(long *)(plVar8[-5] + 0x48) + 0x18))();
      plVar8[-5] = 0;
    }
    plVar8[-5] = lVar2;
    plVar5 = *(long **)(param_1 + 0x60);
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (0xf < *(ulong *)(lVar2 + 0x80)) goto LAB_008f2f18;
    *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar5;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    lVar3 = (**(code **)(*plVar5 + 0x10))(plVar5,0x90,8);
    if (lVar3 == 0) {
      (**(code **)(*plVar5 + 0xb8))(plVar5);
    }
    FUN_00883c20(lVar3,*(undefined8 *)(param_1 + 0x60));
    *(long **)(lVar3 + 8) = plVar5;
    *(long *)(lVar3 + 0x10) = lVar3;
    *(undefined8 *)(lVar3 + 0x18) = 0x90;
    *(undefined8 *)(lVar3 + 0x20) = 8;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    if (*plVar8 != 0) {
      (**(code **)(*(long *)(*plVar8 + 0x48) + 0x18))();
      *plVar8 = 0;
    }
    *plVar8 = lVar3;
    plVar5 = *(long **)(param_1 + 0x60);
    uVar7 = uVar7 + 1;
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    puVar6 = (ulong *)(lVar2 + 0x80);
    uVar4 = *puVar6;
    plVar8 = plVar8 + 1;
  } while (uVar7 < 5);
  if (uVar4 < 0x10) {
    *(long **)(lVar2 + uVar4 * 8) = plVar5;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    lVar2 = (**(code **)(*plVar5 + 0x10))(plVar5,0x90,8);
    if (lVar2 == 0) {
      (**(code **)(*plVar5 + 0xb8))(plVar5);
    }
    FUN_00883c20(lVar2,*(undefined8 *)(param_1 + 0x60));
    *(long **)(lVar2 + 8) = plVar5;
    *(long *)(lVar2 + 0x10) = lVar2;
    *(undefined8 *)(lVar2 + 0x18) = 0x90;
    *(undefined8 *)(lVar2 + 0x20) = 8;
    *puVar6 = *puVar6 - 1;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0x138) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x138) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x138) = 0;
    }
    *(long *)(param_1 + 0x138) = lVar2;
    return;
  }
LAB_008f2f18:
                    /* WARNING: Subroutine does not return */
  abort();
}


