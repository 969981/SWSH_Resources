/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0127d9a0; name: FUN_0127d9a0
 */


undefined8 FUN_0127d9a0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  bool bVar9;
  long *local_70;
  long *local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  lVar7 = *(long *)PTR_DAT_02716758;
  uVar6 = 0;
  if (lVar7 != 0) {
    plVar2 = (long *)FUN_007ddb70(lVar7);
    if (plVar2 == (long *)0x0) {
      uVar6 = 0;
    }
    else {
      plVar3 = (long *)(**(code **)(*plVar2 + 0x10))(plVar2,200,8);
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar2;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      plVar3[0x16] = 0;
      plVar3[0x17] = 0;
      plVar3[0x14] = 0;
      plVar3[0x15] = 0;
      plVar3[0x12] = 0;
      plVar3[0x13] = 0;
      plVar3[0x10] = 0;
      plVar3[0x11] = 0;
      plVar3[0xe] = 0;
      plVar3[0xf] = 0;
      plVar3[0xc] = 0;
      plVar3[0xd] = 0;
      plVar3[10] = 0;
      plVar3[0xb] = 0;
      plVar3[8] = 0;
      plVar3[9] = 0;
      plVar3[6] = 0;
      plVar3[7] = 0;
      plVar3[4] = 0;
      plVar3[5] = 0;
      puVar1 = PTR_DAT_02726d20 + 0x10;
      plVar3[0x18] = (long)(PTR_DAT_02725ea0 + 0x10);
      plVar3[2] = 0;
      plVar3[3] = 0;
      *plVar3 = (long)puVar1;
      plVar3[1] = 0;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      if (param_1 == 0) {
        lVar4 = 0;
        bVar9 = true;
        lVar5 = plVar3[3];
        plVar3[3] = 0;
        param_1 = 0;
      }
      else {
        lVar4 = *(long *)(param_1 + 0x58);
        if (lVar4 == 0) {
          lVar4 = 0;
          param_1 = param_1 + 0x60;
          bVar9 = true;
          lVar5 = plVar3[3];
          plVar3[3] = 0;
        }
        else {
          plVar8 = (long *)(lVar4 + 0x48);
          (**(code **)(*plVar8 + 0x10))(plVar8);
          param_1 = param_1 + 0x60;
          (**(code **)(*plVar8 + 0x10))(plVar8);
          (**(code **)(*plVar8 + 0x18))(plVar8);
          (**(code **)(*plVar8 + 0x10))(plVar8);
          bVar9 = false;
          lVar5 = plVar3[3];
          plVar3[3] = lVar4;
        }
      }
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
      }
      plVar3[4] = param_1;
      if (!bVar9) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
      }
      FUN_012052a0(plVar3,param_2);
      local_60 = 200;
      local_58 = 8;
      local_70 = plVar3;
      local_68 = plVar2;
      uVar6 = FUN_007ddb80(lVar7,&local_70);
      plVar2 = local_70;
      local_70 = (long *)0x0;
      if (plVar2 != (long *)0x0) {
        (**(code **)*plVar2)(plVar2);
        (**(code **)(*local_68 + 0x18))(local_68,plVar2,local_60,local_58);
      }
    }
  }
  return uVar6;
}


