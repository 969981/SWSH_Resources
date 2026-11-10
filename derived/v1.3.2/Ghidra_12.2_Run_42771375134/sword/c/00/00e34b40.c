/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e34b40; name: FUN_00e34b40
 */


void FUN_00e34b40(long param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_38 [8];
  
  if (*(char *)(param_1 + 0x60) != '\0') {
    if (*(char *)(param_1 + 0x61) != '\0') {
      fVar9 = 1.0;
      iVar1 = *(int *)(param_1 + 0x134) + 1;
      *(int *)(param_1 + 0x134) = iVar1;
      if (0 < *(int *)(param_1 + 0x130)) {
        fVar9 = (float)iVar1 / (float)*(int *)(param_1 + 0x130);
      }
      *(undefined1 *)(param_1 + 0x70) = *(undefined1 *)(param_1 + 0xf0);
      puVar2 = (undefined1 *)(param_1 + 0xb0);
      if (0.5 <= fVar9) {
        puVar2 = (undefined1 *)(param_1 + 0xf0);
      }
      fVar10 = *(float *)(param_1 + 0xb8);
      fVar12 = *(float *)(param_1 + 0xf8);
      lVar7 = (ulong)*(uint *)(param_1 + 0x138) * 8;
      *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(puVar2 + 4);
      puVar4 = PTR_PTR_02718e90;
      fVar8 = (float)(**(code **)(PTR_PTR_02718e90 + lVar7))(fVar9);
      fVar13 = *(float *)(param_1 + 0xfc);
      fVar11 = *(float *)(param_1 + 0xbc);
      *(float *)(param_1 + 0x78) = fVar10 + (fVar12 - fVar10) * fVar8;
      fVar8 = (float)(**(code **)(puVar4 + lVar7))(fVar9);
      fVar12 = *(float *)(param_1 + 0x100);
      fVar10 = *(float *)(param_1 + 0xc0);
      *(float *)(param_1 + 0x7c) = fVar11 + (fVar13 - fVar11) * fVar8;
      fVar8 = (float)(**(code **)(puVar4 + lVar7))(fVar9);
      fVar13 = *(float *)(param_1 + 0x110);
      fVar11 = *(float *)(param_1 + 0xd0);
      *(float *)(param_1 + 0x80) = fVar10 + (fVar12 - fVar10) * fVar8;
      fVar8 = (float)(**(code **)(puVar4 + lVar7))(fVar9);
      fVar12 = *(float *)(param_1 + 0x114);
      fVar10 = *(float *)(param_1 + 0xd4);
      *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x98);
      *(ulong *)(param_1 + 0x90) =
           CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x20),
                    fVar11 + (fVar13 - fVar11) * fVar8);
      fVar8 = (float)(**(code **)(puVar4 + lVar7))(fVar9);
      fVar13 = *(float *)(param_1 + 0x118);
      fVar11 = *(float *)(param_1 + 0xd8);
      *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x98);
      *(ulong *)(param_1 + 0x90) =
           CONCAT44(fVar10 + (fVar12 - fVar10) * fVar8,(int)*(undefined8 *)(param_1 + 0x90));
      fVar8 = (float)(**(code **)(puVar4 + lVar7))(fVar9);
      fVar12 = *(float *)(param_1 + 0x120);
      fVar10 = *(float *)(param_1 + 0xe0);
      *(ulong *)(param_1 + 0x98) = (ulong)(uint)(fVar11 + (fVar13 - fVar11) * fVar8);
      *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x90);
      fVar8 = (float)(**(code **)(puVar4 + lVar7))(fVar9);
      *(float *)(param_1 + 0xa0) = fVar10 + (fVar12 - fVar10) * fVar8;
      if (1.0 <= fVar9) {
        *(undefined1 *)(param_1 + 0x61) = 0;
      }
    }
    lVar7 = FUN_00706c40(*(undefined8 *)(param_1 + 0x2c0),auStack_38);
    lVar7 = *(long *)(lVar7 + 0x78);
    uVar5 = *(undefined8 *)(param_1 + 0x88);
    uVar3 = *(undefined8 *)(param_1 + 0x90);
    uVar6 = *(undefined8 *)(param_1 + 0x98);
    *(undefined4 *)(lVar7 + 0x2d0) = *(undefined4 *)(param_1 + 0xa0);
    *(undefined8 *)(lVar7 + 0x2c8) = uVar6;
    *(undefined8 *)(lVar7 + 0x2c0) = uVar3;
    *(undefined8 *)(lVar7 + 0x2a8) = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(lVar7 + 0x2b8) = uVar5;
    uVar5 = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(lVar7 + 0x2b0) = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(lVar7 + 0x2a0) = uVar5;
    FUN_01052f20(*(undefined8 *)(param_1 + 0x2c8),1);
  }
  return;
}


