/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e34fc0; name: FUN_00e34fc0
 */


void FUN_00e34fc0(long param_1)

{
  int iVar1;
  char cVar2;
  undefined *puVar3;
  void *__src;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_310 [148];
  undefined1 local_27c;
  undefined1 local_27b;
  undefined4 local_278;
  undefined4 local_274;
  
  if (*(char *)(param_1 + 0x180) != '\0') {
    if (*(char *)(param_1 + 0x181) != '\0') {
      if (*(int *)(param_1 + 0x1ac) == 0) {
        if (*(char *)(param_1 + 0x19c) != '\0') {
          *(undefined1 *)(param_1 + 0x184) = 1;
        }
        if (*(char *)(param_1 + 0x19d) != '\0') {
          *(undefined1 *)(param_1 + 0x185) = 1;
        }
      }
      iVar1 = *(int *)(param_1 + 0x1ac) + 1;
      *(int *)(param_1 + 0x1ac) = iVar1;
      puVar3 = PTR_PTR_02718e90;
      if (*(int *)(param_1 + 0x1a8) < 1) {
        fVar6 = 1.0;
      }
      else {
        fVar6 = (float)iVar1 / (float)*(int *)(param_1 + 0x1a8);
      }
      fVar7 = *(float *)(param_1 + 0x194);
      fVar9 = *(float *)(param_1 + 0x1a0);
      lVar4 = (ulong)*(uint *)(param_1 + 0x1b0) * 8;
      fVar5 = (float)(**(code **)(PTR_PTR_02718e90 + lVar4))(fVar6);
      fVar10 = *(float *)(param_1 + 0x1a4);
      fVar8 = *(float *)(param_1 + 0x198);
      *(float *)(param_1 + 0x188) = fVar7 + (fVar9 - fVar7) * fVar5;
      fVar6 = (float)(**(code **)(puVar3 + lVar4))(fVar6);
      *(float *)(param_1 + 0x18c) = fVar8 + (fVar10 - fVar8) * fVar6;
      if (*(int *)(param_1 + 0x1a8) <= *(int *)(param_1 + 0x1ac)) {
        if (*(char *)(param_1 + 0x19c) == '\0') {
          *(undefined1 *)(param_1 + 0x184) = 0;
          cVar2 = *(char *)(param_1 + 0x19d);
        }
        else {
          cVar2 = *(char *)(param_1 + 0x19d);
        }
        if (cVar2 == '\0') {
          *(undefined1 *)(param_1 + 0x185) = 0;
        }
        *(undefined1 *)(param_1 + 0x181) = 0;
      }
    }
    __src = (void *)FUN_01052d00(*(undefined8 *)(param_1 + 0x2c8));
    memcpy(auStack_310,__src,0x2c0);
    local_27c = *(undefined1 *)(param_1 + 0x184);
    local_27b = *(undefined1 *)(param_1 + 0x185);
    local_278 = *(undefined4 *)(param_1 + 0x188);
    local_274 = *(undefined4 *)(param_1 + 0x18c);
    FUN_01052cc0(*(undefined8 *)(param_1 + 0x2c8),auStack_310);
  }
  return;
}


