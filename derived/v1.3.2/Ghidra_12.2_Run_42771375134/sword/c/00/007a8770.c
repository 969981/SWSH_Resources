/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007a8770; name: FUN_007a8770
 */


void FUN_007a8770(long param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined2 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined2 local_68;
  
  local_6c = 0;
  local_68 = 1;
  local_80 = *(undefined8 *)(param_1 + 0x60);
  local_74 = 0x6000000060;
  local_78 = 8;
  FUN_0194ab00(auStack_90);
  FUN_0194ad40(auStack_a0);
  FUN_018725b0(auStack_90,auStack_a0);
  FUN_019616b0(auStack_a0,&local_80);
  uVar4 = FUN_018725b0(auStack_90,auStack_a0);
  FUN_018725b0(auStack_90,uVar4);
  lVar6 = *(long *)PTR_DAT_02716710;
  iVar3 = 0;
  lVar1 = lVar6 + 0x10;
  if (*(char *)(lVar6 + 0x38) == '\0') {
    puVar5 = (undefined8 *)FUN_01952150(lVar1,0x68);
    FUN_01957150();
    iVar3 = FUN_019521e0(lVar1,puVar5,0x7c000000);
    if (iVar3 == *(int *)PTR_DAT_02716728) {
      (**(code **)*puVar5)(puVar5);
      FUN_01952120(lVar1,puVar5);
    }
  }
  uVar4 = FUN_01952580(lVar1,iVar3,0x7c);
  FUN_019573f0(auStack_a0,uVar4,0x60,0x60);
  FUN_018725b0(auStack_90,auStack_a0);
  *(int *)(param_1 + 0xd0) = iVar3;
  if (*(char *)(lVar6 + 0x38) == '\0') {
    puVar5 = (undefined8 *)FUN_01952150(lVar1,0x70);
    FUN_0194c8b0();
    iVar3 = FUN_019521e0(lVar1,puVar5,0x80000000);
    if (iVar3 == *(int *)PTR_DAT_02716728) {
      (**(code **)*puVar5)(puVar5);
      FUN_01952120(lVar1,puVar5);
    }
  }
  else {
    iVar3 = 0;
  }
  uVar4 = FUN_01952580(lVar1,iVar3,0x80);
  FUN_0194ca50(auStack_a0,uVar4,0x60,0x60);
  FUN_018725b0(auStack_90,auStack_a0);
  *(int *)(param_1 + 0xd8) = iVar3;
  if (*(char *)(lVar6 + 0x38) == '\0') {
    puVar5 = (undefined8 *)FUN_01952150(lVar1,0x68);
    FUN_01957150();
    iVar3 = FUN_019521e0(lVar1,puVar5,0x7c000001);
    if (iVar3 == *(int *)PTR_DAT_02716728) {
      (**(code **)*puVar5)(puVar5);
      FUN_01952120(lVar1,puVar5);
    }
  }
  else {
    iVar3 = 0;
  }
  uVar4 = FUN_01952580(lVar1,iVar3,0x7c);
  FUN_019573f0(auStack_a0,uVar4,0x60,0x60);
  FUN_018725b0(auStack_90,auStack_a0);
  *(int *)(param_1 + 0xd4) = iVar3;
  if (*(char *)(lVar6 + 0x38) == '\0') {
    puVar5 = (undefined8 *)FUN_01952150(lVar1,0x70);
    FUN_0194c8b0();
    iVar3 = FUN_019521e0(lVar1,puVar5,0x80000001);
    if (iVar3 == *(int *)PTR_DAT_02716728) {
      (**(code **)*puVar5)(puVar5);
      FUN_01952120(lVar1,puVar5);
    }
  }
  else {
    iVar3 = 0;
  }
  uVar4 = FUN_01952580(lVar1,iVar3,0x80);
  FUN_0194ca50(auStack_a0,uVar4,0x60,0x60);
  FUN_018725b0(auStack_90,auStack_a0);
  *(int *)(param_1 + 0xdc) = iVar3;
  cVar2 = *(char *)(lVar6 + 0x38);
  uVar7 = 0;
  do {
    if (cVar2 == '\0') {
      puVar5 = (undefined8 *)FUN_01952150(lVar1,200);
      FUN_01953ea0();
      iVar3 = FUN_019521e0(lVar1,puVar5,uVar7 & 0x7bffffff | 0x84000000);
      if (iVar3 == *(int *)PTR_DAT_02716728) {
        (**(code **)*puVar5)(puVar5);
        FUN_01952120(lVar1,puVar5);
      }
    }
    else {
      iVar3 = 0;
    }
    FUN_01952580(lVar1,iVar3,0x84);
    FUN_01954020(auStack_a0);
    uVar4 = FUN_018725b0(auStack_90,auStack_a0);
    FUN_018725b0(auStack_90,uVar4);
    *(int *)(param_1 + 0xe0 + uVar7 * 4) = iVar3;
    cVar2 = *(char *)(lVar6 + 0x38);
    uVar7 = uVar7 + 1;
  } while (uVar7 != 8);
  if (cVar2 == '\0') {
    puVar5 = (undefined8 *)FUN_01952150(lVar1,0x160);
    FUN_018658a0();
    iVar3 = FUN_019521e0(lVar1,puVar5,0x77000000);
    if (iVar3 == *(int *)PTR_DAT_02716728) {
      (**(code **)*puVar5)(puVar5);
      FUN_01952120(lVar1,puVar5);
    }
  }
  else {
    iVar3 = 0;
  }
  FUN_01952580(lVar1,iVar3,0x77);
  FUN_01865a80(auStack_a0);
  FUN_018725b0(auStack_90,auStack_a0);
  *(int *)(param_1 + 0x100) = iVar3;
  FUN_0194ac90(auStack_a0);
  FUN_018725b0(auStack_90,auStack_a0);
  return;
}


