/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012ba250; name: FUN_012ba250
 */


bool FUN_012ba250(long param_1,int param_2)

{
  uint uVar1;
  undefined *puVar2;
  float fVar3;
  float fVar4;
  
  if (param_2 == 1) {
    uVar1 = FUN_0087d530(*(undefined8 *)(param_1 + 0x58));
    uVar1 = uVar1 & 0xff;
joined_r0x012ba29c:
    if (0xfe < uVar1) {
      puVar2 = &UNK_02168bb0;
      goto LAB_012ba31c;
    }
    if (0xdb < uVar1) {
      puVar2 = &UNK_02168bbc;
      goto LAB_012ba31c;
    }
    if (0xb3 < uVar1) {
      puVar2 = &UNK_02168bc8;
      goto LAB_012ba31c;
    }
    if (0x81 < uVar1) {
      puVar2 = &UNK_02168bd4;
      goto LAB_012ba31c;
    }
    if (0x4f < uVar1) {
      puVar2 = &UNK_02168be0;
      goto LAB_012ba31c;
    }
    if (0x1d < uVar1) {
      puVar2 = &UNK_02168bec;
      goto LAB_012ba31c;
    }
    if (uVar1 != 0) {
      puVar2 = &UNK_02168bf8;
      goto LAB_012ba31c;
    }
  }
  else if (param_2 == 0) {
    uVar1 = FUN_0087d3e0(*(undefined8 *)(param_1 + 0x58));
    goto joined_r0x012ba29c;
  }
  puVar2 = &UNK_02168c04;
LAB_012ba31c:
  fVar4 = *(float *)(puVar2 + (long)param_2 * 4 + 4);
  fVar3 = (float)FUN_01029020(0x3f800000,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x98));
  return fVar3 < fVar4;
}


