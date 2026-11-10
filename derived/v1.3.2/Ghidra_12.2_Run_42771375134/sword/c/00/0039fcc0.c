/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0039fcc0; name: FUN_0039fcc0
 */


undefined8 FUN_0039fcc0(uint *param_1,undefined8 *param_2,uint *param_3,uint param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint *puVar6;
  undefined4 *puVar7;
  long lVar8;
  long lVar9;
  
  if ((char)param_1[0x7a0] == '\0') {
    uVar3 = param_1[0xc];
    uVar5 = (ulong)uVar3;
    if (uVar3 < 0x10) {
      param_1[0xc] = uVar3 + 1;
      *(undefined8 *)(param_1 + uVar5 * 4 + 0x10) = param_2[1];
      *(undefined8 *)(param_1 + uVar5 * 4 + 0xe) = *param_2;
      param_1[uVar5 * 6 + 0x4e] = *param_3;
      param_1[uVar5 * 6 + 0x4f] = param_3[1];
      param_1[uVar5 * 6 + 0x50] = param_3[2];
      param_1[uVar5 * 6 + 0x51] = param_3[3];
      param_1[uVar5 * 6 + 0x52] = param_3[4];
      param_1[uVar5 * 6 + 0x53] = param_3[5];
      param_1[uVar5 + 0xae] = param_4;
      return 1;
    }
    puVar6 = param_1 + 0xe;
    lVar9 = 0xae;
    lVar8 = 0x14c;
    do {
      uVar3 = *param_1;
      uVar4 = param_1[lVar9];
      if (uVar3 == param_1[1]) {
        FUN_0039fb00(param_1);
        uVar3 = *param_1;
      }
      uVar5 = (ulong)uVar3;
      *param_1 = uVar3 + 1;
      puVar1 = (undefined8 *)(*(long *)(param_1 + 4) + uVar5 * 0x10);
      puVar1[1] = *(undefined8 *)(puVar6 + 2);
      *puVar1 = *(undefined8 *)puVar6;
      puVar2 = (undefined4 *)((long)param_1 + lVar8);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 2) + uVar5 * 0x18);
      *puVar7 = puVar2[-5];
      puVar7[1] = puVar2[-4];
      puVar7[2] = puVar2[-3];
      puVar7[3] = puVar2[-2];
      puVar7[4] = puVar2[-1];
      puVar7[5] = *puVar2;
      *(undefined4 *)(*(long *)(param_1 + 6) + uVar5 * 4) = 0xffffffff;
      FUN_003a5db0(param_1 + 0xbe,puVar6,uVar5,uVar4);
      uVar5 = lVar9 - 0xad;
      puVar6 = puVar6 + 4;
      lVar9 = lVar9 + 1;
      lVar8 = lVar8 + 0x18;
    } while (uVar5 < param_1[0xc]);
    param_1[0xc] = 0;
    *(undefined1 *)(param_1 + 0x7a0) = 1;
    uVar5 = (ulong)*param_1;
    if (*param_1 != param_1[1]) goto LAB_0039fd18;
  }
  else {
    uVar5 = (ulong)*param_1;
    if (*param_1 != param_1[1]) goto LAB_0039fd18;
  }
  FUN_0039fb00(param_1);
  uVar5 = (ulong)*param_1;
LAB_0039fd18:
  *param_1 = (int)uVar5 + 1;
  puVar1 = (undefined8 *)(*(long *)(param_1 + 4) + uVar5 * 0x10);
  puVar1[1] = param_2[1];
  *puVar1 = *param_2;
  puVar6 = (uint *)(*(long *)(param_1 + 2) + uVar5 * 0x18);
  *puVar6 = *param_3;
  puVar6[1] = param_3[1];
  puVar6[2] = param_3[2];
  puVar6[3] = param_3[3];
  puVar6[4] = param_3[4];
  puVar6[5] = param_3[5];
  *(undefined4 *)(*(long *)(param_1 + 6) + uVar5 * 4) = 0xffffffff;
  FUN_003a5db0(param_1 + 0xbe,param_2,uVar5,param_4);
  return 1;
}


