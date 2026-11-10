/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006ad150; name: FUN_006ad150
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006ad150(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 int *param_5)

{
  float *pfVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  undefined4 uVar5;
  ulong uVar6;
  float fVar7;
  
  *param_1 = param_5;
  param_1[1] = param_2;
  uVar3 = _UNK_01d4b578;
  uVar2 = _DAT_01d4b570;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar3 = _UNK_01d4a918;
  uVar2 = _DAT_01d4a910;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = uVar3;
  param_1[10] = uVar2;
  param_1[0x1a] = 0x3e88888900000000;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = uVar3;
  param_1[0x12] = uVar2;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  if (*(ushort *)((long)param_5 - (long)*param_5) < 7) {
    uVar5 = 0;
  }
  else {
    uVar6 = (ulong)((ushort *)((long)param_5 - (long)*param_5))[3];
    uVar5 = 0;
    if (uVar6 != 0) {
      uVar5 = *(undefined4 *)((long)param_5 + uVar6);
    }
  }
  *(undefined4 *)(param_1 + 4) = uVar5;
  fVar4 = DAT_01d4bf34;
  pfVar1 = (float *)((long)param_5 + (ulong)*(ushort *)((long)param_5 + (8 - (long)*param_5)));
  fVar7 = pfVar1[1] * DAT_01d4bf34;
  *(float *)(param_1 + 5) = *pfVar1 * DAT_01d4bf34;
  *(float *)((long)param_1 + 0x2c) = fVar7;
  pfVar1 = (float *)((long)param_5 + (ulong)*(ushort *)((long)param_5 + (10 - (long)*param_5)));
  fVar7 = pfVar1[1];
  *(float *)(param_1 + 6) = *pfVar1 * fVar4;
  *(float *)((long)param_1 + 0x34) = fVar7 * fVar4;
  fVar7 = 0.0;
  if ((0xc < *(ushort *)((long)param_5 - (long)*param_5)) &&
     (uVar6 = (ulong)((ushort *)((long)param_5 - (long)*param_5))[6], uVar6 != 0)) {
    fVar7 = *(float *)((long)param_5 + uVar6) * fVar4;
  }
  *(float *)((long)param_1 + 0x24) = fVar7;
  return;
}


