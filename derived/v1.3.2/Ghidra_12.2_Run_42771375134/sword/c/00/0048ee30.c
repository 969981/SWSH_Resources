/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0048ee30; name: FUN_0048ee30
 */


void FUN_0048ee30(long *param_1,uint param_2,long param_3)

{
  long *plVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  undefined8 *local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined1 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  undefined4 uStack_44;
  
  if ((*(int *)(param_3 + 0x20) != 0) || (*(int *)(param_3 + 0x24) != 0)) {
    nn::os::UnlockMutex((MutexType *)(param_1 + 3));
    return;
  }
  uVar12 = *(uint *)(param_3 + 0x60);
  if ((uVar12 >> 0x16 & 1) != 0) {
    FUN_00490d70(*(undefined8 *)PTR_DAT_02712db8,param_2);
    uVar12 = *(uint *)(param_3 + 0x60);
  }
  pcVar2 = *(code **)(param_3 + 0x50);
  local_58 = *(undefined8 *)(param_3 + 0x58);
  uStack_50 = *(undefined8 *)(param_3 + 0x30);
  uStack_44 = *(undefined4 *)(param_3 + 0x28);
  uVar3 = *(uint *)(param_1 + 1);
  uVar8 = uStack_50;
  if (uVar3 != 0) {
    uVar6 = 0;
    if (uVar3 != 0) {
      uVar6 = param_2 / uVar3;
    }
    plVar1 = (long *)(*param_1 + (ulong)(param_2 - uVar6 * uVar3) * 8);
    lVar9 = *plVar1;
    if (lVar9 != 0) {
      lVar11 = 0;
      do {
        lVar10 = lVar9;
        if (*(uint *)(lVar10 + 0x4c) == param_2) {
          if (lVar11 != 0) {
            plVar1 = (long *)(lVar11 + 0x68);
          }
          *plVar1 = *(long *)(lVar10 + 0x68);
          *(int *)(param_1 + 2) = (int)param_1[2] + -1;
          uVar8 = *(undefined8 *)(param_3 + 0x30);
          break;
        }
        lVar9 = *(long *)(lVar10 + 0x68);
        lVar11 = lVar10;
      } while (*(long *)(lVar10 + 0x68) != 0);
    }
  }
  local_88 = (undefined8 *)0x0;
  local_78 = 0;
  local_70 = 0xff;
  local_68 = 0xff;
  local_60 = 0;
  local_80 = *(undefined4 *)(param_3 + 0x4c);
  local_48 = param_2;
  puVar7 = (undefined8 *)FUN_00497c70(*(undefined8 *)PTR_DAT_02712d20,uVar8);
  if ((puVar7 != (undefined8 *)0x0) &&
     (iVar4 = *(int *)(puVar7 + 10), *(int *)(puVar7 + 10) = iVar4 + -1, local_88 = puVar7,
     iVar4 + -1 == 0)) {
    uVar5 = *(undefined4 *)PTR_DAT_02712a90;
    (**(code **)*puVar7)(puVar7);
    FUN_00404870(uVar5,puVar7);
  }
  FUN_004a57c0(param_3,&local_88);
  uVar5 = *(undefined4 *)PTR_DAT_02712a90;
  if (*(long *)(param_3 + 0x38) != 0) {
    FUN_00431200();
  }
  FUN_004a57b0(param_3);
  FUN_00404870(uVar5,param_3);
  if ((uVar12 & 1) == 0) {
    nn::os::UnlockMutex((MutexType *)(param_1 + 3));
  }
  else {
    nn::os::ClearEvent((EventType *)(param_1 + 7));
    nn::os::UnlockMutex((MutexType *)(param_1 + 3));
    (*pcVar2)(1,&local_58);
    nn::os::SignalEvent((EventType *)(param_1 + 7));
  }
  return;
}


