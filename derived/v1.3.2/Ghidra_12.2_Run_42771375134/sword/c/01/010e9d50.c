/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010e9d50; name: FUN_010e9d50
 */


void FUN_010e9d50(undefined8 *param_1,long param_2,long *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  long *local_68;
  long local_58;
  
  puVar3 = PTR_DAT_02710860;
  if (*param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  plVar7 = *(long **)(param_2 + 8);
  uVar8 = *(undefined8 *)(param_2 + 0xa8);
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar5 + 0x80)) {
LAB_010e9fc0:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar7;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  plVar6 = (long *)(**(code **)(*plVar7 + 0x10))(plVar7,0x690,0x10);
  if (plVar6 == (long *)0x0) {
    (**(code **)(*plVar7 + 0xb8))(plVar7);
  }
  FUN_00ff9400(plVar6,param_2,param_4,uVar8);
  plVar6[0xbb] = 0;
  *(undefined1 *)((long)plVar6 + 0x5e4) = 0;
  *(undefined4 *)(plVar6 + 0xbc) = 0xffffffff;
  plVar6[0xcd] = 0;
  plVar6[0xcc] = 0;
  plVar6[0xcb] = 0;
  plVar6[0xca] = 0;
  plVar6[0xc9] = 0;
  plVar6[200] = 0;
  plVar6[199] = 0;
  plVar6[0xc6] = 0;
  plVar6[0xc5] = 0;
  plVar6[0xc4] = 0;
  plVar6[0xc3] = 0;
  plVar6[0xc2] = 0;
  plVar6[0xc1] = 0;
  plVar6[0xc0] = 0;
  plVar6[0xbf] = 0;
  plVar6[0xbe] = 0;
  puVar4 = PTR_DAT_02724700;
  puVar1 = PTR_DAT_02724700 + 0xd8;
  plVar6[0xbd] = 0;
  plVar6[9] = (long)puVar1;
  *(undefined4 *)(plVar6 + 0xce) = 0xffffffff;
  plVar6[10] = (long)(puVar4 + 0x118);
  plVar6[0xba] = (long)(puVar4 + 0x140);
  plVar6[0xd0] = 0;
  plVar6[0xcf] = 0;
  *plVar6 = (long)(puVar4 + 0x10);
  plVar6[1] = (long)plVar7;
  plVar6[2] = (long)plVar6;
  plVar6[3] = 0x690;
  plVar6[4] = 0x10;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  *param_1 = plVar6;
  if (plVar6 != (long *)0x0) {
    (**(code **)(plVar6[9] + 0x10))();
  }
  local_58 = *param_3;
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
  }
  FUN_00ff9a00(plVar6,&local_58);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  local_68 = plVar6;
  if (plVar6 != (long *)0x0) {
    (**(code **)(plVar6[9] + 0x10))(plVar6 + 9);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x80);
  if (puVar2 < *(undefined8 **)(param_2 + 0x88)) {
    uVar8 = *(undefined8 *)(param_2 + 0x90);
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
    if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_010e9fc0;
    *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar8;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    *puVar2 = local_68;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
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


