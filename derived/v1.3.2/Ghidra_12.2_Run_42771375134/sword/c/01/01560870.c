/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01560870; name: FUN_01560870
 */


void FUN_01560870(long param_1)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long local_88 [2];
  undefined1 *local_78;
  long local_70;
  long local_68;
  undefined4 local_54;
  
  uVar7 = *(undefined8 *)PTR_DAT_02710798;
  local_54 = 0;
  uVar5 = FUN_0153bf80(uVar7,&local_54);
  uVar8 = *(undefined8 *)(param_1 + 8);
  FUN_01560eb0(local_88,param_1 + 0x300,0,*(int *)(param_1 + 0x2fc) == 2);
  FUN_0155af50(uVar5,uVar8,local_88);
  if ((local_70 != 0) && (local_88[0] != 0)) {
    (**(code **)(*(long *)(local_88[0] + 0x48) + 0x18))();
  }
  local_88[0] = 0;
  local_88[1] = 0xcbf29ce484222645;
  local_78 = &DAT_01d38550;
  local_70 = 0;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  while( true ) {
    FUN_0153bf80(uVar7,&local_54);
    uVar6 = FUN_0155b080();
    if ((uVar6 & 1) != 0) break;
    nn::os::SleepThread(&LAB_00989680);
  }
  FUN_0153bf80(uVar7,&local_54);
  iVar4 = FUN_0155b0a0();
  if (iVar4 == 2) {
    bVar2 = FUN_01532a50();
    bVar3 = FUN_01532a40();
    iVar4 = 2;
    if (bVar2 < bVar3) {
      iVar4 = 3;
    }
  }
  iVar1 = *(int *)(param_1 + 0x378);
  if (*(int *)(param_1 + 0x378) <= iVar4) {
    iVar1 = iVar4;
  }
  *(int *)(param_1 + 0x378) = iVar1;
  local_54 = 1;
  uVar5 = FUN_0153bf80(uVar7,&local_54);
  uVar8 = *(undefined8 *)(param_1 + 8);
  FUN_01560eb0(local_88,param_1 + 0x300,1,0);
  FUN_0155af50(uVar5,uVar8,local_88);
  if ((local_70 != 0) && (local_88[0] != 0)) {
    (**(code **)(*(long *)(local_88[0] + 0x48) + 0x18))();
  }
  local_88[0] = 0;
  local_88[1] = 0xcbf29ce484222645;
  local_78 = &DAT_01d38550;
  local_70 = 0;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  while( true ) {
    FUN_0153bf80(uVar7,&local_54);
    uVar6 = FUN_0155b080();
    if ((uVar6 & 1) != 0) break;
    nn::os::SleepThread(&LAB_00989680);
  }
  FUN_0153bf80(uVar7,&local_54);
  iVar4 = FUN_0155b0a0();
  if (iVar4 == 4) {
    FUN_0153bf80(uVar7,&local_54);
    FUN_0155b3d0();
  }
  iVar1 = 2;
  if (iVar4 != 4) {
    iVar1 = iVar4;
  }
  iVar4 = *(int *)(param_1 + 0x378);
  if (*(int *)(param_1 + 0x378) <= iVar1) {
    iVar4 = iVar1;
  }
  *(int *)(param_1 + 0x378) = iVar4;
  nn::os::LockMutex((MutexType *)(param_1 + 0x358));
  *(undefined4 *)(param_1 + 0x350) = *(undefined4 *)(param_1 + 0x378);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x358));
  FUN_006d0650(param_1);
  return;
}


