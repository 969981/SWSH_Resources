/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fd7a70; name: FUN_00fd7a70
 */


void FUN_00fd7a70(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined1 *local_150;
  code *local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  long alStack_130 [12];
  undefined1 *local_d0;
  code *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  long alStack_b0 [12];
  
  lVar1 = param_1 + 0x100;
  uVar4 = FUN_0077d470(*param_2);
  FUN_00ffd700(lVar1,&DAT_021620d0,uVar4,10);
  uVar4 = FUN_0077d470(*param_3);
  FUN_00ffd700(lVar1,&DAT_021620d8,uVar4,10);
  FUN_00ffd620(lVar1);
  FUN_00ffd430(lVar1,&DAT_021620e0);
  FUN_00ffd430(lVar1,&DAT_021620e8);
  local_c0 = &LAB_00fd7de0;
  local_d0 = &LAB_00fd7da0;
  local_c8 = FUN_00fd7dd0;
  local_150 = &LAB_00fd7da0;
  local_b8 = &LAB_00fd7df0;
  local_138 = &LAB_00fd7df0;
  local_148 = FUN_00fd7dd0;
  local_140 = &LAB_00fd7de0;
  alStack_130[0] = param_1;
  alStack_b0[0] = param_1;
  FUN_00ffd120(lVar1,&DAT_021620e0,&local_150);
  pcVar2 = local_148;
  pcVar6 = FUN_00fd7dd0;
  if (local_148 != (code *)0x0) {
    local_140 = (undefined1 *)0x0;
    local_138 = (undefined1 *)0x0;
    local_150 = (undefined1 *)0x0;
    local_148 = (code *)0x0;
    (*pcVar2)(alStack_130);
    pcVar6 = local_c8;
    if (local_c8 == (code *)0x0) goto LAB_00fd7b88;
  }
  local_c0 = (undefined1 *)0x0;
  local_b8 = (undefined1 *)0x0;
  local_d0 = (undefined1 *)0x0;
  local_c8 = (code *)0x0;
  (*pcVar6)(alStack_b0);
LAB_00fd7b88:
  lVar5 = FUN_0077d470(*param_3);
  if (lVar5 == 0) {
    uVar7 = 0;
  }
  else {
    FUN_0077d470(*param_3);
    iVar3 = FUN_0077d680();
    uVar7 = 0;
    if (iVar3 != 0) {
      uVar7 = 0x3f800000;
    }
  }
  FUN_00ffd510(uVar7,lVar1,&DAT_021620f0);
  return;
}


