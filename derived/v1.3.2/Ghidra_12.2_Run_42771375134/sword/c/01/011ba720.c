/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011ba720; name: FUN_011ba720
 */


uint FUN_011ba720(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  string *this;
  long *plVar8;
  string *psVar9;
  undefined1 auStack_60 [8];
  ulong local_58;
  undefined8 local_50;
  undefined8 *local_48;
  
  plVar8 = *(long **)(param_1 + 0x10);
  puVar6 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0x28,8);
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar8;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  FUN_011c1160(puVar6);
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  FUN_0075efb0(auStack_60,plVar8,0,1);
  psVar9 = *(string **)PTR_DAT_02716d10;
  local_48 = operator_new(0x30);
  local_58 = 0x31;
  local_50 = 0x28;
  *local_48 = *(undefined8 *)(param_1 + 0x78);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  uVar3 = *(undefined8 *)(param_1 + 0x88);
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  uVar4 = *(undefined8 *)(param_1 + 0x98);
  *(undefined1 *)(local_48 + 5) = 0;
  local_48[3] = uVar2;
  local_48[4] = uVar4;
  local_48[1] = uVar1;
  local_48[2] = uVar3;
  this = (string *)puVar6[3];
  if (this == psVar9) {
    FUN_009b58d0(puVar6 + 3);
  }
  else {
    std::string::operator=(this,(string *)&local_58);
  }
  if ((local_58 & 1) != 0) {
    operator_delete(local_48);
  }
  FUN_0075f0a0(auStack_60);
  uVar5 = FUN_011ba8c0(*(undefined8 *)(param_1 + 0x68),puVar6);
  FUN_0075efb0(&local_58,plVar8,0,1);
  (**(code **)*puVar6)(puVar6);
  (**(code **)(*plVar8 + 0x18))(plVar8,puVar6,0x28,8);
  FUN_0075f0a0(&local_58);
  return uVar5 & 1;
}


