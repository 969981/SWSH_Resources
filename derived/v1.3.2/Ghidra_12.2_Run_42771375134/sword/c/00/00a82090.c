/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a82090; name: FUN_00a82090
 */


void FUN_00a82090(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x1848) == -0x340d631b7bddd9bb) {
    lVar1 = 0;
  }
  else if (*(long *)(param_1 + 0x1850) == -0x340d631b7bddd9bb) {
    lVar1 = 1;
  }
  else if (*(long *)(param_1 + 0x1858) == -0x340d631b7bddd9bb) {
    lVar1 = 2;
  }
  else if (*(long *)(param_1 + 0x1860) == -0x340d631b7bddd9bb) {
    lVar1 = 3;
  }
  else if (*(long *)(param_1 + 0x1868) == -0x340d631b7bddd9bb) {
    lVar1 = 4;
  }
  else if (*(long *)(param_1 + 0x1870) == -0x340d631b7bddd9bb) {
    lVar1 = 5;
  }
  else if (*(long *)(param_1 + 0x1878) == -0x340d631b7bddd9bb) {
    lVar1 = 6;
  }
  else if (*(long *)(param_1 + 0x1880) == -0x340d631b7bddd9bb) {
    lVar1 = 7;
  }
  else if (*(long *)(param_1 + 0x1888) == -0x340d631b7bddd9bb) {
    lVar1 = 8;
  }
  else if (*(long *)(param_1 + 0x1890) == -0x340d631b7bddd9bb) {
    lVar1 = 9;
  }
  else if (*(long *)(param_1 + 0x1898) == -0x340d631b7bddd9bb) {
    lVar1 = 10;
  }
  else if (*(long *)(param_1 + 0x18a0) == -0x340d631b7bddd9bb) {
    lVar1 = 0xb;
  }
  else if (*(long *)(param_1 + 0x18a8) == -0x340d631b7bddd9bb) {
    lVar1 = 0xc;
  }
  else if (*(long *)(param_1 + 0x18b0) == -0x340d631b7bddd9bb) {
    lVar1 = 0xd;
  }
  else if (*(long *)(param_1 + 0x18b8) == -0x340d631b7bddd9bb) {
    lVar1 = 0xe;
  }
  else if (*(long *)(param_1 + 0x18c0) == -0x340d631b7bddd9bb) {
    lVar1 = 0xf;
  }
  else if (*(long *)(param_1 + 0x18c8) == -0x340d631b7bddd9bb) {
    lVar1 = 0x10;
  }
  else if (*(long *)(param_1 + 0x18d0) == -0x340d631b7bddd9bb) {
    lVar1 = 0x11;
  }
  else if (*(long *)(param_1 + 0x18d8) == -0x340d631b7bddd9bb) {
    lVar1 = 0x12;
  }
  else {
    if (*(long *)(param_1 + 0x18e0) != -0x340d631b7bddd9bb) {
      return;
    }
    lVar1 = 0x13;
  }
  lVar1 = param_1 + lVar1 * 8;
  *(undefined8 *)(lVar1 + 0x1848) = *param_2;
  FUN_01023150(*(long *)PTR_DAT_02710840 + 0x390,lVar1 + 0x1848,*(undefined8 *)(param_1 + 0xd8));
  return;
}


