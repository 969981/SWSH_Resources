/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010b3150; name: FUN_010b3150
 */


void FUN_010b3150(long param_1,uint param_2,uint param_3,uint param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined2 uVar20;
  undefined2 uVar21;
  void *pvVar22;
  undefined8 *puVar23;
  ulong uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  ulong uVar28;
  long lVar29;
  ulong uVar30;
  ulong uVar31;
  long lVar32;
  undefined4 local_70;
  
  if (((param_2 != param_3) && (param_2 < 0x32)) && (uVar28 = (ulong)param_3, param_3 < 0x32)) {
    puVar23 = (undefined8 *)(param_1 + (ulong)param_4 * 8000 + (ulong)param_2 * 0xa0);
    uVar1 = *puVar23;
    uVar7 = puVar23[1];
    uVar25 = puVar23[2];
    uVar2 = puVar23[3];
    uVar8 = puVar23[4];
    uVar26 = puVar23[5];
    local_70 = CONCAT22(local_70._2_2_,*(undefined2 *)(puVar23 + 6));
    uVar13 = *(undefined4 *)((long)puVar23 + 0x34);
    uVar3 = puVar23[10];
    uVar9 = puVar23[0xb];
    uVar18 = *(undefined1 *)((long)puVar23 + 0x41);
    uVar14 = *(undefined4 *)((long)puVar23 + 0x44);
    uVar15 = *(undefined4 *)(puVar23 + 9);
    uVar16 = *(undefined4 *)((long)puVar23 + 0x4c);
    uVar20 = *(undefined2 *)(puVar23 + 7);
    uVar17 = *(undefined4 *)((long)puVar23 + 0x3c);
    uVar19 = *(undefined1 *)(puVar23 + 8);
    uVar4 = puVar23[0xc];
    uVar10 = puVar23[0xd];
    uVar31 = (ulong)param_4;
    uVar5 = puVar23[0xe];
    uVar11 = puVar23[0xf];
    uVar27 = puVar23[0x12];
    uVar6 = puVar23[0x10];
    uVar12 = puVar23[0x11];
    uVar21 = *(undefined2 *)(puVar23 + 0x13);
    if (param_2 < param_3) {
      uVar24 = (ulong)param_2;
      uVar30 = ~uVar24;
      if ((param_3 - param_2 & 1) != 0) {
        pvVar22 = (void *)(param_1 + uVar31 * 8000 + uVar24 * 0xa0);
        uVar24 = uVar24 + 1;
        memcpy(pvVar22,(void *)((long)pvVar22 + 0xa0),0x9a);
      }
      if (uVar30 + uVar28 != 0) {
        lVar32 = uVar28 - uVar24;
        pvVar22 = (void *)(param_1 + uVar31 * 8000 + uVar24 * 0xa0 + 0xa0);
        do {
          memcpy((void *)((long)pvVar22 + -0xa0),pvVar22,0x9a);
          memcpy(pvVar22,(void *)((long)pvVar22 + 0xa0),0x9a);
          lVar32 = lVar32 + -2;
          pvVar22 = (void *)((long)pvVar22 + 0x140);
        } while (lVar32 != 0);
      }
    }
    else if (param_2 - param_3 != 0 && (int)param_3 <= (int)param_2) {
      lVar29 = (long)(int)param_2;
      lVar32 = lVar29;
      if ((param_2 - param_3 & 1) != 0) {
        pvVar22 = (void *)(param_1 + uVar31 * 8000 + lVar29 * 0xa0);
        lVar32 = lVar29 + -1;
        memcpy(pvVar22,(void *)((long)pvVar22 + -0xa0),0x9a);
      }
      if (~(long)(int)param_3 + lVar29 != 0) {
        pvVar22 = (void *)(param_1 + uVar31 * 8000 + lVar32 * 0xa0 + -0xa0);
        do {
          memcpy((void *)((long)pvVar22 + 0xa0),pvVar22,0x9a);
          lVar32 = lVar32 + -2;
          memcpy(pvVar22,(void *)((long)pvVar22 + -0xa0),0x9a);
          pvVar22 = (void *)((long)pvVar22 + -0x140);
        } while ((int)param_3 < lVar32);
      }
    }
    puVar23 = (undefined8 *)(param_1 + uVar31 * 8000 + uVar28 * 0xa0);
    *puVar23 = uVar1;
    puVar23[1] = uVar7;
    puVar23[2] = uVar25;
    *(undefined2 *)(puVar23 + 7) = uVar20;
    *(undefined4 *)((long)puVar23 + 0x3c) = uVar17;
    *(undefined1 *)(puVar23 + 8) = uVar19;
    *(undefined1 *)((long)puVar23 + 0x41) = uVar18;
    *(undefined4 *)((long)puVar23 + 0x44) = uVar14;
    *(undefined4 *)(puVar23 + 9) = uVar15;
    puVar23[4] = uVar8;
    puVar23[5] = uVar26;
    puVar23[3] = uVar2;
    *(undefined4 *)((long)puVar23 + 0x4c) = uVar16;
    *(undefined4 *)(puVar23 + 6) = local_70;
    *(undefined4 *)((long)puVar23 + 0x34) = uVar13;
    puVar23[10] = uVar3;
    puVar23[0xb] = uVar9;
    puVar23[0xe] = uVar5;
    puVar23[0xf] = uVar11;
    puVar23[0xc] = uVar4;
    puVar23[0xd] = uVar10;
    *(undefined2 *)(puVar23 + 0x13) = uVar21;
    puVar23[0x11] = uVar12;
    puVar23[0x12] = uVar27;
    puVar23[0x10] = uVar6;
  }
  return;
}


