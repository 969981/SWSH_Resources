/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c81660; name: FUN_00c81660
 */


void FUN_00c81660(long *param_1,long *param_2,undefined4 param_3,long param_4,long param_5,
                 long *param_6)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  long local_250;
  int local_248 [24];
  long local_1e8 [24];
  long local_128 [25];
  
  lVar3 = (**(code **)(*param_1 + 0x10))(param_1,0x60,8);
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
LAB_00c819d4:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_1;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  local_128[0] = *param_2;
  if (local_128[0] != 0) {
    (**(code **)(*(long *)(local_128[0] + 0x48) + 0x10))();
  }
  FUN_00c83be0(lVar3,param_1,local_128,param_3,0x18);
  if (local_128[0] != 0) {
    (**(code **)(*(long *)(local_128[0] + 0x48) + 0x18))();
    local_128[0] = 0;
  }
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  lVar4 = *param_6;
  *param_6 = lVar3;
  if (lVar4 != 0) {
    FUN_00c83f10(lVar4);
    (**(code **)(*(long *)param_6[1] + 0x18))((long *)param_6[1],lVar4,param_6[2],param_6[3]);
  }
  param_6[1] = (long)param_1;
  param_6[2] = 0x60;
  param_6[3] = 8;
  local_128[1] = param_4 + 8;
  local_128[2] = param_4 + 0x10;
  local_128[0x10] = param_4 + 0x80;
  local_128[0x11] = param_4 + 0x88;
  uVar8 = 0;
  local_128[3] = param_4 + 0x18;
  iVar6 = 1;
  local_128[4] = param_4 + 0x20;
  local_128[5] = param_4 + 0x28;
  local_128[6] = param_4 + 0x30;
  local_128[7] = param_4 + 0x38;
  local_128[8] = param_4 + 0x40;
  local_128[9] = param_4 + 0x48;
  local_128[10] = param_4 + 0x50;
  local_128[0xb] = param_4 + 0x58;
  local_128[0xc] = param_4 + 0x60;
  local_128[0xd] = param_4 + 0x68;
  local_128[0xe] = param_4 + 0x70;
  local_128[0xf] = param_4 + 0x78;
  local_1e8[0x10] = param_5 + 0x80;
  local_128[0x15] = param_4 + 0x90;
  local_1e8[0x11] = param_5 + 0x88;
  local_128[0x16] = param_4 + 0x98;
  local_1e8[1] = param_5 + 8;
  local_1e8[2] = param_5 + 0x10;
  local_1e8[3] = param_5 + 0x18;
  local_1e8[4] = param_5 + 0x20;
  local_1e8[5] = param_5 + 0x28;
  local_1e8[6] = param_5 + 0x30;
  local_1e8[7] = param_5 + 0x38;
  local_1e8[8] = param_5 + 0x40;
  local_1e8[9] = param_5 + 0x48;
  local_1e8[10] = param_5 + 0x50;
  local_1e8[0xb] = param_5 + 0x58;
  local_1e8[0xc] = param_5 + 0x60;
  local_1e8[0xd] = param_5 + 0x68;
  local_1e8[0xe] = param_5 + 0x70;
  local_1e8[0xf] = param_5 + 0x78;
  local_1e8[0x15] = param_5 + 0x90;
  local_1e8[0x16] = param_5 + 0x98;
  local_248[0] = 1;
  local_248[1] = 1;
  local_248[2] = 1;
  local_248[3] = 1;
  local_248[4] = 1;
  local_248[5] = 1;
  local_248[6] = 1;
  local_248[7] = 1;
  local_248[8] = 1;
  local_248[9] = 1;
  local_248[10] = 1;
  local_248[0xb] = 1;
  local_248[0xc] = 1;
  local_248[0xd] = 1;
  local_248[0xe] = 1;
  local_248[0xf] = 1;
  local_248[0x10] = 1;
  local_248[0x11] = 1;
  local_248[0x12] = 1;
  local_248[0x13] = 1;
  uVar2 = *(undefined4 *)PTR_DAT_0271c3d0;
  local_248[0x14] = 1;
  local_248[0x15] = 1;
  local_248[0x16] = 1;
  local_248[0x17] = 1;
  local_1e8[0] = param_5;
  local_1e8[0x12] = local_1e8[0xf];
  local_1e8[0x13] = local_1e8[0x10];
  local_1e8[0x14] = local_1e8[0x11];
  local_1e8[0x17] = local_1e8[0x16];
  local_128[0] = param_4;
  local_128[0x12] = local_128[0xf];
  local_128[0x13] = local_128[0x10];
  local_128[0x14] = local_128[0x11];
  local_128[0x17] = local_128[0x16];
  do {
    local_250 = 0;
    lVar3 = FUN_00c84260(*param_6,uVar8 & 0xffffffff,param_1,iVar6,uVar2,&local_250);
    if (local_250 != 0) {
      (**(code **)(*(long *)(local_250 + 0x48) + 0x18))();
      local_250 = 0;
    }
    iVar6 = local_248[uVar8];
    if (0 < iVar6) {
      lVar4 = 0;
      uVar5 = 0;
      do {
        if ((long)uVar5 < (long)*(int *)(lVar3 + 8)) {
          if (*(ulong *)(*(long *)(lVar3 + 0x38) + 0x48) <= uVar5) goto LAB_00c819d4;
          puVar1 = (undefined8 *)(*(long *)(*(long *)(lVar3 + 0x38) + 0x40) + lVar4);
          uVar7 = *(undefined8 *)(local_1e8[uVar8] + uVar5 * 8);
          *puVar1 = *(undefined8 *)(local_128[uVar8] + uVar5 * 8);
          puVar1[1] = uVar7;
          iVar6 = local_248[uVar8];
        }
        uVar5 = uVar5 + 1;
        lVar4 = lVar4 + 0x28;
      } while ((long)uVar5 < (long)iVar6);
    }
    uVar8 = uVar8 + 1;
    if (0x17 < uVar8) {
      return;
    }
    iVar6 = local_248[uVar8];
  } while( true );
}


