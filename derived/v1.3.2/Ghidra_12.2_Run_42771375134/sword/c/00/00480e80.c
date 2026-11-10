/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00480e80; name: FUN_00480e80
 */


undefined8 FUN_00480e80(long param_1,long param_2)

{
  undefined8 uVar1;
  byte *pbVar2;
  float *pfVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined1 local_40;
  undefined1 local_38;
  undefined8 local_30;
  float local_24;
  
  if ((*(byte *)(param_2 + 0x188) >> 2 & 1) != 0) {
    return 1;
  }
  if ((*(byte *)(param_2 + 0x184) & 1) != 0) {
    *(byte *)(param_2 + 0x184) = *(byte *)(param_2 + 0x184) & 0xfe;
    return 1;
  }
  local_24 = 0.0;
  local_58 = *(undefined8 *)(param_2 + 0x10);
  local_50 = *(undefined4 *)(param_2 + 0x34);
  local_48 = 0;
  local_40 = 0xff;
  local_38 = 0xff;
  local_30 = 0;
  FUN_00452c80(param_1,&local_24,0x3b,&local_58);
  pbVar2 = *(byte **)(param_1 + 0xa0);
  if (pbVar2 != (byte *)0x0) {
    uVar4 = 0;
    pfVar3 = (float *)(pbVar2 + ((ulong)(*pbVar2 + 4) & 0x1fc));
    do {
      if (pbVar2[uVar4 + 1] == 0x3b) {
        if (pfVar3 != (float *)0x0) {
          fVar6 = *pfVar3;
          fVar7 = pfVar3[1];
          if (fVar7 - fVar6 == 0.0) {
            fVar7 = 0.0;
          }
          else {
            lVar5 = *(long *)PTR_DAT_02712b80 * 0x5851f42d4c957f2d + 1;
            *(long *)PTR_DAT_02712b80 = lVar5;
            fVar7 = (float)((double)(fVar7 - fVar6) * DAT_01cd53a0 *
                           (double)(uint)((ulong)lVar5 >> 0x21));
            fVar6 = *pfVar3;
          }
          local_24 = fVar7 + fVar6 + local_24;
        }
        break;
      }
      uVar4 = uVar4 + 1;
      pfVar3 = pfVar3 + 2;
    } while (uVar4 < *pbVar2);
  }
  if (local_24 <= 0.0) {
    return 1;
  }
  if (*(int *)(param_2 + 0x90) == 0) {
    uVar1 = FUN_0047f130(param_1,param_2);
    if ((int)uVar1 == 1) {
      uVar1 = 3;
    }
    return uVar1;
  }
  dVar8 = (double)NEON_ucvtf((ulong)*(uint *)PTR_DAT_02712b38);
  dVar9 = 0.5;
  if (dVar8 * (double)local_24 <= 0.0) {
    dVar9 = -0.5;
  }
  *(int *)(param_2 + 0x84) = *(int *)(param_2 + 0x84) + (int)(dVar9 + dVar8 * (double)local_24);
  return 1;
}


