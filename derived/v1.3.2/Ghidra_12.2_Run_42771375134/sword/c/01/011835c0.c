/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011835c0; name: FUN_011835c0
 */


uint FUN_011835c0(long param_1,long *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  string *this;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  string *psVar8;
  undefined1 auStack_60 [8];
  ulong local_58;
  undefined8 local_50;
  undefined8 *local_48;
  
  if (param_2 == (long *)0x0) {
    uVar1 = 0;
  }
  else {
    plVar7 = *(long **)(param_1 + 0x10);
    puVar2 = (undefined8 *)(**(code **)(*plVar7 + 0x10))(plVar7,0x28,8);
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar7;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    FUN_0118bf90(puVar2);
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    *(undefined8 *)(param_1 + 0x238) = 0;
    if ((undefined8 *)param_2[1] != (undefined8 *)*param_2) {
      *(undefined8 *)(param_1 + 0x238) = *(undefined8 *)*param_2;
    }
    *(undefined8 *)(param_1 + 0x240) = 0;
    if (1 < (ulong)(param_2[1] - *param_2 >> 3)) {
      *(undefined8 *)(param_1 + 0x240) = *(undefined8 *)(*param_2 + 8);
    }
    *(undefined8 *)(param_1 + 0x248) = 0;
    if (2 < (ulong)(param_2[1] - *param_2 >> 3)) {
      *(undefined8 *)(param_1 + 0x248) = *(undefined8 *)(*param_2 + 0x10);
    }
    *(undefined8 *)(param_1 + 0x250) = 0;
    if (3 < (ulong)(param_2[1] - *param_2 >> 3)) {
      *(undefined8 *)(param_1 + 0x250) = *(undefined8 *)(*param_2 + 0x18);
    }
    FUN_0075efb0(auStack_60,plVar7,0,1);
    psVar8 = *(string **)PTR_DAT_02716d10;
    local_48 = operator_new(0x30);
    local_58 = 0x31;
    local_50 = 0x20;
    uVar4 = *(undefined8 *)(param_1 + 0x238);
    uVar5 = *(undefined8 *)(param_1 + 0x240);
    uVar6 = *(undefined8 *)(param_1 + 0x250);
    local_48[2] = *(undefined8 *)(param_1 + 0x248);
    local_48[3] = uVar6;
    *(undefined1 *)(local_48 + 4) = 0;
    *local_48 = uVar4;
    local_48[1] = uVar5;
    this = (string *)puVar2[3];
    if (this == psVar8) {
      FUN_009b58d0(puVar2 + 3);
    }
    else {
      std::string::operator=(this,(string *)&local_58);
    }
    if ((local_58 & 1) != 0) {
      operator_delete(local_48);
    }
    FUN_0075f0a0(auStack_60);
    uVar1 = FUN_011837f0(*(undefined8 *)(param_1 + 0x68),puVar2);
    FUN_0075efb0(&local_58,plVar7,0,1);
    (**(code **)*puVar2)(puVar2);
    (**(code **)(*plVar7 + 0x18))(plVar7,puVar2,0x28,8);
    FUN_0075f0a0(&local_58);
  }
  return uVar1 & 1;
}


