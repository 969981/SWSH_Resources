/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01472350; name: FUN_01472350
 */


void FUN_01472350(long param_1,uint param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  puVar1 = PTR_DAT_02710860;
  plVar4 = *(long **)(param_1 + 8);
  uVar6 = *(undefined8 *)(*(long *)PTR_DAT_02729ea8 + 0x28);
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar2 + 0x80) < 0x10) {
    *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar4;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    lVar3 = (**(code **)(*plVar4 + 0x10))(plVar4,0x3d0,0x10);
    if (lVar3 == 0) {
      (**(code **)(*plVar4 + 0xb8))(plVar4);
    }
    FUN_01712ba0(lVar3,uVar6,1,param_2 & 1,0);
    *(long **)(lVar3 + 8) = plVar4;
    *(long *)(lVar3 + 0x10) = lVar3;
    *(undefined8 *)(lVar3 + 0x18) = 0x3d0;
    *(undefined8 *)(lVar3 + 0x20) = 0x10;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0x70) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x70) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x70) = 0;
    }
    uVar7 = 0;
    *(long *)(param_1 + 0x70) = lVar3;
    plVar4 = (long *)(param_1 + 0xb8);
    while( true ) {
      plVar5 = *(long **)(param_1 + 8);
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (0xf < *(ulong *)(lVar2 + 0x80)) break;
      *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar5;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      lVar3 = (**(code **)(*plVar5 + 0x10))(plVar5,0x80,8);
      if (lVar3 == 0) {
        (**(code **)(*plVar5 + 0xb8))(plVar5);
      }
      FUN_0077d050(lVar3,0x20);
      *(long **)(lVar3 + 8) = plVar5;
      *(long *)(lVar3 + 0x10) = lVar3;
      *(undefined8 *)(lVar3 + 0x18) = 0x80;
      *(undefined8 *)(lVar3 + 0x20) = 8;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      }
      if (*plVar4 != 0) {
        (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))();
        *plVar4 = 0;
      }
      uVar7 = uVar7 + 1;
      *plVar4 = lVar3;
      plVar4 = plVar4 + 1;
      if (6 < uVar7) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


