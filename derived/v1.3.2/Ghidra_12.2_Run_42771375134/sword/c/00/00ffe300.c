/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ffe300; name: FUN_00ffe300
 */


void FUN_00ffe300(long *param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  
  if (param_3 != param_4) {
    lVar4 = *(long *)(param_2 + 0x48);
    puVar9 = (undefined8 *)(*(long *)(param_2 + 0x40) + lVar4 * 0x110);
    if (puVar9 == param_4) {
      puVar6 = param_3;
    }
    else {
      lVar10 = 0;
      do {
        puVar6 = (undefined8 *)((long)param_4 + lVar10);
        puVar1 = (undefined8 *)((long)param_3 + lVar10);
        *puVar1 = *puVar6;
        pcVar3 = (code *)puVar1[3];
        if (pcVar3 != (code *)0x0) {
          puVar1[4] = 0;
          puVar1[5] = 0;
          puVar1[2] = 0;
          puVar1[3] = 0;
          (*pcVar3)(puVar1 + 6);
        }
        if ((code *)puVar6[5] != (code *)0x0) {
          (*(code *)puVar6[5])(puVar6 + 6,puVar1 + 6);
          uVar5 = puVar6[2];
          uVar2 = puVar6[3];
          uVar7 = puVar6[5];
          puVar1[4] = puVar6[4];
          puVar1[5] = uVar7;
          puVar1[2] = uVar5;
          puVar1[3] = uVar2;
          pcVar3 = (code *)puVar6[3];
          if (pcVar3 != (code *)0x0) {
            puVar6[4] = 0;
            puVar6[5] = 0;
            puVar6[2] = 0;
            puVar6[3] = 0;
            (*pcVar3)(puVar6 + 6);
          }
        }
        pcVar3 = (code *)puVar1[0x13];
        if (pcVar3 != (code *)0x0) {
          puVar1[0x14] = 0;
          puVar1[0x15] = 0;
          puVar1[0x12] = 0;
          puVar1[0x13] = 0;
          (*pcVar3)(puVar1 + 0x16);
        }
        if ((code *)puVar6[0x15] != (code *)0x0) {
          (*(code *)puVar6[0x15])(puVar6 + 0x16,puVar1 + 0x16);
          uVar5 = puVar6[0x12];
          uVar2 = puVar6[0x13];
          uVar7 = puVar6[0x15];
          puVar1[0x14] = puVar6[0x14];
          puVar1[0x15] = uVar7;
          puVar1[0x12] = uVar5;
          puVar1[0x13] = uVar2;
          pcVar3 = (code *)puVar6[0x13];
          if (pcVar3 != (code *)0x0) {
            puVar6[0x14] = 0;
            puVar6[0x15] = 0;
            puVar6[0x12] = 0;
            puVar6[0x13] = 0;
            (*pcVar3)(puVar6 + 0x16);
          }
        }
        lVar10 = lVar10 + 0x110;
      } while (puVar6 + 0x22 != puVar9);
      lVar4 = *(long *)(param_2 + 0x48);
      puVar6 = (undefined8 *)((long)param_3 + lVar10);
    }
    lVar10 = (long)puVar9 - (long)puVar6 >> 4;
    lVar8 = lVar10 * -0xf0f0f0f0f0f0f0f;
    lVar4 = lVar4 + lVar10 * 0xf0f0f0f0f0f0f0f;
    if ((long)puVar9 - (long)puVar6 != 0) {
      lVar4 = *(long *)(param_2 + 0x40) + lVar4 * 0x110 + 0xb0;
      do {
        pcVar3 = *(code **)(lVar4 + -0x18);
        if (pcVar3 != (code *)0x0) {
          *(undefined8 *)(lVar4 + -0x10) = 0;
          *(undefined8 *)(lVar4 + -8) = 0;
          *(undefined8 *)(lVar4 + -0x20) = 0;
          *(undefined8 *)(lVar4 + -0x18) = 0;
          (*pcVar3)(lVar4);
        }
        pcVar3 = *(code **)(lVar4 + -0x98);
        lVar8 = lVar8 + -1;
        if (pcVar3 != (code *)0x0) {
          *(undefined8 *)(lVar4 + -0x90) = 0;
          *(undefined8 *)(lVar4 + -0x88) = 0;
          *(undefined8 *)(lVar4 + -0xa0) = 0;
          *(undefined8 *)(lVar4 + -0x98) = 0;
          (*pcVar3)(lVar4 + -0x80);
        }
        lVar4 = lVar4 + 0x110;
      } while (lVar8 != 0);
      lVar4 = *(long *)(param_2 + 0x48) + lVar10 * 0xf0f0f0f0f0f0f0f;
    }
    *(long *)(param_2 + 0x48) = lVar4;
  }
  *param_1 = (long)param_3;
  return;
}


