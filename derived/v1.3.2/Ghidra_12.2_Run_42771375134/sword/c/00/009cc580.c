/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009cc580; name: FUN_009cc580
 */


uint FUN_009cc580(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  void *__src;
  string *psVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  string *psVar11;
  long *plVar12;
  ulong uVar13;
  void *pvVar14;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  ulong local_70;
  void *local_68;
  
  if (*(long *)(param_1 + 0xd8) == 0) {
    uVar4 = 0;
    goto LAB_009ccb28;
  }
  plVar9 = *(long **)(param_1 + 0x18);
  puVar5 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9,0x78,8);
  puVar2 = PTR_DAT_02710860;
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar6 + 0x80)) {
LAB_009ccba0:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar9;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  FUN_009db360(puVar5);
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  local_78 = puVar5;
  FUN_0075efb0(&local_70,plVar9,0,1);
  local_78[4] = *param_2;
  FUN_0075f0a0(&local_70);
  local_78 = puVar5;
  FUN_0075efb0(&local_70,plVar9,0,1);
  *(undefined4 *)(local_78 + 6) = *(undefined4 *)(param_2 + 1);
  FUN_0075f0a0(&local_70);
  local_78 = puVar5;
  FUN_0075efb0(&local_70,plVar9,0,1);
  *(uint *)((long)local_78 + 0x44) = (uint)*(byte *)((long)param_2 + 0x13);
  FUN_0075f0a0(&local_70);
  local_78 = puVar5;
  FUN_0075efb0(&local_70,plVar9,0,1);
  *(uint *)(local_78 + 8) = (uint)*(byte *)((long)param_2 + 0x12);
  FUN_0075f0a0(&local_70);
  local_78 = puVar5;
  FUN_0075efb0(&local_70,plVar9,0,1);
  *(uint *)((long)local_78 + 0x34) = (uint)*(ushort *)((long)param_2 + 0xc);
  FUN_0075f0a0(&local_70);
  local_78 = puVar5;
  FUN_0075efb0(&local_70,plVar9,0,1);
  *(uint *)(local_78 + 7) = (uint)*(ushort *)((long)param_2 + 0xe);
  FUN_0075f0a0(&local_70);
  local_78 = puVar5;
  FUN_0075efb0(&local_70,plVar9,0,1);
  *(uint *)((long)local_78 + 0x3c) = (uint)*(ushort *)(param_2 + 2);
  FUN_0075f0a0(&local_70);
  FUN_0075efb0(auStack_80,plVar9,0,1);
  puVar3 = PTR_DAT_02716d10;
  local_70 = 0;
  local_68 = (void *)0x0;
  local_78._0_5_ = CONCAT41(*(undefined4 *)(*(long *)(param_1 + 0x20) + 0x3c8),0xc);
  local_78 = (undefined8 *)
             (ulong)CONCAT25(*(undefined2 *)(*(long *)(param_1 + 0x20) + 0x3cc),(undefined5)local_78
                            );
  if ((string *)puVar5[10] == *(string **)PTR_DAT_02716d10) {
    FUN_009b58d0();
  }
  else {
    std::string::operator=((string *)puVar5[10],(string *)&local_78);
  }
  if (((ulong)local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  FUN_0075f0a0(auStack_80);
  FUN_0075efb0(auStack_80,plVar9,0,1);
  local_70 = 0;
  local_68 = (void *)0x0;
  local_78._0_5_ = CONCAT41(*(undefined4 *)(*(long *)(param_1 + 0x20) + 0x3d8),0xc);
  local_78 = (undefined8 *)
             (ulong)CONCAT25(*(undefined2 *)(*(long *)(param_1 + 0x20) + 0x3dc),(undefined5)local_78
                            );
  if ((string *)puVar5[0xb] == *(string **)puVar3) {
    FUN_009b58d0();
  }
  else {
    std::string::operator=((string *)puVar5[0xb],(string *)&local_78);
  }
  if (((ulong)local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  FUN_0075f0a0(auStack_80);
  uVar4 = FUN_01524ed0();
  plVar12 = *(long **)(param_1 + 0x18);
  __src = (void *)(**(code **)(*plVar12 + 0x10))(plVar12,(ulong)uVar4,1);
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
  if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_009ccba0;
  *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar12;
  lVar8 = *(long *)(lVar6 + 0x80);
  *(long *)(lVar6 + 0x80) = lVar8 + 1;
  if (uVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    memset(__src,0,(ulong)uVar4);
  }
  *(long *)(lVar6 + 0x80) = lVar8;
  uVar4 = FUN_01524ee0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x9e0),__src);
  uVar13 = (ulong)uVar4;
  FUN_0075efb0(auStack_80,plVar9,0,1);
  psVar11 = *(string **)puVar3;
  local_70 = 0;
  local_68 = (void *)0x0;
  local_78 = (undefined8 *)0x0;
  if (uVar4 < 0x17) {
    local_78 = (undefined8 *)(ulong)(byte)(uVar4 << 1);
    pvVar14 = (void *)((ulong)&local_78 | 1);
    if (uVar4 != 0) goto LAB_009cc95c;
  }
  else {
    uVar10 = uVar13 + 0x10 & 0x1fffffff0;
    pvVar14 = operator_new(uVar10);
    local_78 = (undefined8 *)(uVar10 | 1);
    local_70 = uVar13;
    local_68 = pvVar14;
LAB_009cc95c:
    memcpy(pvVar14,__src,uVar13);
  }
  *(undefined1 *)((long)pvVar14 + uVar13) = 0;
  psVar7 = (string *)puVar5[0xc];
  if (psVar7 == psVar11) {
    FUN_009b58d0(puVar5 + 0xc);
    puVar1 = (undefined8 *)PTR_DAT_02716d10;
  }
  else {
    std::string::operator=(psVar7,(string *)&local_78);
    puVar1 = (undefined8 *)PTR_DAT_02716d10;
  }
  PTR_DAT_02716d10 = (undefined *)puVar1;
  if (((ulong)local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  FUN_0075f0a0(auStack_80);
  uVar4 = FUN_01524ee0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x9e8),__src);
  uVar13 = (ulong)uVar4;
  FUN_0075efb0(auStack_80,plVar9,0,1);
  psVar11 = (string *)*puVar1;
  local_70 = 0;
  local_68 = (void *)0x0;
  local_78 = (undefined8 *)0x0;
  if (uVar4 < 0x17) {
    local_78 = (undefined8 *)(ulong)(byte)(uVar4 << 1);
    pvVar14 = (void *)((ulong)&local_78 | 1);
    if (uVar4 != 0) goto LAB_009cca38;
  }
  else {
    uVar10 = uVar13 + 0x10 & 0x1fffffff0;
    pvVar14 = operator_new(uVar10);
    local_78 = (undefined8 *)(uVar10 | 1);
    local_70 = uVar13;
    local_68 = pvVar14;
LAB_009cca38:
    memcpy(pvVar14,__src,uVar13);
  }
  *(undefined1 *)((long)pvVar14 + uVar13) = 0;
  psVar7 = (string *)puVar5[0xd];
  if (psVar7 == psVar11) {
    FUN_009b58d0(puVar5 + 0xd);
  }
  else {
    std::string::operator=(psVar7,(string *)&local_78);
  }
  if (((ulong)local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  FUN_0075f0a0(auStack_80);
  if (__src != (void *)0x0) {
    (**(code **)(*plVar12 + 0x18))(plVar12,__src,0,1);
  }
  local_78 = puVar5;
  FUN_0075efb0(&local_70,plVar9,0,1);
  *(uint *)(local_78 + 5) = (uint)*(byte *)(param_1 + 0x28);
  FUN_0075f0a0(&local_70);
  uVar4 = FUN_009ccbb0(*(undefined8 *)(param_1 + 0xd8),puVar5);
  FUN_0075efb0(&local_78,plVar9,0,1);
  (**(code **)*puVar5)(puVar5);
  (**(code **)(*plVar9 + 0x18))(plVar9,puVar5,0x78,8);
  FUN_0075f0a0(&local_78);
LAB_009ccb28:
  return uVar4 & 1;
}


