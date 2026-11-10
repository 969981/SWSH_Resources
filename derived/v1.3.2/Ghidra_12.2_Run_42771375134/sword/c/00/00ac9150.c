/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ac9150; name: FUN_00ac9150
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ac9150(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 long *param_5,byte *param_6,uint param_7,uint param_8,uint param_9)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong local_88;
  byte *pbStack_80;
  size_t local_78;
  long local_70;
  long local_68;
  
  local_68 = *param_5;
  if (local_68 == 0) {
    FUN_00ac8ec0(param_1,param_2,param_3,param_4,&local_68,param_7 & 1,param_8 & 1,param_9 & 1);
  }
  else {
    plVar8 = (long *)(local_68 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_00ac8ec0(param_1,param_2,param_3,param_4,&local_68,param_7 & 1,param_8 & 1,param_9 & 1);
    (**(code **)(*plVar8 + 0x18))(plVar8);
    local_68 = 0;
  }
  uVar7 = 0xcbf29ce484222645;
  local_78 = strlen((char *)param_6);
  lVar5 = _DAT_00000350;
  bVar1 = *param_6;
  if (bVar1 != 0) {
    uVar4 = (ulong)(uint)bVar1;
    pbVar3 = param_6;
    do {
      pbVar3 = pbVar3 + 1;
      uVar7 = (uVar7 ^ uVar4) * 0x100000001b3;
      uVar4 = (ulong)*pbVar3;
    } while (*pbVar3 != 0);
  }
  local_70 = 0;
  if (bVar1 == 0) {
    return;
  }
  lVar6 = *(long *)(*param_5 + 0x5d0);
  local_88 = uVar7;
  pbStack_80 = param_6;
  if (lVar6 == 0) {
    iVar2 = FUN_00722fb0(_DAT_00000350,&local_88);
  }
  else {
    plVar8 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    lVar5 = *(long *)(lVar6 + 0x350);
    (**(code **)(*plVar8 + 0x18))(plVar8);
    iVar2 = FUN_00722fb0(lVar5,&local_88);
  }
  if (iVar2 < 0) {
    *(undefined8 *)(*(long *)(param_3 + 0x478) + 8) = 0;
  }
  else {
    *(long *)(*(long *)(param_3 + 0x478) + 8) = *(long *)(lVar5 + 0x1b8) + (long)iVar2 * 0x130;
  }
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
  }
  return;
}


