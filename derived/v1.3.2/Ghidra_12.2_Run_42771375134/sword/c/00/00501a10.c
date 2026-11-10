/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00501a10; name: FUN_00501a10
 */


undefined8 *
FUN_00501a10(long *param_1,long param_2,int param_3,long param_4,undefined4 param_5,
            undefined4 param_6,uint param_7,ulong param_8,undefined4 *param_9,long *param_10,
            undefined1 *param_11)

{
  long *plVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long local_68;
  
  *param_10 = 0;
  *param_11 = 0;
  nn::os::LockMutex((MutexType *)(param_1 + 0x3c));
  uVar6 = 0;
  plVar1 = param_1 + 0x54;
  local_68 = 0;
  if ((param_3 != -1) && ((char)param_1[0xbf] != '\0')) {
    uVar6 = FUN_004febc0(plVar1,param_3,param_4,param_5,param_6,param_7 & 1,param_9,&local_68);
  }
  if ((param_8 & 1) == 0) {
LAB_00501ad0:
    puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x50))(param_1);
    if (puVar10 == (undefined8 *)0x0) goto LAB_00501bd4;
    if (local_68 == 0) {
      FUN_004fe780(plVar1,*param_9,param_6,&local_68);
      if (local_68 == 0) {
        lVar8 = puVar10[1];
        puVar10[1] = 0;
        if (lVar8 != 0) {
          FUN_004fe6b0(plVar1);
        }
        FUN_00404870(*(undefined4 *)PTR_DAT_027137c8,puVar10);
        goto LAB_00501bcc;
      }
      lVar8 = *(long *)(local_68 + 8);
      uVar6 = *(undefined4 *)(local_68 + 0x1c);
      uVar2 = *param_9;
      plVar7 = (long *)param_1[199];
      if (plVar7 != (long *)0x0) {
        if (*plVar7 == 0) {
          param_1[199] = 0;
          param_1[0xc6] = 0;
        }
        else {
          param_1[199] = *plVar7;
        }
        *(int *)(param_1 + 0xc5) = (int)param_1[0xc5] + -1;
      }
      iVar3 = *(int *)(*(long *)(param_2 + 0x20) + 8);
      iVar4 = *(int *)(param_2 + 0x60);
      *(undefined4 *)(plVar7 + 2) = uVar6;
      *(undefined4 *)((long)plVar7 + 0x14) = uVar2;
      plVar7[1] = (ulong)(uint)(iVar4 * iVar3) + param_4;
      puVar5 = PTR_FUN_02713860;
      plVar7[8] = param_2;
      plVar7[3] = lVar8;
      plVar7[4] = (long)puVar5;
      plVar7[5] = (long)plVar7;
      plVar7[6] = 0;
      *(byte *)(plVar7 + 9) = *(byte *)(plVar7 + 9) & 0xfc;
      *param_10 = (long)plVar7;
      FUN_004fedf0(plVar1,local_68,plVar7,param_3,param_4,*param_9);
      puVar10[1] = local_68;
      *(undefined4 *)(puVar10 + 2) = 0;
      *(byte *)((long)puVar10 + 0x14) = *(byte *)((long)puVar10 + 0x14) & 0xf8;
      lVar8 = *param_10;
      if (*(long *)(lVar8 + 0x38) == 0) {
        *(undefined8 **)(lVar8 + 0x38) = puVar10;
        puVar10[3] = 0;
        *puVar10 = 0;
        lVar8 = *(long *)(param_2 + 200);
      }
      else {
        puVar10[3] = *(long *)(lVar8 + 0x38);
        *(undefined8 **)(lVar8 + 0x38) = puVar10;
        *puVar10 = 0;
        lVar8 = *(long *)(param_2 + 200);
      }
    }
    else {
      puVar10[1] = local_68;
      *(undefined4 *)(puVar10 + 2) = uVar6;
      *(byte *)((long)puVar10 + 0x14) = *(byte *)((long)puVar10 + 0x14) & 0xf8;
      lVar8 = *(long *)(local_68 + 0x10);
      if (lVar8 != 0) {
        if (*(long *)(lVar8 + 0x38) == 0) {
          *(undefined8 **)(lVar8 + 0x38) = puVar10;
          puVar10[3] = 0;
        }
        else {
          puVar10[3] = *(long *)(lVar8 + 0x38);
          *(undefined8 **)(lVar8 + 0x38) = puVar10;
        }
        *param_11 = 1;
      }
      *puVar10 = 0;
      lVar8 = *(long *)(param_2 + 200);
    }
    puVar9 = (undefined8 *)(param_2 + 200);
    if (lVar8 != 0) {
      puVar9 = *(undefined8 **)(param_2 + 0xc0);
    }
    *puVar9 = puVar10;
    *(undefined8 **)(param_2 + 0xc0) = puVar10;
    puVar10[4] = param_2;
  }
  else {
    if (local_68 != 0) {
      if (*(long *)(local_68 + 0x10) == 0) goto LAB_00501ad0;
      FUN_004fe6b0(plVar1);
    }
LAB_00501bcc:
    puVar10 = (undefined8 *)0x0;
  }
LAB_00501bd4:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x3c));
  return puVar10;
}


