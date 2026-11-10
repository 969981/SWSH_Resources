/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0130a870; name: FUN_0130a870
 */


void FUN_0130a870(long param_1)

{
  int iVar1;
  undefined8 local_20;
  undefined8 uStack_18;
  
  if (*(char *)(param_1 + 0x3c0) == '\0') {
    local_20 = 0xb29b22742b6691e;
  }
  else {
    if (*(char *)(param_1 + 0x3b1) != '\0') {
      return;
    }
    iVar1 = *(int *)(param_1 + 0x3bc);
    if (iVar1 == 2) {
      local_20 = 0x452f40e1a98be97;
    }
    else if (iVar1 == 1) {
      local_20 = 0xc851e99285570e40;
    }
    else {
      if (iVar1 != 0) {
        return;
      }
      local_20 = 0x275dbcecced052c0;
    }
  }
  uStack_18 = 0;
  FUN_0130fad0(param_1,&local_20,0);
  return;
}


