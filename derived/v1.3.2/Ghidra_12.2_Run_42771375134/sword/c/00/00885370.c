/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00885370; name: FUN_00885370
 */


/* WARNING: Removing unreachable block (ram,0x00885514) */

void FUN_00885370(long *param_1,long param_2)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  undefined8 uVar9;
  
  uVar9 = (**(code **)(*param_1 + 0x50))(param_1,0);
  FUN_008664b0(uVar9,param_2);
  (**(code **)(*param_1 + 0x50))(param_1,0);
  bVar3 = FUN_008787d0();
  uVar9 = (**(code **)(*param_1 + 0x50))(param_1,1);
  FUN_008664b0(uVar9,param_2 + 0x158);
  (**(code **)(*param_1 + 0x50))(param_1,1);
  bVar4 = FUN_008787d0();
  uVar9 = (**(code **)(*param_1 + 0x50))(param_1,2);
  FUN_008664b0(uVar9,param_2 + 0x2b0);
  (**(code **)(*param_1 + 0x50))(param_1,2);
  bVar5 = FUN_008787d0();
  uVar9 = (**(code **)(*param_1 + 0x50))(param_1,3);
  FUN_008664b0(uVar9,param_2 + 0x408);
  (**(code **)(*param_1 + 0x50))(param_1,3);
  bVar6 = FUN_008787d0();
  uVar9 = (**(code **)(*param_1 + 0x50))(param_1,4);
  FUN_008664b0(uVar9,param_2 + 0x560);
  (**(code **)(*param_1 + 0x50))(param_1,4);
  bVar7 = FUN_008787d0();
  uVar9 = (**(code **)(*param_1 + 0x50))(param_1,5);
  FUN_008664b0(uVar9,param_2 + 0x6b8);
  (**(code **)(*param_1 + 0x50))(param_1,5);
  bVar8 = FUN_008787d0();
  cVar2 = *(char *)(param_2 + 0x810);
  *(char *)(param_1 + 0x11) = cVar2;
  cVar1 = (~bVar3 & 1) + (~bVar4 & 1) + (~bVar5 & 1) + (~bVar6 & 1) + (~bVar7 & 1) + (~bVar8 & 1);
  *(undefined1 *)((long)param_1 + 0x89) = *(undefined1 *)(param_2 + 0x811);
  if (cVar1 != cVar2) {
    *(char *)(param_1 + 0x11) = cVar1;
  }
  return;
}


