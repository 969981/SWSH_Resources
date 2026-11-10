/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010cb4c0; name: FUN_010cb4c0
 */


void FUN_010cb4c0(long param_1)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  
  if (*(long *)(param_1 + 0x68) != 0) {
    puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    if (puVar6 == (undefined8 *)0x0) goto LAB_010cb518;
    plVar2 = (long *)(**(code **)*puVar6)(puVar6);
    lVar3 = FUN_010c8950();
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)lVar3) {
        puVar6 = puVar6 + -10;
        goto LAB_010cb518;
      }
    }
  }
  puVar6 = (undefined8 *)0x0;
LAB_010cb518:
  lVar3 = FUN_010c6c10(puVar6);
  plVar2 = *(long **)(lVar3 + 8);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  lVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,0xf8,8);
  if (lVar4 == 0) {
    (**(code **)(*plVar2 + 0xb8))(plVar2);
  }
  FUN_0116fcc0(lVar4,plVar2);
  *(long **)(lVar4 + 8) = plVar2;
  *(long *)(lVar4 + 0x10) = lVar4;
  *(undefined8 *)(lVar4 + 0x18) = 0xf8;
  *(undefined8 *)(lVar4 + 0x20) = 8;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x90) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  *(long *)(param_1 + 0x90) = lVar4;
  lVar3 = FUN_010c6c10(puVar6);
  uVar1 = *(undefined4 *)(lVar3 + 0xb8);
  lVar3 = FUN_010c6c10(puVar6);
  FUN_01170550(lVar4,uVar1,*(undefined1 *)(lVar3 + 0xbc));
  lVar3 = FUN_010c6c10(puVar6);
  lVar4 = *(long *)(param_1 + 0x90);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar5 = *(long *)(lVar3 + 0xb0);
  *(long *)(lVar3 + 0xb0) = lVar4;
  if (lVar5 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x010cb648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
  return;
}


