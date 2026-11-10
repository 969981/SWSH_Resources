/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003f6ac0; name: FUN_003f6ac0
 */


undefined8 * FUN_003f6ac0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  
  iVar4 = *(uint *)((long)param_1 + 0x414) << 1;
  if ((*(uint *)((long)param_1 + 0x414) & 0x7fffffff) == 0) {
    iVar4 = 1;
  }
  if (iVar4 == 0) {
    uVar3 = *(uint *)(param_1 + 0x82);
    puVar5 = (undefined8 *)0x0;
  }
  else if ((uint)(iVar4 * 0x20) < 0x401 && *(char *)(param_1 + 0x80) == '\0') {
    *(undefined1 *)(param_1 + 0x80) = 1;
    uVar3 = *(uint *)(param_1 + 0x82);
    puVar5 = param_1;
  }
  else {
    puVar5 = (undefined8 *)
             FUN_00401b30(param_1,iVar4 * 0x20,
                          "./../../../../PxShared/src/foundation/include/PsArray.h",0x229);
    uVar3 = *(uint *)(param_1 + 0x82);
  }
  if (uVar3 == 0) {
    uVar6 = 0;
  }
  else {
    puVar1 = puVar5 + (ulong)uVar3 * 4;
    puVar2 = puVar1;
    if (puVar1 <= puVar5 + 4) {
      puVar2 = puVar5 + 4;
    }
    puVar7 = (undefined8 *)param_1[0x81];
    uVar3 = ((uint)((long)puVar2 + ~(ulong)puVar5 >> 5) & 0x7ffffff) + 1;
    puVar10 = puVar5;
    if ((uVar3 & 7) != 0) {
      lVar11 = -((ulong)uVar3 & 7);
      puVar8 = puVar7;
      puVar9 = puVar5;
      do {
        puVar9[3] = puVar8[3];
        puVar9[2] = puVar8[2];
        puVar9[1] = puVar8[1];
        puVar7 = puVar8 + 4;
        lVar11 = lVar11 + 1;
        puVar10 = puVar9 + 4;
        *puVar9 = *puVar8;
        puVar8 = puVar7;
        puVar9 = puVar10;
      } while (lVar11 != 0);
    }
    if (0xdf < (long)puVar2 + ~(ulong)puVar5) {
      do {
        puVar10[3] = puVar7[3];
        puVar10[2] = puVar7[2];
        puVar10[1] = puVar7[1];
        *puVar10 = *puVar7;
        puVar10[7] = puVar7[7];
        puVar10[6] = puVar7[6];
        puVar10[5] = puVar7[5];
        puVar10[4] = puVar7[4];
        puVar10[0xb] = puVar7[0xb];
        puVar10[10] = puVar7[10];
        puVar10[9] = puVar7[9];
        puVar10[8] = puVar7[8];
        puVar10[0xc] = puVar7[0xc];
        puVar10[0xd] = puVar7[0xd];
        puVar10[0xe] = puVar7[0xe];
        puVar10[0xf] = puVar7[0xf];
        puVar10[0x13] = puVar7[0x13];
        puVar10[0x12] = puVar7[0x12];
        puVar10[0x11] = puVar7[0x11];
        puVar10[0x10] = puVar7[0x10];
        puVar10[0x16] = puVar7[0x16];
        puVar10[0x15] = puVar7[0x15];
        puVar10[0x14] = puVar7[0x14];
        puVar10[0x17] = puVar7[0x17];
        puVar10[0x1a] = puVar7[0x1a];
        puVar10[0x19] = puVar7[0x19];
        puVar10[0x18] = puVar7[0x18];
        puVar10[0x1b] = puVar7[0x1b];
        puVar10[0x1f] = puVar7[0x1f];
        puVar10[0x1e] = puVar7[0x1e];
        puVar10[0x1d] = puVar7[0x1d];
        puVar10[0x1c] = puVar7[0x1c];
        puVar10 = puVar10 + 0x20;
        puVar7 = puVar7 + 0x20;
      } while (puVar10 < puVar1);
    }
    uVar6 = (ulong)*(uint *)(param_1 + 0x82);
  }
  puVar1 = puVar5 + uVar6 * 4;
  puVar1[3] = param_2[3];
  puVar1[2] = param_2[2];
  puVar1[1] = param_2[1];
  *puVar1 = *param_2;
  if (-1 < *(int *)((long)param_1 + 0x414)) {
    if (param_1 == (undefined8 *)param_1[0x81]) {
      *(undefined1 *)(param_1 + 0x80) = 0;
    }
    else {
      FUN_00401ce0(param_1);
    }
  }
  uVar3 = *(uint *)(param_1 + 0x82);
  param_1[0x81] = puVar5;
  *(int *)((long)param_1 + 0x414) = iVar4;
  *(uint *)(param_1 + 0x82) = uVar3 + 1;
  return puVar5 + (ulong)uVar3 * 4;
}


