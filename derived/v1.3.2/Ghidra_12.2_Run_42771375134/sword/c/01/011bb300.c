/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011bb300; name: FUN_011bb300
 */


uint FUN_011bb300(long param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  void *__dest;
  string *this;
  undefined8 uVar6;
  long *plVar7;
  string *psVar8;
  undefined1 auStack_70 [8];
  ulong local_68;
  undefined8 local_60;
  void *local_58;
  
  plVar7 = *(long **)(param_1 + 0x10);
  puVar4 = (undefined8 *)(**(code **)(*plVar7 + 0x10))(plVar7,0x28,8);
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar7;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  FUN_011c3260(puVar4);
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  FUN_008664a0(*param_2,param_1 + 0x244);
  uVar6 = *(undefined8 *)((long)param_2 + 0x94);
  uVar2 = *(undefined2 *)((long)param_2 + 0x9c);
  uVar1 = *(undefined1 *)((long)param_2 + 0x9e);
  *(undefined8 *)(param_1 + 0x230) = *(undefined8 *)((long)param_2 + 0x8c);
  *(undefined1 *)(param_1 + 0x242) = uVar1;
  *(undefined2 *)(param_1 + 0x240) = uVar2;
  *(undefined8 *)(param_1 + 0x238) = uVar6;
  FUN_0075efb0(auStack_70,plVar7,0,1);
  psVar8 = *(string **)PTR_DAT_02716d10;
  __dest = operator_new(0x170);
  local_68 = 0x171;
  local_60 = 0x16c;
  local_58 = __dest;
  memcpy(__dest,(void *)(param_1 + 0x230),0x16c);
  *(undefined1 *)((long)__dest + 0x16c) = 0;
  this = (string *)puVar4[3];
  if (this == psVar8) {
    FUN_009b58d0(puVar4 + 3);
  }
  else {
    std::string::operator=(this,(string *)&local_68);
  }
  if ((local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  FUN_0075f0a0(auStack_70);
  uVar3 = FUN_011bb4d0(*(undefined8 *)(param_1 + 0x68),puVar4);
  FUN_0075efb0(&local_68,plVar7,0,1);
  (**(code **)*puVar4)(puVar4);
  (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,0x28,8);
  FUN_0075f0a0(&local_68);
  return uVar3 & 1;
}


