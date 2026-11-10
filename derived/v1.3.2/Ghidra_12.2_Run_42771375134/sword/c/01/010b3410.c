/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010b3410; name: FUN_010b3410
 */


void FUN_010b3410(long param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined8 local_88;
  char *local_80;
  undefined8 local_78;
  undefined1 auStack_70 [16];
  
  local_88 = 0xc46bd515954dab1b;
  local_80 = "stamp_table";
  local_78 = 0xb;
  FUN_012b4250(auStack_70,param_1 + 0x119f0,&local_88);
  lVar6 = 0;
  uVar5 = 0;
  do {
    lVar2 = FUN_012b40f0(auStack_70);
    if (lVar2 != 0) {
      uVar4 = 0;
      do {
        FUN_012b4190(auStack_a8,auStack_70,uVar4);
        local_88 = 0xc076bb6523cb87c9;
        local_80 = "stampId";
        local_78 = 7;
        FUN_012b4250(auStack_98,auStack_a8,&local_88);
        iVar1 = FUN_012b4420(auStack_98,0);
        if (iVar1 == *(int *)(param_1 + lVar6 * 0xa0 + 4)) {
          FUN_012b4190(auStack_a8,auStack_70,uVar4 & 0xffffffff);
          local_88 = 0x699c825e8e8f1a17;
          local_80 = "filter";
          local_78 = 6;
          FUN_012b4250(auStack_98,auStack_a8,&local_88);
          FUN_012b4190(&local_88,auStack_98,0);
          iVar1 = FUN_012b4420(&local_88,0);
          if (iVar1 != param_2) {
            FUN_012b4190(&local_88,auStack_98,1);
            iVar1 = FUN_012b4420(&local_88,0);
            if (iVar1 != param_2) break;
          }
          memcpy((void *)(param_1 + uVar5 * 0xa0 + 16000),(void *)(param_1 + lVar6 * 0xa0),0x9a);
          uVar5 = (ulong)((int)uVar5 + 1);
          break;
        }
        uVar4 = uVar4 + 1;
        uVar3 = FUN_012b40f0(auStack_70);
      } while (uVar4 < uVar3);
    }
    lVar6 = lVar6 + 1;
    if (lVar6 == 0x32) {
      *(int *)(param_1 + 0x119e4) = (int)uVar5;
      if ((int)uVar5 != 0) {
        *(undefined4 *)(param_1 + 0x119e8) = param_3;
      }
      return;
    }
  } while( true );
}


