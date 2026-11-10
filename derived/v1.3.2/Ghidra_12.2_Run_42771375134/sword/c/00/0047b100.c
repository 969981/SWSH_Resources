/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0047b100; name: FUN_0047b100
 */


void FUN_0047b100(float param_1,float param_2,long param_3,long param_4)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_3 + 0x100) * param_1 * *(float *)PTR_DAT_02713200;
  fVar2 = *(float *)(PTR_DAT_02713200 + 4) * param_2 * *(float *)(param_3 + 0x104);
  if (*(long *)(param_3 + 0x108) != 0) {
    FUN_004a59d0(fVar1,fVar2,param_4,*(undefined8 *)(param_3 + 0x110));
    *(undefined2 *)(*(long *)(param_3 + 0x110) + 0x12) = *(undefined2 *)(param_4 + 0x12);
  }
                    /* WARNING: Could not recover jumptable at 0x0047b188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_3 + 0xf8) + 0x48))(fVar1,fVar2,*(long **)(param_3 + 0xf8),param_4);
  return;
}


