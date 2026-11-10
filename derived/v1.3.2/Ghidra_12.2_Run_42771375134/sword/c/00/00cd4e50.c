/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cd4e50; name: FUN_00cd4e50
 */


void FUN_00cd4e50(long param_1,undefined1 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long local_38;
  
  plVar4 = *(long **)(*(long *)PTR_DAT_0271c6e0 + 0xa8);
  lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar1 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = plVar4;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
  lVar2 = (**(code **)(*plVar4 + 0x10))(plVar4,0xb8,8);
  if (lVar2 == 0) {
    (**(code **)(*plVar4 + 0xb8))(plVar4);
  }
  FUN_00866220(lVar2,plVar4,0,0,0);
  *(long **)(lVar2 + 8) = plVar4;
  *(long *)(lVar2 + 0x10) = lVar2;
  *(undefined8 *)(lVar2 + 0x18) = 0xb8;
  *(undefined8 *)(lVar2 + 0x20) = 8;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + -1;
  if (lVar2 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0xd8);
    local_38 = 0;
  }
  else {
    plVar4 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    uVar3 = *(undefined8 *)(param_1 + 0xd8);
    local_38 = lVar2;
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  FUN_016dda30(uVar3,&local_38,0,0,0);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  (**(code **)(**(long **)(param_1 + 0xb0) + 0x30))(*(long **)(param_1 + 0xb0),param_2,lVar2);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  return;
}


