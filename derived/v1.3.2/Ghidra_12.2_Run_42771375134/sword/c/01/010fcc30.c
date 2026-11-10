/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010fcc30; name: FUN_010fcc30
 */


void FUN_010fcc30(long param_1)

{
  long local_18;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    return;
  }
  switch(*(undefined4 *)(param_1 + 0x7c)) {
  case 1:
    if (*(long *)(param_1 + 0x88) == 0) {
      local_18 = 0;
      FUN_010f0db0(0,0);
    }
    else {
      FUN_010eb5e0(&local_18);
      FUN_010f0db0(local_18,0);
    }
    break;
  case 2:
    if (*(long *)(param_1 + 0x88) == 0) {
      local_18 = 0;
      FUN_010f0db0(0,2);
    }
    else {
      FUN_010eb5e0(&local_18);
      FUN_010f0db0(local_18,2);
    }
    break;
  case 3:
    if (*(long *)(param_1 + 0x88) == 0) {
      local_18 = 0;
      FUN_010f0db0(0,3);
    }
    else {
      FUN_010eb5e0(&local_18);
      FUN_010f0db0(local_18,3);
    }
    break;
  case 4:
    if (*(long *)(param_1 + 0x88) == 0) {
      local_18 = 0;
      FUN_010f0db0(0,4);
    }
    else {
      FUN_010eb5e0(&local_18);
      FUN_010f0db0(local_18,4);
    }
    break;
  case 5:
    if (*(long *)(param_1 + 0x88) == 0) {
      local_18 = 0;
      FUN_010f0db0(0,5);
    }
    else {
      FUN_010eb5e0(&local_18);
      FUN_010f0db0(local_18,5);
    }
    break;
  case 6:
    if (*(long *)(param_1 + 0x88) == 0) {
      local_18 = 0;
      FUN_010f0db0(0,0xc);
    }
    else {
      FUN_010eb5e0(&local_18);
      FUN_010f0db0(local_18,0xc);
    }
    break;
  default:
    goto switchD_010fcc68_default;
  }
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
  }
  *(undefined4 *)(param_1 + 0x80) = 3;
switchD_010fcc68_default:
  *(undefined1 *)(param_1 + 0x78) = 0;
  return;
}


