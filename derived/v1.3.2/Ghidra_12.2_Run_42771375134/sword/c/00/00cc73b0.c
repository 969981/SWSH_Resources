/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cc73b0; name: FUN_00cc73b0
 */


void FUN_00cc73b0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  puVar2 = PTR_DAT_0271c6e0;
  puVar1 = PTR_DAT_02710860;
  plVar7 = (long *)(param_1 + 0x670);
  uVar6 = 0;
  while( true ) {
    plVar5 = *(long **)(*(long *)puVar2 + 0x48);
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (0xf < *(ulong *)(lVar3 + 0x80)) break;
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar5;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    lVar4 = (**(code **)(*plVar5 + 0x10))(plVar5,0x158,8);
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0xb8))(plVar5);
    }
    FUN_016ab300(lVar4,plVar5);
    *(long **)(lVar4 + 8) = plVar5;
    *(long *)(lVar4 + 0x10) = lVar4;
    *(undefined8 *)(lVar4 + 0x18) = 0x158;
    *(undefined8 *)(lVar4 + 0x20) = 8;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    if (plVar7[-2] != 0) {
      (**(code **)(*(long *)(plVar7[-2] + 0x48) + 0x18))();
      plVar7[-2] = 0;
    }
    plVar7[-2] = lVar4;
    plVar5 = *(long **)(*(long *)puVar2 + 0x48);
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (0xf < *(ulong *)(lVar3 + 0x80)) break;
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar5;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    lVar4 = (**(code **)(*plVar5 + 0x10))(plVar5,0x158,8);
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0xb8))(plVar5);
    }
    FUN_016ab300(lVar4,plVar5);
    *(long **)(lVar4 + 8) = plVar5;
    *(long *)(lVar4 + 0x10) = lVar4;
    *(undefined8 *)(lVar4 + 0x18) = 0x158;
    *(undefined8 *)(lVar4 + 0x20) = 8;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    if (plVar7[-1] != 0) {
      (**(code **)(*(long *)(plVar7[-1] + 0x48) + 0x18))();
      plVar7[-1] = 0;
    }
    plVar7[-1] = lVar4;
    plVar5 = *(long **)(*(long *)puVar2 + 0x48);
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (0xf < *(ulong *)(lVar3 + 0x80)) break;
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar5;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    lVar4 = (**(code **)(*plVar5 + 0x10))(plVar5,0x158,8);
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0xb8))(plVar5);
    }
    FUN_016ab300(lVar4,plVar5);
    *(long **)(lVar4 + 8) = plVar5;
    *(long *)(lVar4 + 0x10) = lVar4;
    *(undefined8 *)(lVar4 + 0x18) = 0x158;
    *(undefined8 *)(lVar4 + 0x20) = 8;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    if (*plVar7 != 0) {
      (**(code **)(*(long *)(*plVar7 + 0x48) + 0x18))();
      *plVar7 = 0;
    }
    *plVar7 = lVar4;
    plVar5 = *(long **)(*(long *)puVar2 + 0x48);
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (0xf < *(ulong *)(lVar3 + 0x80)) break;
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar5;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    lVar4 = (**(code **)(*plVar5 + 0x10))(plVar5,0x158,8);
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0xb8))(plVar5);
    }
    FUN_016ab300(lVar4,plVar5);
    *(long **)(lVar4 + 8) = plVar5;
    *(long *)(lVar4 + 0x10) = lVar4;
    *(undefined8 *)(lVar4 + 0x18) = 0x158;
    *(undefined8 *)(lVar4 + 0x20) = 8;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    if (plVar7[1] != 0) {
      (**(code **)(*(long *)(plVar7[1] + 0x48) + 0x18))();
      plVar7[1] = 0;
    }
    uVar6 = uVar6 + 1;
    plVar7[1] = lVar4;
    plVar7 = plVar7 + 4;
    if (2 < uVar6) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


