/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010a4540; name: FUN_010a4540
 */


bool FUN_010a4540(long *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined8 local_88;
  char *pcStack_80;
  undefined8 local_78;
  undefined1 auStack_70 [16];
  
  local_88 = 0xc46bd515954dab1b;
  pcStack_80 = "stamp_table";
  local_78 = 0xb;
  FUN_012b4250(auStack_70,*param_1 + 0x119f0,&local_88);
  lVar4 = FUN_012b40f0(auStack_70);
  if (lVar4 != 0) {
    uVar6 = 0;
    uVar7 = 0;
    iVar3 = 0;
    iVar2 = 0;
    do {
      FUN_012b4190(auStack_a8,auStack_70,uVar6);
      local_88 = 0xc076bb6523cb87c9;
      pcStack_80 = "stampId";
      local_78 = 7;
      FUN_012b4250(auStack_98,auStack_a8,&local_88);
      uVar1 = FUN_012b4420(auStack_98,0);
      if (uVar1 == param_2[1]) {
        FUN_012b4190(auStack_a8,auStack_70,uVar6);
        local_88 = 0xc0f8c07cd4198abc;
        pcStack_80 = "showNum";
        local_78 = 7;
        FUN_012b4250(auStack_98,auStack_a8,&local_88);
        iVar2 = FUN_012b4420(auStack_98,0);
        uVar7 = uVar7 + 1;
      }
      FUN_012b4190(auStack_a8,auStack_70,uVar6);
      local_88 = 0xc076bb6523cb87c9;
      pcStack_80 = "stampId";
      local_78 = 7;
      FUN_012b4250(auStack_98,auStack_a8,&local_88);
      uVar1 = FUN_012b4420(auStack_98,0);
      if (uVar1 == param_3[1]) {
        FUN_012b4190(auStack_a8,auStack_70,uVar6);
        local_88 = 0xc0f8c07cd4198abc;
        pcStack_80 = "showNum";
        local_78 = 7;
        FUN_012b4250(auStack_98,auStack_a8,&local_88);
        iVar3 = FUN_012b4420(auStack_98,0);
        uVar7 = uVar7 + 1;
      }
      if (1 < uVar7) break;
      uVar6 = uVar6 + 1;
      uVar5 = FUN_012b40f0(auStack_70);
    } while (uVar6 < uVar5);
    if (iVar3 < iVar2) {
      return true;
    }
    if (iVar2 != iVar3) {
      return false;
    }
  }
  return *param_2 < *param_3;
}


