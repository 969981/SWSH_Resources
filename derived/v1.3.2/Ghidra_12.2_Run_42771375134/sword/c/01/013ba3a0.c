/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013ba3a0; name: FUN_013ba3a0
 */


void FUN_013ba3a0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  int iVar6;
  undefined4 uVar7;
  long *plVar8;
  code *pcVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  
  iVar6 = FUN_0132a1f0((void *)(param_1 + 0x1d0));
  if (iVar6 < 2) {
    *(undefined8 *)(param_1 + 600) = *(undefined8 *)(param_1 + 0x8c0);
    *(undefined8 *)(param_1 + 0x250) = *(undefined8 *)(param_1 + 0x8b8);
    *(undefined8 *)(param_1 + 0x278) = *(undefined8 *)(param_1 + 0x8e0);
    *(undefined8 *)(param_1 + 0x270) = *(undefined8 *)(param_1 + 0x8d8);
    *(undefined8 *)(param_1 + 0x268) = *(undefined8 *)(param_1 + 0x8d0);
    puVar1 = PTR_DAT_02710848;
    *(undefined8 *)(param_1 + 0x260) = *(undefined8 *)(param_1 + 0x8c8);
    lVar12 = *(long *)(*(long *)puVar1 + 0x90);
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
    }
    lVar10 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
    }
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
    }
    bVar5 = FUN_01510f00(lVar10,0xb8668e3a88fe6f97);
    uVar7 = FUN_015114c0(lVar10,0xe9f0e67361952b51);
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
    }
    *(undefined4 *)(param_1 + 0x328) = uVar7;
    *(byte *)(param_1 + 0x32c) = bVar5 & 1;
    FUN_013ba5f0(param_1);
    *(undefined1 *)(param_1 + 0x990) = 1;
    puVar11 = (undefined8 *)0x0;
    if (*(long *)(param_1 + 0x68) != 0) {
      puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
      if (puVar11 != (undefined8 *)0x0) {
        plVar8 = (long *)(**(code **)*puVar11)(puVar11);
        lVar12 = FUN_0132d9a0();
        for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
          if (plVar8 == (long *)lVar12) {
            puVar11 = puVar11 + -10;
            goto LAB_013ba500;
          }
        }
      }
      puVar11 = (undefined8 *)0x0;
    }
LAB_013ba500:
    memcpy(puVar11 + 0x12,(void *)(param_1 + 0x1d0),0x2a4);
  }
  if (*(code **)(param_1 + 0x630) == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  (**(code **)(param_1 + 0x630))(param_1 + 0x650);
  puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar8 = (long *)(**(code **)*puVar11)(puVar11);
  lVar12 = FUN_0132d9a0();
  for (; plVar8 != (long *)lVar12; plVar8 = (long *)*plVar8) {
  }
  *(undefined4 *)(puVar11 + 5) = 8;
  pcVar9 = *(code **)(param_1 + 0x158);
  if (pcVar9 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x160) = 0;
    *(undefined8 *)(param_1 + 0x168) = 0;
    *(undefined8 *)(param_1 + 0x150) = 0;
    *(undefined8 *)(param_1 + 0x158) = 0;
    (*pcVar9)(param_1 + 0x170);
  }
  puVar4 = PTR_LAB_027290a8;
  puVar3 = PTR_LAB_027290a0;
  puVar2 = PTR_LAB_02729098;
  puVar1 = PTR_LAB_02729090;
  *(long *)(param_1 + 0x170) = param_1;
  *(undefined **)(param_1 + 0x178) = puVar1;
  *(undefined8 *)(param_1 + 0x180) = 0;
  puVar1 = PTR_LAB_027290b0;
  *(undefined **)(param_1 + 0x150) = puVar2;
  *(undefined **)(param_1 + 0x158) = puVar3;
  *(undefined **)(param_1 + 0x160) = puVar4;
  *(undefined **)(param_1 + 0x168) = puVar1;
  return;
}


