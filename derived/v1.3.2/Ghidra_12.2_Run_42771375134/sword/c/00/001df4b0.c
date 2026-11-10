/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001df4b0; name: FUN_001df4b0
 */


void FUN_001df4b0(long *param_1,byte *param_2)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  byte *pbVar4;
  byte local_28 [8];
  
  if ((*(uint *)((long)param_1 + 0x11c) >> 0xe & 1) == 0) {
    pbVar4 = (byte *)((long)param_1 + 0x4c);
  }
  else {
    pbVar4 = (byte *)(param_1[2] + 0x14c);
  }
  local_28[0] = *param_2;
  bVar1 = local_28[0] & (*pbVar4 & 1) == 0;
  if ((*(uint *)(param_1 + 1) >> 0x1e != 3) &&
     ((*(uint *)(param_1 + 1) >> 0x1e != 2 || (*(char *)(*param_1 + 0x1fb9) == '\0')))) {
    if (bVar1 != 0) {
      *(undefined8 *)((long)param_1 + 0x114) = 0x100000000;
      *(undefined8 *)((long)param_1 + 0xfc) = 0;
      *(undefined8 *)((long)param_1 + 0x104) = 0;
      *(undefined8 *)((long)param_1 + 0x10c) = 0;
    }
    if (*param_1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(*param_1 + 0x1178);
    }
    FUN_003be390(param_1 + 4,uVar3,local_28);
    return;
  }
  if (bVar1 == 0) {
    if ((*pbVar4 & (local_28[0] & 1) == 0) != 0) {
      *(uint *)((long)param_1 + 0x11c) = *(uint *)((long)param_1 + 0x11c) & 0xffff7fff;
    }
    lVar2 = param_1[2];
  }
  else {
    FUN_001d5f80(param_1);
    lVar2 = param_1[2];
  }
  if (lVar2 == 0) {
    lVar2 = FUN_001d1a00(*param_1,*(byte *)((long)param_1 + 0xb) & 0xf);
    param_1[2] = lVar2;
  }
  *(byte *)(lVar2 + 0x14c) = *param_2;
  FUN_001d1850(*param_1,param_1);
  *(uint *)((long)param_1 + 0x11c) = *(uint *)((long)param_1 + 0x11c) | 0x4000;
  return;
}


