/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00457420; name: FUN_00457420
 */


void FUN_00457420(long param_1,float *param_2)

{
  float *pfVar1;
  byte *pbVar2;
  byte *pbVar3;
  float *pfVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float local_8;
  undefined4 local_4;
  
  local_8 = *(float *)(PTR_DAT_02712b40 + 0x7c);
  pbVar2 = *(byte **)(param_1 + 0x90);
  if (pbVar2 != (byte *)0x0) {
    uVar5 = 0;
    pfVar4 = (float *)(pbVar2 + ((ulong)(*pbVar2 + 4) & 0x1fc));
    do {
      if (pbVar2[uVar5 + 1] == 0x1f) goto LAB_00457474;
      uVar5 = uVar5 + 1;
      pfVar4 = pfVar4 + 1;
    } while (uVar5 < *pbVar2);
  }
  pfVar4 = (float *)0x0;
LAB_00457474:
  pfVar1 = &local_8;
  if (pfVar4 != (float *)0x0) {
    pfVar1 = pfVar4;
  }
  local_4 = *(undefined4 *)(PTR_DAT_02712b40 + 0x80);
  pbVar3 = pbVar2;
  if (pbVar2 != (byte *)0x0) {
    uVar5 = 0;
    pbVar3 = pbVar2 + ((ulong)(*pbVar2 + 4) & 0x1fc);
    do {
      if (pbVar2[uVar5 + 1] == 0x20) goto LAB_004574c8;
      uVar5 = uVar5 + 1;
      pbVar3 = pbVar3 + 4;
    } while (uVar5 < *pbVar2);
    pbVar3 = (byte *)0x0;
  }
LAB_004574c8:
  pbVar2 = (byte *)&local_4;
  if (pbVar3 != (byte *)0x0) {
    pbVar2 = pbVar3;
  }
  fVar7 = (float)NEON_fminnm(*param_2,*(undefined4 *)pbVar2);
  fVar6 = *pfVar1;
  if (*pfVar1 <= *param_2) {
    fVar6 = fVar7;
  }
  *param_2 = fVar6;
  return;
}


