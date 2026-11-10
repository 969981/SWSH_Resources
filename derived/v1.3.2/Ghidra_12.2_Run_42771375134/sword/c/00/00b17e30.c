/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00b17e30; name: FUN_00b17e30
 */


void FUN_00b17e30(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_02710860;
  plVar4 = *(long **)(*(long *)(param_1 + 8) + 0xd8);
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x88) + 400);
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar2 + 0x80) < 0x10) {
    *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar4;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    lVar3 = (**(code **)(*plVar4 + 0x10))(plVar4,0x2f0,0x10);
    if (lVar3 == 0) {
      (**(code **)(*plVar4 + 0xb8))(plVar4);
    }
    FUN_015d3e90(lVar3,plVar4,uVar5,param_1);
    *(long **)(lVar3 + 8) = plVar4;
    *(long *)(lVar3 + 0x10) = lVar3;
    *(undefined8 *)(lVar3 + 0x18) = 0x2f0;
    *(undefined8 *)(lVar3 + 0x20) = 0x10;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x10) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    *(long *)(param_1 + 0x10) = lVar3;
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x88) + 400);
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (*(ulong *)(lVar2 + 0x80) < 0x10) {
      *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar4;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      lVar3 = (**(code **)(*plVar4 + 0x10))(plVar4,0x2f0,0x10);
      if (lVar3 == 0) {
        (**(code **)(*plVar4 + 0xb8))(plVar4);
      }
      FUN_015d3e90(lVar3,plVar4,uVar5,param_1 + 0x20);
      *(long **)(lVar3 + 8) = plVar4;
      *(long *)(lVar3 + 0x10) = lVar3;
      *(undefined8 *)(lVar3 + 0x18) = 0x2f0;
      *(undefined8 *)(lVar3 + 0x20) = 0x10;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x18) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x18) = 0;
      }
      *(long *)(param_1 + 0x18) = lVar3;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


