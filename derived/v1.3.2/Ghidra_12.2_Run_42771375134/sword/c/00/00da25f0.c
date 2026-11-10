/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00da25f0; name: FUN_00da25f0
 */


long FUN_00da25f0(undefined8 param_1,long *param_2,long *param_3,long *param_4,undefined4 *param_5,
                 undefined4 *param_6,long *param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long local_68;
  long local_60;
  long local_58;
  
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  lVar4 = (**(code **)(*param_2 + 0x10))(param_2,0x98,8);
  if (lVar4 == 0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  lVar5 = *param_3;
  local_58 = lVar5;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar7 = *param_4;
  local_60 = lVar7;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  uVar1 = *param_5;
  uVar2 = *param_6;
  local_68 = *param_7;
  if (local_68 == 0) {
    FUN_00da1c00(lVar4,&local_58,&local_60,uVar1,uVar2,&local_68);
  }
  else {
    plVar6 = (long *)(local_68 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    FUN_00da1c00(lVar4,&local_58,&local_60,uVar1,uVar2,&local_68);
    (**(code **)(*plVar6 + 0x18))(plVar6);
    local_68 = 0;
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
    local_60 = 0;
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  *(long **)(lVar4 + 8) = param_2;
  *(long *)(lVar4 + 0x10) = lVar4;
  *(undefined8 *)(lVar4 + 0x18) = 0x98;
  *(undefined8 *)(lVar4 + 0x20) = 8;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return lVar4;
}


