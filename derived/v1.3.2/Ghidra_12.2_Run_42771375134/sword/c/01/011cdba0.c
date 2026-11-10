/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011cdba0; name: FUN_011cdba0
 */


void FUN_011cdba0(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  void *__dest;
  string *this;
  long *plVar3;
  string *psVar4;
  undefined1 auStack_1c8 [8];
  undefined1 auStack_1c0 [344];
  ulong local_68;
  undefined8 local_60;
  void *local_58;
  
  FUN_008664a0(*param_2,auStack_1c0);
  plVar3 = *(long **)(param_1 + 0x10);
  puVar1 = (undefined8 *)(**(code **)(*plVar3 + 0x10))(plVar3,0x28,8);
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar3;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  FUN_011d2410(puVar1);
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  FUN_0075efb0(auStack_1c8,plVar3,0,1);
  psVar4 = *(string **)PTR_DAT_02716d10;
  __dest = operator_new(0x160);
  local_68 = 0x161;
  local_60 = 0x158;
  local_58 = __dest;
  memcpy(__dest,auStack_1c0,0x158);
  *(undefined1 *)((long)__dest + 0x158) = 0;
  this = (string *)puVar1[3];
  if (this == psVar4) {
    FUN_009b58d0(puVar1 + 3);
  }
  else {
    std::string::operator=(this,(string *)&local_68);
  }
  if ((local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  FUN_0075f0a0(auStack_1c8);
  FUN_011cdd40(*(undefined8 *)(param_1 + 0x18),puVar1);
  FUN_0075efb0(&local_68,plVar3,0,1);
  (**(code **)*puVar1)(puVar1);
  (**(code **)(*plVar3 + 0x18))(plVar3,puVar1,0x28,8);
  FUN_0075f0a0(&local_68);
  return;
}


