/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01183ce0; name: FUN_01183ce0
 */


uint FUN_01183ce0(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  string *this;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  string *psVar9;
  undefined1 auStack_60 [8];
  ulong local_58;
  undefined8 local_50;
  undefined8 *local_48;
  
  plVar8 = *(long **)(param_1 + 0x10);
  puVar2 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0x28,8);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar8;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  FUN_0118ea40(puVar2);
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  FUN_0075efb0(auStack_60,plVar8,0,1);
  psVar9 = *(string **)PTR_DAT_02716d10;
  local_48 = operator_new(0x30);
  local_58 = 0x31;
  local_50 = 0x28;
  *local_48 = *(undefined8 *)(param_1 + 0x678);
  uVar4 = *(undefined8 *)(param_1 + 0x680);
  uVar5 = *(undefined8 *)(param_1 + 0x688);
  uVar6 = *(undefined8 *)(param_1 + 0x690);
  uVar7 = *(undefined8 *)(param_1 + 0x698);
  *(undefined1 *)(local_48 + 5) = 0;
  local_48[3] = uVar6;
  local_48[4] = uVar7;
  local_48[1] = uVar4;
  local_48[2] = uVar5;
  this = (string *)puVar2[3];
  if (this == psVar9) {
    FUN_009b58d0(puVar2 + 3);
  }
  else {
    std::string::operator=(this,(string *)&local_58);
  }
  if ((local_58 & 1) != 0) {
    operator_delete(local_48);
  }
  FUN_0075f0a0(auStack_60);
  uVar1 = FUN_01183e90(*(undefined8 *)(param_1 + 0x68),puVar2);
  FUN_0075efb0(&local_58,plVar8,0,1);
  (**(code **)*puVar2)(puVar2);
  (**(code **)(*plVar8 + 0x18))(plVar8,puVar2,0x28,8);
  FUN_0075f0a0(&local_58);
  return uVar1 & 1;
}


