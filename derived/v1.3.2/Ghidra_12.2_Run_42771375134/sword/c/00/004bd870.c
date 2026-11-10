/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004bd870; name: FUN_004bd870
 */


undefined8 FUN_004bd870(undefined8 *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 *puVar6;
  undefined8 *puVar5;
  ulong uVar7;
  float fVar8;
  
  uVar1 = *(uint *)(param_1 + 3);
  if (param_2 < *(uint *)((long)param_1 + 0x1c) + uVar1) {
    bVar3 = *(byte *)(param_1 + 8);
    if (((bVar3 >> 1 & 1) == 0) || (*(float *)((long)param_1 + 0x44) == 0.0)) {
      if (uVar1 < param_2) {
        fVar8 = (float)(param_2 - uVar1) / (float)*(uint *)((long)param_1 + 0x1c);
      }
      else {
        fVar8 = 0.0;
      }
      *(float *)(param_1 + 4) = fVar8;
      uVar7 = FUN_0042ea00(fVar8,*(undefined4 *)(param_1 + 1),*(undefined4 *)((long)param_1 + 0xc),
                           *(undefined4 *)(param_1 + 7));
      bVar3 = *(byte *)(param_1 + 8);
    }
    else {
      uVar7 = (ulong)(uint)(*(float *)((long)param_1 + 0x14) +
                           *(float *)((long)param_1 + 0x44) *
                           (*(float *)(param_1 + 2) - *(float *)((long)param_1 + 0x14)));
    }
    uVar1 = (uint)uVar7;
    if ((bVar3 & 1) == 0) {
      uVar4 = 0;
      iVar2 = *(int *)(param_1 + 6);
      *(uint *)(param_1 + 2) = uVar1;
      goto joined_r0x004bd998;
    }
    fVar8 = (float)(uVar1 & 0x7fffff | 0x3f800000);
    fVar8 = (fVar8 + -1.0) / (fVar8 + 1.0);
    fVar8 = (fVar8 + fVar8 + (fVar8 + fVar8) * fVar8 * fVar8 * DAT_01d4bd24 +
            DAT_01d4c4dc * ((float)(uVar1 >> 0x17 & 0xff) + DAT_01d4bf90)) * DAT_01d4c2e8;
    uVar4 = 0;
    iVar2 = *(int *)(param_1 + 6);
    *(float *)(param_1 + 2) = fVar8;
  }
  else {
    fVar8 = *(float *)((long)param_1 + 0x14);
    uVar4 = 1;
    iVar2 = *(int *)(param_1 + 6);
    *(float *)(param_1 + 2) = fVar8;
  }
  uVar7 = (ulong)(uint)fVar8;
joined_r0x004bd998:
  if (iVar2 != 0) {
    puVar5 = (undefined8 *)param_1[5];
    do {
      puVar6 = puVar5 + 1;
      (*(code *)**(undefined8 **)*puVar5)(uVar7,(undefined8 *)*puVar5,*param_1,uVar4);
      puVar5 = puVar6;
    } while (puVar6 != (undefined8 *)(param_1[5] + (ulong)*(uint *)(param_1 + 6) * 8));
  }
  return uVar4;
}


