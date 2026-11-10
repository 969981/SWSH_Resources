/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01086990; name: FUN_01086990
 */


void FUN_01086990(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined1 *local_48;
  char *local_40;
  undefined8 local_38;
  
  plVar3 = *(long **)(param_1 + 8);
  lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar1 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = plVar3;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
  lVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,0xae50,0x10);
  if (lVar2 == 0) {
    (**(code **)(*plVar3 + 0xb8))(plVar3);
  }
  FUN_00da3e90(lVar2,plVar3,plVar3);
  *(long **)(lVar2 + 8) = plVar3;
  *(long *)(lVar2 + 0x10) = lVar2;
  *(undefined8 *)(lVar2 + 0x18) = 0xae50;
  *(undefined8 *)(lVar2 + 0x20) = 0x10;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + -1;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x68) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  *(long *)(param_1 + 0x68) = lVar2;
  local_48 = &DAT_b3b46d74c6ec962d;
  local_40 = "fel_910";
  local_38 = 7;
  FUN_00da5180(lVar2,0,*(undefined8 *)(param_1 + 8),&local_48);
  return;
}


