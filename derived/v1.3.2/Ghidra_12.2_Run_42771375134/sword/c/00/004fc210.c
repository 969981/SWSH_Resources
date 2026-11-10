/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004fc210; name: FUN_004fc210
 */


undefined8
FUN_004fc210(long param_1,long param_2,long *param_3,undefined4 param_4,float *param_5,
            undefined8 param_6,uint param_7)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  float fVar5;
  
  *(long *)(param_1 + 0x50) = param_2;
  if (*param_3 < 0) {
    uVar4 = 0x1f;
  }
  else {
    *(undefined4 *)(param_1 + 0x80) = param_4;
    uVar3 = (**(code **)(**(long **)(param_2 + 0x608) + 0x18))(*(long **)(param_2 + 0x608),param_3);
    if (uVar3 - 1 < param_7) {
      uVar2 = 0;
      if (uVar3 != 0) {
        uVar2 = param_7 / uVar3;
      }
      if (param_7 == uVar2 * uVar3) {
        *(uint *)(param_1 + 0x60) = uVar3;
        *(uint *)(param_1 + 0x9c) = uVar3;
        fVar5 = *param_5;
        if (fVar5 <= 1.0) {
          fVar5 = 1.0;
        }
        *(float *)(param_1 + 0x84) = fVar5;
        uVar2 = 0;
        if (uVar3 != 0) {
          uVar2 = (uint)param_5[1] / uVar3;
        }
        *(uint *)(param_1 + 0x88) = uVar2 * uVar3;
        fVar5 = (float)*param_3;
        if ((long)(ulong)(uint)param_5[2] <= *param_3) {
          fVar5 = param_5[2];
        }
        *(float *)(param_1 + 0x8c) = fVar5;
        cVar1 = *(char *)(param_5 + 3);
        if (cVar1 == '\0') {
          cVar1 = '\x01';
        }
        *(char *)(param_1 + 0xb9) = cVar1;
        *(undefined1 *)(param_1 + 100) = *(undefined1 *)((long)param_5 + 0xd);
        *(undefined8 *)(param_1 + 0x78) = 0;
        if (*param_3 == 0) {
          *(undefined1 *)(param_1 + 0x67) = 1;
          *(undefined1 *)(param_1 + 0x6c) = 0;
        }
        uVar4 = FUN_004fc330(param_1,param_6,param_7);
        if ((int)uVar4 == 1) {
          return uVar4;
        }
        goto LAB_004fc280;
      }
    }
    uVar4 = 2;
  }
LAB_004fc280:
  *(undefined1 *)(param_1 + 0x68) = 1;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  return uVar4;
}


