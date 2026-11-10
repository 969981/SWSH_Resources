/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0120ecc0; name: FUN_0120ecc0
 */


void FUN_0120ecc0(long *param_1)

{
  undefined *puVar1;
  undefined1 *__dest;
  bool bVar2;
  char cVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long local_1cd;
  long local_1c5;
  long local_1bd;
  undefined4 local_1b5;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  uint local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined1 uStack_18c;
  undefined1 uStack_18b;
  ushort uStack_18a;
  undefined6 local_188;
  undefined2 uStack_182;
  undefined6 local_180;
  ushort uStack_17a;
  undefined1 local_100;
  undefined2 uStack_ff;
  undefined1 uStack_fd;
  uint uStack_fc;
  undefined3 uStack_f8;
  undefined1 auStack_f5 [5];
  undefined3 uStack_f0;
  undefined5 uStack_ed;
  undefined3 uStack_e8;
  uint5 local_e5;
  undefined4 uStack_e0;
  undefined7 uStack_dc;
  undefined1 uStack_d5;
  undefined7 local_d4;
  undefined1 uStack_cd;
  undefined7 local_cc;
  undefined1 uStack_c5;
  undefined5 uStack_c4;
  undefined3 local_bf;
  undefined5 uStack_bc;
  
  puVar1 = PTR_DAT_02710a18;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  puVar1 = PTR_DAT_027260a0;
  plVar5 = (long *)0x0;
  if (lVar4 != 0) {
    if (*(long *)(lVar4 + 0x80) == 0) {
      plVar5 = (long *)0x0;
    }
    else {
      plVar5 = *(long **)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8);
    }
  }
  param_1[1] = (long)plVar5;
  *puVar1 = 1;
  puVar1 = PTR_DAT_027260a8 + 0x10;
  param_1[9] = (long)(PTR_DAT_027260a8 + 0x40);
  param_1[10] = 400;
  *param_1 = (long)puVar1;
  param_1[0xc] = (long)plVar5;
  param_1[0xd] = 0x6bca1af286bca1;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  uVar6 = (**(code **)(*plVar5 + 0x10))(plVar5,0x3b600,0x10);
  FUN_01212320(param_1 + 0xc,uVar6,400,param_1[0x14] + param_1[0x15] * 0x260,0,0);
  FUN_012189f0(param_1 + 0x18,param_1[1],&DAT_02168928);
  FUN_012183a0(param_1 + 0x54,param_1[1],100);
  FUN_0121ae00(&local_100);
  FUN_01225da0(param_1 + 0x62,3,&local_100);
  param_1[0xaf] = 0;
  param_1[0xae] = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0xb0),false,0);
  *(undefined1 *)(param_1 + 0xb4) = 0;
  FUN_01223630(&local_1b0);
  __dest = auStack_f5 + 4;
  memcpy(__dest,&local_1b0,0xb0);
  *(undefined4 *)(param_1 + 0x62) = 3;
  if ((char)param_1[0x80] == '\0') {
    memcpy(param_1 + 0x82,__dest,0xb0);
    *(undefined1 *)(param_1 + 0x80) = 1;
  }
  else {
    memcpy(param_1 + 0x82,__dest,0xa1);
  }
  FUN_0121b600(&local_100);
  bVar2 = (uStack_fc & 0xff) == 0;
  if (!bVar2) {
    local_1b5 = uStack_e0;
    local_1cd = CONCAT53(auStack_f5,uStack_f8);
    local_1c5 = CONCAT53(uStack_ed,uStack_f0);
    local_1bd = CONCAT53(local_e5,uStack_e8);
  }
  uStack_190 = (undefined4)uStack_bc;
  uStack_18c = (undefined1)((uint5)uStack_bc >> 0x20);
  local_198 = (uint)uStack_c4;
  uStack_194 = (undefined4)(CONCAT35(local_bf,uStack_c4) >> 0x20);
  *(undefined4 *)(param_1 + 0x62) = 3;
  *(undefined1 *)(param_1 + 0x76) = local_100;
  if (*(char *)((long)param_1 + 0x3ac) == '\0') {
    *(undefined1 *)((long)param_1 + 0x3b4) = 0;
    if (!bVar2) {
      param_1[0x77] = local_1cd;
      *(undefined4 *)(param_1 + 0x7a) = local_1b5;
      param_1[0x79] = local_1bd;
      param_1[0x78] = local_1c5;
      *(undefined1 *)((long)param_1 + 0x3b4) = 1;
    }
    *(ulong *)((long)param_1 + 0x3d4) = CONCAT17(uStack_d5,uStack_dc);
    *(ulong *)((long)param_1 + 0x3f1) = CONCAT17(uStack_18c,CONCAT43(uStack_190,local_bf));
    *(ulong *)((long)param_1 + 0x3ec) = CONCAT44(uStack_194,local_198);
    *(ulong *)((long)param_1 + 0x3dc) = CONCAT17(uStack_cd,local_d4);
    *(ulong *)((long)param_1 + 0x3e4) = CONCAT17(uStack_c5,local_cc);
    *(undefined1 *)((long)param_1 + 0x3ac) = 1;
    if ((uStack_fc & 0xff) == 0) goto LAB_0120f008;
  }
  else {
    if (*(char *)((long)param_1 + 0x3b4) == '\0') {
      if (!bVar2) {
        param_1[0x77] = local_1cd;
        *(undefined4 *)(param_1 + 0x7a) = local_1b5;
        param_1[0x79] = local_1bd;
        param_1[0x78] = local_1c5;
        *(undefined1 *)((long)param_1 + 0x3b4) = 1;
      }
    }
    else if (bVar2) {
      *(undefined1 *)((long)param_1 + 0x3b4) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x7a) = (undefined1)local_1b5;
      param_1[0x79] = local_1bd;
      param_1[0x78] = local_1c5;
      param_1[0x77] = local_1cd;
    }
    *(ulong *)((long)param_1 + 0x3d4) = CONCAT17(uStack_d5,uStack_dc);
    *(ulong *)((long)param_1 + 0x3f1) = CONCAT17(uStack_18c,CONCAT43(uStack_190,local_bf));
    *(ulong *)((long)param_1 + 0x3e4) = CONCAT17(uStack_c5,local_cc);
    *(ulong *)((long)param_1 + 0x3ec) = CONCAT44(uStack_194,local_198);
    *(ulong *)((long)param_1 + 0x3dc) = CONCAT17(uStack_cd,local_d4);
    if ((char)uStack_fc == '\0') goto LAB_0120f008;
  }
  uStack_fc = uStack_fc & 0xffffff00;
