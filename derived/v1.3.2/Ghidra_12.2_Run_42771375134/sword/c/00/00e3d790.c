/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e3d790; name: FUN_00e3d790
 */


void FUN_00e3d790(long param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  float extraout_var;
  float fVar4;
  float fVar5;
  
  lVar2 = *(long *)(param_1 + 0x3a8);
  if (lVar2 != 0) {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = *(long *)(lVar2 + 0x60);
    if (lVar2 != 0) {
      uVar1 = FUN_0156b540(lVar2);
      lVar2 = lVar2 + -0x50;
      if ((uVar1 & 1) == 0) {
        lVar2 = 0;
      }
    }
    (**(code **)(*plVar3 + 0x18))(plVar3);
    if (lVar2 != 0) {
      FUN_00ac7ad0(lVar2 + 0xa0);
      fVar4 = *(float *)PTR_FloatPi_02715160;
      fVar5 = *(float *)PTR_FloatDegree180_027194f0;
      *(float *)(param_1 + 0x3d4) = (fVar4 / fVar5) * -10.0;
      *(float *)(param_1 + 0x3d0) = extraout_var + (fVar4 / fVar5) * DAT_01d4c284;
    }
  }
  return;
}


