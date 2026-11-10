/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012aada0; name: FUN_012aada0
 */


undefined8 FUN_012aada0(long param_1,undefined8 *param_2)

{
  MutexType *pMVar1;
  long lVar2;
  bool bVar3;
  undefined *puVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  code *pcVar12;
  code *local_110;
  code *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  long local_f0;
  long *plStack_e8;
  code **local_e0;
  code *local_88;
  code *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  long local_68;
  long local_60;
  undefined8 uStack_58;
  undefined8 *local_48;
  
  pMVar1 = (MutexType *)(param_1 + 0xa8);
  nn::os::LockMutex(pMVar1);
  if (*(int *)(param_1 + 0x50) == 0) {
    nn::os::LockMutex(pMVar1);
    lVar6 = *(long *)(param_1 + 0x78);
    lVar2 = *(long *)(param_1 + 0x80);
    lVar10 = *(long *)(param_1 + 0x88);
    nn::os::UnlockMutex(pMVar1);
    if ((ulong)(lVar2 - lVar6) < (ulong)(lVar10 - lVar6)) {
      local_60 = 0;
      uStack_58 = 0;
      local_68 = 0;
      FUN_012a98e0(&local_68,0,*param_2,param_2[1]);
      pcVar12 = *(code **)(param_1 + 8);
      pcVar5 = (code *)(**(code **)(*(long *)pcVar12 + 0x10))(pcVar12,0x48,8);
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(code **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = pcVar12;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      FUN_012ad790(pcVar5,&local_68);
      local_78 = (undefined1 *)0x48;
      local_70 = (undefined1 *)0x8;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      local_e0 = &local_88;
      local_110 = FUN_012ac150;
      local_108 = FUN_012ac1a0;
      local_100 = &LAB_012ac1b0;
      local_f8 = &LAB_012ac1d0;
      local_f0 = param_1;
      plStack_e8 = &local_68;
      local_88 = pcVar5;
      local_80 = pcVar12;
      uVar7 = FUN_012ad0b0(pcVar5);
      if ((uVar7 & 1) == 0) {
        puVar8 = (undefined8 *)FUN_007ac3d0(1,60000);
        (**(code **)(*(long *)pcVar5 + 0x10))(pcVar5,puVar8,param_1 + 0xe8);
        local_48 = puVar8;
        uVar7 = (*local_110)(&local_f0,&local_48);
        if ((uVar7 & 1) == 0) {
          (**(code **)*puVar8)(puVar8);
          FUN_017cd7a0(puVar8);
          (**(code **)(*(long *)pcVar5 + 0x18))(pcVar5);
          goto LAB_012aafac;
        }
        plVar9 = (long *)FUN_017cd750(0x28);
        if (plVar9 == (long *)0x0) {
          bVar3 = true;
          pcVar5 = local_108;
        }
        else {
          *plVar9 = (long)(PTR_DAT_02727360 + 0x10);
          plVar9[1] = (long)pcVar5;
          puVar4 = PTR_LAB_02727308;
          plVar9[4] = (long)puVar8;
          plVar9[2] = (long)puVar4;
          plVar9[3] = 0;
          FUN_017dee40(puVar8,2);
          bVar3 = true;
          FUN_017de4d0(puVar8,plVar9,0,1);
          pcVar5 = local_108;
        }
      }
      else {
LAB_012aafac:
        bVar3 = false;
        pcVar5 = local_108;
      }
      local_108 = pcVar5;
      if (pcVar5 != (code *)0x0) {
        local_100 = (undefined1 *)0x0;
        local_f8 = (undefined1 *)0x0;
        local_110 = (code *)0x0;
        local_108 = (code *)0x0;
        (*pcVar5)(&local_f0);
      }
      pcVar5 = local_88;
      if (bVar3) {
        local_110 = local_88;
        local_108 = local_80;
        local_88 = (code *)0x0;
        local_100 = local_78;
        local_f8 = local_70;
        FUN_012a9460(param_1,&local_110);
        pcVar5 = local_110;
        local_110 = (code *)0x0;
        if (pcVar5 != (code *)0x0) {
          (*(code *)**(undefined8 **)pcVar5)(pcVar5);
          (**(code **)(*(long *)local_108 + 0x18))(local_108,pcVar5,local_100,local_f8);
        }
        pcVar5 = local_88;
        local_88 = (code *)0x0;
        if (pcVar5 != (code *)0x0) {
          (*(code *)**(undefined8 **)pcVar5)(pcVar5);
          (**(code **)(*(long *)local_80 + 0x18))(local_80,pcVar5,local_78,local_70);
        }
        if (local_68 != 0) {
          local_60 = local_68;
          FUN_017cd7a0();
        }
        uVar11 = 1;
        goto LAB_012ab0bc;
      }
      local_88 = (code *)0x0;
      if (pcVar5 != (code *)0x0) {
        (*(code *)**(undefined8 **)pcVar5)(pcVar5);
        (**(code **)(*(long *)local_80 + 0x18))(local_80,pcVar5,local_78,local_70);
      }
      if (local_68 != 0) {
        local_60 = local_68;
        FUN_017cd7a0();
      }
    }
  }
  uVar11 = 0;
LAB_012ab0bc:
  nn::os::UnlockMutex(pMVar1);
  return uVar11;
}


