/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01452c10; name: FUN_01452c10
 */


undefined8 FUN_01452c10(long param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined8 local_58;
  char *pcStack_50;
  undefined8 local_48;
  undefined1 auStack_40 [16];
  
  local_58 = 0x9b7122ab5618a130;
  pcStack_50 = "jobCounts";
  local_48 = 9;
  FUN_012b4250(auStack_40,param_1 + 0x110,&local_58);
  FUN_012b4190(auStack_78,auStack_40,0);
  local_48 = 0x10;
  local_58 = 0x8b4d9086a7698d88;
  pcStack_50 = "required_success";
  FUN_012b4250(auStack_68,auStack_78,&local_58);
  uVar1 = FUN_012b4420(auStack_68,0);
  uVar2 = 0;
  if (uVar1 <= param_2) {
    FUN_012b4190(auStack_78,auStack_40,1);
    local_48 = 0x10;
    local_58 = 0x8b4d9086a7698d88;
    pcStack_50 = "required_success";
    FUN_012b4250(auStack_68,auStack_78,&local_58);
    uVar1 = FUN_012b4420(auStack_68,0);
    if (param_2 < uVar1) {
      uVar2 = 0;
    }
    else {
      FUN_012b4190(auStack_78,auStack_40,2);
      local_48 = 0x10;
      local_58 = 0x8b4d9086a7698d88;
      pcStack_50 = "required_success";
      FUN_012b4250(auStack_68,auStack_78,&local_58);
      uVar1 = FUN_012b4420(auStack_68,0);
      if (param_2 < uVar1) {
        uVar2 = 1;
      }
      else {
        FUN_012b4190(auStack_78,auStack_40,3);
        local_48 = 0x10;
        local_58 = 0x8b4d9086a7698d88;
        pcStack_50 = "required_success";
        FUN_012b4250(auStack_68,auStack_78,&local_58);
        uVar1 = FUN_012b4420(auStack_68,0);
        if (param_2 < uVar1) {
          uVar2 = 2;
        }
        else {
          FUN_012b4190(auStack_78,auStack_40,4);
          local_48 = 0x10;
          local_58 = 0x8b4d9086a7698d88;
          pcStack_50 = "required_success";
          FUN_012b4250(auStack_68,auStack_78,&local_58);
          uVar1 = FUN_012b4420(auStack_68,0);
          if (param_2 < uVar1) {
            uVar2 = 3;
          }
          else {
            uVar2 = 4;
          }
        }
      }
    }
    FUN_012b4190(auStack_78,auStack_40,uVar2);
    local_58 = 0xf82f25602d78f21d;
    pcStack_50 = "unlock_count";
    local_48 = 0xc;
    FUN_012b4250(auStack_68,auStack_78,&local_58);
    uVar2 = FUN_012b4420(auStack_68,0);
  }
  return uVar2;
}


