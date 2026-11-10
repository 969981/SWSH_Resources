/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011738a0; name: FUN_011738a0
 */


void FUN_011738a0(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_38;
  
  local_60 = 0x43800000b01;
  local_50 = 0x800000008;
  local_48 = 0x100000b01;
  local_40 = 1;
  local_70 = 0;
  uStack_68 = 0x43800000438;
  local_3c = 0;
  local_38 = 0;
  local_58 = 0xb0100000438;
  plVar3 = *(long **)(param_2 + 0x80);
  lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar1 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = plVar3;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
  lVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,0x4a8,8);
  if (lVar2 == 0) {
    (**(code **)(*plVar3 + 0xb8))(plVar3);
  }
  FUN_006fdd90(lVar2,&local_70);
  *(long **)(lVar2 + 8) = plVar3;
  *(long *)(lVar2 + 0x10) = lVar2;
  *(undefined8 *)(lVar2 + 0x18) = 0x4a8;
  *(undefined8 *)(lVar2 + 0x20) = 8;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + -1;
  *param_1 = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))((long *)(lVar2 + 0x48));
  }
  return;
}


