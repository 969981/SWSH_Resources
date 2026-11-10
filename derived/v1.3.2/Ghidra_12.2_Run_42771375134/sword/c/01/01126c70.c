/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01126c70; name: FUN_01126c70
 */


void FUN_01126c70(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined *local_1b8 [2];
  undefined1 auStack_1a8 [144];
  undefined1 auStack_118 [144];
  undefined1 auStack_88 [104];
  
  if (*(char *)(*(long *)(param_1 + 0x88) + 0x3ac) != '\0') {
    FUN_0103f420(auStack_118,param_1 + 0x2c0,*(long *)(param_1 + 0x88) + 0x118,
                 *(undefined4 *)(param_1 + 0xfe4));
    uVar2 = *(undefined8 *)(*(long *)PTR_DAT_02710540 + 0x68);
    cVar1 = *(char *)(*(long *)(param_1 + 0x88) + 0x3ad);
    if (*(char *)(param_1 + 0xfe0) == '\0') {
      if (cVar1 == '\0') {
        FUN_010348f0(local_1b8,uVar2);
        memcpy(auStack_1a8,auStack_118,0x90);
        local_1b8[0] = PTR_DAT_02724a40;
      }
      else {
        FUN_010348f0(local_1b8,uVar2);
        memcpy(auStack_1a8,auStack_118,0x90);
        local_1b8[0] = PTR_DAT_02724a30;
      }
    }
    else if (cVar1 == '\0') {
      FUN_010348f0(local_1b8,uVar2);
      memcpy(auStack_1a8,auStack_118,0x90);
      local_1b8[0] = PTR_DAT_02724a38;
    }
    else {
      FUN_010348f0(local_1b8,uVar2);
      memcpy(auStack_1a8,auStack_118,0x90);
      local_1b8[0] = PTR_DAT_02724a28;
    }
    local_1b8[0] = local_1b8[0] + 0x10;
    FUN_01034150(auStack_88,local_1b8);
    FUN_01034430(auStack_88);
    FUN_01031e00(auStack_88);
  }
  return;
}


