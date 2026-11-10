/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01180470; name: FUN_01180470
 */


void FUN_01180470(long param_1)

{
  code *pcVar1;
  byte *pbVar2;
  ushort *puVar3;
  ushort uVar4;
  long lVar5;
  undefined1 *local_3b0;
  code *local_3a8;
  undefined1 *local_3a0;
  undefined1 *puStack_398;
  long local_390;
  long lStack_388;
  undefined1 *local_330;
  code *local_328;
  undefined1 *local_320;
  undefined1 *puStack_318;
  long local_310;
  long lStack_308;
  char local_2a8 [4];
  undefined8 local_2a4;
  undefined8 local_29c;
  undefined1 auStack_290 [608];
  
  FUN_01211940(auStack_290,*(undefined8 *)PTR_DAT_02710958);
  pbVar2 = (byte *)FUN_01225ea0(auStack_290);
  local_2a8[0] = '\0';
  uVar4 = (ushort)*pbVar2;
  if (*pbVar2 != 0) {
    local_2a4 = *(undefined8 *)(pbVar2 + 4);
    local_29c = *(undefined8 *)(pbVar2 + 0xc);
    local_2a8[0] = '\x01';
    puVar3 = (ushort *)FUN_0121b430((ulong)local_2a8 | 4);
    uVar4 = *puVar3;
  }
  lVar5 = *(long *)PTR_DAT_027104b0;
  *(undefined8 *)(lVar5 + 0x2b8) = 0;
  *(ushort *)(lVar5 + 0x220) = uVar4;
  lVar5 = *(long *)(param_1 + 0x58);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  local_390 = param_1;
  lStack_388 = lVar5;
  local_310 = param_1;
  lStack_308 = lVar5;
  if (*(char *)(param_1 + 0x185) == '\0') {
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    local_320 = (undefined1 *)0x0;
    puStack_318 = (undefined1 *)0x0;
    local_330 = (undefined1 *)0x0;
    local_328 = (code *)0x0;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    local_330 = &LAB_01180d50;
    local_328 = (code *)&LAB_01180d80;
    local_320 = &LAB_01180dc0;
    puStack_318 = &LAB_01180df0;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    local_3a0 = (undefined1 *)0x0;
    puStack_398 = (undefined1 *)0x0;
    local_3b0 = (undefined1 *)0x0;
    local_3a8 = (code *)0x0;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    local_3b0 = &LAB_01180e20;
    local_3a8 = FUN_01180e40;
    local_3a0 = &LAB_01180e80;
    puStack_398 = &LAB_01180eb0;
    FUN_0125b090(0,&local_330,&local_3b0,0,1);
    pcVar1 = local_3a8;
  }
  else {
    nn::nifm::Initialize();
    nn::nifm::SetLocalNetworkMode(true);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    local_320 = (undefined1 *)0x0;
    puStack_318 = (undefined1 *)0x0;
    local_330 = (undefined1 *)0x0;
    local_328 = (code *)0x0;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    local_330 = &LAB_01180bc0;
    local_328 = FUN_01180bf0;
    local_320 = &LAB_01180c30;
    puStack_318 = &LAB_01180c60;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    local_3a0 = (undefined1 *)0x0;
    puStack_398 = (undefined1 *)0x0;
    local_3b0 = (undefined1 *)0x0;
    local_3a8 = (code *)0x0;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    local_3b0 = &LAB_01180c90;
    local_3a8 = FUN_01180cb0;
    local_3a0 = &LAB_01180cf0;
    puStack_398 = &LAB_01180d20;
    FUN_0125b8d0(0,&local_330,&local_3b0);
    pcVar1 = local_3a8;
  }
  local_3a8 = pcVar1;
  if (pcVar1 != (code *)0x0) {
    local_3a0 = (undefined1 *)0x0;
    puStack_398 = (undefined1 *)0x0;
    local_3b0 = (undefined1 *)0x0;
    local_3a8 = (code *)0x0;
    (*pcVar1)(&local_390);
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
  }
  pcVar1 = local_328;
  if (local_328 != (code *)0x0) {
    local_320 = (undefined1 *)0x0;
    puStack_318 = (undefined1 *)0x0;
    local_330 = (undefined1 *)0x0;
    local_328 = (code *)0x0;
    (*pcVar1)(&local_310);
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  return;
}


