/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 015018c0; name: FUN_015018c0
 */


void FUN_015018c0(undefined8 *param_1,long param_2,long *param_3,uint param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long local_98;
  long local_90;
  undefined4 local_88 [2];
  long local_80;
  byte local_78;
  undefined8 local_70;
  undefined1 local_68;
  
  puVar1 = PTR_DAT_02710798;
  if (param_4 < 2) {
    lVar5 = param_2 + (ulong)param_4 * 0x2b8;
    uVar8 = (ulong)param_4;
    if (*(char *)(lVar5 + 0x300) != '\0') {
      *(undefined1 *)(lVar5 + 0x300) = 0;
      lVar5 = *(long *)puVar1;
      lVar6 = *(long *)(lVar5 + 0x1d8);
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
        lVar5 = *(long *)puVar1;
      }
      lVar7 = *(long *)(lVar5 + 0x208);
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
        lVar5 = *(long *)puVar1;
      }
      lVar5 = *(long *)(lVar5 + 0x1e8);
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_3;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      lVar4 = (**(code **)(*param_3 + 0x10))(param_3,0x80,8);
      if (lVar4 == 0) {
        (**(code **)(*param_3 + 0xb8))(param_3);
      }
      FUN_0077d050(lVar4,0xd);
      *(long **)(lVar4 + 8) = param_3;
      *(long *)(lVar4 + 0x10) = lVar4;
      *(undefined8 *)(lVar4 + 0x18) = 0x80;
      *(undefined8 *)(lVar4 + 0x20) = 8;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      FUN_01524b90(lVar5,lVar4);
      FUN_01028fc0(&DAT_026a83a8,*(undefined8 *)(param_2 + uVar8 * 0x2b8 + 0x2f8));
      local_88[0] = FUN_01524d00(lVar5);
      local_80 = lVar4;
      local_78 = FUN_01520ef0(lVar6,0x278,1);
      local_78 = local_78 & 1;
      local_70 = DAT_0272a7a0;
      local_68 = FUN_01539100(lVar7);
      FUN_01501160(&local_90,param_2,param_3,uVar8,0);
      FUN_01501160(&local_98,param_2,param_3,uVar8,1);
      lVar2 = local_90;
      lVar3 = local_98;
      FUN_008893f0(param_1,param_3,param_3,local_90,local_98,local_88);
      if (lVar3 != 0) {
        plVar9 = (long *)(lVar3 + 0x48);
        (**(code **)(*plVar9 + 0x18))(plVar9);
        local_98 = 0;
      }
      if (lVar2 != 0) {
        plVar9 = (long *)(lVar2 + 0x48);
        (**(code **)(*plVar9 + 0x18))(plVar9);
        local_90 = 0;
      }
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
      }
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
      }
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
      }
      if (lVar6 == 0) {
        return;
      }
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
      return;
    }
  }
  *param_1 = 0;
  return;
}


