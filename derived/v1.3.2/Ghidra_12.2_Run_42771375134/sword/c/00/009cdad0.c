/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009cdad0; name: FUN_009cdad0
 */


uint FUN_009cdad0(long param_1,void *param_2,uint param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  string *this;
  long *plVar4;
  ulong uVar5;
  size_t __n;
  void *__dest;
  string *psVar6;
  undefined1 auStack_80 [8];
  undefined8 *local_78;
  size_t local_70;
  void *local_68;
  
  if (*(long *)(param_1 + 0xd8) == 0) {
    uVar1 = 0;
    goto LAB_009cdcbc;
  }
  plVar4 = *(long **)(param_1 + 0x18);
  puVar2 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4,0x28,8);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar4;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  FUN_009d5980(puVar2);
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  local_78 = puVar2;
  FUN_0075efb0(&local_70,plVar4,0,1);
  *(undefined4 *)(local_78 + 4) = 1;
  FUN_0075f0a0(&local_70);
  FUN_0075efb0(auStack_80,plVar4,0,1);
  __n = (ulong)param_3 * 4;
  psVar6 = *(string **)PTR_DAT_02716d10;
  local_78 = (undefined8 *)0x0;
  local_70 = 0;
  local_68 = (void *)0x0;
  if (param_3 < 6) {
    __dest = (void *)((ulong)&local_78 | 1);
    local_78 = (undefined8 *)(ulong)(byte)(param_3 << 3);
    if (param_3 != 0) goto LAB_009cdc24;
  }
  else {
    uVar5 = __n + 0x10 & 0x7fffffff0;
    __dest = operator_new(uVar5);
    local_78 = (undefined8 *)(uVar5 | 1);
    local_70 = __n;
    local_68 = __dest;
LAB_009cdc24:
    memcpy(__dest,param_2,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
  this = (string *)puVar2[3];
  if (this == psVar6) {
    FUN_009b58d0(puVar2 + 3);
  }
  else {
    std::string::operator=(this,(string *)&local_78);
  }
  if (((ulong)local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  FUN_0075f0a0(auStack_80);
  uVar1 = FUN_009cdd00(*(undefined8 *)(param_1 + 0xd8),puVar2);
  FUN_0075efb0(&local_78,plVar4,0,1);
  (**(code **)*puVar2)(puVar2);
  (**(code **)(*plVar4 + 0x18))(plVar4,puVar2,0x28,8);
  FUN_0075f0a0(&local_78);
LAB_009cdcbc:
  return uVar1 & 1;
}


