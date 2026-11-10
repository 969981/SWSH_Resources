/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ffd710; name: FUN_00ffd710
 */


void FUN_00ffd710(long param_1,char *param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  byte *pbVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong local_98 [12];
  undefined4 local_38;
  
  local_38 = 0;
  local_98[10] = 0;
  local_98[0xb] = 0;
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
  if (*param_2 == '\0') {
    snprintf((char *)local_98,100,"anime_%s","switch");
  }
  else {
    snprintf((char *)local_98,100,"anime_%s_%s",param_2,"switch");
  }
  uVar2 = 0xcbf29ce484222645;
  if ((byte)local_98[0] != 0) {
    pbVar3 = (byte *)((ulong)local_98 | 1);
    do {
      uVar2 = (uVar2 ^ (byte)local_98[0]) * 0x100000001b3;
      local_98[0]._0_1_ = *pbVar3;
      pbVar3 = pbVar3 + 1;
    } while ((byte)local_98[0] != 0);
  }
  local_98[0] = uVar2;
  iVar1 = FUN_0087ccf0(param_3);
  uVar4 = 0x3f800000;
  if (iVar1 != 1) {
    uVar4 = 0x40000000;
  }
  uVar5 = 0;
  if (iVar1 != 0) {
    uVar5 = uVar4;
  }
  if (*(long *)(param_1 + 0x1b0) != 0) {
    uVar2 = FUN_0167bc20(*(long *)(param_1 + 0x1b0),local_98);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_1 + 0x1b0) == 0) {
        return;
      }
      FUN_0167ba30(*(long *)(param_1 + 0x1b0),local_98);
    }
    FUN_0167bdb0(uVar5,*(undefined8 *)(param_1 + 0x1b0),local_98);
  }
  return;
}


