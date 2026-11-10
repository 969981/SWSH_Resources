/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001d1850; name: FUN_001d1850
 */


void FUN_001d1850(long param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long local_20;
  char local_14 [4];
  
  uVar1 = *(uint *)(param_2 + 8);
  switch(uVar1 >> 0x18 & 0xf) {
  case 1:
  case 2:
    if ((uVar1 >> 0x1c & 1) != 0) {
      return;
    }
    *(uint *)(param_2 + 8) = uVar1 | 0x10000000;
    if (uVar1 >> 0x1e != 2) {
      return;
    }
    lVar3 = 0x1fe8;
    break;
  case 3:
  case 4:
    if ((uVar1 >> 0x1c & 1) != 0) {
      return;
    }
    *(uint *)(param_2 + 8) = uVar1 | 0x10000000;
    if (uVar1 >> 0x1e != 2) {
      return;
    }
    lVar3 = 0x2088;
    break;
  case 5:
    if ((uVar1 >> 0x1c & 1) != 0) {
      return;
    }
    *(uint *)(param_2 + 8) = uVar1 | 0x10000000;
    if (uVar1 >> 0x1e != 2) {
      return;
    }
    lVar3 = 0x2050;
    break;
  case 6:
    if ((uVar1 >> 0x1c & 1) != 0) {
      return;
    }
    *(uint *)(param_2 + 8) = uVar1 | 0x10000000;
    if (uVar1 >> 0x1e != 2) {
      return;
    }
    lVar3 = 0x20f8;
    break;
  case 7:
    if ((uVar1 >> 0x1c & 1) != 0) {
      return;
    }
    *(uint *)(param_2 + 8) = uVar1 | 0x10000000;
    if (uVar1 >> 0x1e != 2) {
      return;
    }
    lVar3 = 0x20c0;
    break;
  case 8:
    if ((uVar1 >> 0x1c & 1) != 0) {
      return;
    }
    *(uint *)(param_2 + 8) = uVar1 | 0x10000000;
    if (uVar1 >> 0x1e != 2) {
      return;
    }
    lVar3 = 0x2130;
    break;
  case 9:
    if ((uVar1 >> 0x1c & 1) != 0) {
      return;
    }
    *(uint *)(param_2 + 8) = uVar1 | 0x10000000;
    if (uVar1 >> 0x1e != 2) {
      return;
    }
    lVar3 = 0x2168;
    break;
  case 10:
    if ((uVar1 >> 0x1c & 1) != 0) {
      return;
    }
    *(uint *)(param_2 + 8) = uVar1 | 0x10000000;
    if (uVar1 >> 0x1e != 2) {
      return;
    }
    lVar3 = 0x21a0;
    break;
  case 0xb:
    if ((uVar1 >> 0x1c & 1) != 0) {
      return;
    }
    *(uint *)(param_2 + 8) = uVar1 | 0x10000000;
    if (uVar1 >> 0x1e != 2) {
      return;
    }
    lVar3 = 0x21d8;
    break;
  default:
    goto switchD_001d1880_default;
  }
  local_20 = param_2;
  plVar2 = (long *)FUN_001d67d0(param_1 + lVar3,&local_20,local_14);
  if (local_14[0] == '\0') {
    *plVar2 = local_20;
    return;
  }
switchD_001d1880_default:
  return;
}


