/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01334620; name: FUN_01334620
 */


void FUN_01334620(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_48;
  
  lVar2 = *(long *)(*(long *)(param_2 + 0x170) + 0x60);
  if (lVar2 == 0) {
    FUN_014bc870();
  }
  else {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  plVar3 = *(long **)(param_2 + 0x58);
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar3;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  lVar1 = (**(code **)(*plVar3 + 0x10))(plVar3,0x80,8);
  if (lVar1 == 0) {
    (**(code **)(*plVar3 + 0xb8))(plVar3);
  }
  FUN_0077d050(lVar1,0x40);
  *(long **)(lVar1 + 8) = plVar3;
  *(long *)(lVar1 + 0x10) = lVar1;
  *(undefined8 *)(lVar1 + 0x18) = 0x80;
  *(undefined8 *)(lVar1 + 0x20) = 8;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(*(long *)(param_2 + 0x170) + 0x60);
  local_48 = param_3;
  if (lVar2 == 0) {
    FUN_0077eb10(0,&local_48,lVar1);
  }
  else {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0077eb10(lVar2,&local_48,lVar1);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  return;
}