LAB_0120f008:
  local_188 = 0;
  uStack_182 = 0;
  local_180 = 0;
  uStack_17a = 0;
  local_198 = 0;
  uStack_194 = 0;
  uStack_190 = 0;
  uStack_18c = 0;
  uStack_18b = 0;
  uStack_18a = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  FUN_01222660(&local_1b0);
  uStack_ed = (undefined5)local_1a0;
  uStack_e8 = (undefined3)((ulong)local_1a0 >> 0x28);
  auStack_f5 = SUB85(local_1a8,0);
  uStack_f0 = (undefined3)((ulong)local_1a8 >> 0x28);
  local_180 = 0;
  local_188 = 0;
  uStack_182 = 0;
  puVar7 = (undefined8 *)((ulong)&local_100 | 3);
  uStack_fd = (undefined1)local_1b0;
  uStack_fc = (uint)((ulong)local_1b0 >> 8);
  uStack_f8 = (undefined3)((ulong)local_1b0 >> 0x28);
  uStack_18c = 0;
  uStack_18b = 0;
  uStack_194 = 0;
  uStack_190 = 0;
  uStack_cd = 0;
  local_cc = (undefined7)(((ulong)uStack_17a << 0x30) >> 8);
  uStack_d5 = 0;
  local_d4 = 0;
  uStack_dc = (undefined7)(((ulong)uStack_18a << 0x30) >> 8);
  local_e5 = (uint5)local_198;
  uStack_e0 = 0;
  *(undefined4 *)(param_1 + 0x62) = 3;
  if ((char)param_1[0x6e] == '\0') {
    uVar6 = *puVar7;
    uVar8 = puVar7[2];
    *(undefined8 *)((long)param_1 + 0x37c) = puVar7[1];
    *(undefined8 *)((long)param_1 + 900) = uVar8;
    *(undefined8 *)((long)param_1 + 0x374) = uVar6;
    uVar6 = puVar7[3];
    uVar8 = puVar7[4];
    uVar9 = puVar7[6];
    *(undefined8 *)((long)param_1 + 0x39c) = puVar7[5];
    *(undefined8 *)((long)param_1 + 0x3a4) = uVar9;
    *(undefined8 *)((long)param_1 + 0x38c) = uVar6;
    *(undefined8 *)((long)param_1 + 0x394) = uVar8;
    *(undefined1 *)(param_1 + 0x6e) = 1;
  }
  else {
    uVar6 = *puVar7;
    uVar8 = puVar7[2];
    *(undefined8 *)((long)param_1 + 0x37c) = puVar7[1];
    *(undefined8 *)((long)param_1 + 900) = uVar8;
    *(undefined8 *)((long)param_1 + 0x374) = uVar6;
    uVar6 = puVar7[3];
    uVar8 = puVar7[4];
    uVar9 = puVar7[5];
    *(undefined8 *)((long)param_1 + 0x3a2) = *(undefined8 *)((long)puVar7 + 0x2e);
    *(undefined8 *)((long)param_1 + 0x38c) = uVar6;
    *(undefined8 *)((long)param_1 + 0x394) = uVar8;
    *(undefined8 *)((long)param_1 + 0x39c) = uVar9;
  }
  FUN_0121b270(&local_1b0);
  auStack_f5 = SUB85(local_1a8,0);
  uStack_f0 = (undefined3)((ulong)local_1a8 >> 0x28);
  uStack_fd = (undefined1)local_1b0;
  uStack_fc = (uint)((ulong)local_1b0 >> 8);
  uStack_f8 = (undefined3)((ulong)local_1b0 >> 0x28);
  plVar5 = (long *)((ulong)&local_100 | 3);
  *(undefined4 *)(param_1 + 0x62) = 3;
  if (*(char *)((long)param_1 + 0x35c) == '\0') {
    lVar4 = plVar5[1];
    param_1[0x6c] = *plVar5;
    param_1[0x6d] = lVar4;
    *(undefined1 *)((long)param_1 + 0x35c) = 1;
  }
  else {
    lVar4 = *plVar5;
    *(undefined8 *)((long)param_1 + 0x366) = *(undefined8 *)((long)plVar5 + 6);
    param_1[0x6c] = lVar4;
  }
  FUN_011f4ff0(&local_100);
  *(undefined4 *)(param_1 + 0x62) = 3;
  *(ulong *)((long)param_1 + 0x352) = CONCAT53(local_e5,uStack_e8);
  *(ulong *)((long)param_1 + 0x34a) = CONCAT53(uStack_ed,uStack_f0);
  *(ulong *)((long)param_1 + 0x342) = CONCAT53(auStack_f5,uStack_f8);
  *(ulong *)((long)param_1 + 0x33a) =
       CONCAT44(uStack_fc,CONCAT13(uStack_fd,CONCAT21(uStack_ff,local_100)));
  if ((char)param_1[0x67] == '\0') {
    *(undefined1 *)(param_1 + 0x67) = 1;
    *(undefined4 *)(param_1 + 0x62) = 3;
    cVar3 = (char)param_1[0x65];
  }
  else {
    *(undefined4 *)(param_1 + 0x62) = 3;
    cVar3 = (char)param_1[0x65];
  }
  if (cVar3 == '\0') {
    param_1[0x66] = 0;
    *(undefined1 *)(param_1 + 0x65) = 1;
    *(undefined4 *)(param_1 + 0x62) = 3;
    cVar3 = (char)param_1[100];
  }
  else {
    param_1[0x66] = 0;
    *(undefined4 *)(param_1 + 0x62) = 3;
    cVar3 = (char)param_1[100];
  }
  if (cVar3 == '\0') {
    *(undefined1 *)(param_1 + 100) = 1;
  }
  return;
}


