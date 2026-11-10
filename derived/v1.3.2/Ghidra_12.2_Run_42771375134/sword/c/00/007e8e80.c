/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007e8e80; name: FUN_007e8e80
 */


bool FUN_007e8e80(undefined8 param_1,undefined8 param_2,char *param_3)

{
  void *pvVar1;
  byte *pbVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar6;
  byte *pbVar5;
  long lVar7;
  ulong local_a0 [2];
  void *local_90;
  byte *local_88;
  byte *local_80;
  undefined8 uStack_78;
  byte *local_70;
  ulong local_68;
  
  local_88 = (byte *)0x0;
  local_80 = (byte *)0x0;
  uStack_78 = 0;
  uVar3 = FUN_007f81e0(param_1,param_2,&local_88);
  pbVar2 = local_80;
  if ((uVar3 & 1) != 0) {
    local_a0[0] = 0;
    local_a0[1] = 0;
    local_90 = (void *)0x0;
    if (local_88 == local_80) {
      uVar3 = 0;
    }
    else {
      lVar7 = 0;
      pbVar4 = local_88;
      do {
        if (lVar7 != 0) {
          std::string::append((char *)local_a0);
        }
        local_70 = *(byte **)(pbVar4 + 0x10);
        if ((*pbVar4 & 1) == 0) {
          local_70 = pbVar4 + 1;
        }
        local_68 = (ulong)(*pbVar4 >> 1);
        if ((*pbVar4 & 1) != 0) {
          local_68 = *(ulong *)(pbVar4 + 8);
        }
        FUN_00800880(local_a0,&local_70);
        pbVar4 = pbVar4 + 0x18;
        lVar7 = lVar7 + -0x18;
      } while (pbVar4 != pbVar2);
      uVar3 = local_a0[0] & 0xff;
    }
    pvVar1 = (void *)((ulong)local_a0 | 1);
    if ((uVar3 & 1) != 0) {
      pvVar1 = local_90;
    }
    std::string::append(param_3,(ulong)pvVar1);
    if ((local_a0[0] & 1) != 0) {
      operator_delete(local_90);
    }
  }
  pbVar4 = local_80;
  pbVar2 = local_88;
  if (local_88 != (byte *)0x0) {
    if (local_80 != local_88) {
      pbVar6 = local_80;
      do {
        pbVar5 = pbVar6 + -0x18;
        if ((*pbVar5 & 1) != 0) {
          operator_delete(*(void **)(pbVar6 + -8));
        }
        pbVar6 = pbVar5;
      } while (pbVar2 != pbVar5);
    }
    local_80 = pbVar2;
    operator_delete(local_88);
  }
  return pbVar2 != pbVar4;
}


