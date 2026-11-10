/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0044eaf0; name: FUN_0044eaf0
 */


/* WARNING: Type propagation algorithm not settling */

int FUN_0044eaf0(undefined4 param_1,long *param_2,undefined8 param_3,uint param_4,
                undefined4 *param_5,undefined8 param_6,undefined8 param_7)

{
  ushort uVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  float fVar8;
  float fVar9;
  ushort local_70;
  undefined6 uStack_6e;
  ushort local_64 [2];
  
  uVar1 = *(ushort *)((long)param_2 + 0x154);
  uVar5 = (uint)uVar1;
  *(undefined4 *)(param_2 + 0x2a) = param_1;
  if ((uVar1 >> 0xb & 1) == 0) {
    if (((uVar1 & 3) != 1) || (param_2[0x28] != 0)) goto LAB_0044ebb0;
    FUN_00488880(param_2[0x29],param_2 + 0x28,param_2 + 2,&local_70,local_64,param_2 + 0x22);
    uVar5 = 0;
    if (param_2[0x28] != 0) {
      uVar5 = local_70 & 3;
    }
    uVar5 = *(ushort *)((long)param_2 + 0x154) & 0xfffffff0 | (local_64[0] & 3) << 2 | uVar5;
    *(short *)((long)param_2 + 0x154) = (short)uVar5;
    if (param_2[0x28] != 0) goto LAB_0044ebb8;
LAB_0044ebd4:
    uVar6 = uVar5 & 0xfffffffc;
    iVar4 = 1;
    *(short *)((long)param_2 + 0x154) = (short)uVar6;
    if ((uVar5 >> 5 & 1) == 0) {
LAB_0044ebe4:
      (**(code **)(*param_2 + 0x50))(param_2,param_6);
      goto LAB_0044ece8;
    }
  }
  else {
    uVar5 = uVar1 & 0xfffc;
    param_2[0x22] = 0;
    *(short *)((long)param_2 + 0x154) = (short)uVar5;
    *(undefined8 *)((long)param_2 + 0x116) = 0;
LAB_0044ebb0:
    if (param_2[0x28] == 0) goto LAB_0044ebd4;
LAB_0044ebb8:
    iVar4 = FUN_0044eed0(param_2,&local_70);
    if (iVar4 == 2) {
      return 2;
    }
    lVar2 = CONCAT62(uStack_6e,local_70);
    if (lVar2 != 0) {
      *(undefined4 *)(param_2[0x28] + 0x10) = *(undefined4 *)(lVar2 + 0x20);
      *(undefined4 *)(param_2[0x28] + 0x14) = *(undefined4 *)(lVar2 + 0x24);
      *(undefined4 *)(param_2[0x28] + 0x18) = *(undefined4 *)(lVar2 + 0x28);
      puVar3 = PTR_DAT_02712b50;
      if (((*(byte *)((long)param_2 + 0x155) >> 3 & 1) == 0) && (*(int *)(lVar2 + 0xb0) != 0)) {
        puVar7 = *(undefined4 **)(lVar2 + 0xa8);
        do {
          iVar4 = FUN_0049b200(*(undefined8 *)puVar3,param_2,*puVar7,puVar7[1],puVar7[2],puVar7[3],
                               puVar7[4],puVar7[9],*(undefined8 *)(puVar7 + 6),puVar7[8],param_2 + 2
                               ,0,1);
          if (iVar4 != 1) {
            return iVar4;
          }
          puVar7 = puVar7 + 10;
        } while (puVar7 != (undefined4 *)
                           (*(long *)(lVar2 + 0xa8) + (ulong)*(uint *)(lVar2 + 0xb0) * 0x28));
      }
    }
    if (param_2[0x20] != 0) {
      uVar1 = *(ushort *)((long)param_2 + 0x154);
joined_r0x0044ecd0:
      iVar4 = 1;
      uVar6 = (uint)uVar1;
      if ((uVar1 >> 5 & 1) != 0) goto LAB_0044ecd4;
      goto LAB_0044ebe4;
    }
    iVar4 = FUN_0044f380(param_2,param_3);
    if (iVar4 == 1) {
      if (param_2[0x20] == 0) {
        uVar1 = *(ushort *)((long)param_2 + 0x154);
        goto joined_r0x0044ecd0;
      }
      iVar4 = FUN_0048aa30(*(undefined8 *)PTR_DAT_02712dc8,param_2[0x20],param_2);
      if (iVar4 != 2) {
        (**(code **)(*param_2 + 0x60))(param_2,param_2[0x20]);
        goto LAB_0044eeb8;
      }
      uVar1 = *(ushort *)((long)param_2 + 0x154);
      param_2[0x20] = 0;
    }
    else {
LAB_0044eeb8:
      uVar1 = *(ushort *)((long)param_2 + 0x154);
    }
    uVar6 = (uint)uVar1;
    if ((uVar1 >> 5 & 1) == 0) goto LAB_0044ebe4;
  }
LAB_0044ecd4:
  if ((uVar6 >> 9 & 1) != 0) {
    (**(code **)(*param_2 + 0x58))(param_2);
  }
LAB_0044ece8:
  fVar8 = 0.0;
  fVar9 = 0.0;
  if (DAT_01d4c2ec <= *(float *)(param_2 + 0xc) * DAT_01d4c158) {
    uVar5 = (uint)(DAT_01d4c714 + DAT_01d4bda4 * *(float *)(param_2 + 0xc));
    fVar9 = (float)(uVar5 & 0x7fffff | 0x3f800000);
    fVar9 = (DAT_01d4c23c + fVar9 * (DAT_01d4c1d8 + DAT_01d4c46c * fVar9)) *
            (float)(uVar5 & 0xff800000);
  }
  if (DAT_01d4c2ec <= *(float *)(param_2 + 0x11) * DAT_01d4c158) {
    uVar5 = (uint)(DAT_01d4c714 + DAT_01d4bda4 * *(float *)(param_2 + 0x11));
    fVar8 = (float)(uVar5 & 0x7fffff | 0x3f800000);
    fVar8 = (DAT_01d4c23c + fVar8 * (DAT_01d4c1d8 + DAT_01d4c46c * fVar8)) *
            (float)(uVar5 & 0xff800000);
  }
  fVar8 = *(float *)((long)param_2 + 100) * fVar9 * fVar8;
  fVar9 = *(float *)PTR_DAT_02712d48;
  *(bool *)param_7 = fVar8 <= fVar9;
  if (((iVar4 == 1) && ((param_4 & 1) == 0)) && (fVar8 <= fVar9)) {
    if ((*(byte *)((long)param_2 + 0x155) >> 3 & 1) == 0) {
      iVar4 = 3;
      *param_5 = 0x29;
    }
    else {
      iVar4 = 1;
    }
  }
  return iVar4;
}


