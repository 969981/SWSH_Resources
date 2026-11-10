/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009b2c10; name: FUN_009b2c10
 */


uint FUN_009b2c10(long param_1,void *param_2,uint param_3)

{
  char *pcVar1;
  ulong *puVar2;
  long *plVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  string *this;
  undefined4 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  string *psVar11;
  undefined8 *puVar12;
  void *__dest;
  ulong uVar13;
  ulong __n;
  undefined8 *local_c0;
  ulong local_b8;
  void *local_b0;
  undefined8 local_a8;
  undefined8 *local_a0;
  undefined1 auStack_98 [8];
  long *local_90;
  undefined8 *local_88;
  long *plStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  if (*(long *)(param_1 + 0x148) == 0) {
    uVar4 = 0;
    goto LAB_009b2fb4;
  }
  puVar5 = *(undefined8 **)(param_1 + 0x120);
  lVar6 = *(long *)(param_1 + 0x128);
  if ((lVar6 == 0) || (*(char *)(puVar5 + 1) == *(char *)(param_1 + 0x211))) {
    puVar12 = puVar5;
  }
  else {
    lVar8 = lVar6 * 0x10;
    puVar9 = puVar5;
    do {
      lVar8 = lVar8 + -0x10;
      if (lVar8 == 0) goto LAB_009b2ca8;
      puVar12 = puVar9 + 2;
      pcVar1 = (char *)(puVar9 + 3);
      puVar9 = puVar12;
    } while (*pcVar1 != *(char *)(param_1 + 0x211));
  }
  if (puVar12 == puVar5 + lVar6 * 2) {
LAB_009b2ca8:
    local_68 = 0;
  }
  else {
    local_68 = *puVar12;
  }
  plVar10 = *(long **)(param_1 + 0x80);
  local_90 = plVar10;
  puVar5 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10,0x30,8);
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar10;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  FUN_009bc810(puVar5);
  plVar3 = local_90;
  local_78 = 0x30;
  local_70 = 8;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  local_a0 = puVar5;
  local_88 = puVar5;
  plStack_80 = plVar10;
  FUN_0075efb0(auStack_98,local_90,0,1);
  psVar11 = *(string **)PTR_DAT_02716d10;
  __n = (ulong)param_3;
  puVar12 = local_a0 + 4;
  local_b8 = 0;
  local_b0 = (void *)0x0;
  local_c0 = (undefined8 *)0x0;
  if (param_3 < 0x17) {
    local_c0 = (undefined8 *)(ulong)(byte)(param_3 << 1);
    __dest = (void *)((ulong)&local_c0 | 1);
    if (param_3 != 0) goto LAB_009b2db8;
  }
  else {
    uVar13 = __n + 0x10 & 0x1fffffff0;
    __dest = operator_new(uVar13);
    local_c0 = (undefined8 *)(uVar13 | 1);
    local_b8 = __n;
    local_b0 = __dest;
LAB_009b2db8:
    memcpy(__dest,param_2,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
  this = (string *)*puVar12;
  if (this == psVar11) {
    FUN_009b58d0(puVar12);
  }
  else {
    std::string::operator=(this,(string *)&local_c0);
  }
  if (((ulong)local_c0 & 1) != 0) {
    operator_delete(local_b0);
  }
  FUN_0075f0a0(auStack_98);
  local_c0 = puVar5;
  FUN_0075efb0(&local_b8,plVar3,0,1);
  *(uint *)(local_c0 + 3) = (uint)*(byte *)(param_1 + 0x90);
  FUN_0075f0a0(&local_b8);
  local_c0 = puVar5;
  FUN_0075efb0(&local_b8,plVar3,0,1);
  *(undefined4 *)(local_c0 + 5) = *(undefined4 *)(*(long *)(param_1 + 0x238) + 8);
  FUN_0075f0a0(&local_b8);
  local_c0 = puVar5;
  FUN_0075efb0(&local_b8,plVar3,0,1);
  *(undefined4 *)((long)local_c0 + 0x14) = 2;
  FUN_0075f0a0(&local_b8);
  FUN_009b2310(&local_c0,*(undefined8 *)(param_1 + 0x80),(undefined8 *)(param_1 + 0x80));
  puVar12 = local_c0;
  local_c0 = (undefined8 *)0x0;
  lVar6 = *(long *)(param_1 + 0x400);
  puVar2 = (ulong *)(param_1 + 0x408);
  *(undefined8 **)(param_1 + 0x400) = puVar12;
  if (lVar6 == 0) {
    *(void **)(param_1 + 0x410) = local_b0;
    *(undefined8 *)(param_1 + 0x418) = local_a8;
    *puVar2 = local_b8;
    local_c0 = (undefined8 *)0x0;
  }
  else {
    FUN_009b5b00(puVar2);
    puVar12 = local_c0;
    *puVar2 = local_b8;
    *(void **)(param_1 + 0x410) = local_b0;
    *(undefined8 *)(param_1 + 0x418) = local_a8;
    local_c0 = (undefined8 *)0x0;
    if (puVar12 != (undefined8 *)0x0) {
      FUN_009b5b00(&local_b8);
    }
  }
  puVar12 = *(undefined8 **)(param_1 + 0x400);
  FUN_0075efb0(&local_c0,*puVar12,0,1);
  FUN_009bd300(puVar12[1],puVar5);
  FUN_0075f0a0(&local_c0);
  uVar4 = FUN_009b2420(param_1,&local_90,&local_68);
  if ((uVar4 & 1) != 0) {
    puVar7 = *(undefined4 **)(param_1 + 0x238);
    *puVar7 = 0;
    *(undefined1 *)(puVar7 + 1) = 5;
                    /* WARNING: Subroutine does not return */
    memset(puVar7 + 2,0,0x2721);
  }
  FUN_0075efb0(&local_c0,plVar3,0,1);
  (**(code **)*puVar5)(puVar5);
  (**(code **)(*plVar10 + 0x18))(plVar10,puVar5,0x30,8);
  FUN_0075f0a0(&local_c0);
LAB_009b2fb4:
  return uVar4 & 1;
}


