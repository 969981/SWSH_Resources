/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01182e90; name: FUN_01182e90
 */


uint FUN_01182e90(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  void *__dest;
  string *this;
  long *plVar4;
  string *psVar5;
  undefined1 auStack_70 [8];
  ulong local_68;
  undefined8 local_60;
  void *local_58;
  
  plVar4 = *(long **)(param_1 + 0x10);
  puVar2 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4,0x28,8);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar4;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  FUN_0118b750(puVar2);
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  FUN_0075efb0(auStack_70,plVar4,0,1);
  psVar5 = *(string **)PTR_DAT_02716d10;
  __dest = operator_new(0x170);
  local_68 = 0x171;
  local_60 = 0x168;
  local_58 = __dest;
  memcpy(__dest,(void *)(param_1 + 0xb8),0x168);
  *(undefined1 *)((long)__dest + 0x168) = 0;
  this = (string *)puVar2[3];
  if (this == psVar5) {
    FUN_009b58d0(puVar2 + 3);
  }
  else {
    std::string::operator=(this,(string *)&local_68);
  }
  if ((local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  FUN_0075f0a0(auStack_70);
  uVar1 = FUN_01183030(*(undefined8 *)(param_1 + 0x68),puVar2);
  FUN_0075efb0(&local_68,plVar4,0,1);
  (**(code **)*puVar2)(puVar2);
  (**(code **)(*plVar4 + 0x18))(plVar4,puVar2,0x28,8);
  FUN_0075f0a0(&local_68);
  return uVar1 & 1;
}


