/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0109fa40; name: FUN_0109fa40
 */


void FUN_0109fa40(long param_1)

{
  int iVar1;
  ulong uVar2;
  byte *pbVar3;
  ulong local_88 [12];
  undefined4 local_28;
  
  if (*(char *)(param_1 + 0x15c) != '\0') {
    iVar1 = *(int *)(param_1 + 0x150);
    local_28 = 0;
    local_88[10] = 0;
    local_88[0xb] = 0;
    local_88[8] = 0;
    local_88[9] = 0;
    local_88[6] = 0;
    local_88[7] = 0;
    local_88[4] = 0;
    local_88[5] = 0;
    local_88[2] = 0;
    local_88[3] = 0;
    local_88[0] = 0;
    local_88[1] = 0;
    if (*(char *)(param_1 + 0xc4) == '\0') {
      snprintf((char *)local_88,100,"anime_%s","gauge_scale");
    }
    else {
      snprintf((char *)local_88,100,"anime_%s_%s",(char *)(param_1 + 0xc4),"gauge_scale");
    }
    uVar2 = 0xcbf29ce484222645;
    if ((byte)local_88[0] != 0) {
      pbVar3 = (byte *)((ulong)local_88 | 1);
      do {
        uVar2 = (uVar2 ^ (byte)local_88[0]) * 0x100000001b3;
        local_88[0]._0_1_ = *pbVar3;
        pbVar3 = pbVar3 + 1;
      } while ((byte)local_88[0] != 0);
    }
    local_88[0] = uVar2;
    FUN_00ffd510((float)(100 - iVar1),*(long *)(param_1 + 0x138) + 0x100,local_88);
    *(int *)(param_1 + 0x148) = iVar1;
    FUN_0109e790(param_1,*(undefined4 *)(param_1 + 0x158));
    if (*(int *)(param_1 + 0x154) != *(int *)(param_1 + 0x158)) {
      FUN_0109eb80(param_1,0);
    }
  }
  return;
}


