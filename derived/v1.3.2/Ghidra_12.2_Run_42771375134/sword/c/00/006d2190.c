/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006d2190; name: FUN_006d2190
 */


void FUN_006d2190(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  code *pcVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  puVar10 = (undefined8 *)*param_1;
  puVar11 = (undefined8 *)param_1[1];
  if (puVar10 != puVar11) {
    uVar5 = (*(code *)*puVar10)(puVar10 + 4,param_2);
    puVar7 = puVar10;
    if ((uVar5 & 1) == 0) {
      do {
        puVar10 = puVar7 + 0x10;
        if (puVar11 == puVar10) {
          puVar7 = (undefined8 *)param_1[1];
          if (puVar11 != puVar7) goto LAB_006d228c;
          goto LAB_006d2348;
        }
        uVar5 = (*(code *)*puVar10)(puVar7 + 0x14,param_2);
        puVar7 = puVar10;
      } while ((uVar5 & 1) == 0);
    }
  }
  puVar7 = puVar10;
  if (puVar10 != puVar11) {
    while( true ) {
      puVar4 = puVar7;
      puVar7 = puVar4 + 0x10;
      if (puVar7 == puVar11) break;
      puVar9 = puVar4 + 0x14;
      uVar5 = (*(code *)*puVar7)(puVar9,param_2);
      if ((uVar5 & 1) == 0) {
        pcVar6 = (code *)puVar10[1];
        if (pcVar6 != (code *)0x0) {
          puVar10[2] = 0;
          puVar10[3] = 0;
          *puVar10 = 0;
          puVar10[1] = 0;
          (*pcVar6)(puVar10 + 4);
        }
        if ((code *)puVar4[0x13] != (code *)0x0) {
          (*(code *)puVar4[0x13])(puVar9,puVar10 + 4);
          uVar1 = *puVar7;
          uVar2 = puVar4[0x11];
          uVar3 = puVar4[0x13];
          puVar10[2] = puVar4[0x12];
          puVar10[3] = uVar3;
          *puVar10 = uVar1;
          puVar10[1] = uVar2;
          pcVar6 = (code *)puVar4[0x11];
          if (pcVar6 != (code *)0x0) {
            puVar4[0x12] = 0;
            puVar4[0x13] = 0;
            *puVar7 = 0;
            puVar4[0x11] = 0;
            (*pcVar6)(puVar9);
          }
        }
        puVar10 = puVar10 + 0x10;
      }
    }
  }
  puVar7 = (undefined8 *)param_1[1];
  puVar11 = puVar10;
  if (puVar10 != puVar7) {
LAB_006d228c:
    if ((undefined8 *)((long)puVar11 + ((long)puVar7 - (long)puVar11)) != puVar7) {
      lVar8 = (long)puVar7 - (long)puVar11 >> 7;
      do {
        pcVar6 = (code *)puVar11[1];
        if (pcVar6 != (code *)0x0) {
          puVar11[2] = 0;
          puVar11[3] = 0;
          *puVar11 = 0;
          puVar11[1] = 0;
          (*pcVar6)(puVar11 + 4);
        }
        puVar10 = puVar11 + lVar8 * 0x10;
        if ((code *)puVar10[3] != (code *)0x0) {
          (*(code *)puVar10[3])(puVar10 + 4,puVar11 + 4);
          uVar1 = *puVar10;
          uVar2 = puVar10[1];
          uVar3 = puVar10[3];
          puVar11[2] = puVar10[2];
          puVar11[3] = uVar3;
          *puVar11 = uVar1;
          puVar11[1] = uVar2;
          pcVar6 = (code *)puVar10[1];
          if (pcVar6 != (code *)0x0) {
            puVar10[2] = 0;
            puVar10[3] = 0;
            *puVar10 = 0;
            puVar10[1] = 0;
            (*pcVar6)(puVar10 + 4);
          }
        }
        puVar11 = puVar11 + 0x10;
      } while (puVar7 + lVar8 * -0x10 != puVar11);
      puVar7 = (undefined8 *)param_1[1];
    }
    while (puVar10 = puVar7, puVar10 != puVar11) {
      pcVar6 = (code *)puVar10[-0xf];
      puVar7 = puVar10 + -0x10;
      if (pcVar6 != (code *)0x0) {
        puVar10[-0xe] = 0;
        puVar10[-0xd] = 0;
        puVar10[-0x10] = 0;
        puVar10[-0xf] = 0;
        (*pcVar6)(puVar10 + -0xc);
      }
    }
    param_1[1] = puVar11;
  }
LAB_006d2348:
  if ((undefined8 *)*param_1 == puVar11) {
    *(undefined1 *)(param_1 + 6) = 0;
  }
  return;
}


