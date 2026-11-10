/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009e0200; name: FUN_009e0200
 */


void FUN_009e0200(long *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  
  puVar2 = PTR_DAT_02710860;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar4 + 0x80) < 0x10) {
    *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_1;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    lVar5 = (**(code **)(*param_1 + 0x10))(param_1,0x110,0x10);
    if (lVar5 == 0) {
      (**(code **)(*param_1 + 0xb8))(param_1);
    }
    FUN_00914720(lVar5,param_1,2);
    *(long **)(lVar5 + 8) = param_1;
    *(long *)(lVar5 + 0x10) = lVar5;
    *(undefined8 *)(lVar5 + 0x18) = 0x110;
    *(undefined8 *)(lVar5 + 0x20) = 0x10;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    puVar3 = PTR_DAT_02718ac8;
    if (*(long *)PTR_DAT_02718ac8 != 0) {
      (**(code **)(*(long *)(*(long *)PTR_DAT_02718ac8 + 0x48) + 0x18))();
      *(undefined8 *)puVar3 = 0;
    }
    plVar8 = (long *)PTR_DAT_02718ac0;
    plVar7 = (long *)PTR_DAT_02718ab8;
    uVar6 = 0;
    *(long *)puVar3 = lVar5;
    while( true ) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar4 + 0x80)) break;
      *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_1;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      lVar5 = (**(code **)(*param_1 + 0x10))(param_1,0x110,0x10);
      if (lVar5 == 0) {
        (**(code **)(*param_1 + 0xb8))(param_1);
      }
      FUN_00914720(lVar5,param_1,2);
      *(long **)(lVar5 + 8) = param_1;
      *(long *)(lVar5 + 0x10) = lVar5;
      *(undefined8 *)(lVar5 + 0x18) = 0x110;
      *(undefined8 *)(lVar5 + 0x20) = 0x10;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      if (*plVar7 != 0) {
        (**(code **)(*(long *)(*plVar7 + 0x48) + 0x18))();
        *plVar7 = 0;
      }
      uVar1 = *(undefined4 *)puVar2;
      *plVar7 = lVar5;
      lVar4 = nn::os::GetTlsValue(uVar1);
      if (0xf < *(ulong *)(lVar4 + 0x80)) break;
      *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_1;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      lVar5 = (**(code **)(*param_1 + 0x10))(param_1,0x110,0x10);
      if (lVar5 == 0) {
        (**(code **)(*param_1 + 0xb8))(param_1);
      }
      FUN_00914720(lVar5,param_1,2);
      *(long **)(lVar5 + 8) = param_1;
      *(long *)(lVar5 + 0x10) = lVar5;
      *(undefined8 *)(lVar5 + 0x18) = 0x110;
      *(undefined8 *)(lVar5 + 0x20) = 0x10;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      if (*plVar8 != 0) {
        (**(code **)(*(long *)(*plVar8 + 0x48) + 0x18))();
        *plVar8 = 0;
      }
      uVar6 = uVar6 + 1;
      plVar7 = plVar7 + 1;
      *plVar8 = lVar5;
      plVar8 = plVar8 + 1;
      if (4 < uVar6) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


