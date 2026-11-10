/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0121e0b0; name: FUN_0121e0b0
 */


void FUN_0121e0b0(undefined8 param_1,ushort *param_2,int param_3)

{
  byte bVar1;
  ulong uVar2;
  ushort uVar3;
  uint uVar4;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  
  FUN_00cc2d50(&local_50);
  uVar2 = local_50 & 0xfff0000000000000 |
          local_50 & 0xc0000000 |
          (ulong)(param_3 != 0) << 2 | ((ulong)*param_2 & 0x1f) << 3 |
          ((ulong)param_2[1] & 0x3ff) << 0x14 | ((ulong)param_2[2] & 0x3ff) << 0x20 |
          (ulong)param_2[3] << 0x2a;
  local_50 = (ulong)(param_2[4] & 0x3ff) << 0x34;
  local_48 = local_48 & 0xc000000000000000 |
             local_48 & 0xc0000000 | (ulong)param_2[5] & 0x3ff | ((ulong)param_2[6] & 0x3ff) << 10 |
             ((ulong)param_2[7] & 0x3ff) << 0x14 | ((ulong)param_2[8] & 0xc00003ff) << 0x20 |
             ((ulong)param_2[9] & 0x3ff) << 0x2a | (ulong)(param_2[10] & 0x3ff) << 0x34;
  local_40 = local_40 & 0xfff0000000000000 |
             (ulong)(param_2[0xe] & 0x3ff) << 0x20 |
             (ulong)param_2[0xb] & 0x3ff | ((ulong)param_2[0xc] & 0x3ff) << 10 |
             ((ulong)param_2[0xd] & 0x3ff) << 0x14 |
             ((ulong)*(byte *)((long)param_2 + 0x23) & 3) << 0x1e |
             (ulong)(param_2[0xf] & 0x1f) << 0x2a | (ulong)(param_2[0x12] & 0x1f) << 0x2f;
  bVar1 = (byte)param_2[0x11];
  if (bVar1 == 0) {
    uVar4 = (uint)param_2[0x10];
    if (param_2[0x10] < 9) goto LAB_0121e230;
  }
  else if (bVar1 == 1) {
    uVar4 = (uint)param_2[0x10];
    if (param_2[0x10] < 99) {
LAB_0121e230:
      if (bVar1 == 1) {
        local_50 = uVar2 & 0xc00ffffffff000fc | local_50 | (ulong)((uVar4 % 10) * 0x1000) |
                   (ulong)((uVar4 / 10 & 0xf) << 8) | 0xf0000;
      }
      else if (bVar1 == 0) {
        local_50 = uVar2 & 0xc00ffffffff000fc | local_50 | (ulong)(uVar4 << 8) & 0xf00 | 0xff000;
      }
      else {
        local_50 = uVar2 & 0xc00ffffffff000fc | local_50 |
                   (ulong)(uint)((int)((ulong)(uVar4 % 100) * 0xcccccccd >> 0x20) << 9) & 0xf000 |
                   (ulong)(uVar4 % 10) << 0x10 | (ulong)((uVar4 / 100 & 0xf) << 8);
      }
      goto LAB_0121e308;
    }
  }
  else {
    uVar3 = 999;
    if (bVar1 != 2) {
      uVar3 = 0;
    }
    if ((bVar1 < 3) && (uVar4 = (uint)param_2[0x10], param_2[0x10] < uVar3)) goto LAB_0121e230;
  }
  local_50 = uVar2 & 0xc00ffffffff000fc | local_50;
LAB_0121e308:
  FUN_00cc10e0(param_1);
  FUN_00cc3820(param_1,&local_50);
  FUN_00cc2d70(&local_50);
  return;
}


