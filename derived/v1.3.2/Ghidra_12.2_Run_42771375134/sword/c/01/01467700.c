/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01467700; name: FUN_01467700
 */


ulong FUN_01467700(long param_1,int param_2)

{
  uint uVar1;
  byte *pbVar2;
  ulong uVar3;
  undefined4 uVar4;
  ulong local_98 [12];
  undefined4 local_38;
  
  local_38 = 0;
  local_98[10] = 0;
  local_98[0xb] = 0;
  uVar3 = 0xcbf29ce484222645;
  local_98[8] = 0;
  local_98[9] = 0;
  local_98[6] = 0;
  local_98[7] = 0;
  local_98[4] = 0;
  local_98[5] = 0;
  local_98[2] = 0;
  local_98[3] = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  uVar1 = snprintf((char *)local_98,100,"anime_%s","status");
  if ((byte)local_98[0] != 0) {
    pbVar2 = (byte *)((ulong)local_98 | 1);
    do {
      uVar3 = (uVar3 ^ (byte)local_98[0]) * 0x100000001b3;
      local_98[0]._0_1_ = *pbVar2;
      pbVar2 = pbVar2 + 1;
    } while ((byte)local_98[0] != 0);
  }
  if (param_2 == 2) {
    uVar4 = 0x40000000;
  }
  else if (param_2 == 1) {
    uVar4 = 0x3f800000;
  }
  else {
    if (param_2 != 0) {
      return (ulong)uVar1;
    }
    uVar4 = 0;
  }
  local_98[0] = uVar3;
  uVar3 = FUN_00ffd510(uVar4,param_1 + 0x100,local_98);
  return uVar3;
}


