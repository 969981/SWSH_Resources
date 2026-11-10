/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01072960; name: FUN_01072960
 */


void FUN_01072960(undefined8 *param_1,long param_2,long *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long *local_68;
  long local_58;
  
  puVar2 = PTR_DAT_02710860;
  if (*param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  plVar6 = *(long **)(param_2 + 8);
  uVar7 = *(undefined8 *)(param_2 + 0xa8);
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
LAB_01072bd8:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar6;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  plVar5 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6,0x6a0,0x10);
  if (plVar5 == (long *)0x0) {
    (**(code **)(*plVar6 + 0xb8))(plVar6);
  }
  FUN_00ff9400(plVar5,param_2,param_4,uVar7);
  puVar3 = PTR_DAT_02723d68;
  *plVar5 = (long)(PTR_DAT_02723d68 + 0x10);
  plVar5[9] = (long)(puVar3 + 0xa8);
  plVar5[10] = (long)(puVar3 + 0xe8);
  plVar5[0xba] = 0;
  plVar5[0xc1] = 0;
  plVar5[0xc0] = 0;
  plVar5[0xbf] = 0;
  plVar5[0xbe] = 0;
  plVar5[0xbd] = 0;
  plVar5[1] = (long)plVar6;
  plVar5[2] = (long)plVar5;
  *(undefined1 *)(plVar5 + 0xd2) = 0;
  plVar5[0xd1] = 0;
  plVar5[0xd0] = 0;
  plVar5[0xbb] = 0x900000001;
  *(undefined4 *)(plVar5 + 0xbc) = 9;
  plVar5[0xd3] = -0x2ff60d54f2674d29;
  plVar5[0xcf] = 0;
  plVar5[0xce] = 0;
  plVar5[0xcd] = 0;
  plVar5[0xcc] = 0;
  plVar5[0xcb] = 0;
  plVar5[0xca] = 0;
  plVar5[0xc9] = 0;
  plVar5[200] = 0;
  plVar5[199] = 0;
  plVar5[3] = 0x6a0;
  plVar5[4] = 0x10;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  *param_1 = plVar5;
  if (plVar5 != (long *)0x0) {
    (**(code **)(plVar5[9] + 0x10))();
  }
  local_58 = *param_3;
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
  }
  FUN_00ff9a00(plVar5,&local_58);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  local_68 = plVar5;
  if (plVar5 != (long *)0x0) {
    (**(code **)(plVar5[9] + 0x10))(plVar5 + 9);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x80);
  if (puVar1 < *(undefined8 **)(param_2 + 0x88)) {
    uVar7 = *(undefined8 *)(param_2 + 0x90);
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
    if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_01072bd8;
    *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar7;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    *puVar1 = local_68;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    *(long *)(param_2 + 0x80) = *(long *)(param_2 + 0x80) + 8;
  }
  else {
    FUN_008926c0(param_2 + 0x78,&local_68);
    if (local_68 != (long *)0x0) {
      (**(code **)(local_68[9] + 0x18))();
    }
  }
  *(undefined1 *)(param_2 + 0xc0) = 0;
  return;
}


