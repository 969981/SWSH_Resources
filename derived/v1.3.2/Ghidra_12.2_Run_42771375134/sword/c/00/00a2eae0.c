/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a2eae0; name: FUN_00a2eae0
 */


void FUN_00a2eae0(undefined8 *param_1,long param_2,long *param_3,undefined8 param_4)

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
LAB_00a2edc4:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar6;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  plVar5 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6,0x710,0x10);
  if (plVar5 == (long *)0x0) {
    (**(code **)(*plVar6 + 0xb8))(plVar6);
  }
  FUN_00ff9400(plVar5,param_2,param_4,uVar7);
  puVar3 = PTR_DAT_02719058;
  plVar5[9] = (long)(PTR_DAT_02719058 + 0xb8);
  *(undefined8 *)((long)plVar5 + 0x5cc) = 0;
  *plVar5 = (long)(puVar3 + 0x10);
  plVar5[10] = (long)(puVar3 + 0xf8);
  *(undefined8 *)((long)plVar5 + 0x61c) = 0;
  *(undefined8 *)((long)plVar5 + 0x614) = 0;
  *(undefined8 *)((long)plVar5 + 0x60c) = 0;
  *(undefined8 *)((long)plVar5 + 0x604) = 0;
  *(undefined8 *)((long)plVar5 + 0x62a) = 0;
  *(undefined8 *)((long)plVar5 + 0x624) = 0;
  *(undefined8 *)((long)plVar5 + 0x5d4) = 0;
  *(undefined8 *)((long)plVar5 + 0x5fc) = 0;
  *(undefined8 *)((long)plVar5 + 0x5f4) = 0;
  *(undefined8 *)((long)plVar5 + 0x5ec) = 0;
  *(undefined8 *)((long)plVar5 + 0x5e4) = 0;
  *(undefined8 *)((long)plVar5 + 0x5dc) = 0;
  *(undefined1 *)((long)plVar5 + 0x632) = 5;
  plVar5[0xe1] = 0;
  plVar5[0xe0] = 0;
  plVar5[0xdf] = 0;
  plVar5[0xde] = 0;
  plVar5[0xdd] = 0;
  plVar5[0xdc] = 0;
  plVar5[0xdb] = 0;
  plVar5[0xda] = 0;
  plVar5[0xd9] = 0;
  plVar5[0xd8] = 0;
  plVar5[0xd7] = 0;
  plVar5[0xd6] = 0;
  plVar5[0xd5] = 0;
  plVar5[0xd4] = 0;
  plVar5[0xd3] = 0;
  plVar5[0xd2] = 0;
  plVar5[0xd1] = 0;
  plVar5[0xd0] = 0;
  plVar5[0xcf] = 0;
  plVar5[0xce] = 0;
  plVar5[0xcd] = 0;
  plVar5[0xcc] = 0;
  plVar5[0xcb] = 0;
  plVar5[0xca] = 0;
  plVar5[0xc9] = 0;
  plVar5[200] = 0;
  plVar5[199] = 0;
  plVar5[1] = (long)plVar6;
  plVar5[2] = (long)plVar5;
  plVar5[3] = 0x710;
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
    if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_00a2edc4;
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


