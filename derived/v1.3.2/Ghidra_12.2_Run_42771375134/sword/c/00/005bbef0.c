/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005bbef0; name: FUN_005bbef0
 */


undefined8 FUN_005bbef0(long param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  int iVar11;
  ulong *puVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong *puVar19;
  char *__s;
  ulong uVar20;
  undefined2 local_c8;
  undefined1 uStack_c6;
  undefined1 uStack_c5;
  undefined4 uStack_c4;
  undefined8 local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ushort local_90;
  undefined2 uStack_8e;
  undefined8 local_88;
  undefined8 *local_80;
  undefined1 auStack_78 [8];
  undefined8 local_70;
  int local_68;
  int local_64;
  undefined1 auStack_58 [4];
  int local_54;
  
  puVar6 = PTR_PTR_02713988;
  uVar2 = param_2[0xe];
  uVar1 = uVar2;
  if ((int)uVar2 < 0) {
    uVar1 = uVar2 + 1;
  }
  uVar13 = (long)((ulong)uVar1 << 0x20) >> 0x21;
  puVar12 = (ulong *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,uVar13 + 8,
                                  "C:/workspace/YEBIS_draft/src/UT/ppfxLicense.cpp",0x217,0);
  puVar19 = puVar12;
  if (puVar12 != (ulong *)0x0) {
    puVar19 = puVar12 + 1;
    *puVar12 = uVar13;
  }
  if (1 < (int)uVar2) {
    __s = *(char **)(param_2 + 0x10);
    uVar20 = uVar13 & 0xffffffff;
    puVar12 = puVar19;
    do {
      sscanf(__s,"%02x",&local_b0);
      __s = __s + 2;
      uVar20 = uVar20 - 1;
      *(char *)puVar12 = (char)local_b0;
      puVar12 = (ulong *)((long)puVar12 + 1);
    } while (uVar20 != 0);
  }
  local_70 = 0;
  FUN_00550f60(auStack_78);
  local_88 = 0;
  local_80 = (undefined8 *)0x0;
  uVar13 = FUN_005ba650(auStack_58,&local_54,&local_64,&local_68,&local_80,&local_88,puVar19,uVar13,
                        *(undefined8 *)(param_1 + 0x20),(long)*(int *)(param_1 + 0x18));
  if (puVar19 != (ulong *)0x0) {
    FUN_005b9b10(*(undefined8 *)puVar6,puVar19 + -1);
  }
  puVar10 = local_80;
  if ((uVar13 & 1) == 0) {
LAB_005bc0a4:
    uVar16 = 1;
  }
  else {
    uVar17 = *local_80;
    uVar18 = local_80[1];
    uStack_a0 = local_80[2];
    local_98 = local_80[3];
    local_b0._0_4_ = (int)uVar17;
    iVar7 = (int)local_b0;
    local_b0._4_4_ = (int)((ulong)uVar17 >> 0x20);
    iVar8 = local_b0._4_4_;
    local_a8._0_4_ = (int)uVar18;
    iVar9 = (int)local_a8;
    uStack_8e = (undefined2)((uint)*(undefined4 *)(local_80 + 4) >> 0x10);
    local_90 = (ushort)(byte)*(undefined4 *)(local_80 + 4);
    local_b0 = uVar17;
    local_a8 = uVar18;
    FUN_00551860(auStack_78,&uStack_a0);
    if (puVar10 != (undefined8 *)0x0) {
      FUN_005b9b10(*(undefined8 *)puVar6,puVar10 + -1);
    }
    iVar3 = param_2[2];
    if (((((iVar3 != local_68) || (iVar4 = *param_2, iVar4 != local_54)) ||
         (iVar5 = param_2[1], iVar5 != local_64)) ||
        ((param_2[3] != iVar7 || (param_2[4] != iVar8)))) ||
       ((param_2[5] != iVar9 || (iVar11 = FUN_00552860(param_2 + 6,auStack_78), iVar11 != 0))))
    goto LAB_005bc0a4;
    if (((((iVar8 == 0 && iVar7 == 0) && iVar9 == 0) && iVar3 == 0) && iVar4 == 0) && iVar5 == 0) {
LAB_005bc168:
      uVar18 = 0;
      goto LAB_005bc0b0;
    }
    uVar13 = nn::time::IsInitialized();
    if ((uVar13 & 1) == 0) {
      nn::time::Initialize();
    }
    local_c0 = (ulong)CONCAT13((char)iVar3,CONCAT12((char)iVar5,(short)iVar4));
    lVar14 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_c0);
    nn::time::StandardUserSystemClock::GetCurrentTime((PosixTime *)&local_b8);
    _local_c8 = CONCAT44(0x3b3b17,CONCAT13((char)uVar18,
                                           CONCAT12((char)((ulong)uVar17 >> 0x20),(short)uVar17)));
    lVar15 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_c8);
    if ((uVar13 & 1) == 0) {
      nn::time::Finalize();
    }
    if ((lVar14 <= local_b8) && (local_b8 <= lVar15)) goto LAB_005bc168;
    uVar16 = 2;
  }
  *(undefined4 *)(param_1 + 0x28) = uVar16;
  uVar18 = 0xfffffffd;
LAB_005bc0b0:
  FUN_00551380(auStack_78);
  return uVar18;
}


