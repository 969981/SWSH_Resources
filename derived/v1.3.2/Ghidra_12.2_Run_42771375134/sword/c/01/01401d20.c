/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01401d20; name: FUN_01401d20
 */


void FUN_01401d20(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  code *pcVar8;
  undefined8 *puVar9;
  undefined1 local_34 [4];
  
  uVar4 = *(uint *)(param_1 + 0xcc);
  puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar6 = (long *)(**(code **)*puVar9)(puVar9);
  lVar7 = FUN_013f9d40();
  for (; plVar6 != (long *)lVar7; plVar6 = (long *)*plVar6) {
  }
  *(uint *)(puVar9[9] + 0x428) = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
  puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar6 = (long *)(**(code **)*puVar9)(puVar9);
  lVar7 = FUN_013f9d40();
  for (; plVar6 != (long *)lVar7; plVar6 = (long *)*plVar6) {
  }
  lVar7 = puVar9[9];
  *(undefined8 *)(lVar7 + 0x42c) = *(undefined8 *)(param_1 + 0x98);
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  uVar3 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(lVar7 + 0x44c) = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(lVar7 + 0x444) = uVar1;
  *(undefined8 *)(lVar7 + 0x43c) = uVar3;
  *(undefined8 *)(lVar7 + 0x434) = uVar2;
  puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar6 = (long *)(**(code **)*puVar9)(puVar9);
  lVar7 = FUN_013f9d40();
  for (; plVar6 != (long *)lVar7; plVar6 = (long *)*plVar6) {
  }
  iVar5 = FUN_0132a1f0(*(undefined8 *)(puVar9[9] + 0x420));
  if (1 < iVar5) {
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar9 != (undefined8 *)0x0)) {
      plVar6 = (long *)(**(code **)*puVar9)(puVar9);
      lVar7 = FUN_013f9d40();
      for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
        if (plVar6 == (long *)lVar7) {
          puVar9 = puVar9 + -10;
          goto LAB_01401e74;
        }
      }
    }
    puVar9 = (undefined8 *)0x0;
LAB_01401e74:
    FUN_013fafe0(puVar9,0xa76b6ebbb3ddf808,1,1);
    FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x90),0);
    if (*(int *)(param_1 + 0x570) == 4) {
      FUN_008c9980(*(undefined8 *)(param_1 + 0x78),0);
    }
    pcVar8 = *(code **)(param_1 + 0xd8);
    if (pcVar8 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0xe0) = 0;
      *(undefined8 *)(param_1 + 0xe8) = 0;
      *(undefined8 *)(param_1 + 0xd0) = 0;
      *(undefined8 *)(param_1 + 0xd8) = 0;
      (*pcVar8)(param_1 + 0xf0);
    }
    *(undefined1 **)(param_1 + 0xd0) = &LAB_01406200;
    *(undefined1 **)(param_1 + 0xd8) = &LAB_01406210;
    *(undefined1 **)(param_1 + 0xe0) = &LAB_01406220;
    *(undefined1 **)(param_1 + 0xe8) = &LAB_01406230;
    *(undefined4 *)(param_1 + 0x570) = 0xd;
  }
  puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar6 = (long *)(**(code **)*puVar9)(puVar9);
  lVar7 = FUN_013f9d40();
  for (; plVar6 != (long *)lVar7; plVar6 = (long *)*plVar6) {
  }
  if (*(long *)(puVar9[9] + 0x120) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar6 = (long *)(**(code **)*puVar9)(puVar9);
  lVar7 = FUN_013f9d40();
  for (; plVar6 != (long *)lVar7; plVar6 = (long *)*plVar6) {
  }
  local_34[0] = 1;
  (**(code **)(puVar9[9] + 0x120))(puVar9[9] + 0x140,local_34);
  *(undefined1 *)(param_1 + 0x558) = 1;
  return;
}


