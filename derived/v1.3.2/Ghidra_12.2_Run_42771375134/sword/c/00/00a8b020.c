/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a8b020; name: FUN_00a8b020
 */


void FUN_00a8b020(long *param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  undefined4 *puVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  undefined8 local_f0;
  undefined8 local_e8;
  char *pcStack_e0;
  undefined8 local_d8;
  undefined1 auStack_d0 [16];
  undefined8 local_c0;
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined8 local_98;
  char *local_90;
  undefined8 local_88;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  
  lVar6 = *param_1;
  FUN_012b4da0(auStack_70,*(undefined8 *)(*(long *)(lVar6 + 0x1c68) + 400),
               *(undefined8 *)(*(long *)(lVar6 + 0x1c68) + 0x180));
  local_98 = 0xb3236763c32e0e7d;
  local_90 = "g_table";
  local_88 = 7;
  FUN_012b4250(auStack_80,auStack_70,&local_98);
  uVar2 = FUN_012b40f0(auStack_80);
  FUN_00a8b460(lVar6 + 0x1d70,(long)((float)uVar2 / *(float *)(lVar6 + 0x1dc0)));
  lVar3 = FUN_012b40f0(auStack_80);
  if (lVar3 != 0) {
    uVar7 = 1;
    do {
      FUN_012b4190(auStack_a8,auStack_80,(long)(int)(uVar7 - 1));
      local_98 = 0x25bdcb67a4dd28c6;
      local_90 = "frame";
      local_88 = 5;
      FUN_012b4250(auStack_b8,auStack_a8,&local_98);
      uVar1 = FUN_012b4420(auStack_b8,0xffffffff);
      local_e8 = 0x13ba27b6b7e820e8;
      pcStack_e0 = "fileName";
      local_d8 = 8;
      FUN_012b4250(auStack_d0,auStack_a8,&local_e8);
      local_f0 = 0;
      local_c0 = FUN_012b4b40(auStack_d0,&local_f0);
      puVar4 = (undefined4 *)FUN_00a8b1c0(lVar6 + 0x1d70,&local_c0);
      *puVar4 = uVar1;
      uVar5 = FUN_012b40f0(auStack_80);
      uVar2 = (ulong)uVar7;
      uVar7 = uVar7 + 1;
    } while (uVar2 < uVar5);
  }
  return;
}


