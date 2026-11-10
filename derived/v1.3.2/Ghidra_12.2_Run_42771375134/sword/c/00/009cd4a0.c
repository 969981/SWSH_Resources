/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009cd4a0; name: FUN_009cd4a0
 */


uint FUN_009cd4a0(long param_1,undefined8 param_2,void *param_3,ulong param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  string *this;
  long *plVar4;
  void *__dest;
  ulong uVar5;
  string *psVar6;
  undefined1 auStack_80 [8];
  undefined8 *local_78;
  ulong local_70;
  void *local_68;
  
  if (*(long *)(param_1 + 0xd8) == 0) {
    uVar1 = 0;
    goto LAB_009cd690;
  }
  plVar4 = *(long **)(param_1 + 0x18);
  puVar2 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4,0x30,8);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar4;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  FUN_009d3c10(puVar2);
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  FUN_0075efb0(auStack_80,plVar4,0,1);
  local_70 = 0;
  local_68 = (void *)0x0;
  psVar6 = *(string **)PTR_DAT_02716d10;
  local_78 = (undefined8 *)0x0;
  if (0xffffffffffffffef < param_4) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (param_4 < 0x17) {
    local_78 = (undefined8 *)(ulong)(byte)((int)param_4 << 1);
    __dest = (void *)((ulong)&local_78 | 1);
    if (param_4 != 0) goto LAB_009cd5c4;
  }
  else {
    uVar5 = param_4 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar5);
    local_78 = (undefined8 *)(uVar5 | 1);
    local_70 = param_4;
    local_68 = __dest;
LAB_009cd5c4:
    memcpy(__dest,param_3,param_4);
  }
  *(undefined1 *)((long)__dest + param_4) = 0;
  this = (string *)puVar2[4];
  if (this == psVar6) {
    FUN_009b58d0(puVar2 + 4);
  }
  else {
    std::string::operator=(this,(string *)&local_78);
  }
  if (((ulong)local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  FUN_0075f0a0(auStack_80);
  local_78 = puVar2;
  FUN_0075efb0(&local_70,plVar4,0,1);
  *(uint *)(local_78 + 3) = (uint)*(byte *)(param_1 + 0x28);
  FUN_0075f0a0(&local_70);
  uVar1 = FUN_009cd6e0(*(undefined8 *)(param_1 + 0xd8),puVar2);
  FUN_0075efb0(&local_78,plVar4,0,1);
  (**(code **)*puVar2)(puVar2);
  (**(code **)(*plVar4 + 0x18))(plVar4,puVar2,0x30,8);
  FUN_0075f0a0(&local_78);
LAB_009cd690:
  return uVar1 & 1;
}


