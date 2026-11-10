/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00573c00; name: FUN_00573c00
 */


undefined8
FUN_00573c00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9
            ,ulong param_10,long param_11,long param_12,int param_13,undefined4 param_14)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  
  uVar2 = (int)param_10 - 1;
  if ((uVar2 < 4) && (param_13 == 0)) {
    uVar10 = param_10 & 0xffffffff;
    if (*(int *)(param_5 + (long)(int)uVar2 * 4 + 0x1b444) != 0) {
      (**(code **)(**(long **)(param_5 + 0x30) + 0xe8))();
      if (param_11 == 0) {
        puVar6 = &DAT_02760a24;
        uVar8 = uVar10;
        do {
          *(undefined8 *)(puVar6 + -3) = 0x3f8000003f800000;
          *(undefined8 *)(puVar6 + -1) = 0x3f8000003f800000;
          puVar6 = puVar6 + 4;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      else {
        param_10 = param_10 & 3;
        if (uVar10 - 1 < 3) {
          lVar5 = 0;
        }
        else {
          lVar5 = 0;
          puVar7 = (undefined8 *)(param_11 + 0x20);
          puVar9 = (undefined8 *)&DAT_02760a48;
          do {
            uVar3 = puVar7[-3];
            lVar5 = lVar5 + 4;
            puVar9[-6] = puVar7[-4];
            puVar9[-5] = uVar3;
            uVar3 = puVar7[-1];
            puVar9[-4] = puVar7[-2];
            puVar9[-3] = uVar3;
            uVar3 = puVar7[1];
            puVar9[-2] = *puVar7;
            puVar9[-1] = uVar3;
            puVar1 = puVar7 + 2;
            uVar3 = puVar7[3];
            puVar7 = puVar7 + 8;
            *puVar9 = *puVar1;
            puVar9[1] = uVar3;
            puVar9 = puVar9 + 8;
          } while (uVar10 - param_10 != lVar5);
        }
        if (param_10 != 0) {
          lVar4 = -param_10;
          puVar7 = (undefined8 *)(&DAT_02760a18 + lVar5 * 4);
          puVar9 = (undefined8 *)(param_11 + lVar5 * 0x10);
          do {
            uVar3 = puVar9[1];
            *puVar7 = *puVar9;
            puVar7[1] = uVar3;
            lVar4 = lVar4 + 1;
            puVar7 = puVar7 + 2;
            puVar9 = puVar9 + 2;
          } while (lVar4 != 0);
        }
      }
      (**(code **)(**(long **)(param_5 + 0x30) + 0xb0))
                (*(long **)(param_5 + 0x30),*(undefined4 *)(param_5 + 0x100),&DAT_02760a18,uVar10);
      if (param_12 != 0) {
        (**(code **)(**(long **)(param_5 + 0x30) + 0xd0))
                  (*(long **)(param_5 + 0x30),*(undefined4 *)(param_5 + 0x40),param_12);
      }
      uVar3 = FUN_00573200(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                           uVar10,param_14);
      return uVar3;
    }
    if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_02713980 != 0)) {
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUTextureUtil.cpp(%d) : PPFX ERROR: ",0x2bfd);
      FUN_00517ae0("CTextureUtil::DrawRectGPU_TexCoordMadT1_Sn(): GetHandle_tech_TexCoordMadT1_Sn(%d) failed.\n"
                   ,uVar10);
    }
  }
  return 0xfffffffc;
}


