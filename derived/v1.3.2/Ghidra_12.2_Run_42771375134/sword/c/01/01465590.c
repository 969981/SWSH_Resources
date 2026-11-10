/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01465590; name: FUN_01465590
 */


void FUN_01465590(long param_1)

{
  byte *pbVar1;
  ulong uVar2;
  ulong local_98 [12];
  undefined4 local_38;
  
  local_38 = 0;
  local_98[10] = 0;
  local_98[0xb] = 0;
  uVar2 = 0xcbf29ce484222645;
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
  snprintf((char *)local_98,100,"anime_%s","text");
  if ((byte)local_98[0] != 0) {
    pbVar1 = (byte *)((ulong)local_98 | 1);
    do {
      uVar2 = (uVar2 ^ (byte)local_98[0]) * 0x100000001b3;
      local_98[0]._0_1_ = *pbVar1;
      pbVar1 = pbVar1 + 1;
    } while ((byte)local_98[0] != 0);
  }
  local_98[0] = uVar2;
  FUN_00ffd510(0,param_1 + 0x100,local_98);
  return;
}


