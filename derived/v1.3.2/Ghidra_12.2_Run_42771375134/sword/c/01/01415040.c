/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01415040; name: FUN_01415040
 */


void FUN_01415040(long param_1)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  byte *pbVar4;
  int param3;
  ulong local_b0 [8];
  
  param3 = 0;
  do {
    local_b0[2] = 0;
    local_b0[3] = 0;
    local_b0[0] = 0;
    local_b0[1] = 0;
    snprintf((char *)local_b0,0x20,"pane_L_notice_%02d",param3);
    uVar3 = local_b0[0] & 0xff;
    local_b0[4] = 0xcbf29ce484222645;
    if ((char)local_b0[0] != '\0') {
      local_b0[4] = 0xcbf29ce484222645;
      pbVar4 = (byte *)((ulong)local_b0 | 1);
      do {
        local_b0[4] = (local_b0[4] ^ uVar3) * 0x100000001b3;
        bVar1 = *pbVar4;
        uVar3 = (ulong)bVar1;
        pbVar4 = pbVar4 + 1;
      } while (bVar1 != 0);
    }
    lVar2 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),local_b0 + 4);
    if (lVar2 != 0) {
      local_b0[6] = 0;
      local_b0[7] = 0;
      local_b0[4] = 0;
      local_b0[5] = 0;
      snprintf((char *)(local_b0 + 4),0x20,"anime_L_notice_%02d_out",param3);
      FUN_00ffd280(param_1 + 0x100,local_b0 + 4);
      local_b0[6] = 0;
      local_b0[7] = 0;
      local_b0[4] = 0;
      local_b0[5] = 0;
      snprintf((char *)(local_b0 + 4),0x20,"anime_L_notice_%02d_icon_change",param3);
      FUN_00ffd450(0x40800000,param_1 + 0x100,local_b0 + 4);
      *(undefined1 *)(param_1 + 0x5cc) = 1;
      FUN_01415210(param_1,param3);
    }
    param3 = param3 + 1;
  } while (param3 != 8);
  FUN_00ffa290(param_1,0,1);
  return;
}


