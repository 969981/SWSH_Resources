/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c7ad0; name: FUN_004c7ad0
 */


void FUN_004c7ad0(long param_1)

{
  undefined8 uVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  float *pfVar7;
  float *pfVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_80;
  float local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined1 local_60;
  undefined1 local_58;
  undefined8 local_50;
  float local_44;
  
  lVar5 = *(long *)(param_1 + 0x70);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  fVar14 = *(float *)(param_1 + 0x3c);
  uVar4 = FUN_004c8210(lVar5,&local_7c,&local_80);
  if ((uVar4 & 1) == 0) {
    fVar10 = *(float *)(param_1 + 0x36c);
  }
  else {
    *(float *)(param_1 + 0x368) = local_7c;
    fVar10 = 1.0 - 1.0 / local_80;
    *(float *)(param_1 + 0x36c) = fVar10;
  }
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  fVar12 = (*(float *)(param_1 + 0x358) - fVar14) - local_7c;
  local_60 = 0xff;
  local_58 = 0xff;
  local_50 = 0;
  fVar10 = local_7c + fVar10 * fVar12;
  if (fVar12 <= 0.0) {
    fVar10 = local_7c;
  }
  if ((*(ulong **)(lVar5 + 0x38) == (ulong *)0x0) ||
     ((**(ulong **)(lVar5 + 0x38) & 1L << ((ulong)*(uint *)(PTR_DAT_02712b48 + 0x74) & 0x3f)) == 0))
  {
    local_44 = *(float *)(PTR_DAT_02712b40 + 0x74);
    pfVar7 = *(float **)(lVar5 + 0x90);
    pfVar8 = pfVar7;
    if (pfVar7 != (float *)0x0) {
      uVar4 = 0;
      pfVar8 = (float *)((long)pfVar7 + ((ulong)(*(byte *)pfVar7 + 4) & 0x1fc));
      do {
        if (*(byte *)((long)pfVar7 + uVar4 + 1) == 0x1d) goto LAB_004c7c44;
        uVar4 = uVar4 + 1;
        pfVar8 = pfVar8 + 1;
      } while (uVar4 < *(byte *)pfVar7);
      pfVar8 = (float *)0x0;
    }
LAB_004c7c44:
    pfVar7 = &local_44;
    if (pfVar8 != (float *)0x0) {
      pfVar7 = pfVar8;
    }
    fVar12 = *pfVar7;
    bVar2 = *(byte *)(lVar5 + 0x164);
    uVar9 = (uint)bVar2;
    *(byte *)(lVar5 + 0x164) = bVar2 & 0xef;
    uVar6 = uVar9;
    if ((bVar2 >> 4 & 1) != 0) goto LAB_004c7bb8;
LAB_004c7c64:
    fVar12 = *(float *)(param_1 + 0x364);
    uVar6 = uVar9;
joined_r0x004c7c68:
    if ((uVar6 >> 3 & 1) == 0) goto LAB_004c7c6c;
LAB_004c7cac:
    if (*(float *)(param_1 + 0x35c) <= fVar10) {
      *(float *)(param_1 + 0x35c) = fVar10;
      goto LAB_004c7dd0;
    }
    fVar12 = (fVar10 - fVar10 * fVar12) + fVar12 * *(float *)(param_1 + 0x35c);
    *(float *)(param_1 + 0x35c) = fVar12;
  }
  else {
    fVar12 = (float)FUN_0049d1f0(*(undefined8 *)PTR_DAT_02712b50,lVar5 + 0x30,
                                 (ulong)*(uint *)(PTR_DAT_02712b48 + 0x74),&local_78);
    bVar2 = *(byte *)(lVar5 + 0x164);
    uVar9 = (uint)bVar2;
    *(byte *)(lVar5 + 0x164) = bVar2 & 0xef;
    uVar6 = (uint)bVar2;
    if ((bVar2 >> 4 & 1) == 0) goto LAB_004c7c64;
LAB_004c7bb8:
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
      *(undefined4 *)(param_1 + 0x364) = 0;
      goto joined_r0x004c7c68;
    }
    fVar12 = expf((float)(int)-(uint)*(ushort *)PTR_DAT_02712ac0 / (fVar12 * DAT_01d4bdac));
    *(float *)(param_1 + 0x364) = fVar12;
    if ((uVar6 >> 3 & 1) != 0) goto LAB_004c7cac;
LAB_004c7c6c:
    if (DAT_01d4c2ec <= fVar10 * DAT_01d4c158) {
      uVar6 = (uint)(DAT_01d4c714 + DAT_01d4bda4 * fVar10);
      fVar11 = (float)(uVar6 & 0x7fffff | 0x3f800000);
      fVar11 = (DAT_01d4c23c + fVar11 * (DAT_01d4c1d8 + DAT_01d4c46c * fVar11)) *
               (float)(uVar6 & 0xff800000);
      fVar13 = *(float *)(param_1 + 0x35c);
      if (fVar13 <= fVar11) goto LAB_004c7c98;
    }
    else {
      fVar11 = 0.0;
      fVar13 = *(float *)(param_1 + 0x35c);
      if (fVar13 <= 0.0) {
LAB_004c7c98:
        *(float *)(param_1 + 0x35c) = fVar11;
        goto LAB_004c7dd0;
      }
    }
    fVar11 = (fVar11 - fVar11 * fVar12) + fVar12 * fVar13;
    fVar12 = (float)((uint)fVar11 & 0x7fffff | 0x3f800000);
    *(float *)(param_1 + 0x35c) = fVar11;
    fVar12 = (fVar12 + -1.0) / (fVar12 + 1.0);
    fVar12 = (fVar12 + fVar12 + (fVar12 + fVar12) * fVar12 * fVar12 * DAT_01d4bd24 +
             DAT_01d4c4dc * ((float)((uint)fVar11 >> 0x17 & 0xff) + DAT_01d4bf90)) * DAT_01d4c2e8;
  }
  if (0.5 <= fVar12 - fVar10) {
    *(byte *)(param_1 + 0x354) = *(byte *)(param_1 + 0x354) | 1;
  }
  fVar10 = fVar12;
LAB_004c7dd0:
  *(float *)(param_1 + 0x360) = fVar10 + fVar14;
  local_78 = CONCAT44(local_78._4_4_,fVar10);
  iVar3 = FUN_004573c0(lVar5);
  if (iVar3 != 0) {
    FUN_00457420(lVar5,&local_78);
    lVar5 = FUN_004c83f0(PTR_DAT_027134f0,iVar3,uVar1);
    if ((lVar5 != 0) && (*(float *)(lVar5 + 0x10) < (float)local_78)) {
      *(float *)(lVar5 + 0x10) = (float)local_78;
    }
  }
  *(undefined4 *)(param_1 + 0x358) = 0xc5800000;
  return;
}


