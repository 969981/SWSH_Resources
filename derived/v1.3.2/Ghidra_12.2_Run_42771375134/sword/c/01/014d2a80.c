/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014d2a80; name: FUN_014d2a80
 */


void FUN_014d2a80(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  puVar1 = PTR_DAT_02710860;
  plVar4 = *(long **)(param_1 + 8);
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar2 + 0x80) < 0x10) {
    *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar4;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    lVar3 = (**(code **)(*plVar4 + 0x10))(plVar4,0x80,8);
    if (lVar3 == 0) {
      (**(code **)(*plVar4 + 0xb8))(plVar4);
    }
    FUN_0077d050(lVar3,0x40);
    *(long **)(lVar3 + 8) = plVar4;
    *(long *)(lVar3 + 0x10) = lVar3;
    *(undefined8 *)(lVar3 + 0x18) = 0x80;
    *(undefined8 *)(lVar3 + 0x20) = 8;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0x18b0) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x18b0) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x18b0) = 0;
    }
    *(long *)(param_1 + 0x18b0) = lVar3;
    *(undefined4 *)(param_1 + 0x18a8) = 0;
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (*(ulong *)(lVar2 + 0x80) < 0x10) {
      *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar4;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      lVar3 = (**(code **)(*plVar4 + 0x10))(plVar4,0x80,8);
      if (lVar3 == 0) {
        (**(code **)(*plVar4 + 0xb8))(plVar4);
      }
      FUN_0077d050(lVar3,0x40);
      *(long **)(lVar3 + 8) = plVar4;
      *(long *)(lVar3 + 0x10) = lVar3;
      *(undefined8 *)(lVar3 + 0x18) = 0x80;
      *(undefined8 *)(lVar3 + 0x20) = 8;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0x18b8) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x18b8) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x18b8) = 0;
      }
      *(long *)(param_1 + 0x18b8) = lVar3;
      *(undefined4 *)(param_1 + 0x18ac) = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


