/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00555650; name: FUN_00555650
 */


ulong FUN_00555650(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  if (((((*(uint *)((long)param_2 + 0xc) < 0x10) || (*(uint *)(param_2 + 2) < 0x10)) ||
       ((*(int *)((long)param_2 + 0x2c) != 0 && (0xf < *(int *)((long)param_2 + 0x2c) - 1U)))) ||
      (0x10 < *(int *)(param_2 + 8))) ||
     ((*(char *)(param_2 + 10) != '\0' &&
      ((*(int *)((long)param_2 + 4) == 0 || (*(int *)(param_2 + 1) == 0)))))) {
    if (*(int *)PTR_DAT_02713970 == 0 || *(int *)PTR_DAT_02713980 == 0) {
      uVar5 = 0xfffffffa;
    }
    else {
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPURenderGlare.cpp(%d) : PPFX ERROR: ",0x580);
      uVar5 = 0xfffffffa;
      uVar3 = FUN_00546ea0(0xfffffffa);
      FUN_00517ae0("CRenderGlare::Initialize(): ValidateInitParam() failed (0x%x: %s).\n",0xfffffffa
                   ,uVar3);
    }
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    FUN_0059ed30(param_1);
    uVar3 = *param_2;
    uVar1 = param_2[1];
    uVar4 = param_2[3];
    *(undefined8 *)(param_1 + 0xc0) = param_2[2];
    *(undefined8 *)(param_1 + 200) = uVar4;
    *(undefined8 *)(param_1 + 0xb0) = uVar3;
    *(undefined8 *)(param_1 + 0xb8) = uVar1;
    uVar3 = param_2[4];
    uVar1 = param_2[5];
    uVar4 = param_2[7];
    *(undefined8 *)(param_1 + 0xe0) = param_2[6];
    *(undefined8 *)(param_1 + 0xe8) = uVar4;
    *(undefined8 *)(param_1 + 0xd0) = uVar3;
    *(undefined8 *)(param_1 + 0xd8) = uVar1;
    uVar3 = param_2[8];
    uVar1 = param_2[9];
    uVar4 = param_2[0xb];
    *(undefined8 *)(param_1 + 0x100) = param_2[10];
    *(undefined8 *)(param_1 + 0x108) = uVar4;
    *(undefined8 *)(param_1 + 0xf0) = uVar3;
    *(undefined8 *)(param_1 + 0xf8) = uVar1;
    uVar4 = param_2[0xe];
    uVar3 = param_2[0xc];
    uVar1 = param_2[0xd];
    *(undefined8 *)(param_1 + 0x125) = *(undefined8 *)((long)param_2 + 0x75);
    *(undefined8 *)(param_1 + 0x118) = uVar1;
    *(undefined8 *)(param_1 + 0x120) = uVar4;
    *(undefined8 *)(param_1 + 0x110) = uVar3;
    uVar3 = *param_2;
    uVar1 = param_2[1];
    uVar4 = param_2[3];
    *(undefined8 *)(param_1 + 0x40) = param_2[2];
    *(undefined8 *)(param_1 + 0x48) = uVar4;
    *(undefined8 *)(param_1 + 0x30) = uVar3;
    *(undefined8 *)(param_1 + 0x38) = uVar1;
    uVar3 = param_2[4];
    uVar1 = param_2[5];
    uVar4 = param_2[7];
    *(undefined8 *)(param_1 + 0x60) = param_2[6];
    *(undefined8 *)(param_1 + 0x68) = uVar4;
    *(undefined8 *)(param_1 + 0x50) = uVar3;
    *(undefined8 *)(param_1 + 0x58) = uVar1;
    uVar3 = param_2[8];
    uVar1 = param_2[9];
    uVar4 = param_2[0xb];
    *(undefined8 *)(param_1 + 0x80) = param_2[10];
    *(undefined8 *)(param_1 + 0x88) = uVar4;
    *(undefined8 *)(param_1 + 0x70) = uVar3;
    *(undefined8 *)(param_1 + 0x78) = uVar1;
    uVar4 = param_2[0xe];
    uVar3 = param_2[0xc];
    uVar1 = param_2[0xd];
    *(undefined8 *)(param_1 + 0xa5) = *(undefined8 *)((long)param_2 + 0x75);
    *(undefined8 *)(param_1 + 0x98) = uVar1;
    *(undefined8 *)(param_1 + 0xa0) = uVar4;
    *(undefined8 *)(param_1 + 0x90) = uVar3;
    uVar2 = FUN_005535f0(param_1);
    if (-1 < (int)uVar2) {
      uVar5 = FUN_0059ece0(param_1,uVar6);
      return uVar5;
    }
    uVar5 = (ulong)uVar2;
  }
  return uVar5;
}


