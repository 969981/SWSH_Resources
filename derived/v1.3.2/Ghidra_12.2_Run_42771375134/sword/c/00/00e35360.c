/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e35360; name: FUN_00e35360
 */


void FUN_00e35360(long param_1)

{
  int iVar1;
  undefined *puVar2;
  void *__src;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_350 [184];
  undefined1 local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined4 local_27c;
  
  if (*(char *)(param_1 + 0x230) != '\0') {
    if (*(char *)(param_1 + 0x231) != '\0') {
      if ((*(int *)(param_1 + 0x298) == 0) && (*(char *)(param_1 + 0x274) != '\0')) {
        *(undefined1 *)(param_1 + 0x234) = 1;
      }
      iVar1 = *(int *)(param_1 + 0x298) + 1;
      *(int *)(param_1 + 0x298) = iVar1;
      puVar2 = PTR_PTR_02718e90;
      if (*(int *)(param_1 + 0x294) < 1) {
        fVar5 = 1.0;
      }
      else {
        fVar5 = (float)iVar1 / (float)*(int *)(param_1 + 0x294);
      }
      fVar6 = *(float *)(param_1 + 600);
      fVar8 = *(float *)(param_1 + 0x278);
      lVar3 = (ulong)*(uint *)(param_1 + 0x29c) * 8;
      fVar4 = (float)(**(code **)(PTR_PTR_02718e90 + lVar3))(fVar5);
      fVar9 = *(float *)(param_1 + 0x27c);
      fVar7 = *(float *)(param_1 + 0x25c);
      *(float *)(param_1 + 0x238) = fVar6 + (fVar8 - fVar6) * fVar4;
      fVar4 = (float)(**(code **)(puVar2 + lVar3))(fVar5);
      fVar8 = *(float *)(param_1 + 0x280);
      fVar6 = *(float *)(param_1 + 0x260);
      *(float *)(param_1 + 0x23c) = fVar7 + (fVar9 - fVar7) * fVar4;
      fVar4 = (float)(**(code **)(puVar2 + lVar3))(fVar5);
      fVar9 = *(float *)(param_1 + 0x284);
      fVar7 = *(float *)(param_1 + 0x264);
      *(float *)(param_1 + 0x240) = fVar6 + (fVar8 - fVar6) * fVar4;
      fVar4 = (float)(**(code **)(puVar2 + lVar3))(fVar5);
      fVar8 = *(float *)(param_1 + 0x288);
      fVar6 = *(float *)(param_1 + 0x268);
      *(float *)(param_1 + 0x244) = fVar7 + (fVar9 - fVar7) * fVar4;
      fVar4 = (float)(**(code **)(puVar2 + lVar3))(fVar5);
      fVar9 = *(float *)(param_1 + 0x28c);
      fVar7 = *(float *)(param_1 + 0x26c);
      *(float *)(param_1 + 0x248) = fVar6 + (fVar8 - fVar6) * fVar4;
      fVar4 = (float)(**(code **)(puVar2 + lVar3))(fVar5);
      fVar8 = *(float *)(param_1 + 0x290);
      fVar6 = *(float *)(param_1 + 0x270);
      *(float *)(param_1 + 0x24c) = fVar7 + (fVar9 - fVar7) * fVar4;
      fVar5 = (float)(**(code **)(puVar2 + lVar3))(fVar5);
      *(float *)(param_1 + 0x250) = fVar6 + (fVar8 - fVar6) * fVar5;
      if (*(int *)(param_1 + 0x294) <= *(int *)(param_1 + 0x298)) {
        if (*(char *)(param_1 + 0x274) == '\0') {
          *(undefined1 *)(param_1 + 0x234) = 0;
        }
        *(undefined1 *)(param_1 + 0x231) = 0;
      }
    }
    __src = (void *)FUN_01052d00(*(undefined8 *)(param_1 + 0x2c8));
    memcpy(auStack_350,__src,0x2c0);
    local_298 = *(undefined1 *)(param_1 + 0x234);
    local_294 = *(undefined4 *)(param_1 + 0x238);
    local_290 = *(undefined4 *)(param_1 + 0x23c);
    local_28c = *(undefined4 *)(param_1 + 0x240);
    local_288 = *(undefined4 *)(param_1 + 0x244);
    local_284 = *(undefined4 *)(param_1 + 0x248);
    local_280 = *(undefined4 *)(param_1 + 0x24c);
    local_27c = *(undefined4 *)(param_1 + 0x250);
    FUN_01052cc0(*(undefined8 *)(param_1 + 0x2c8),auStack_350);
  }
  return;
}


