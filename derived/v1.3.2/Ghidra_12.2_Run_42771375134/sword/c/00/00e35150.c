/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e35150; name: FUN_00e35150
 */


void FUN_00e35150(long param_1)

{
  undefined *puVar1;
  void *__src;
  long lVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_330 [161];
  undefined1 local_28f;
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined4 local_27c;
  
  if (*(char *)(param_1 + 0x1c0) != '\0') {
    if (*(char *)(param_1 + 0x1c1) != '\0') {
      if ((*(int *)(param_1 + 0x210) == 0) && (*(char *)(param_1 + 500) != '\0')) {
        *(undefined1 *)(param_1 + 0x1c4) = 1;
      }
      iVar4 = *(int *)(param_1 + 0x210) + 1;
      *(int *)(param_1 + 0x210) = iVar4;
      puVar1 = PTR_PTR_02718e90;
      if (*(int *)(param_1 + 0x20c) < 1) {
        fVar6 = 1.0;
      }
      else {
        fVar6 = (float)iVar4 / (float)*(int *)(param_1 + 0x20c);
      }
      fVar7 = *(float *)(param_1 + 0x1e0);
      fVar9 = *(float *)(param_1 + 0x1f8);
      lVar2 = (ulong)*(uint *)(param_1 + 0x214) * 8;
      fVar3 = (float)(**(code **)(PTR_PTR_02718e90 + lVar2))(fVar6);
      fVar10 = *(float *)(param_1 + 0x1fc);
      fVar8 = *(float *)(param_1 + 0x1e4);
      *(float *)(param_1 + 0x1c8) = fVar7 + (fVar9 - fVar7) * fVar3;
      fVar3 = (float)(**(code **)(puVar1 + lVar2))(fVar6);
      fVar9 = *(float *)(param_1 + 0x200);
      fVar7 = *(float *)(param_1 + 0x1e8);
      *(float *)(param_1 + 0x1cc) = fVar8 + (fVar10 - fVar8) * fVar3;
      fVar3 = (float)(**(code **)(puVar1 + lVar2))(fVar6);
      fVar10 = *(float *)(param_1 + 0x204);
      fVar8 = *(float *)(param_1 + 0x1ec);
      *(float *)(param_1 + 0x1d0) = fVar7 + (fVar9 - fVar7) * fVar3;
      fVar3 = (float)(**(code **)(puVar1 + lVar2))(fVar6);
      iVar4 = *(int *)(param_1 + 0x1f0);
      iVar5 = *(int *)(param_1 + 0x208);
      *(float *)(param_1 + 0x1d4) = fVar8 + (fVar10 - fVar8) * fVar3;
      fVar6 = (float)(**(code **)(puVar1 + lVar2))(fVar6);
      *(int *)(param_1 + 0x1d8) = (int)(((float)iVar5 - (float)iVar4) * fVar6 + (float)iVar4);
      if (*(int *)(param_1 + 0x20c) <= *(int *)(param_1 + 0x210)) {
        if (*(char *)(param_1 + 500) == '\0') {
          *(undefined1 *)(param_1 + 0x1c4) = 0;
        }
        *(undefined1 *)(param_1 + 0x1c1) = 0;
      }
    }
    __src = (void *)FUN_01052d00(*(undefined8 *)(param_1 + 0x2c8));
    memcpy(auStack_330,__src,0x2c0);
    local_28f = *(undefined1 *)(param_1 + 0x1c4);
    local_28c = *(undefined4 *)(param_1 + 0x1c8);
    local_288 = *(undefined4 *)(param_1 + 0x1cc);
    local_284 = *(undefined4 *)(param_1 + 0x1d0);
    local_280 = *(undefined4 *)(param_1 + 0x1d4);
    local_27c = *(undefined4 *)(param_1 + 0x1d8);
    FUN_01052cc0(*(undefined8 *)(param_1 + 0x2c8),auStack_330);
  }
  return;
}


