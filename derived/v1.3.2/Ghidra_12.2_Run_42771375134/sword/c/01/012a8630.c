/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012a8630; name: FUN_012a8630
 */


void FUN_012a8630(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  
  if (*(long *)(param_1 + 0x58) == 0) {
    plVar4 = *(long **)(param_1 + 8);
    plVar1 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4,0xb0,8);
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar2 + 0x80)) goto LAB_012a8838;
    *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar4;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    FUN_01860870(plVar1);
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    puVar5 = *(undefined8 **)(param_1 + 0x58);
    *(long **)(param_1 + 0x58) = plVar1;
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5);
      (**(code **)(**(long **)(param_1 + 0x60) + 0x18))
                (*(long **)(param_1 + 0x60),puVar5,*(undefined8 *)(param_1 + 0x68),
                 *(undefined8 *)(param_1 + 0x70));
      plVar1 = *(long **)(param_1 + 0x58);
    }
    *(long **)(param_1 + 0x60) = plVar4;
    *(undefined8 *)(param_1 + 0x68) = 0xb0;
    *(undefined8 *)(param_1 + 0x70) = 8;
    if (plVar1 != (long *)0x0) {
      uVar3 = FUN_007ad1c0(*(undefined8 *)PTR_DAT_02716748);
      (**(code **)(*plVar1 + 0x18))(plVar1,uVar3);
    }
  }
  if (*(long *)(param_1 + 200) == 0) {
    plVar1 = *(long **)(param_1 + 8);
    uVar3 = (**(code **)(*plVar1 + 0x10))(plVar1,0x50,8);
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar2 + 0x80)) {
LAB_012a8838:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar1;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    FUN_012ac4a0(uVar3,plVar1,0x32);
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    puVar5 = *(undefined8 **)(param_1 + 200);
    *(undefined8 *)(param_1 + 200) = uVar3;
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5);
      (**(code **)(**(long **)(param_1 + 0xd0) + 0x18))
                (*(long **)(param_1 + 0xd0),puVar5,*(undefined8 *)(param_1 + 0xd8),
                 *(undefined8 *)(param_1 + 0xe0));
    }
    *(long **)(param_1 + 0xd0) = plVar1;
    *(undefined8 *)(param_1 + 0xd8) = 0x50;
    *(undefined8 *)(param_1 + 0xe0) = 8;
    uVar3 = FUN_007ad1e0(*(undefined8 *)PTR_DAT_02716748);
    FUN_018530f0(uVar3,*(undefined8 *)(param_1 + 200));
  }
  *(undefined1 *)(param_1 + 0xf9) = 0;
  return;
}


