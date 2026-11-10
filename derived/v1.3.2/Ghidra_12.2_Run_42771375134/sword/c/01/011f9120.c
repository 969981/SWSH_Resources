/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011f9120; name: FUN_011f9120
 */


undefined8 FUN_011f9120(undefined8 param_1,uint *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char local_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  undefined1 auStack_40 [16];
  undefined8 local_30;
  
  FUN_011fa600(&local_68);
  FUN_011fa3e0(local_78,param_2);
  if (local_78[0] == '\0') {
    uVar1 = 0;
    uVar2 = 2;
    switch(*param_2 >> 0xd & 0x1f) {
    case 0:
    case 1:
      goto switchD_011f91cc_caseD_0;
    case 5:
    case 6:
    case 7:
    case 8:
      uVar2 = 3;
    case 2:
    case 3:
    case 4:
      local_68._0_4_ = uVar2;
    default:
      local_68 = CONCAT44(3,(undefined4)local_68);
      FUN_018725b0(auStack_40,param_2);
      uVar1 = *(undefined8 *)PTR_DAT_02710940;
      if ((*param_2 & 0x1c00) == 0xc00) {
        FUN_011fa930(uVar1,&local_68,1);
        return 1;
      }
    }
  }
  else {
    local_30 = local_70;
    local_68 = 0x400000001;
    uVar1 = *(undefined8 *)PTR_DAT_02710940;
  }
  FUN_011fa930(uVar1,&local_68,0);
  uVar1 = 1;
switchD_011f91cc_caseD_0:
  return uVar1;
}


