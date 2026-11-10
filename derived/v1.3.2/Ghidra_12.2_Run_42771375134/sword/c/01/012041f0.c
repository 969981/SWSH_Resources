/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012041f0; name: FUN_012041f0
 */


undefined8 FUN_012041f0(long param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  bool bVar10;
  long *local_70;
  long *local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  lVar8 = *(long *)PTR_DAT_02716758;
  uVar7 = 0;
  if (lVar8 != 0) {
    plVar3 = (long *)FUN_007ddb70(lVar8);
    if (plVar3 == (long *)0x0) {
      uVar7 = 0;
    }
    else {
      plVar4 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,0x38,8);
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar3;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      plVar4[4] = 0;
      plVar4[5] = 0;
      puVar1 = PTR_DAT_02725e28 + 0x10;
      puVar2 = PTR_DAT_02725e20 + 0x10;
      plVar4[2] = 0;
      plVar4[3] = 0;
      *plVar4 = (long)puVar1;
      plVar4[1] = 0;
      plVar4[6] = (long)puVar2;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      if (param_1 == 0) {
        lVar5 = 0;
        bVar10 = true;
        lVar6 = plVar4[3];
        plVar4[3] = 0;
        param_1 = 0;
      }
      else {
        lVar5 = *(long *)(param_1 + 0x58);
        if (lVar5 == 0) {
          lVar5 = 0;
          param_1 = param_1 + 0x60;
          bVar10 = true;
          lVar6 = plVar4[3];
          plVar4[3] = 0;
        }
        else {
          plVar9 = (long *)(lVar5 + 0x48);
          (**(code **)(*plVar9 + 0x10))(plVar9);
          param_1 = param_1 + 0x60;
          (**(code **)(*plVar9 + 0x10))(plVar9);
          (**(code **)(*plVar9 + 0x18))(plVar9);
          (**(code **)(*plVar9 + 0x10))(plVar9);
          bVar10 = false;
          lVar6 = plVar4[3];
          plVar4[3] = lVar5;
        }
      }
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
      }
      plVar4[4] = param_1;
      if (!bVar10) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
      }
      *(undefined4 *)(plVar4 + 5) = *param_2;
      local_60 = 0x38;
      local_58 = 8;
      local_70 = plVar4;
      local_68 = plVar3;
      uVar7 = FUN_007ddb80(lVar8,&local_70);
      plVar3 = local_70;
      local_70 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)*plVar3)(plVar3);
        (**(code **)(*local_68 + 0x18))(local_68,plVar3,local_60,local_58);
      }
    }
  }
  return uVar7;
}


