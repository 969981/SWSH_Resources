/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01039ac0; name: FUN_01039ac0
 */


void FUN_01039ac0(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long local_60;
  long local_58;
  char *local_50;
  undefined8 local_48;
  long local_40;
  long local_38;
  
  FUN_0103abb0();
  local_58 = 0x6da297f6d23bc5f8;
  local_50 = "common/tips.dat";
  local_48 = 0xf;
  local_40 = 0;
  FUN_00ff8620(&local_38,param_1 + 0x8f0,&local_58,10);
  lVar2 = *(long *)(local_38 + 0x60);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0xa88) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xa88) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xa88) = 0;
  }
  *(long *)(param_1 + 0xa88) = lVar2;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
    local_40 = 0;
  }
  local_58 = *(long *)(param_1 + 0xa88);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
  }
  local_50 = (char *)0x7eb69bb1cbd2dcba;
  local_48 = 0x7eb69ab1cbd2db07;
  FUN_0103bb60(param_1,&local_58);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  plVar3 = *(long **)(param_1 + 8);
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
  FUN_0077d050(lVar1,0x100);
  *(long **)(lVar1 + 8) = plVar3;
  *(long *)(lVar1 + 0x10) = lVar1;
  *(undefined8 *)(lVar1 + 0x18) = 0x80;
  *(undefined8 *)(lVar1 + 0x20) = 8;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  FUN_0077eb10(*(undefined8 *)(param_1 + 0xa88),&DAT_02162c70,lVar1);
  local_60 = lVar1;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  FUN_0103b430(param_1,&local_60);
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  if ((*(long *)(param_1 + 0xba0) != 0) && (*(int *)(*(long *)(param_1 + 0xba0) + 0x198) == 3)) {
    FUN_01039d30(param_1);
  }
  *(undefined1 *)(param_1 + 0xba8) = 1;
  return;
}


