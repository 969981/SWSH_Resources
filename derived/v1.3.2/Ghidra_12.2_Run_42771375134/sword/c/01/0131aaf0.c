/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0131aaf0; name: FUN_0131aaf0
 */


undefined4 FUN_0131aaf0(long *param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  long *plVar6;
  bool bVar7;
  char local_a0 [8];
  long local_98;
  long local_90;
  undefined1 *local_88;
  long local_80;
  long local_78;
  long local_68;
  
  uVar5 = 0;
  uVar2 = FUN_00da0ab0(*(undefined8 *)PTR_DAT_0271e770,8);
  (**(code **)(*param_1 + 0x20))(local_a0,param_1,param_2,0);
  if (local_a0[0] != '\0') {
    iVar4 = 0;
    do {
      plVar6 = &local_98;
      if (local_80 != 0) {
        plVar6 = &local_90;
      }
      lVar3 = FUN_006e2ec0(uVar2,*plVar6);
      if (lVar3 == 0) {
        iVar4 = iVar4 + 1;
        bVar7 = true;
        bVar1 = true;
      }
      else {
        FUN_006dccd0(&local_68,*(undefined8 *)PTR_DAT_02710788,1,&local_98,0,param_1[0x24],uVar2);
        if (param_1[3] != 0) {
          (**(code **)(*(long *)(param_1[3] + 0x48) + 0x18))();
          param_1[3] = 0;
        }
        lVar3 = local_68;
        param_1[3] = local_68;
        if (local_68 != 0) {
          plVar6 = (long *)(local_68 + 0x48);
          (**(code **)(*plVar6 + 0x10))(plVar6);
          if ((param_1[4] != 0) || (param_1[0x14] != 0)) {
            FUN_006e1e70(lVar3,param_1 + 2,1);
          }
          (**(code **)(*plVar6 + 0x18))(plVar6);
        }
        bVar7 = false;
        bVar1 = false;
        uVar5 = 1;
      }
      if (local_a0[0] != '\0') {
        if ((local_80 != 0) && (local_98 != 0)) {
          (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
        }
        local_98 = 0;
        local_90 = -0x340d631b7bddd9bb;
        local_88 = &DAT_01d38550;
        local_80 = 0;
        bVar1 = bVar7;
        if (local_78 != 0) {
          (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
          local_78 = 0;
        }
      }
      if (!bVar1) {
        return uVar5;
      }
      (**(code **)(*param_1 + 0x20))(local_a0,param_1,param_2,iVar4);
    } while (local_a0[0] != '\0');
  }
  return 0;
}


