/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0117b670; name: FUN_0117b670
 */


uint FUN_0117b670(long param_1,uint param_2,char *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  string *this;
  long *plVar9;
  string *psVar10;
  undefined1 auStack_70 [8];
  ulong local_68;
  undefined8 local_60;
  undefined8 *local_58;
  
  plVar9 = *(long **)(param_1 + 0x10);
  puVar7 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9,0x28,8);
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar9;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  FUN_0117e2b0(puVar7);
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  *(uint *)(param_1 + 0x78) = param_2 & 1;
  if (*param_3 == '\0') {
    *(undefined8 *)(param_1 + 0x8c) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x84) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x7c) = 0xffffffffffffffff;
  }
  else {
    *(int *)(param_1 + 0x7c) = (int)param_3[1];
    *(int *)(param_1 + 0x80) = (int)param_3[2];
    *(int *)(param_1 + 0x84) = (int)param_3[3];
    *(int *)(param_1 + 0x88) = (int)param_3[4];
    *(int *)(param_1 + 0x8c) = (int)param_3[5];
    *(int *)(param_1 + 0x90) = (int)param_3[6];
  }
  FUN_0075efb0(auStack_70,plVar9,0,1);
  psVar10 = *(string **)PTR_DAT_02716d10;
  local_58 = operator_new(0x30);
  local_68 = 0x31;
  local_60 = 0x28;
  *local_58 = *(undefined8 *)(param_1 + 0x70);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  uVar3 = *(undefined8 *)(param_1 + 0x80);
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  uVar4 = *(undefined8 *)(param_1 + 0x90);
  *(undefined1 *)(local_58 + 5) = 0;
  local_58[3] = uVar2;
  local_58[4] = uVar4;
  local_58[1] = uVar1;
  local_58[2] = uVar3;
  this = (string *)puVar7[3];
  if (this == psVar10) {
    FUN_009b58d0(puVar7 + 3);
  }
  else {
    std::string::operator=(this,(string *)&local_68);
  }
  if ((local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  FUN_0075f0a0(auStack_70);
  uVar6 = FUN_0117b8f0(*(undefined8 *)(param_1 + 0x68),puVar7);
  if ((uVar6 & 1) != 0) {
    if (*param_3 == '\0') {
      *(undefined2 *)(param_1 + 199) = 0xffff;
      *(undefined4 *)(param_1 + 0xc3) = 0xffffffff;
    }
    else {
      uVar5 = *(undefined4 *)(param_3 + 1);
      *(undefined2 *)(param_1 + 199) = *(undefined2 *)(param_3 + 5);
      *(undefined4 *)(param_1 + 0xc3) = uVar5;
    }
    if (*(char *)(param_1 + 0xc2) == '\0') {
      *(undefined1 *)(param_1 + 0xc2) = 1;
    }
  }
  FUN_0075efb0(&local_68,plVar9,0,1);
  (**(code **)*puVar7)(puVar7);
  (**(code **)(*plVar9 + 0x18))(plVar9,puVar7,0x28,8);
  FUN_0075f0a0(&local_68);
  return uVar6 & 1;
}


