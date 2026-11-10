/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a974e0; name: FUN_00a974e0
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00a974e0(long param_1,undefined2 param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined8 local_48;
  char *local_40;
  undefined8 local_38;
  
  local_48 = 0xb3236763c32e0e7d;
  local_40 = "g_table";
  local_38 = 7;
  FUN_012b4250(auStack_58,param_1 + 0x120,&local_48);
  FUN_012b4190(auStack_68,auStack_58,param_2);
  local_48 = 0xe3829f1a5b0e3fc2;
  local_40 = "startTarget";
  local_38 = 0xb;
  FUN_012b4250(auStack_58,auStack_68,&local_48);
  uVar4 = FUN_012b4420(auStack_58,0);
  bVar1 = FUN_00a97900(param_1);
  bVar2 = FUN_00a97bf0(param_1);
  bVar3 = FUN_00a98070(param_1);
  switch(uVar4) {
  case 1:
    break;
  case 2:
    if (bVar3 != 0) goto switchD_00a975c4_caseD_7;
    goto LAB_00a975d0;
  case 3:
    bVar1 = bVar1 & 0x2a;
    break;
  case 4:
    bVar1 = bVar3 & 0x2a;
    break;
  case 5:
    bVar1 = bVar1 & 0x55;
    break;
  case 6:
    bVar1 = bVar3 & 0x55;
    break;
  default:
    goto switchD_00a975c4_caseD_7;
  case 8:
    bVar1 = bVar2;
    break;
  case 9:
    bVar1 = bVar2 & 0x2a;
    break;
  case 10:
    bVar1 = bVar2 & 0x55;
  }
  if (bVar1 == 0) {
LAB_00a975d0:
    uVar5 = 0;
  }
  else {
switchD_00a975c4_caseD_7:
    uVar5 = 1;
  }
  return uVar5;
}


