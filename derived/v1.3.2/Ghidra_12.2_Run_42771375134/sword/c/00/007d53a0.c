/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007d53a0; name: FUN_007d53a0
 */


uint FUN_007d53a0(long param_1,undefined8 *param_2)

{
  void *__src;
  ulong __n;
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  string *this;
  long *plVar4;
  string *psVar5;
  void *__dest;
  ulong uVar6;
  undefined1 auStack_80 [8];
  undefined8 *local_78;
  ulong local_70;
  void *local_68;
  
  plVar4 = *(long **)(param_1 + 0x20);
  puVar2 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4,0x40,8);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar4;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  FUN_007d8f10(puVar2);
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  local_78 = puVar2;
  FUN_0075efb0(&local_70,plVar4,0,1);
  *(uint *)((long)local_78 + 0x14) = (uint)*(byte *)(param_1 + 0x28);
  FUN_0075f0a0(&local_70);
  local_78 = puVar2;
  FUN_0075efb0(&local_70,plVar4,0,1);
  *(uint *)(local_78 + 3) = (uint)*(ushort *)(param_2 + 3);
  FUN_0075f0a0(&local_70);
  local_78 = puVar2;
  FUN_0075efb0(&local_70,plVar4,0,1);
  local_78[4] = param_2[4];
  FUN_0075f0a0(&local_70);
  local_78 = puVar2;
  FUN_0075efb0(&local_70,plVar4,0,1);
  local_78[5] = param_2[2];
  FUN_0075f0a0(&local_70);
  FUN_0075efb0(auStack_80,plVar4,0,1);
  __src = (void *)*param_2;
  __n = param_2[1];
  local_78 = (undefined8 *)0x0;
  local_70 = 0;
  local_68 = (void *)0x0;
  psVar5 = *(string **)PTR_DAT_02716d10;
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_78 = (undefined8 *)(ulong)(byte)((int)__n << 1);
    __dest = (void *)((ulong)&local_78 | 1);
    if (__n == 0) goto LAB_007d5590;
  }
  else {
    uVar6 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar6);
    local_78 = (undefined8 *)(uVar6 | 1);
    local_70 = __n;
    local_68 = __dest;
  }
  memcpy(__dest,__src,__n);
LAB_007d5590:
  *(undefined1 *)((long)__dest + __n) = 0;
  this = (string *)puVar2[6];
  if (this == psVar5) {
    FUN_009b58d0(puVar2 + 6);
  }
  else {
    std::string::operator=(this,(string *)&local_78);
  }
  if (((ulong)local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  FUN_0075f0a0(auStack_80);
  uVar1 = FUN_007d5660(*(undefined8 *)(param_1 + 0x38),puVar2,param_2[5]);
  FUN_0075efb0(&local_78,plVar4,0,1);
  (**(code **)*puVar2)(puVar2);
  (**(code **)(*plVar4 + 0x18))(plVar4,puVar2,0x40,8);
  FUN_0075f0a0(&local_78);
  return uVar1 & 1;
}


