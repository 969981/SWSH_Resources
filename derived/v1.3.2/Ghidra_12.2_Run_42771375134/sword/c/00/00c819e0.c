/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c819e0; name: FUN_00c819e0
 */


void FUN_00c819e0(long *param_1,undefined8 param_2,long param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  uint local_128 [16];
  long local_e8 [17];
  
  lVar1 = (**(code **)(*param_1 + 0x10))(param_1,0x58,8);
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_1;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  FUN_00c82ee0(lVar1,param_1,0x10);
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  lVar2 = *param_4;
  *param_4 = lVar1;
  if (lVar2 != 0) {
    FUN_00c83200(lVar2);
    (**(code **)(*(long *)param_4[1] + 0x18))((long *)param_4[1],lVar2,param_4[2],param_4[3]);
  }
  param_4[1] = (long)param_1;
  param_4[2] = 0x58;
  param_4[3] = 8;
  local_e8[1] = param_3 + 8;
  local_e8[2] = param_3 + 0x10;
  uVar5 = 0;
  local_e8[3] = param_3 + 0x18;
  local_e8[4] = param_3 + 0x20;
  local_e8[5] = param_3 + 0x28;
  local_e8[6] = param_3 + 0x30;
  local_e8[7] = param_3 + 0x38;
  local_e8[8] = param_3 + 0x40;
  local_e8[9] = param_3 + 0x48;
  local_e8[10] = param_3 + 0x50;
  local_e8[0xb] = param_3 + 0x58;
  local_e8[0xc] = param_3 + 0x60;
  local_e8[0xd] = param_3 + 0x68;
  local_e8[0xe] = param_3 + 0x70;
  local_e8[0xf] = param_3 + 0x78;
  uVar4 = 1;
  local_128[0] = 1;
  local_128[1] = 1;
  local_128[2] = 1;
  local_128[3] = 1;
  local_128[4] = 1;
  local_128[5] = 1;
  local_128[6] = 1;
  local_128[7] = 1;
  local_128[8] = 1;
  local_128[9] = 1;
  local_128[10] = 1;
  local_128[0xb] = 1;
  local_128[0xc] = 1;
  local_128[0xd] = 1;
  local_128[0xe] = 1;
  local_128[0xf] = 1;
  local_e8[0] = param_3;
  while( true ) {
    uVar3 = FUN_00c83340(*param_4,uVar5 & 0xffffffff,param_1,uVar4);
    if (0 < (int)uVar4) {
      lVar1 = local_e8[uVar5];
      uVar6 = 0;
      do {
        FUN_00c82500(uVar3,uVar6 & 0xffffffff,*(undefined8 *)(lVar1 + uVar6 * 8));
        uVar6 = uVar6 + 1;
      } while (uVar4 != uVar6);
    }
    uVar5 = uVar5 + 1;
    if (uVar5 == 0x10) break;
    uVar4 = local_128[uVar5];
  }
  return;
}


