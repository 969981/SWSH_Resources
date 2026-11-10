/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bfbcd0; name: FUN_00bfbcd0
 */


void FUN_00bfbcd0(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *local_f0;
  long local_e8;
  long local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined1 local_34;
  
  local_d8 = 3;
  local_e8 = 0;
  local_e0 = 0;
  local_f0 = (long *)0x0;
  local_38 = 0;
  local_d0 = 0;
  local_34 = 1;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  local_50 = 0;
  local_68 = 0;
  local_60 = 0;
  local_78 = 0;
  local_70 = 0;
  local_88 = 0;
  local_80 = 0;
  local_98 = 0;
  local_90 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  lVar1 = *(long *)(param_1 + 0x2b0);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(param_1 + 0x5e0);
  local_e8 = lVar1;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  plVar2 = *(long **)(param_1 + 8);
  local_d0 = 0x243241e1fbeefbd8;
  local_c8 = 0x243242e1fbeefd8b;
  local_c0 = 0x243243e1fbeeff3e;
  local_b8 = 0x243244e1fbef00f1;
  local_b0 = 0x243245e1fbef02a4;
  local_a8 = 0xdf290e6647987eef;
  local_a0 = 0xdf290d6647987d3c;
  local_90 = param_2[1];
  local_88 = param_2[2];
  local_80 = param_2[3];
  local_78 = param_2[4];
  local_70 = param_2[5];
  local_68 = param_2[6];
  local_60 = param_2[7];
  local_58 = param_2[8];
  uStack_40 = param_2[0xb];
  local_50 = param_2[9];
  local_48 = param_2[10];
  local_38 = *(undefined4 *)(param_2 + 0xc);
  local_98 = *param_2;
  local_f0 = plVar2;
  local_e0 = lVar3;
  lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar1 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = plVar2;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
  lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,0x1a0,8);
  if (lVar3 == 0) {
    (**(code **)(*plVar2 + 0xb8))(plVar2);
  }
  FUN_016a9c70(lVar3,&local_f0);
  *(long **)(lVar3 + 8) = plVar2;
  *(long *)(lVar3 + 0x10) = lVar3;
  *(undefined8 *)(lVar3 + 0x18) = 0x1a0;
  *(undefined8 *)(lVar3 + 0x20) = 8;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + -1;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x848) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x848) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x848) = 0;
  }
  *(long *)(param_1 + 0x848) = lVar3;
  if (local_e0 != 0) {
    (**(code **)(*(long *)(local_e0 + 0x48) + 0x18))();
    local_e0 = 0;
  }
  if (local_e8 != 0) {
    (**(code **)(*(long *)(local_e8 + 0x48) + 0x18))();
  }
  return;
}


