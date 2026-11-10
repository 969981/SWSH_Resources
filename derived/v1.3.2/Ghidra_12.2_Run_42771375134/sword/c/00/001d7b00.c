/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001d7b00; name: FUN_001d7b00
 */


void FUN_001d7b00(long *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  byte *pbVar4;
  long lVar5;
  ulong uVar6;
  long local_38;
  
  uVar1 = *(uint *)(param_1 + 1);
  if ((uVar1 & 1) != 0) {
    pbVar4 = (byte *)param_1[2];
    if (pbVar4 == (byte *)0x0) {
      pbVar4 = (byte *)FUN_001d1a00(*param_1,uVar1 >> 0x18 & 0xf);
      param_1[2] = (long)pbVar4;
    }
    if (((*pbVar4 >> 3 & 1) == 0) && ((*(byte *)((long)param_1 + 0x2c) >> 3 & 1) != 0)) {
      if (*(uint *)(param_1 + 1) >> 0x1e == 2) {
        lVar5 = *param_1;
        lVar3 = FUN_00206d30();
        uVar2 = FUN_001f3be0(param_1,&local_38);
        FUN_003e7b70(lVar5 + 0x10,
                     *(long *)(PTR_DAT_02711068 +
                              (ulong)(*(byte *)((long)param_1 + 0xb) & 0xf) * 8 + 0x30) +
                     (long)param_1,local_38,uVar2,lVar3,0);
        if (uVar2 != 0) {
          uVar6 = 0;
          do {
            FUN_00206d40(*(long *)(local_38 + uVar6 * 8) + lVar3 + -0x20);
            uVar6 = uVar6 + 1;
          } while (uVar2 != uVar6);
        }
      }
    }
    else if (((*(byte *)((long)param_1 + 0x2c) >> 3 & 1) == 0) && ((*pbVar4 >> 3 & 1) != 0)) {
      FUN_001cc930(*param_1,param_1,0);
      FUN_001d6280(param_1);
      goto joined_r0x001d7c5c;
    }
  }
  FUN_001d6280(param_1);
joined_r0x001d7c5c:
  if ((uVar1 >> 6 & 1) != 0) {
    lVar3 = param_1[2];
    if (lVar3 == 0) {
      lVar3 = FUN_001d1a00(*param_1,*(byte *)((long)param_1 + 0xb) & 0xf);
      param_1[2] = lVar3;
    }
    if ((*(byte *)(param_1 + 1) >> 6 & 1) != 0) {
      FUN_003fefd0(param_1 + 4,lVar3 + 0xb0);
    }
  }
  param_1[2] = 0;
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) & 0xff000000;
  return;
}


