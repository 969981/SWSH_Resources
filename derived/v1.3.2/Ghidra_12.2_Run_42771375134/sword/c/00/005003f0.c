/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005003f0; name: FUN_005003f0
 */


long FUN_005003f0(long *param_1,long param_2,int param_3,long param_4,undefined4 param_5,
                 undefined4 param_6,uint param_7,ulong param_8,undefined4 *param_9,long *param_10)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  long local_68;
  
  *param_10 = 0;
  nn::os::LockMutex((MutexType *)(param_1 + 0x3c));
  uVar6 = 0;
  plVar1 = param_1 + 0x54;
  local_68 = 0;
  if ((param_3 != -1) && ((char)param_1[0xbf] != '\0')) {
    uVar6 = FUN_004febc0(plVar1,param_3,param_4,param_5,param_6,param_7 & 1,param_9,&local_68);
  }
  if ((param_8 & 1) == 0) {
LAB_005004a4:
    lVar8 = (**(code **)(*param_1 + 0x50))(param_1);
    if (lVar8 != 0) {
      if (local_68 == 0) {
        FUN_004fe780(plVar1,*param_9,param_6,&local_68);
        if (local_68 == 0) {
          lVar7 = *(long *)(lVar8 + 8);
          *(undefined8 *)(lVar8 + 8) = 0;
          if (lVar7 != 0) {
            FUN_004fe6b0(plVar1);
          }
          FUN_00404870(*(undefined4 *)PTR_DAT_027137c8,lVar8);
          goto LAB_00500588;
        }
        iVar2 = *(int *)(param_2 + 0x60);
        iVar3 = *(int *)(*(long *)(param_2 + 0x20) + 8);
        uVar4 = *(undefined4 *)(local_68 + 0x1c);
        uVar5 = *param_9;
        param_1[199] = *(long *)(local_68 + 8);
        *(undefined4 *)(param_1 + 0xc6) = uVar4;
        *(undefined4 *)((long)param_1 + 0x634) = uVar5;
        param_1[0xc5] = (ulong)(uint)(iVar2 * iVar3) + param_4;
        *param_10 = (long)(param_1 + 0xc5);
        FUN_004fedf0(plVar1,local_68,param_1 + 0xc5,param_3,param_4,*param_9);
      }
      *(long *)(lVar8 + 8) = local_68;
      *(undefined4 *)(lVar8 + 0x10) = uVar6;
      *(byte *)(lVar8 + 0x14) = *(byte *)(lVar8 + 0x14) & 0xf8;
      goto LAB_0050058c;
    }
    if (local_68 != 0) {
      FUN_004fe6b0(plVar1);
      lVar8 = 0;
      local_68 = 0;
      goto LAB_0050058c;
    }
  }
  else if (local_68 != 0) {
    if (*(long *)(local_68 + 0x10) == 0) goto LAB_005004a4;
    FUN_004fe6b0(plVar1);
  }
LAB_00500588:
  lVar8 = 0;
LAB_0050058c:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x3c));
  return lVar8;
}


