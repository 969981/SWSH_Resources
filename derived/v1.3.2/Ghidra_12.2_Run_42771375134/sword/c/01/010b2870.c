/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010b2870; name: FUN_010b2870
 */


bool FUN_010b2870(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined8 local_68;
  char *local_60;
  undefined8 local_58;
  undefined1 auStack_50 [16];
  
  uVar1 = FUN_016c0030(*(undefined8 *)(param_1 + 0x5f0));
  lVar6 = *(long *)PTR_DAT_027108d8;
  lVar4 = 0;
  if (*(int *)(lVar6 + 0x11af0) != 8) {
    lVar4 = 16000;
  }
  iVar3 = *(int *)(lVar6 + lVar4 + (long)(int)(*(int *)(lVar6 + 0x11aec) + ~uVar1) * 0xa0 + 0x10c);
  local_68 = 0xc46bd515954dab1b;
  local_60 = "stamp_table";
  local_58 = 0xb;
  FUN_012b4250(auStack_50,param_1 + 0x728,&local_68);
  lVar4 = FUN_012b40f0(auStack_50);
  if (lVar4 != 0) {
    uVar7 = 0;
    do {
      FUN_012b4190(auStack_88,auStack_50,uVar7);
      local_68 = 0xc076bb6523cb87c9;
      local_60 = "stampId";
      local_58 = 7;
      FUN_012b4250(auStack_78,auStack_88,&local_68);
      iVar2 = FUN_012b4420(auStack_78,0);
      if (iVar2 == iVar3) {
        FUN_012b4190(auStack_88,auStack_50,uVar7 & 0xffffffff);
        local_68 = 0x707151e61ea4b74d;
        local_60 = "type";
        local_58 = 4;
        FUN_012b4250(auStack_78,auStack_88,&local_68);
        iVar3 = FUN_012b4420(auStack_78,0);
        return iVar3 == 3;
      }
      uVar7 = uVar7 + 1;
      uVar5 = FUN_012b40f0(auStack_50);
    } while (uVar7 < uVar5);
  }
  return false;
}


