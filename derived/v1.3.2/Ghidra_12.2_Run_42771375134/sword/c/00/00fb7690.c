/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fb7690; name: FUN_00fb7690
 */


void FUN_00fb7690(undefined8 param_1,long param_2,float *param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar10 = (float)param_1;
  *param_3 = *(float *)(param_2 + 0xd10) +
             (*(float *)(param_2 + 0x2a0) - *(float *)(param_2 + 0xd10)) * fVar10;
  param_3[1] = *(float *)(param_2 + 0xd14) +
               (*(float *)(param_2 + 0x2a4) - *(float *)(param_2 + 0xd14)) * fVar10;
  fVar5 = *(float *)(param_2 + 0xd20) +
          (*(float *)(param_2 + 0x2b0) - *(float *)(param_2 + 0xd20)) * fVar10;
  uVar9 = *(undefined8 *)(param_3 + 6);
  *(undefined8 *)(param_3 + 6) = uVar9;
  *(ulong *)(param_3 + 4) = CONCAT44((int)((ulong)*(undefined8 *)(param_3 + 4) >> 0x20),fVar5);
  uVar8 = CONCAT44(*(float *)(param_2 + 0xd24) +
                   (*(float *)(param_2 + 0x2b4) - *(float *)(param_2 + 0xd24)) * fVar10,fVar5);
  *(undefined8 *)(param_3 + 6) = uVar9;
  *(undefined8 *)(param_3 + 4) = uVar8;
  *(ulong *)(param_3 + 6) =
       (ulong)(uint)(*(float *)(param_2 + 0xd28) +
                    (*(float *)(param_2 + 0x2b8) - *(float *)(param_2 + 0xd28)) * fVar10);
  *(undefined8 *)(param_3 + 4) = uVar8;
  puVar2 = PTR_PTR_02718e90;
  fVar11 = *(float *)(param_2 + 0xd30);
  fVar14 = *(float *)(param_2 + 0x2c0);
  fVar5 = (float)(**(code **)PTR_PTR_02718e90)(param_1);
  fVar15 = *(float *)(param_2 + 0x2c4);
  fVar12 = *(float *)(param_2 + 0xd34);
  fVar6 = (float)(**(code **)puVar2)(param_1);
  fVar16 = *(float *)(param_2 + 0x2c8);
  fVar13 = *(float *)(param_2 + 0xd38);
  fVar7 = (float)(**(code **)puVar2)(param_1);
  *(ulong *)(param_3 + 10) = (ulong)(uint)(fVar13 + (fVar16 - fVar13) * fVar7);
  *(ulong *)(param_3 + 8) =
       CONCAT44(fVar12 + (fVar15 - fVar12) * fVar6,fVar11 + (fVar14 - fVar11) * fVar5);
  fVar11 = *(float *)(param_2 + 0xd40);
  fVar14 = *(float *)(param_2 + 0x2d0);
  fVar5 = (float)(**(code **)puVar2)(param_1);
  fVar15 = *(float *)(param_2 + 0x2d4);
  fVar12 = *(float *)(param_2 + 0xd44);
  fVar6 = (float)(**(code **)puVar2)(param_1);
  fVar16 = *(float *)(param_2 + 0x2d8);
  fVar13 = *(float *)(param_2 + 0xd48);
  fVar7 = (float)(**(code **)puVar2)(param_1);
  lVar3 = 0;
  *(ulong *)(param_3 + 0xe) = (ulong)(uint)(fVar13 + (fVar16 - fVar13) * fVar7);
  *(ulong *)(param_3 + 0xc) =
       CONCAT44(fVar12 + (fVar15 - fVar12) * fVar6,fVar11 + (fVar14 - fVar11) * fVar5);
  lVar4 = 0;
  do {
    lVar1 = param_2 + lVar3;
    fVar11 = *(float *)(lVar1 + 0xd50);
    fVar14 = *(float *)(lVar1 + 0x2e0);
    fVar5 = (float)(**(code **)puVar2)(param_1);
    fVar15 = *(float *)(lVar1 + 0x2e4);
    fVar12 = *(float *)(lVar1 + 0xd54);
    fVar6 = (float)(**(code **)puVar2)(param_1);
    fVar16 = *(float *)(lVar1 + 0x2e8);
    fVar13 = *(float *)(lVar1 + 0xd58);
    fVar7 = (float)(**(code **)puVar2)(param_1);
    *(ulong *)((long)param_3 + lVar3 + 0x48) = (ulong)(uint)(fVar13 + (fVar16 - fVar13) * fVar7);
    *(ulong *)((long)param_3 + lVar3 + 0x40) =
         CONCAT44(fVar12 + (fVar15 - fVar12) * fVar6,fVar11 + (fVar14 - fVar11) * fVar5);
    fVar11 = *(float *)(lVar1 + 0xdc0);
    fVar14 = *(float *)(lVar1 + 0x350);
    fVar5 = (float)(**(code **)puVar2)(param_1);
    fVar15 = *(float *)(lVar1 + 0x354);
    fVar12 = *(float *)(lVar1 + 0xdc4);
    fVar6 = (float)(**(code **)puVar2)(param_1);
    fVar16 = *(float *)(lVar1 + 0x358);
    fVar13 = *(float *)(lVar1 + 0xdc8);
    fVar7 = (float)(**(code **)puVar2)(param_1);
    lVar1 = param_2 + lVar4;
    *(ulong *)((long)param_3 + lVar3 + 0xb8) = (ulong)(uint)(fVar13 + (fVar16 - fVar13) * fVar7);
    *(ulong *)((long)param_3 + lVar3 + 0xb0) =
         CONCAT44(fVar12 + (fVar15 - fVar12) * fVar6,fVar11 + (fVar14 - fVar11) * fVar5);
    fVar6 = *(float *)(lVar1 + 0xda0);
    fVar7 = *(float *)(lVar1 + 0x330);
    fVar5 = (float)(**(code **)puVar2)(param_1);
    *(float *)((long)param_3 + lVar4 + 0x90) = fVar6 + (fVar7 - fVar6) * fVar5;
    fVar6 = *(float *)(lVar1 + 0xe10);
    fVar7 = *(float *)(lVar1 + 0x3a0);
    fVar5 = (float)(**(code **)puVar2)(param_1);
    lVar1 = lVar4 + 4;
    lVar3 = lVar3 + 0x10;
    *(float *)((long)param_3 + lVar4 + 0x100) = fVar6 + (fVar7 - fVar6) * fVar5;
    lVar4 = lVar1;
  } while (lVar1 != 0x14);
  param_3[0x48] =
       *(float *)(param_2 + 0xe30) +
       (*(float *)(param_2 + 0x3c0) - *(float *)(param_2 + 0xe30)) * fVar10;
  param_3[0x49] =
       *(float *)(param_2 + 0xe34) +
       (*(float *)(param_2 + 0x3c4) - *(float *)(param_2 + 0xe34)) * fVar10;
  fVar5 = *(float *)(param_2 + 0xe40) +
          (*(float *)(param_2 + 0x3d0) - *(float *)(param_2 + 0xe40)) * fVar10;
  uVar9 = *(undefined8 *)(param_3 + 0x4e);
  *(undefined8 *)(param_3 + 0x4e) = uVar9;
  *(ulong *)(param_3 + 0x4c) = CONCAT44((int)((ulong)*(undefined8 *)(param_3 + 0x4c) >> 0x20),fVar5)
  ;
  uVar8 = CONCAT44(*(float *)(param_2 + 0xe44) +
                   (*(float *)(param_2 + 0x3d4) - *(float *)(param_2 + 0xe44)) * fVar10,fVar5);
  *(undefined8 *)(param_3 + 0x4e) = uVar9;
  *(undefined8 *)(param_3 + 0x4c) = uVar8;
  *(ulong *)(param_3 + 0x4e) =
       (ulong)(uint)(*(float *)(param_2 + 0xe48) +
                    (*(float *)(param_2 + 0x3d8) - *(float *)(param_2 + 0xe48)) * fVar10);
  *(undefined8 *)(param_3 + 0x4c) = uVar8;
  param_3[0x50] =
       *(float *)(param_2 + 0xe50) +
       (*(float *)(param_2 + 0x3e0) - *(float *)(param_2 + 0xe50)) * fVar10;
  param_3[0x51] =
       *(float *)(param_2 + 0xe54) +
       (*(float *)(param_2 + 0x3e4) - *(float *)(param_2 + 0xe54)) * fVar10;
  param_3[0x52] =
       *(float *)(param_2 + 0xe58) +
       (*(float *)(param_2 + 1000) - *(float *)(param_2 + 0xe58)) * fVar10;
  param_3[0x53] =
       *(float *)(param_2 + 0xe5c) +
       (*(float *)(param_2 + 0x3ec) - *(float *)(param_2 + 0xe5c)) * fVar10;
  param_3[0x58] =
       *(float *)(param_2 + 0xe70) +
       (*(float *)(param_2 + 0x400) - *(float *)(param_2 + 0xe70)) * fVar10;
  param_3[0x54] =
       *(float *)(param_2 + 0xe60) +
       (*(float *)(param_2 + 0x3f0) - *(float *)(param_2 + 0xe60)) * fVar10;
  param_3[0x59] =
       *(float *)(param_2 + 0xe74) +
       (*(float *)(param_2 + 0x404) - *(float *)(param_2 + 0xe74)) * fVar10;
  param_3[0x55] =
       *(float *)(param_2 + 0xe64) +
       (*(float *)(param_2 + 0x3f4) - *(float *)(param_2 + 0xe64)) * fVar10;
  param_3[0x5a] =
       *(float *)(param_2 + 0xe78) +
       (*(float *)(param_2 + 0x408) - *(float *)(param_2 + 0xe78)) * fVar10;
  param_3[0x56] =
       *(float *)(param_2 + 0xe68) +
       (*(float *)(param_2 + 0x3f8) - *(float *)(param_2 + 0xe68)) * fVar10;
  param_3[0x5b] =
       *(float *)(param_2 + 0xe7c) +
       (*(float *)(param_2 + 0x40c) - *(float *)(param_2 + 0xe7c)) * fVar10;
  param_3[0x57] =
       *(float *)(param_2 + 0xe6c) +
       (*(float *)(param_2 + 0x3fc) - *(float *)(param_2 + 0xe6c)) * fVar10;
  param_3[0x5c] =
       *(float *)(param_2 + 0xe80) +
       (*(float *)(param_2 + 0x410) - *(float *)(param_2 + 0xe80)) * fVar10;
  if (fVar10 < 1.0) {
    FUN_00daa6f0(param_1,param_3 + 0x60,param_2 + 0xe90,param_2 + 0x420);
    return;
  }
  memcpy(param_3 + 0x60,(void *)(param_2 + 0x420),0x8a0);
  return;
}


