/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a74090; name: FUN_00a74090
 */


ulong FUN_00a74090(long param_1,ulong *param_2,int param_3)

{
  ulong *puVar1;
  byte bVar2;
  uint uVar3;
  int param3;
  ulong uVar4;
  byte *pbVar5;
  undefined8 uVar6;
  uint param3_00;
  ulong local_108;
  ulong local_100;
  undefined1 *local_f8;
  ulong local_f0;
  ulong local_e8;
  undefined4 local_e0;
  undefined8 local_d8 [2];
  byte local_c8 [104];
  
  param3_00 = 1;
  uVar6 = 0x74756f6c6c6162;
  while( true ) {
    snprintf((char *)local_c8,0x60,"bin/battle/waza/particle/eb_set/eb%03d_ballout.ptcl",param3_00);
    puVar1 = param_2;
    if (param_2[3] != 0) {
      puVar1 = param_2 + 1;
    }
    uVar4 = 0xcbf29ce484222645;
    if (local_c8[0] != 0) {
      uVar4 = 0xcbf29ce484222645;
      pbVar5 = (byte *)((ulong)local_c8 | 1);
      bVar2 = local_c8[0];
      do {
        uVar4 = (uVar4 ^ bVar2) * 0x100000001b3;
        bVar2 = *pbVar5;
        pbVar5 = pbVar5 + 1;
      } while (bVar2 != 0);
    }
    if (*puVar1 == uVar4) break;
    uVar3 = snprintf((char *)local_c8,0x60,"bin/battle/waza/particle/eb_set/eb%03d_capture.ptcl",
                     param3_00);
    puVar1 = param_2;
    if (param_2[3] != 0) {
      puVar1 = param_2 + 1;
    }
    uVar4 = 0xcbf29ce484222645;
    if (local_c8[0] != 0) {
      uVar4 = 0xcbf29ce484222645;
      pbVar5 = (byte *)((ulong)local_c8 | 1);
      bVar2 = local_c8[0];
      do {
        uVar4 = (uVar4 ^ bVar2) * 0x100000001b3;
        bVar2 = *pbVar5;
        pbVar5 = pbVar5 + 1;
      } while (bVar2 != 0);
    }
    if (*puVar1 == uVar4) {
      uVar6 = 0x65727574706163;
      break;
    }
    param3_00 = param3_00 + 1;
    if (0x1a < param3_00) {
      return (ulong)uVar3;
    }
  }
  param3 = *(int *)(param_1 + (long)param_3 * 4 + 0x1740);
  if (0x19 < param3 - 1U) {
    param3 = 4;
  }
  local_d8[0] = uVar6;
  snprintf((char *)local_c8,0x60,"bin/battle/waza/particle/eb_set/eb%03d_%s.ptcl",param3,
           (char *)local_d8);
  FUN_00a64d10(&local_108,local_c8);
  if ((param_2[3] != 0) && (*param_2 != 0)) {
    (**(code **)(*(long *)(*param_2 + 0x48) + 0x18))();
    *param_2 = 0;
  }
  *param_2 = 0;
  param_2[1] = 0xcbf29ce484222645;
  param_2[2] = (ulong)&DAT_01d38550;
  param_2[3] = 0;
  if (param_2[4] != 0) {
    (**(code **)(*(long *)(param_2[4] + 0x48) + 0x18))();
    param_2[4] = 0;
  }
  param_2[1] = local_100;
  param_2[2] = (ulong)local_f8;
  param_2[3] = local_f0;
  param_2[4] = local_e8;
  local_e8 = 0;
  *(undefined4 *)(param_2 + 5) = local_e0;
  if ((local_f0 != 0) && (*param_2 != 0)) {
    (**(code **)(*(long *)(*param_2 + 0x48) + 0x18))();
  }
  *param_2 = local_108;
  local_108 = 0;
  local_100 = 0xcbf29ce484222645;
  local_f8 = &DAT_01d38550;
  local_f0 = 0;
  if (local_e8 == 0) {
    return 0;
  }
  uVar4 = (**(code **)(*(long *)(local_e8 + 0x48) + 0x18))();
  return uVar4;
}


