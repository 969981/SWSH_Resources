/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d9bb40; name: FUN_00d9bb40
 */


void FUN_00d9bb40(long param_1)

{
  long lVar1;
  int param3;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  char local_70 [64];
  
  uVar2 = *(int *)(param_1 + 0x158) - 10;
  if (uVar2 < 3) {
    lVar5 = *(long *)(&DAT_021604b0 + (long)(int)uVar2 * 8);
    uVar4 = (ulong)*(uint *)(&DAT_021604c8 + (long)(int)uVar2 * 4);
    lVar1 = param_1 + uVar4 * 0x10;
    *(uint *)(param_1 + 0x3a0) = *(uint *)(&DAT_021604c8 + (long)(int)uVar2 * 4);
    FUN_00786c60(*(undefined8 *)(param_1 + 0x358),0,*(undefined8 *)(lVar1 + 0x80),0);
    if (uVar4 + 1 != lVar5) {
      puVar6 = (undefined8 *)(lVar1 + 0x90);
      do {
        FUN_00786c60(*(undefined8 *)(param_1 + 0x358),((int)uVar4 - *(int *)(param_1 + 0x3a0)) + 1,
                     *puVar6,0);
        uVar4 = uVar4 + 1;
        puVar6 = puVar6 + 2;
      } while (lVar5 - 1U != uVar4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x3a0) = 0;
    local_70[0x30] = '\0';
    local_70[0x31] = '\0';
    local_70[0x32] = '\0';
    local_70[0x33] = '\0';
    local_70[0x34] = '\0';
    local_70[0x35] = '\0';
    local_70[0x36] = '\0';
    local_70[0x37] = '\0';
    local_70[0x38] = '\0';
    local_70[0x39] = '\0';
    local_70[0x3a] = '\0';
    local_70[0x3b] = '\0';
    local_70[0x3c] = '\0';
    local_70[0x3d] = '\0';
    local_70[0x3e] = '\0';
    local_70[0x3f] = '\0';
    local_70[0x20] = '\0';
    local_70[0x21] = '\0';
    local_70[0x22] = '\0';
    local_70[0x23] = '\0';
    local_70[0x24] = '\0';
    local_70[0x25] = '\0';
    local_70[0x26] = '\0';
    local_70[0x27] = '\0';
    local_70[0x28] = '\0';
    local_70[0x29] = '\0';
    local_70[0x2a] = '\0';
    local_70[0x2b] = '\0';
    local_70[0x2c] = '\0';
    local_70[0x2d] = '\0';
    local_70[0x2e] = '\0';
    local_70[0x2f] = '\0';
    param3 = *(int *)(&DAT_02160474 + (long)*(int *)(param_1 + 0x158) * 4);
    local_70[0x10] = '\0';
    local_70[0x11] = '\0';
    local_70[0x12] = '\0';
    local_70[0x13] = '\0';
    local_70[0x14] = '\0';
    local_70[0x15] = '\0';
    local_70[0x16] = '\0';
    local_70[0x17] = '\0';
    local_70[0x18] = '\0';
    local_70[0x19] = '\0';
    local_70[0x1a] = '\0';
    local_70[0x1b] = '\0';
    local_70[0x1c] = '\0';
    local_70[0x1d] = '\0';
    local_70[0x1e] = '\0';
    local_70[0x1f] = '\0';
    local_70[0] = '\0';
    local_70[1] = '\0';
    local_70[2] = '\0';
    local_70[3] = '\0';
    local_70[4] = '\0';
    local_70[5] = '\0';
    local_70[6] = '\0';
    local_70[7] = '\0';
    local_70[8] = '\0';
    local_70[9] = '\0';
    local_70[10] = '\0';
    local_70[0xb] = '\0';
    local_70[0xc] = '\0';
    local_70[0xd] = '\0';
    local_70[0xe] = '\0';
    local_70[0xf] = '\0';
    snprintf(local_70,0x40,"%s",*(undefined8 *)(param_1 + 0x80));
    uVar4 = 0;
    do {
      while (uVar3 = uVar4, local_70[uVar3] != '0') {
        if (local_70[uVar3] == '\0') goto LAB_00d9bc7c;
        uVar4 = uVar3 + 1;
      }
      uVar4 = uVar3 + 1;
    } while (local_70[uVar3 + 1] != '0');
    snprintf(local_70 + (uVar3 & 0xffffffff),0x40 - (uVar3 & 0xffffffff),"%02d%s",param3,
             (char *)(*(long *)(param_1 + 0x80) + (ulong)((int)uVar3 + 2)));
LAB_00d9bc7c:
    FUN_00786c60(*(undefined8 *)(param_1 + 0x358),-*(int *)(param_1 + 0x3a0),local_70,0);
    local_70[0x30] = '\0';
    local_70[0x31] = '\0';
    local_70[0x32] = '\0';
    local_70[0x33] = '\0';
    local_70[0x34] = '\0';
    local_70[0x35] = '\0';
    local_70[0x36] = '\0';
    local_70[0x37] = '\0';
    local_70[0x38] = '\0';
    local_70[0x39] = '\0';
    local_70[0x3a] = '\0';
    local_70[0x3b] = '\0';
    local_70[0x3c] = '\0';
    local_70[0x3d] = '\0';
    local_70[0x3e] = '\0';
    local_70[0x3f] = '\0';
    local_70[0x20] = '\0';
    local_70[0x21] = '\0';
    local_70[0x22] = '\0';
    local_70[0x23] = '\0';
    local_70[0x24] = '\0';
    local_70[0x25] = '\0';
    local_70[0x26] = '\0';
    local_70[0x27] = '\0';
    local_70[0x28] = '\0';
    local_70[0x29] = '\0';
    local_70[0x2a] = '\0';
    local_70[0x2b] = '\0';
    local_70[0x2c] = '\0';
    local_70[0x2d] = '\0';
    local_70[0x2e] = '\0';
    local_70[0x2f] = '\0';
    local_70[0x10] = '\0';
    local_70[0x11] = '\0';
    local_70[0x12] = '\0';
    local_70[0x13] = '\0';
    local_70[0x14] = '\0';
    local_70[0x15] = '\0';
    local_70[0x16] = '\0';
    local_70[0x17] = '\0';
    local_70[0x18] = '\0';
    local_70[0x19] = '\0';
    local_70[0x1a] = '\0';
    local_70[0x1b] = '\0';
    local_70[0x1c] = '\0';
    local_70[0x1d] = '\0';
    local_70[0x1e] = '\0';
    local_70[0x1f] = '\0';
    local_70[0] = '\0';
    local_70[1] = '\0';
    local_70[2] = '\0';
    local_70[3] = '\0';
    local_70[4] = '\0';
    local_70[5] = '\0';
    local_70[6] = '\0';
    local_70[7] = '\0';
    local_70[8] = '\0';
    local_70[9] = '\0';
    local_70[10] = '\0';
    local_70[0xb] = '\0';
    local_70[0xc] = '\0';
    local_70[0xd] = '\0';
    local_70[0xe] = '\0';
    local_70[0xf] = '\0';
    snprintf(local_70,0x40,"%s",*(undefined8 *)(param_1 + 0x90));
    uVar4 = 0;
    do {
      while (uVar3 = uVar4, local_70[uVar3] != '0') {
        if (local_70[uVar3] == '\0') goto LAB_00d9bd24;
        uVar4 = uVar3 + 1;
      }
      uVar4 = uVar3 + 1;
    } while (local_70[uVar3 + 1] != '0');
    snprintf(local_70 + (uVar3 & 0xffffffff),0x40 - (uVar3 & 0xffffffff),"%02d%s",param3,
             (char *)(*(long *)(param_1 + 0x90) + (ulong)((int)uVar3 + 2)));
LAB_00d9bd24:
    FUN_00786c60(*(undefined8 *)(param_1 + 0x358),1 - *(int *)(param_1 + 0x3a0),local_70,0);
    local_70[0x30] = '\0';
    local_70[0x31] = '\0';
    local_70[0x32] = '\0';
    local_70[0x33] = '\0';
    local_70[0x34] = '\0';
    local_70[0x35] = '\0';
    local_70[0x36] = '\0';
    local_70[0x37] = '\0';
    local_70[0x38] = '\0';
    local_70[0x39] = '\0';
    local_70[0x3a] = '\0';
    local_70[0x3b] = '\0';
    local_70[0x3c] = '\0';
    local_70[0x3d] = '\0';
    local_70[0x3e] = '\0';
    local_70[0x3f] = '\0';
    local_70[0x20] = '\0';
    local_70[0x21] = '\0';
    local_70[0x22] = '\0';
    local_70[0x23] = '\0';
    local_70[0x24] = '\0';
    local_70[0x25] = '\0';
    local_70[0x26] = '\0';
    local_70[0x27] = '\0';
    local_70[0x28] = '\0';
    local_70[0x29] = '\0';
    local_70[0x2a] = '\0';
    local_70[0x2b] = '\0';
    local_70[0x2c] = '\0';
    local_70[0x2d] = '\0';
    local_70[0x2e] = '\0';
    local_70[0x2f] = '\0';
    local_70[0x10] = '\0';
    local_70[0x11] = '\0';
    local_70[0x12] = '\0';
    local_70[0x13] = '\0';
    local_70[0x14] = '\0';
    local_70[0x15] = '\0';
    local_70[0x16] = '\0';
    local_70[0x17] = '\0';
    local_70[0x18] = '\0';
    local_70[0x19] = '\0';
    local_70[0x1a] = '\0';
    local_70[0x1b] = '\0';
    local_70[0x1c] = '\0';
    local_70[0x1d] = '\0';
    local_70[0x1e] = '\0';
    local_70[0x1f] = '\0';
    local_70[0] = '\0';
    local_70[1] = '\0';
    local_70[2] = '\0';
    local_70[3] = '\0';
    local_70[4] = '\0';
    local_70[5] = '\0';
    local_70[6] = '\0';
    local_70[7] = '\0';
    local_70[8] = '\0';
    local_70[9] = '\0';
    local_70[10] = '\0';
    local_70[0xb] = '\0';
    local_70[0xc] = '\0';
    local_70[0xd] = '\0';
    local_70[0xe] = '\0';
    local_70[0xf] = '\0';
    snprintf(local_70,0x40,"%s",*(undefined8 *)(param_1 + 0xa0));
    uVar4 = 0;
    do {
      while (uVar3 = uVar4, local_70[uVar3] != '0') {
        if (local_70[uVar3] == '\0') goto LAB_00d9bdd0;
        uVar4 = uVar3 + 1;
      }
      uVar4 = uVar3 + 1;
    } while (local_70[uVar3 + 1] != '0');
    snprintf(local_70 + (uVar3 & 0xffffffff),0x40 - (uVar3 & 0xffffffff),"%02d%s",param3,
             (char *)(*(long *)(param_1 + 0xa0) + (ulong)((int)uVar3 + 2)));
LAB_00d9bdd0:
    FUN_00786c60(*(undefined8 *)(param_1 + 0x358),2 - *(int *)(param_1 + 0x3a0),local_70,0);
  }
  return;
}


