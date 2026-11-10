/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 015286f0; name: FUN_015286f0
 */


void FUN_015286f0(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  char *pcVar3;
  ulong uVar4;
  byte *pbVar5;
  uint uVar6;
  ulong uVar7;
  ulong local_d0 [16];
  uint local_48 [2];
  
  uVar7 = 0xcbf29ce484222645;
  uVar6 = 0x84222645;
  local_d0[0] = local_d0[0] & 0xffffffff00000000;
  uVar2 = FUN_0153bf80(*(undefined8 *)PTR_DAT_02710798,local_d0);
  local_d0[0xe] = 0;
  local_d0[0xf] = 0;
  local_d0[0xc] = 0;
  local_d0[0xd] = 0;
  local_d0[10] = 0;
  local_d0[0xb] = 0;
  local_d0[8] = 0;
  local_d0[9] = 0;
  local_d0[6] = 0;
  local_d0[7] = 0;
  local_d0[4] = 0;
  local_d0[5] = 0;
  local_d0[2] = 0;
  local_d0[3] = 0;
  local_d0[0] = 0;
  local_d0[1] = 0;
  pcVar3 = (char *)FUN_015292f0(0x32);
  snprintf((char *)local_d0,0x80,"prepo_%s",pcVar3);
  local_48[0] = 0x84222645;
  if ((byte)local_d0[0] != 0) {
    local_48[0] = 0x84222645;
    pbVar5 = (byte *)((ulong)local_d0 | 1);
    bVar1 = (byte)local_d0[0];
    do {
      local_48[0] = (local_48[0] ^ bVar1) * 0x1b3;
      bVar1 = *pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (bVar1 != 0);
  }
  FUN_01502d70(uVar2,local_48,param_1 + 0x128);
  local_d0[0xe] = 0;
  local_d0[0xf] = 0;
  local_d0[0xc] = 0;
  local_d0[0xd] = 0;
  local_d0[10] = 0;
  local_d0[0xb] = 0;
  local_d0[8] = 0;
  local_d0[9] = 0;
  local_d0[6] = 0;
  local_d0[7] = 0;
  local_d0[4] = 0;
  local_d0[5] = 0;
  local_d0[2] = 0;
  local_d0[3] = 0;
  local_d0[0] = 0;
  local_d0[1] = 0;
  pcVar3 = (char *)FUN_015292f0(0x33);
  snprintf((char *)local_d0,0x80,"prepo_%s",pcVar3);
  uVar4 = local_d0[0] & 0xff;
  if ((byte)local_d0[0] != '\0') {
    pbVar5 = (byte *)((ulong)local_d0 | 1);
    do {
      uVar7 = (uVar7 ^ uVar4) * 0x100000001b3;
      bVar1 = *pbVar5;
      uVar4 = (ulong)bVar1;
      pbVar5 = pbVar5 + 1;
    } while (bVar1 != 0);
    uVar6 = (uint)uVar7;
  }
  local_48[0] = uVar6;
  FUN_01502d70(uVar2,local_48,param_1 + 300);
  return;
}


