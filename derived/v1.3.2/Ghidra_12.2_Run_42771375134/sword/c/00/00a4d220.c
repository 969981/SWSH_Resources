/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a4d220; name: FUN_00a4d220
 */


void FUN_00a4d220(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  plVar2 = (long *)FUN_00ff93d0();
  puVar1 = PTR_DAT_02710860;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar3 + 0x80) < 0x10) {
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar2;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    lVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,0x80,8);
    if (lVar4 == 0) {
      (**(code **)(*plVar2 + 0xb8))(plVar2);
    }
    FUN_0077d050(lVar4,0x100);
    *(long **)(lVar4 + 8) = plVar2;
    *(long *)(lVar4 + 0x10) = lVar4;
    *(undefined8 *)(lVar4 + 0x18) = 0x80;
    *(undefined8 *)(lVar4 + 0x20) = 8;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 400) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 400) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 400) = 0;
    }
    *(long *)(param_1 + 400) = lVar4;
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (*(ulong *)(lVar3 + 0x80) < 0x10) {
      *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar2;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      lVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,0x80,8);
      if (lVar4 == 0) {
        (**(code **)(*plVar2 + 0xb8))(plVar2);
      }
      FUN_0077d050(lVar4,0x100);
      *(long **)(lVar4 + 8) = plVar2;
      *(long *)(lVar4 + 0x10) = lVar4;
      *(undefined8 *)(lVar4 + 0x18) = 0x80;
      *(undefined8 *)(lVar4 + 0x20) = 8;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0x198) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x198) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x198) = 0;
      }
      *(long *)(param_1 + 0x198) = lVar4;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


