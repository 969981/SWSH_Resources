/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010b20e0; name: FUN_010b20e0
 */


void FUN_010b20e0(long param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined8 local_c8;
  char *local_c0;
  undefined8 local_b8;
  undefined1 auStack_b0 [16];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined2 local_58;
  
  lVar7 = *(long *)PTR_DAT_027108d8;
  lVar5 = 0;
  if (*(int *)(lVar7 + 0x11af0) != 8) {
    lVar5 = 16000;
  }
  lVar5 = lVar7 + lVar5 +
          (long)(int)(*(int *)(lVar7 + 0x11aec) + ~*(uint *)(param_1 + 0x1a58)) * 0xa0;
  iVar3 = *(int *)(lVar5 + 0x10c);
  local_a0 = *(undefined8 *)(lVar5 + 0x158);
  local_98 = *(undefined8 *)(lVar5 + 0x160);
  local_90 = *(undefined8 *)(lVar5 + 0x168);
  uStack_88 = *(undefined8 *)(lVar5 + 0x170);
  local_80 = *(undefined8 *)(lVar5 + 0x178);
  uStack_78 = *(undefined8 *)(lVar5 + 0x180);
  uStack_60 = *(undefined8 *)(lVar5 + 0x198);
  local_70 = *(undefined8 *)(lVar5 + 0x188);
  local_68 = *(undefined8 *)(lVar5 + 400);
  local_58 = *(undefined2 *)(lVar5 + 0x1a0);
  local_c8 = 0xc46bd515954dab1b;
  local_c0 = "stamp_table";
  local_b8 = 0xb;
  FUN_012b4250(auStack_b0,param_1 + 0x728,&local_c8);
  lVar5 = FUN_012b40f0(auStack_b0);
  if (lVar5 != 0) {
    uVar6 = 0;
    do {
      FUN_012b4190(auStack_e8,auStack_b0,uVar6);
      local_c8 = 0xc076bb6523cb87c9;
      local_c0 = "stampId";
      local_b8 = 7;
      FUN_012b4250(auStack_d8,auStack_e8,&local_c8);
      iVar2 = FUN_012b4420(auStack_d8,0);
      if (iVar2 == iVar3) {
        FUN_012b4190(auStack_d8,auStack_b0,uVar6 & 0xffffffff);
        local_c8 = 0x707151e61ea4b74d;
        local_c0 = "type";
        local_b8 = 4;
        FUN_012b4250(auStack_e8,auStack_d8,&local_c8);
        iVar3 = FUN_012b4420(auStack_e8,0);
        local_110 = local_98;
        local_108 = local_90;
        uStack_100 = uStack_88;
        local_f8 = local_80;
        uStack_f0 = uStack_78;
        bVar1 = FUN_0121b130(lVar7 + 0x11aa0,&local_110);
        *(byte *)(*(long *)(param_1 + 0x1a60) + 0x170) = iVar3 == 3 & (bVar1 ^ 1);
        return;
      }
      uVar6 = uVar6 + 1;
      uVar4 = FUN_012b40f0(auStack_b0);
    } while (uVar6 < uVar4);
  }
  return;
}


