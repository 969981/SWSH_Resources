/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010c2790; name: FUN_010c2790
 */


void FUN_010c2790(long param_1,int param_2)

{
  undefined *puVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 local_160;
  code *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_d8;
  char *local_d0;
  undefined8 local_c8;
  long local_c0;
  undefined8 local_b8;
  char *local_b0;
  undefined8 local_a8;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [24];
  long local_78;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  
  local_d8 = 0xc46bd515954dab1b;
  local_d0 = "stamp_table";
  local_c8 = 0xb;
  FUN_012b4250(auStack_60,param_1 + 0x620,&local_d8);
  lVar4 = FUN_012b40f0(auStack_60);
  puVar1 = PTR_DAT_027243c8;
  if (lVar4 != 0) {
    uVar6 = 0;
    do {
      FUN_012b4190(auStack_70,auStack_60,uVar6);
      local_d8 = 0xc076bb6523cb87c9;
      local_d0 = "stampId";
      local_c8 = 7;
      FUN_012b4250(&local_b8,auStack_70,&local_d8);
      iVar3 = FUN_012b4420(&local_b8,0);
      if (iVar3 == *(int *)(puVar1 + (long)param_2 * 4)) {
        FUN_012b4190(auStack_70,auStack_60,uVar6 & 0xffffffff);
        local_b8 = 0x65936613831e89b7;
        local_b0 = "fieldImageName";
        local_a8 = 0xe;
        FUN_012b4250(auStack_a0,auStack_70,&local_b8);
        local_d8 = 0xcbf29ce484222645;
        local_d0 = "";
        local_c8 = 0;
        local_c0 = 0;
        FUN_012b4820(auStack_90,auStack_a0,&local_d8);
        local_f0 = 0;
        uStack_e8 = 0;
        local_100 = 0;
        uStack_f8 = 0;
        local_110 = 0;
        uStack_108 = 0;
        local_120 = 0;
        uStack_118 = 0;
        local_130 = 0;
        uStack_128 = 0;
        local_140 = 0;
        uStack_138 = 0;
        local_150 = 0;
        uStack_148 = 0;
        local_160 = 0;
        local_158 = (code *)0x0;
        FUN_010a6a10(param_1 + 0x630,auStack_90,0,&local_160);
        pcVar2 = local_158;
        if (local_158 != (code *)0x0) {
          local_150 = 0;
          uStack_148 = 0;
          local_160 = 0;
          local_158 = (code *)0x0;
          (*pcVar2)(&local_140);
        }
        if (local_78 != 0) {
          (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
          local_78 = 0;
        }
        if (local_c0 == 0) {
          return;
        }
        (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
        return;
      }
      uVar6 = uVar6 + 1;
      uVar5 = FUN_012b40f0(auStack_60);
    } while (uVar6 < uVar5);
  }
  return;
}


