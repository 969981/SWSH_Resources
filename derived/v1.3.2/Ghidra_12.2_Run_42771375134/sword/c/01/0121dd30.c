/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0121dd30; name: FUN_0121dd30
 */


void FUN_0121dd30(ushort *param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong local_40;
  ulong uStack_38;
  ulong local_30;
  
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_00cc2d50(&local_40);
  FUN_00cc2d80(&local_40,param_2);
  uVar6 = (uint)local_40;
  *param_1 = (ushort)(uVar6 >> 3) & 0x1f;
  param_1[1] = (ushort)(local_40 >> 0x10) >> 4 & 0x3ff;
  param_1[4] = (ushort)(local_40 >> 0x34) & 0x3ff;
  uVar4 = uVar6 >> 0xc & 0xf;
  param_1[5] = (ushort)uStack_38 & 0x3ff;
  uVar5 = uVar6 >> 0x10 & 0xf;
  param_1[9] = (ushort)(uStack_38 >> 0x2a) & 0x3ff;
  param_1[0x10] = 0;
  param_1[2] = (ushort)(local_40 >> 0x20) & 0x3ff;
  param_1[3] = (ushort)(local_40 >> 0x2a) & 0x3ff;
  uVar6 = uVar6 >> 8 & 0xf;
  param_1[6] = (ushort)((uint)uStack_38 >> 10) & 0x3ff;
  param_1[7] = (ushort)(uStack_38 >> 0x10) >> 4 & 0x3ff;
  param_1[8] = (ushort)(uStack_38 >> 0x20) & 0x3ff;
  cVar2 = '\x02';
  if (uVar4 == 0xf) {
    cVar2 = '\x01';
  }
  param_1[10] = (ushort)(uStack_38 >> 0x34) & 0x3ff;
  param_1[0xb] = (ushort)local_30 & 0x3ff;
  cVar1 = uVar4 != 0xf;
  if (uVar6 != 0xf) {
    cVar1 = cVar2;
  }
  param_1[0xc] = (ushort)((uint)local_30 >> 10) & 0x3ff;
  param_1[0xd] = (ushort)(local_30 >> 0x10) >> 4 & 0x3ff;
  if (uVar5 != 0xf) {
    cVar1 = cVar1 + '\x01';
  }
  param_1[0xe] = (ushort)(local_30 >> 0x20) & 0x3ff;
  param_1[0xf] = (ushort)(local_30 >> 0x2a) & 0x1f;
  *(byte *)((long)param_1 + 0x23) = (byte)(local_30 >> 0x1e) & 3;
  param_1[0x12] = (ushort)(local_30 >> 0x2f) & 0x1f;
  cVar1 = cVar1 - (cVar1 != '\0');
  *(char *)(param_1 + 0x11) = cVar1;
  if (uVar6 != 0xf) {
    param_1[0x10] = (ushort)uVar6;
    if (uVar4 == 0xf) {
      if (cVar1 == '\0') goto LAB_0121de70;
    }
    else {
      uVar3 = (short)uVar4 + (ushort)uVar6 * 10;
      param_1[0x10] = uVar3;
      if (uVar5 == 0xf) {
        if (cVar1 == '\x01') goto LAB_0121de70;
      }
      else {
        param_1[0x10] = (short)uVar5 + uVar3 * 10;
        if (cVar1 == '\x02') goto LAB_0121de70;
      }
    }
  }
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 2;
LAB_0121de70:
  FUN_00cc2d70(&local_40);
  return;
}


