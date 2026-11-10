/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014be4b0; name: FUN_014be4b0
 */


undefined8 FUN_014be4b0(long param_1,long *param_2,undefined4 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  
  switch(param_3) {
  case 0:
    uVar2 = thunk_FUN_0077dba0(param_4,0);
    if (8 < uVar2) {
      return 1;
    }
    if (*(char *)(param_1 + 0x20) == '\0') {
      puVar6 = (undefined4 *)*param_2;
      uVar1 = *(undefined4 *)(&DAT_02171d80 + (ulong)uVar2 * 4);
      *(undefined4 *)(param_1 + 8) = *puVar6;
      uVar3 = puVar6[1];
      *(undefined4 *)(param_1 + 0x10) = uVar1;
      *(undefined4 *)(param_1 + 0x14) = uVar1;
      *(undefined4 *)(param_1 + 0xc) = uVar3;
      *puVar6 = uVar1;
      puVar6[1] = uVar1;
      *(undefined1 *)(param_1 + 0x20) = 1;
      return 1;
    }
    return 1;
  case 1:
    if (*(char *)(param_1 + 0x20) == '\0') {
      return 1;
    }
    puVar6 = (undefined4 *)*param_2;
    *puVar6 = *(undefined4 *)(param_1 + 8);
    puVar6[1] = *(undefined4 *)(param_1 + 0xc);
    *(undefined1 *)(param_1 + 0x20) = 0;
    return 1;
  case 2:
    if (*(int *)(param_1 + 0x18) == 0) {
      return 1;
    }
    uVar4 = FUN_0077db30(param_4);
    uVar3 = FUN_0077da20(uVar4,0);
    fVar8 = (float)FUN_01998760(*param_2,uVar4,uVar3);
    uVar5 = (uint)(*(int *)(param_1 + 0x18) - (int)fVar8) >> 1;
    goto LAB_014be62c;
  case 3:
    if (*(int *)(param_1 + 0x18) == 0) {
      return 1;
    }
    uVar2 = thunk_FUN_0077dba0(param_4,0);
    uVar3 = FUN_0077da20(param_4,0);
    fVar8 = (float)FUN_01998760(*param_2,param_4,uVar3);
    fVar9 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x18));
    fVar8 = (fVar9 - fVar8) - (float)uVar2;
    break;
  case 4:
    fVar8 = *(float *)(*param_2 + 0x14);
    uVar2 = thunk_FUN_0077dba0(param_4,0);
    fVar8 = fVar8 + (float)uVar2;
    break;
  case 5:
    uVar5 = thunk_FUN_0077dba0(param_4,0);
    uVar5 = uVar5 & 0xffff;
LAB_014be62c:
    fVar8 = (float)uVar5;
    break;
  default:
    goto switchD_014be4ec_caseD_6;
  case 7:
    fVar8 = (float)FUN_0198df00(*param_2);
    uVar2 = thunk_FUN_0077dba0(param_4,0);
    fVar9 = (float)((uint)(int)(fVar8 * (float)uVar2) >> 8);
    uVar4 = FUN_0077db30(param_4);
    uVar7 = *(undefined8 *)(*param_2 + 0x28);
    FUN_0198df00();
    fVar8 = (float)FUN_014bd8f0(param_1,uVar4,uVar7);
    if (fVar8 <= fVar9) {
      return 1;
    }
    uVar5 = (uint)((fVar9 / fVar8) * DAT_01d4bec0);
    if (uVar5 == 1000) {
      return 1;
    }
    fVar8 = (float)uVar5 / DAT_01d4bec0;
    fVar9 = *(float *)(*param_2 + 0xc);
    *(float *)(param_1 + 0x1c) = fVar9;
    fVar8 = fVar8 * fVar9;
    goto LAB_014be718;
  case 8:
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(*param_2 + 0xc);
    uVar2 = thunk_FUN_0077dba0(param_4,0);
    fVar8 = *(float *)(param_1 + 0x1c) * ((float)uVar2 / DAT_01d4bec0);
    goto LAB_014be718;
  case 9:
    fVar8 = *(float *)(param_1 + 0x1c);
    if (fVar8 == 0.0) {
      return 1;
    }
LAB_014be718:
    *(float *)(*param_2 + 0xc) = fVar8;
    goto switchD_014be4ec_caseD_6;
  }
  *(float *)(*param_2 + 0x14) = fVar8;
switchD_014be4ec_caseD_6:
  return 1;
}


