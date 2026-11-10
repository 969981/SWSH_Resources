/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005aa180; name: FUN_005aa180
 */


ulong FUN_005aa180(long param_1,undefined8 param_2,void *param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_005a7440(param_2,param_3);
  if ((int)uVar1 < 0) {
    uVar2 = (ulong)uVar1;
    if (*(int *)PTR_DAT_02713970 != 0 && *(int *)PTR_DAT_02713980 != 0) {
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp(%d) : PPFX ERROR: ",0xb51);
      uVar3 = FUN_00546ea0(uVar2);
      FUN_00517ae0("CDepthOfField::Initialize(): ValidateInitParam() failed (0x%x: %s).\n",uVar2,
                   uVar3);
    }
    return uVar2;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  FUN_0059ed30(param_1);
  *(undefined8 *)(param_1 + 0x228) = param_2;
  memcpy((void *)(param_1 + 0xc0),param_3,0x94);
  memcpy((void *)(param_1 + 0x2c),param_3,0x94);
  FUN_005a8010(param_1);
  *(undefined8 *)(param_1 + 0x3b8) = 0x3f400000;
  *(undefined4 *)(param_1 + 0x3c0) = 0x3f490fdb;
  *(undefined8 *)(param_1 + 1000) = 0x3f00000000000000;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  *(undefined1 *)(param_1 + 0x3a8) = 1;
  *(undefined4 *)(param_1 + 0x3b0) = 0;
  *(undefined1 *)(param_1 + 0x3c4) = 0;
  *(undefined1 *)(param_1 + 0x3b4) = 0;
  *(undefined8 *)(param_1 + 0x3d0) = 0;
  *(undefined8 *)(param_1 + 0x3c8) = 0;
  if (*(char *)(param_1 + 0x12d) != '\0') {
    *(undefined1 *)(param_1 + 0x3f0) = 0;
  }
  *(undefined1 *)(param_1 + 0x251) = 1;
  *(undefined8 *)(param_1 + 0x2a8) = 0x400000001;
  *(undefined8 *)(param_1 + 0x2b0) = 0x3f0000003f800000;
  *(undefined8 *)(param_1 + 0x2b8) = 0x3f8000003f800000;
  *(undefined4 *)(param_1 + 0x3e0) = 0x40800000;
  *(undefined4 *)(param_1 + 0x3f4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3ac) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x3d8) = 0x418000003dcccccd;
  *(undefined1 *)(param_1 + 0x1e0) = 0;
  uVar2 = FUN_0059ece0(param_1,uVar3);
  return uVar2;
}


