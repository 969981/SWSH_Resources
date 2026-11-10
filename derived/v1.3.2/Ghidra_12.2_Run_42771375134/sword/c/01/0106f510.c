/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0106f510; name: FUN_0106f510
 */


long FUN_0106f510(uint param_1,char param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  
  if (param_1 - 3 < 5) {
    uVar2 = 5;
    puVar3 = (uint *)PTR_DAT_02723c88;
    if (param_2 != '\x01') {
      uVar2 = 0;
      puVar3 = (uint *)0x0;
    }
    if (param_2 == '\0') {
      uVar2 = 3;
      uVar1 = *(uint *)PTR_DAT_02723c90;
      puVar3 = (uint *)PTR_DAT_02723c90;
joined_r0x0106f5dc:
      if (uVar1 == param_1) {
        return 0;
      }
      goto LAB_0106f598;
    }
  }
  else {
    if (2 < param_1) {
      return 0;
    }
    uVar2 = 3;
    puVar3 = (uint *)PTR_DAT_02723c98;
    if (param_2 != '\x01') {
      uVar2 = 0;
      puVar3 = (uint *)0x0;
    }
    if (param_2 == '\0') {
      uVar2 = 2;
      uVar1 = *(uint *)PTR_DAT_02723ca0;
      puVar3 = (uint *)PTR_DAT_02723ca0;
      goto joined_r0x0106f5dc;
    }
  }
  if (uVar2 == 0) {
    return 0;
  }
  if (*puVar3 == param_1 || uVar2 < 2) {
    return 0;
  }
LAB_0106f598:
  if (puVar3[1] == param_1) {
    return 1;
  }
  if (2 < uVar2) {
    if (puVar3[2] == param_1) {
      return 2;
    }
    if (3 < uVar2) {
      if (puVar3[3] == param_1) {
        return 3;
      }
      if (4 < uVar2) {
        return (ulong)(puVar3[4] == param_1) << 2;
      }
    }
  }
  return 0;
}


