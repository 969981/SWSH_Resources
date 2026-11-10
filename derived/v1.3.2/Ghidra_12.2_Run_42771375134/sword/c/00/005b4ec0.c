/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005b4ec0; name: FUN_005b4ec0
 */


undefined8 FUN_005b4ec0(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_027139b0;
  if (*(long *)(param_1 + 0x238) == 0) {
    return 0;
  }
  iVar2 = *(int *)PTR_DAT_027139b0;
  if (iVar2 < 1) {
    plVar4 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                  "../src/GPU\\GPUClassUtil.h",0x49,0);
    FUN_0056dc10(plVar4,0);
    *(long **)PTR_DAT_027139b8 = plVar4;
    *(undefined4 *)puVar1 = 1;
  }
  else {
    plVar4 = *(long **)PTR_DAT_027139b8;
    *(int *)PTR_DAT_027139b0 = iVar2 + 1;
    if (1 < iVar2 + 1) goto LAB_005b4fa0;
  }
  if (plVar4 == (long *)0x0) {
    iVar2 = 0;
  }
  else {
    uVar5 = *(undefined8 *)PTR_PTR_02713988;
    (**(code **)(*plVar4 + 0x20))(plVar4);
    FUN_005b9b10(uVar5,plVar4);
    iVar2 = 0;
    *(undefined8 *)PTR_DAT_027139b8 = 0;
  }
LAB_005b4fa0:
  *(int *)puVar1 = iVar2;
  FUN_00540cb0(*(undefined8 *)(param_1 + 0x20),8);
  (**(code **)(**(long **)(param_1 + 0x20) + 0x168))(*(long **)(param_1 + 0x20),2);
  lVar3 = *(long *)(param_1 + 0x228);
  fVar7 = (float)NEON_ucvtf(*(undefined4 *)(lVar3 + 0x58));
  fVar6 = (float)NEON_ucvtf(*(undefined4 *)(lVar3 + 0x54));
  local_40 = 0x3f8000003f800000;
  uStack_38 = 0x3f8000003f800000;
  FUN_0058b290(0,0,fVar6,fVar7,0,0,*(float *)(lVar3 + 0x88) * fVar6 + *(float *)(lVar3 + 0x90),
               *(float *)(lVar3 + 0x8c) * fVar7 + *(float *)(lVar3 + 0x94),plVar4,
               *(undefined8 *)(param_1 + 0x238),*(undefined4 *)(param_1 + 0x16c),0,0,
               *(undefined1 *)(param_1 + 0x240),param_1 + 0x1e8,0,*(undefined4 *)(param_1 + 400),
               *(undefined4 *)(param_1 + 0x194),*(undefined4 *)(param_1 + 0x1b0),0,0,0,0x3f000000,
               &local_40,0);
  FUN_00540cb0(*(undefined8 *)(param_1 + 0x20),0xf);
  (**(code **)(**(long **)(param_1 + 0x20) + 0x168))(*(long **)(param_1 + 0x20),0);
  return 0;
}


