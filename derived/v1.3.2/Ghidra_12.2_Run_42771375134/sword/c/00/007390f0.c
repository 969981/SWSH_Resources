/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007390f0; name: FUN_007390f0
 */


void FUN_007390f0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 local_68;
  char *local_60;
  undefined8 local_58;
  undefined1 auStack_50 [24];
  long local_38;
  
  uVar8 = *(undefined8 *)(param_1 + 0xe0);
  local_68 = 0xf03ffb7387bef17d;
  local_60 = "VectorConstantVS";
  local_58 = 0x10;
  FUN_006cf0a0(auStack_50,&local_68);
  lVar4 = FUN_00734c00(uVar8,0,auStack_50);
  if (lVar4 == 0) {
    puVar5 = (undefined8 *)0x0;
    lVar4 = 0;
  }
  else {
    iVar3 = *(int *)PTR_DAT_02715500;
    *(int *)(lVar4 + 0x138) = iVar3;
    FUN_006f6a10(*(undefined8 *)PTR_DAT_02710460,lVar4);
    lVar4 = lVar4 + (long)iVar3 * 0x70 + 0x58;
    puVar5 = (undefined8 *)thunk_FUN_0199c7e0(lVar4);
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (puVar5 != (undefined8 *)0x0) {
    lVar6 = *(long *)(param_1 + 0x68);
    uVar8 = *(undefined8 *)(lVar6 + 0xe0);
    uVar1 = *(undefined8 *)(lVar6 + 0xe8);
    uVar2 = *(undefined8 *)(lVar6 + 0xf8);
    puVar5[2] = *(undefined8 *)(lVar6 + 0xf0);
    puVar5[3] = uVar2;
    *puVar5 = uVar8;
    puVar5[1] = uVar1;
    uVar8 = *(undefined8 *)(lVar6 + 0x100);
    uVar1 = *(undefined8 *)(lVar6 + 0x108);
    uVar2 = *(undefined8 *)(lVar6 + 0x118);
    puVar5[6] = *(undefined8 *)(lVar6 + 0x110);
    puVar5[7] = uVar2;
    puVar5[4] = uVar8;
    puVar5[5] = uVar1;
  }
  if (lVar4 != 0) {
    thunk_FUN_0199c800(lVar4);
  }
  FUN_006f2e20(*(undefined8 *)(param_1 + 0x60));
  lVar4 = *(long *)(param_1 + 0x60);
  iVar3 = *(int *)PTR_DAT_02715500;
  if (*(int *)(lVar4 + 0x100) == 0) {
    lVar6 = *(long *)(lVar4 + 0x58) + (long)iVar3 * 0x170;
    FUN_0199cb60(lVar6);
    FUN_007398c0(param_1);
    if (*(int *)(lVar6 + 0x168) != 0) {
      FUN_0199de60(lVar6);
      *(undefined4 *)(lVar6 + 0x168) = 0;
    }
    FUN_0199cbc0(lVar6);
  }
  else {
    pcVar7 = *(code **)(lVar4 + 0x88);
    *(int *)(lVar4 + 0x104) = iVar3;
    if (pcVar7 != (code *)0x0) {
      *(undefined8 *)(lVar4 + 0x90) = 0;
      *(undefined8 *)(lVar4 + 0x98) = 0;
      *(undefined8 *)(lVar4 + 0x80) = 0;
      *(undefined8 *)(lVar4 + 0x88) = 0;
      (*pcVar7)(lVar4 + 0xa0);
      iVar3 = *(int *)(lVar4 + 0x104);
    }
    *(long *)(lVar4 + 0xa0) = param_1;
    *(code **)(lVar4 + 0x80) = FUN_00739a30;
    *(undefined1 **)(lVar4 + 0x88) = &LAB_00739a40;
    lVar6 = *(long *)(lVar4 + 0x58) + (long)iVar3 * 0x170;
    *(undefined1 **)(lVar4 + 0x90) = &LAB_00739a50;
    *(undefined1 **)(lVar4 + 0x98) = &LAB_00739a60;
    FUN_0199cb60(lVar6);
    (**(code **)(lVar4 + 0x80))((long *)(lVar4 + 0xa0));
    if (*(int *)(lVar6 + 0x168) != 0) {
      FUN_0199de60(lVar6);
      *(undefined4 *)(lVar6 + 0x168) = 0;
    }
    FUN_0199cbc0(lVar6);
    FUN_006f6c30(*(undefined8 *)PTR_DAT_02710460,lVar4);
  }
  *(undefined1 *)(lVar4 + 0x109) = 1;
  return;
}


